#ifndef CATIStmHole_H
#define CATIStmHole_H

// COPYRIGHT DASSAULT SYSTEMES 2004

/**
* @CAA2Level L0
* @CAA2Usage U0
*/

#include "CATLISTV_CATISpecObject.h"

#include "ExportedByCATSmInterfaces.h" // Needed to export
#include "CATBaseUnknown.h" // Needed to inheritance
#include "CATICkeParm.h"
#include "CATMathDirection.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSmInterfaces IID IID_CATIStmHole;
#else
extern "C" const IID IID_CATIStmHole ;
#endif

//------------------------------------------------------------------

/**
* Interface dedicated to Sheet Metal Application.
* <b>Role</b>: Objects that implement this interface is a Hole.
*/

class ExportedByCATSmInterfaces CATIStmHole: public CATBaseUnknown
{
	CATDeclareInterface;
	
public:
	
	//___________________ Point ____________________________________________________
	/**
	*  Gets the input point used to create the Hole.
	*  @param  oPoint
	*      A smart pointer reference to the input Point.
	*/
	virtual HRESULT __stdcall GetPoint(CATISpecObject_var & oPoint) = 0;
	
	/**
	* Sets of point to create Hole. 
	* @param iPoint
	*   A smart pointer on the input Point.
	*/  
	virtual HRESULT __stdcall SetPoint(CATISpecObject_var & iPoint) = 0;
	
	
	//___________________ Support ____________________________________________________	
    /**
	* Sets of support to create Hole.
	* @param ipSupport
	*   A smart pointer on the input Support.
	*/  
	virtual HRESULT __stdcall SetSupport(const CATISpecObject * ipSupport) = 0;
	
	/**
	*  Gets the input support used to create the Hole.
	*  @param  oSupport
	*      A smart pointer reference to the input support.
	*/
    virtual HRESULT __stdcall GetSupport(CATISpecObject_var & oSupport) = 0;
	
	
	//___________________ Diameter ____________________________________________________	
	/**
	* Sets of diameter to create Hole.
	*
	* @param iHoleDiameterParm
	*   A smart pointer on the input diameter.
	*/  
	virtual HRESULT __stdcall SetDiameterParm(const CATICkeParm_var & iHoleDiameterParm) = 0;
	

	/**
	*  Gets the input hole diameter used to create the Hole.
	*  @param  oHoleDiameterParm
	*      A smart pointer reference to the input diameter.
	*/
	virtual HRESULT __stdcall GetDiameterParm(CATICkeParm_var & oHoleDiameterParm) = 0;
	
	
	//___________________ Hole Type  ____________________________________________________	
	/**
	* Sets of hole type to create Hole.
	*
	* @param iHoleType 
	*   <br><b>Legal values</b>:
	*   <dl>
	*     <dt>0</dt>
	*     <dd>Clearance</dd>
	*     <dt>1 </dt>
	*     <dd>Index</dd>
	*     <dt>2 </dt>
	*     <dd>Manufacturing</dd>
	*     <dt>3 </dt>
	*     <dd>Fastener</dd>
	*   </dl>
	*/  
	virtual HRESULT __stdcall SetType(const int & iHoleType)=0;
	
	/**
	*  Gets the input hole type used to create the Hole.
	* @param oHoleType 
	*   <br><b>Legal values</b>:
	*   <dl>
	*     <dt>0</dt>
	*     <dd>Clearance</dd>
	*     <dt>1 </dt>
	*     <dd>Index</dd>
	*     <dt>2 </dt>
	*     <dd>Manufacturing</dd>
	*     <dt>3 </dt>
	*     <dd>Fastener</dd>
	*   </dl>
	*/
	virtual HRESULT __stdcall GetType(int & oHoleType)=0;
	
	
	//___________________ Hole View Creation  ______________________________________________	
	/**
	*  Gets the view creation of the Hole.
	*  @param oViewCreation
	*    A CATUnicodeString
	*   <br><b>Legal values</b>:
	*   <dl>
	*     <dt>MfDefault3DView</dt>
	*     <dd>Fold view.</dd>
	*     <dt>MfUnfoldedView </dt>
	*     <dd>Unfold view.</dd>
	*   </dl>
	*/
	virtual HRESULT __stdcall GetViewCreation(CATUnicodeString & oViewCreation)=0;
	
	//___________________ Hole center and Hole axis in Creation View  ______________________________________________	
	/**
	* Gets hole center and hole direction for drilling in creation view.
	*  @param  oOrigin
	*      A CATMathPoint reference to hole center.
	*  @param  oDirection
	*      A CATMathDirection reference to the direction of drilling.
	*/
	virtual HRESULT __stdcall GetPositionInCreationView(CATMathPoint & oOrigin, CATMathDirection & oDirection)=0;
	
	//___________________ Hole center and Hole axis in Dual View  ______________________________________________	
	/**
	* Gets hole center and hole direction for drilling in dual view.
	*
	*  @param  oOrigin
	*      A CATMathPoint reference to hole center.
	*  @param  oDirection
	*      A CATMathDirection reference to the direction of drilling.
	*/
	virtual HRESULT __stdcall GetPositionInDualView(CATMathPoint & oOrigin, CATMathDirection & oDirection)=0;
	
	
};

CATDeclareHandler( CATIStmHole, CATBaseUnknown );

//------------------------------------------------------------------

#endif
