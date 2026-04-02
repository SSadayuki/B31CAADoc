#ifndef CATIMfgToolAxis_H
#define CATIMfgToolAxis_H

//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES  2004
//=============================================================================

/**
 * @CAA2Level L1
 * @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATMathDirection.h"
#include "CATUnicodeString.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgToolAxis;
#else
extern "C" const IID IID_CATIMfgToolAxis;
#endif

/**   
 * Interface dedicated to manufacturing operation tool axis management.
 * <b>Role</b> This interface allows read write access to tool axis information  <br>
 */

class ExportedByMfgItfEnv CATIMfgToolAxis : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:

   /**
	* Retrieves the direction of the tool axis.
    * @param oDirection 
	*       the mathematic direction of the tool axis
	*/
    virtual HRESULT GetDirection (CATMathDirection &oDirection)=0;

   /**
	* Retrieves the manufacturing direction of the tool axis.
    * @param oDirection 
	*       the manufacturing direction of the tool axis
	*/
    virtual HRESULT GetDirection (CATBaseUnknown_var &oDirection)=0;
    
	/**
	* Retrieves the tool axis definition mode.
    * @param oString
	*       the mode : NormalBottom (Feature Defined), Selection, NormalView, 2Rotations, Manual, Axis (Main Axis), PTView (Point In The View)
	*/
	virtual HRESULT GetMode (CATUnicodeString& oString)=0;

   /**
	* Retrieves is a tool axis has been modified or not.
    * @param oFlag
	*       the modification flag = 1 if modified, 0 otherwise
	*/
    virtual HRESULT GetFlagModif(int& oFlag)=0;

   /**
	* Retrieves the reference element of the tool axis.
    * @param oElement
	*       the geometric element referenced by the tool axis
	*/
    virtual HRESULT GetSelectedGeometry (CATBaseUnknown_var& oElement)=0;

   /**
	* Sets the direction of the tool axis.
    * @param iDirection
	*       the direction of the tool axis
	*/
    virtual HRESULT SetDirection (const CATMathDirection &iDirection)=0;

	/**
	* Sets the tool axis definition mode.
    * @param iString
	*       the mode : NormalBottom (Feature Defined), Selection, NormalView, 2Rotations, Manual, Axis (Main Axis), PTView (Point In The View)
	*/
    virtual HRESULT SetMode (const CATUnicodeString& iString)=0;

   /**
	* Sets is a tool axis has been modified or not.
    * @param iFlag
	*       the modification flag = 1 if modified, 0 otherwise
	*/
    virtual HRESULT SetFlagModif(const int& iFlag)=0;
    
	
   /**
	* Sets the reference element of the tool axis.
    * @param iElement
	*       the geometric element referenced by the tool axis
    * @param iProduct
	*       the product referenced by the tool axis
	*/
	virtual HRESULT SetSelectedGeometry (const CATBaseUnknown_var& iElement,const CATBaseUnknown_var& iProduct=NULL_var)=0;
    
   /**
	* Update tool axis definition transformation matrix.
	*/
	virtual HRESULT UpdateTransformation()=0;

};

CATDeclareHandler(CATIMfgToolAxis, CATBaseUnknown) ;

#endif







