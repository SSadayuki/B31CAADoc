#ifndef CATIStmUserStamp_H
#define CATIStmUserStamp_H

// COPYRIGHT Dassault Systemes 2005

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

#include "ExportedByCATSmInterfaces.h"
#include "CATBaseUnknown.h"
#include "CATListPtrCATISpecObject.h"

class CATISpecObject;
class CATMathPoint;
class CATIMechanicalTool;
class CATICkeParm;
class CATMathPoint;
class CATMathDirection;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSmInterfaces IID IID_CATIStmUserStamp;
#else
extern "C" const IID IID_CATIStmUserStamp ;
#endif

//------------------------------------------------------------------

/**
* Interface representing xxx.
*
* <br><b>Role</b>: Components that implement
* CATIStmUserStamp are ...
* <p>
* Do not use the CATIStmUserStamp interface for such and such

*
* @example
*  // example is optional
*  CATIStmUserStamp* currentDisplay = NULL;
*  rc = window-&gt;QueryInterface(IID_CATIStmUserStamp,
*                                     (void**) &amp;currentDisplay);
*
* @href ClassReference, Class#MethodReference, #InternalMethod...
*/
class ExportedByCATSmInterfaces CATIStmUserStamp: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

 	enum CATStmUserStampType 
	{	
		CATStmImplicitDie = 0,
		CATStmExplicitDie = 1
	};

	enum CATStmPositionningType 
	{	
		CATStmAxisMapping = 0,
		CATStmNoAxisMapping = 1
	};
	
	
  	/**
     * Retrieves the postionning point of the User Stamp.
     *
     * @param oPositioningPoint
     *   CATMathPoint.
     *
     */    
	virtual HRESULT __stdcall GetPositioningPoint(CATMathPoint & oPositioningPoint)const =0;	


	/**
	 * Retrieves the Stamping direction.
     *
     * @param oMathDirection
     *   CATMathDirection.
     *
     */    
	virtual HRESULT __stdcall  GetDirection(CATMathDirection & oDirection)const =0; 

	
	/**
     * Retrieves the type the User Stamp.
     *
     * @param oType
     *   CATStmUserStampType.
     *
     */    
	virtual HRESULT __stdcall GetType(CATStmUserStampType & oType)const =0;	
	

	/**
     * Retrieves the Punch of the User Stamp.
     *
     * @param opPunch
     *   CATIMechanicalTool.
     *
     */    
	virtual HRESULT __stdcall GetPunch(CATIMechanicalTool ** opPunch)const =0;	

	/**
     * Retrieves the Die of the User Stamp.
     *
     * @param opDie
     *   CATIMechanicalTool.
     *
     */    
	virtual HRESULT __stdcall GetDie(CATIMechanicalTool ** opDie)const =0;	
	
	
	/**
	 * Retrieves the Angular reference of the User Stamp
     *
     * @param opAngularReference
     *   CATISpecObject.
     *
     */    
	virtual HRESULT __stdcall GetAngularReference(CATISpecObject** opAngularReference)const =0;
	
	/**
	 * Retrieves the positionning Angle of the User Stamp
     *
     * @param opPositionningAngleParm
     *   CATICkeParm.
     *
     */    
	virtual HRESULT __stdcall GetPositionningAngle(CATICkeParm** opPositionningAngleParm)const =0;

	
	/**
	 * Retrieves the positionning type of the User Stamp
     *
     * @param oPositionningType
     *   CATStmPositionningType.
     *
     */    
	virtual HRESULT __stdcall GetPositionningType(CATStmPositionningType & oPositionningType)const =0;


	/**
	 * Retrieves the list of opening faces of the User Stamp
     *
     * @param CATLISTP(CATISpecObject)
     *   oOpeningFacesList.
     *
     */    
	virtual HRESULT __stdcall GetOpeningFaces(CATLISTP(CATISpecObject)& oOpeningFacesList) const = 0;

  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

CATDeclareHandler(CATIStmUserStamp, CATBaseUnknown );

//------------------------------------------------------------------

#endif
