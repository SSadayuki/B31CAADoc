#ifndef CATIPDMCriterionScm_H
#define CATIPDMCriterionScm_H
// Reconciliator
// Version 1 Release 0
// COPYRIGHT DASSAULT SYSTEMES 2004-2010
/**
  * @CAA2Level L1
  * @CAA2Usage U5
  */
// *****************************************************************
//
//    Identification :
//    ---------------
//
//        RESPONSIBLE : Jean-Luc MEDIONI
//        FUNCTION    : Reconciliator
//        USE         : CATIA & ENOVIA
//
// *****************************************************************
//
//    Description :
//    ------------
//
//   Interface used by the Reconciliator UI in order to query in a Destination
// PDM for candidate object for reconciliation
//
// *****************************************************************
//
//    Remarks :
//    ---------
//
//
// ****************************************************************
//
//    Story :
//    -------
//
//    Revision 1.0  Oct 2003  Author:  Jean-Luc MEDIONI
//                            Purpose: Creation for Reconciliator
//
//    Revision 1.0  Nov 2005  Author:  Jean-Luc MEDIONI
//                            Purpose: Extend Reconciliator Criterion architecture
//
// ****************************************************************
//
// INSIDE class:
// -------------
//
//
//
// ****************************************************************
// Abstract class     : No
// Template code      : No
// Ilined    Function : No
// ****************************************************************

#include "CATPDMReconcileItfCPP.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATPDMReconcileItfCPP IID IID_CATIPDMCriterionScm ;
#else
extern "C" const IID IID_CATIPDMCriterionScm ;
#endif

#include "CATCollec.h"

class CATUnicodeString ;
class CATScmObject     ;
class CATScmPDMObject  ;

class CATLISTP(CATScmPDMObject) ;

#define CATScmCriterionModeList 1
#define CATScmCriterionModeXML  2

//------------------------------------------------------------------

/**
  * Interface used by the Reconciliator in order to query in a PDM Destination
  * for candidate objects for reconciliation.
  * 
  * <b>Role</b>:
  * This interface is implemented by each criterion. A criterion depends of PDM environment. 
  * A criterion is a late type which name is normalized: <b>CATPDMCrit_Env_CritName</b>
  * <br>With:
  * <ol>
  * <li><b>Env</b> the PDM environment</li>
  * <li>and <b>CritName</b> the criterion's name.</li>
  * </ol>
  * <p>We deliver default implementations, but user can create their owns implementations.
  * <ul>
  * <li>For ENOVIA VPM V4, we deliver <b><i>Simple query</b></i></li>
  * <li>For ENOVIA VPM V5, we deliver <b><i>Easy query</b></i></li>
  * </ul>
  */
class ExportedByCATPDMReconcileItfCPP CATIPDMCriterionScm: public CATBaseUnknown
{
   CATDeclareInterface ;

   public:

   /**
     * Answers if the criterion is applicable to an object.
     *
     * <br><b>Role</b>: Answers if the criterion is applicable to an object.
     *
     * @param iCATRecObj
     *   Object on which criterion need to be applied.
     *
     * @return
     *   Error code of function.
     *   <br><b>Legal values</b>: Returns <b><i>S_OK</i></b> if operation runs well. 
     */
      virtual HRESULT IsApplicable( CATScmObject * iCATRecObj ) const = 0 ;
  
   /**
     *   Provides criterion name.
     *
     * <br><b>Role</b>: Provide a NLS Display name of the criterion.
     *
     *   @param oName
     *      To output the Display name.
     *
     *   @return
     *      Error code of function.
     *      <br><b>Legal values</b>: Returns <b><i>S_OK</i></b> if operation runs well. 
     */   
      virtual HRESULT GetName( CATUnicodeString & oName ) const = 0 ;

   /**
     *   Gets order index.
     *
     * <br><b>Role</b>: Provides a index to enable to order list of Criterion.
     *
     *   @param onOrder
     *      To output the value enabling to order criterion list on CATScmObject.
     *
     *   @return
     *      Error code of function.
     *      <br><b>Legal values</b>: Returns <b><i>S_OK</i></b> if operation runs well. 
     */   
      virtual HRESULT GetOrderIndex( int & onOrder ) const = 0 ;

   /**
     * Define how criterion operates.
     *
     * <br><b>Role</b>: Define how criterion operates (Old mode with list of strings or new mode with XML).
     *
     *   @param onMode
     *      Define which services has to be used with this criterion.
     *      <br><b>Legal values</b>: 
     *      <dl>
     *      <dt>CATScmCriterionModeList</dt> <dd>Old mode based on 2 list of strings</dd>
     *      <dt>CATScmCriterionModeXML</dt>  <dd>New mode with XML</dd>
     *      </dl>
     *
     *   @return
     *      Error code of function.
     *      <br><b>Legal values</b>: Returns <b><i>S_OK</i></b> if operation runs well. 
     */
      virtual HRESULT GetCriterionMode( int & onMode ) const = 0 ;

   /**
     * Gets the list of parameters and default values of the PDM objects' query.
     *
     * <br><b>Role</b>: Gets the list of parameters and default values of the PDM objects' query.
     *
     * <br><b>NB:</b> (This service will be replace in V5R17 by a new one @see #GetCriterionParameters .)
     *
     *   @param iRecObj
     *      Object where we find the criterion’s value.
     *
     *   @param oQueryLabelList
     *      List of labels for the query.
     *
     *   @param oQueryValueList
     *      List of default values for the query.
     *
     *   @return
     *      Error code of function.
     *      <br><b>Legal values</b>: Returns <b><i>S_OK</i></b> if operation runs well. 
     */
      virtual HRESULT GetCriterionParameters( CATScmObject               * iCATRecObj
                                            , CATListValCATUnicodeString & oQueryLabelList
                                            , CATListValCATUnicodeString & oQueryValueList ) = 0 ;

   /**
     *  Executes current query on PDM.
     *
     * <br><b>Role</b>: Creates in CV5 the list of handles of the objects stored in PDM which verify 
     *   the criterion according to the criterion’s value of the object.
     *
     * <br><b>NB:</b> (This service will be replace in V5R17 by a new one @see #ExecuteCriterion .)
     *
     *   @param iCATRecObj
     *      Object where we find the criterion’s value.
     *
     *   @param iQueryValueList
     *      List of values for the query.
     *
     *   @param oPDMRecObjList
     *      List of wrists on object stored in PDM which verify the criterion.
     *
     *   @param oPDMColumnNameList
     *      List of column names describing the PDM object's attributes. (see @href CATScmPDMObject)
     *
     *   @return
     *      Error code of function.
     *      <br><b>Legal values</b>: Returns <b><i>S_OK</i></b> if operation runs well. 
     */
      virtual HRESULT ExecuteCriterion( CATScmObject               * iCATRecObj
                                      , CATListValCATUnicodeString & iQueryValueList
                                      , CATLISTP(CATScmPDMObject)  & oPDMRecObjList
                                      , CATListValCATUnicodeString & oPDMColumnNameList ) = 0 ;

   /**
     * Gets query parameters with default values.
     *
     * <br><b>Role</b>: Gets query parameters with default values as an XML stream compliant with Reconciliator Query panel.
     *
     *   @param ixScmObj
     *      Object where we find the criterion’s value.
     *
     *   @param ocXmlQueryStream
     *      XML stream defining query parameters and default values.
     *
     *   @return
     *      Error code of function.
     *      <br><b>Legal values</b>: 
     *      <dl>
     *      <dt>S_OK</dt>    <dd> if operation runs well and criterion has some parameters to value. </dd>
     *      <dt>S_FALSE</dt> <dd>if operation runs well and criterion has no parameter to value.</dd>
     *      <dt>E_FAIL</dt>  <dd>otherwise.</dd>
     *      </dl>
     */
      virtual HRESULT GetCriterionParametersXML( CATScmObject     * ixScmObj
                                               , CATUnicodeString & ocXmlQueryStream ) = 0 ;

   /**
     * Checks query parameters values.
     *
     * <br><b>Role</b>: Checks query parameters values as an XML stream compliant with Reconciliator Query panel.
     *
     *   @param ixScmObj
     *      Object where we find the criterion’s value.
     *
     *   @param iocXmlQueryStream
     *      XML stream defining query parameters with values.
     *
     *   @return
     *      Error code of function.
     *      <br><b>Legal values</b>: Returns <b><i>S_OK</i></b> if operation runs well. 
     */
      virtual HRESULT CheckCriterionParametersXML( CATScmObject     * ixScmObj
                                                 , CATUnicodeString & iocXmlQueryStream ) = 0 ;

   /**
     * Executes current query on VPDM with query parameters inside an XML stream .
     *
     * <br><b>Role</b>: Executes current query on VPDM with query parameters inside an XML stream compliant 
     *  with Reconciliator Query panel.
     *  The result will be a list of handles of the objects stored in PDM which verify query defined through the input XML stream.
     *
     * @param ixScmObj
     *   Object where we find the criterion’s value.
     *
     * @param icXmlQueryStream
     *   XML stream defining query parameters with values.
     *
     * @param oPDMRecObjList
     *   List of objects stored in PDM which verify the criterion.
     *
     * @param oPDMColumnNameList
     *   List of column names describing the PDM object's attributes. (see @href CATScmPDMObject)
     *
     * @return
     *   Error code of function.
     *   <br><b>Legal values</b>: Returns <b><i>S_OK</i></b> if operation runs well. 
     *
     *   @return
     *      Error code of function.
     *      <br><b>Legal values</b>: Returns <b><i>S_OK</i></b> if operation runs well. 
     */
      virtual HRESULT ExecuteCriterionXML( CATScmObject               * ixScmObj
                                         , CATUnicodeString           & icXmlQueryStream
                                         , CATLISTP(CATScmPDMObject)  & oPDMRecObjList
                                         , CATListValCATUnicodeString & oPDMColumnNameList ) = 0 ;

  // --------------------------------------------------------------
  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
} ;

//------------------------------------------------------------------

#endif
