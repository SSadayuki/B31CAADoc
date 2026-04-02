#ifndef CATIStmFactory_H
#define CATIStmFactory_H

// COPYRIGHT DASSAULT SYSTEMES 2004

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

#include "ExportedByCATSmInterfaces.h"
#include "CATStmNamespace.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSmInterfaces IID IID_CATIStmFactory;
#else
extern "C" const IID IID_CATIStmFactory ;
#endif

class CATISpecObject;
class CATUnicodeString;
class CATISpecObject_var;
class CATIGSMDirection_var;  
class CATICkeParm_var; 
class CATIGSMTranslate_var;
class CATIGSMRotate_var;
class CATIGSMSymmetry_var;
class CATIGSMAxisToAxis_var;

//------------------------------------------------------------------

/**
 * Factory of Generative Sheetmetal Design workshop and Aerospace Sheetmetal Design workshop.
 * <b>Role</b>: This interface concern SMD-ASL feature creation. 
 * If License are not granted creation fails.
 */
class ExportedByCATSmInterfaces CATIStmFactory: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

	 /**
     *  Creates an instance of Hole feature.
     *  @param  ihSpecObjOnPart
     *      A smart pointer reference to the part.
	 *  @param  opiSpecObjOnHole
     *      A smart pointer reference to the CATIStmHole
	 *  @param icreationView
	 *    A CATUnicodeString
	 *   <br><b>Legal values</b>:
	 *   <dl>
	 *     <dt>MfDefault3DView</dt>
	 *     <dd>Fold view.</dd>
	 *     <dt>MfUnfoldedView </dt>
	 *     <dd>Unfold view.</dd>
	 *   </dl>
     */

	 virtual HRESULT __stdcall CreateHole(const CATISpecObject_var & ihSpecObjOnPart,
		  CATISpecObject ** opiSpecObjOnHole, const CATUnicodeString icreationView) = 0;

    /**
     *  Create an instance of <tt>Object Mapping</tt> feature.
     *  @param  iView
     *      Legal values : <tt>CATStm::Fold</tt> or <tt>CATStm::Unfold</tt>.
	 *  @param  iIID
	 *      Unique interface identifier.
	 *  @param  opiMapping
     *      The address where the returned pointer to the interface is located.
     *  @return <tt>S_OK</tt> if the instance was successfully created, 
     *      <tt>E_FAIL</tt> otherwise.
     */
     virtual HRESULT __stdcall CreateMapping( const CATStm::DesignView & iView,
         const IID & iIID, void ** opiMapping ) = 0;

	 /**
     *  Create an instance of <tt>Translate</tt> feature.
	 *      @param  iSpecToTranslate
     *            A smart pointer reference to the part.
	 *      @param  Direction  
	 *            Translation  direction.  
	 *      @param  Distance  
	 *            Translation  length.  
	 *      @return  CATISpecObject_var    
	 *              created  translation. 
     */
     virtual CATISpecObject_var CreateTranslate( const  CATISpecObject_var    iSpecToTranslate,
												const  CATIGSMDirection_var    Direction,  
                                                const  CATICkeParm_var            Distance) = 0;

	 /**
	 *  Creates an instance of <tt>Rotate</tt> feature.
	 *      @param  iSpecToRotate
     *		      A smart pointer reference to the part. 
	 *      @param  iAxis  
	 *            Line  Axis.  
	 *      @param  iAngle  
	 *            Rotation  angle.  
	 *      @return  CATISpecObject_var    
	 *              created  rotation.    
	 */  
	 virtual CATISpecObject_var CreateRotate(const  CATISpecObject_var    iSpecToRotate,    
											const  CATISpecObject_var  iAxis,  
											const  CATICkeParm_var        iAngle)  =  0;  

     /**  
	 *  Creates  a  symmetry.  
	 *      @param  iSpecToSymmetry
     *		      A smart pointer reference to the part 
     *      @param  invariant  
     *            point,  line  or  iplane.  
     *      @return  CATISpecObject_var    
     *              created  symmetry.  
     */  
     virtual CATISpecObject_var  CreateSymmetry(const  CATISpecObject_var    iSpecToSymmetry,  
											   	     const  CATISpecObject_var  invariant)  =  0;  

     /**  
     *  Creates  a  transformation  from  a  reference  axis  system  to  a  target  axis.  
     *      @param  iSpecToTransform  
     *            A smart pointer reference to the part
     *      @param  iReferenceAxis  
     *            Reference  axis  system  
     *      @param  iTargetAxis  
     *            Target  axis  system  
     *      @return  CATISpecObject_var    
     *              created  transformation. 
     */  
     virtual  CATISpecObject_var  CreateAxisToAxis(const  CATISpecObject_var  iSpecToTransform,  
                                                      const  CATISpecObject_var  iReferenceAxis,  
                                                      const  CATISpecObject_var  iTargetAxis)  =  0;  
	 


};

CATDeclareHandler( CATIStmFactory, CATBaseUnknown );

#endif // #ifndef CATIStmFactory_H
