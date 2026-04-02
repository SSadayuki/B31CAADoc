#ifndef CATIGSMProceduralView_H
#define CATIGSMProceduralView_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

//
//
// CATIGSMProceduralView.h
// Define the CATIGSMProceduralView interface
//

#include "CATGitInterfacesExportedBy.h"

#include "CATBaseUnknown.h"
#include "CATIDescendants.h"
#include "CATBoolean.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID IID_CATIGSMProceduralView ;
#else
extern "C" const IID IID_CATIGSMProceduralView ;
#endif


/**
 * Insertion of current feature in document.
 * <b>Role</b>: Allows you  to append Shape Design features in a Geometrical Set.
 * <br>Note : Once appended ,  the feature should be updated 
 *
 * <p><b><u>What does InsertInProceduralView method ? </u></b> 
 * <br>This method aggregates the feature on a GSMTool in a following way 
 * <pre> 
 *    Checks that the feature in not already aggregated , if yes does nothing 
 *    Checks if Input father  argument is a GSMTool in which features can be aggregated (not external, not private,..)    
 *    If InputFather is not specify or if not acceptable GSMTool 
 *        Retrieve Current GSMTool in Part 
 *        If no current  GSMTool,   create a GSMTool type of "standard" Geometrical Set and set it as Current     
 *    Insert the feature in the current GSMTool (Geometrical Sets or Ordered Geometrical Set) 
 * </pre> 
 * <br> Note: Only "standard" geometrical Set is created on the fly when it is needed 
 * 
 * <p><b><u>Different Types of Geometrical Sets </u> </b> 
 * <br>Geometrical Sets can be  :
 * <ul>
 * <li>either standard "Geometrical Set"  (GS)</li>
 * <li>or "Ordered Geometrical Sets " (OGS) </li>
 * </ul>
 * <p>
 * The Geometrical Set (GS) and the Ordered Geometrical Set (OGS) are both GSMTool features. 
 * This means that both of them are surfacic bodies, and contain surfacic or volumic geometrical features . 
 * <ul>
 * <li> A Geometrical Set (GS)  aggregates features created independantly. Each result of the created feature is visible. 
 * </li>
 * <li> An Ordered Geometrical Set (OGS) gives an other way to manage the links between features. 
 * An OGS keeps a linear view of the design in showing/using the order of creation .
 * It uses the notion of current feature like in Part Body, it allows to visualize a state corresponding to the current feature. 
 * The edition at a step of the design becomes easier, some tools ,like for example scan , can  be used 
 * to review step by step the design (similar as it is done in Part Design ) </li>
 * </ul> 
 *  
 * Once created up to three steps can be considered for insert features into a tool (GS or OGS) 
 * <ol> 
 * <li> Aggregation of the feature in the Surfacic tool (InsertInProceduralView method)
 *  <br> - If GS , the feature is aggregated at the end of the tool 
 *  <br> - If OGS , the feature is aggregated either at the end of the tool if the current feature is not in an OGS (for example in a PartBody) 
 *  or  after the current feature in the OGS. 
 *  <br> Warning: When the feature is aggregated in an OGS, it becomes the current feature 
 * </li>
 *
 * <li> Update 
 * <br> once aggregated, the feature has to be update (Update method of CATISpecObject) 
 * </li> 
 *
 *<li> Manage linearity in the OGS 
 * <br> For features inserted in an OGS, the method insert of CATMmrLinearBodyServices need to be invoked 
 * <br> This method checks the linearity of the Parent/Children relationship and if needed
 * performed re-arrangement(Replace) to makes sure that created feature depends logically of just previouly created feature 
 * </li>
 * </ol> 
 * 
 *  <pre>
 * #include "CAAIMyFeature.h"    
 * #include "CATISpecObject.h"    
 * #include "CATIGSMTool.h"      
 * #include "CATIGSProceduralView.h"  
 * #include "CATMmrLinearBodyServices.h"
 * ......
 * HRESULT rc = S_OK ;  
 * CAAIMyFeature * piMyFeature =.... 
 * .... 
 * CATISpecObject * pSpecObject = NULL ;
 * rc = piMyFeature->QueryInterface(IID_CATISpecObject,
 *                                                  (void**) &pSpecObject);
 * if ( SUCCEEDED(rc)) { 
 *
 *   // 1/ Aggregate 
 *   CATIGSMProceduralView_var curobj = pSpecObject;
 *   if (NULL_var != curobj ) {
 *       rc = curobj->InsertInProceduralView();
 *   }
 *
 *   // 2/ Update 
 *   CATTry  {	
 *       ispSpec -> Update();
 *    }
 *   CATCatch(CATError,error)    {
 *       rc = CATReturnError(error);
 *    }
 *   CATEndTry;
 *   
 *   // Test update / GetLastError  
 *   ... 
 *   // 3 / OGS 
 *   CATBoolean IsInsideOGS = FALSE ;
 *   CATISpecObject * pFatherCC = NULL ;
 *   pFatherCC = pSpecObject->GetFather();
 *   if ( NULL != pFatherCC )    {
 *      CATIGSMTool *piGSMToolFatherCC = NULL;
 *      rc = pFatherCC->QueryInterface ( IID_CATIGSMTool, (void**) &piGSMToolFather);
 *      if ( SUCCEEDED(rc) )    {
 *          int IsAnOGS = -1 ;
 *          piGSMToolFatherCC->GetType(IsAnOGS) ;
 *          if ( 1 == IsAnOGS ) {
 *            oIsInsideOGS = TRUE ;
 *            }
 *            piGSMToolFather->Release(); piGSMToolFather = NULL ;
 *        }  
 *        pFatherCC->Release();               pFatherCC = NULL ;
 *      }
 *      else 
 *        rc = E_FAIL ;
 *
 *      pSpecObject->Release(); pSpecObject = NULL ;
 *    }
 * 
 *    if (  IsInsideOGS ) { 
 *      CATBaseUnknown_var spBUOn = pSpecObject;
 *      rc = CATMmrLinearBodyServices::Insert(spBUOnCC);
 *     }
 * 
 *    pSpecObject->Release(); pSpecObject = NULL ;
 *  } 
 * .... 
 *  </pre>
 * 
 *  @see CATIGSMTool , CATIMechanicalRootFactory, CATMmrLinearBodyServices , CATISpecObject  
 */
class ExportedByCATGitInterfaces CATIGSMProceduralView : public CATBaseUnknown
{

   CATDeclareInterface;

  public:

    /**
     * Insertion of current feature in document.
     * <br> If father==NULL_var then the Current feature is used as reference for inserting.
     * You can find the current feature with the interface CATIPrtManagement.
     * <br> The interface set this object as current object for the Part feature
     * if bSetAsCurrent is TRUE (default value).
     * <br>If object is already inserted, nothing is done. 
     *   @param father
     *      The destination of current feature
     *   @param bSetAsCurrent
     *      Boolean value (TRUE or FALSE)
     *   @param BeforeFeature
     *      Before Feature  / Use only for inserting in PartBody 
     */
      virtual HRESULT InsertInProceduralView(const CATIDescendants_var& father=NULL_var,const CATBoolean bSetAsCurrent=TRUE,
		  const CATISpecObject_var& BeforeFeature=NULL_var) = 0;

};

//------------------------------------------------------------------

CATDeclareHandler( CATIGSMProceduralView, CATBaseUnknown );

#endif
