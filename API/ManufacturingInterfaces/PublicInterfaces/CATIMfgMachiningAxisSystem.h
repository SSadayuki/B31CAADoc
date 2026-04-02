#ifndef CATIMfgMachiningAxisSystem_H
#define CATIMfgMachiningAxisSystem_H

//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES  1997
//=============================================================================

/**
 * @CAA2Level L1
 * @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATMathDirection.h"
#include "CATMathPoint.h"
#include "CATMathAxis.h"
#include "CATUnicodeString.h"

class CATIMfgGeometryAccess_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgMachiningAxisSystem;
#else
extern "C" const IID IID_CATIMfgMachiningAxisSystem;
#endif


/**   
 * Interface dedicated to machining axis system.
 * <b>Role</b>: This interface offers services mainly to manage the Machining Axis System object <br>
 */

class ExportedByMfgItfEnv CATIMfgMachiningAxisSystem : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:


	/**
	* Sets the machining axis type.
    * @param iAxisType
	*  The type
	*/
    
    virtual HRESULT SetAxisType (const CATUnicodeString &iAxisType)=0;

	/**
	* Gets the machining axis type.
    * @param oAxisType
	*  The type
	*/
    
    virtual HRESULT GetAxisType (CATUnicodeString &oAxisType)=0;

	/**
	* Gets the X direction of the machining axis system.
    * @param oDirection
	*  The mathematical direction
	*/
    
	virtual HRESULT GetXDirection (CATMathDirection &oDirection)=0;// non const car "Normalize".

	/**
	* Gets the Y direction of the machining axis system.
    * @param oDirection
	*  The mathematical direction
	*/
    
    virtual HRESULT GetYDirection (CATMathDirection &oDirection)=0;// non const car "Normalize".

	/**
	* Gets the Z direction of the machining axis system.
    * @param oDirection
	*  The mathematical direction
	*/
    
    virtual HRESULT GetZDirection (CATMathDirection &oDirection)=0;// non const car "Normalize".
    
	/**
	* Gets the origin point of the machining axis system.
    * @param oPoint
	*  The mathematical point
	*/

    virtual HRESULT GetOriginPoint(CATMathPoint &oPoint)=0;

	/**
	* Outputs if a geometrical point is used or not.
    * @param oFlag
	*  The use of a geometrical point
	*/
    
    virtual HRESULT UseGeometricPoint(int& oFlag)const=0;

	/**
	* Gets if the machining axis system is an origin.
    * @param oFlag
	*  The flag
	*/
    
    virtual HRESULT GetIsOrigin		(int& oFlag)const=0;

	/**
	* Gets the origin number in case of an origin usage.
    * @param oFlag
	*  The origin number
	*/
    
    virtual HRESULT GetOriginNumber	(int& oFlag)const=0;

	/**
	* Gets the origin group in case of an origin usage.
    * @param oString
	*  The mode
	*/
    
    virtual HRESULT GetOriginGroup	(int& Flag)const=0;

	/**
	* Gets the mathematical definition of the machining axis system.
    * @param oAxis
	*  The mathematical axis
	*/
    
    virtual HRESULT GetAxis		(CATMathAxis& oAxis)=0; // non const car "Normalize".

	/**
	* Sets the X direction of the machining axis system.
	* Set mode to Manual before using this method with @href #SetAxisSelectMode
    * @param iDirection
	*  The mathematical direction
	*/
    
    virtual HRESULT SetXDirection (const CATMathDirection &iDirection)=0;

	/**
	* Sets the Z direction of the machining axis system.
	* Set mode to Manual before using this method with @href #SetAxisSelectMode
    * @param iDirection
	*  The mathematical direction
	*/
    
    virtual HRESULT SetZDirection (const CATMathDirection &iDirection)=0;

	/**
	* Sets the origin point of the machining axis system.
    * @param iPoint
	*  The mathematical point
	*/
    
    virtual HRESULT SetOriginPoint(const CATMathPoint &iPoint)=0;

	/**
	* Modifies the origin point of the machining axis system.
    * @param iPoint
	*  The mathematical point
	*/
    
    virtual HRESULT ModifyOriginPoint(const CATMathPoint &iPoint)=0;

	/**
	* Sets if the machining axis system is used as an origin.
    * @param iFlag
	*  The flag
	*/
    
    virtual HRESULT SetIsOrigin		(const int iFlag)=0;

	/**
	* Sets the origin number in case of an origin usage.
    * @param iFlag
	*  The flag
	*/
    
    virtual HRESULT SetOriginNumber	(const int iFlag)=0; 

	/**
	* Sets the origin group number in case of an origin usage.
    * @param iFlag
	*  The flag
	*/
    
    virtual HRESULT SetOriginGroup	(const int iFlag)=0;

	/**
	* Normalizes the machining axis system.
	*/
    
	virtual HRESULT Normalize		()=0;

	/**
	* Sets the geometic element defining the origin of a Machining Axis System.
    * @param iOrigin
	*  The origin elemnt
    * @param iProduct
	*  The belonging product
	*/
    
	virtual HRESULT SetOrigin (const CATBaseUnknown_var &iOrigin, const CATBaseUnknown_var &iProduct)=0;

	/**
	* Sets the Part Axis System defining the machining axis system.
    * @param iOrigin
	*  The origin elemnt
    * @param iProduct
	*  The belonging product
	*/
    
	virtual HRESULT SetPAS	(const CATBaseUnknown_var &iOrigin, const CATBaseUnknown_var &iProduct)=0;

	/**
	* Retrieves if a Part Axis System is used or not in a machining axis system.
    * @param oUsedPAS
	*  The output
	*/
    	
	virtual HRESULT  GetUsePAS(boolean& oUsedPAS ) const =0 ;
	
	/**
	* Retrieves if a geometric element is used or not in a machining axis system for X definition.
    * @param oUsedGeometry
	*  The output
	*/
    
	virtual HRESULT  GetUseGeometryForX (boolean & oUsedGeometry) const =0 ;

	/**
	* Retrieves if a geometric element is used or not in a machining axis system for Z definition.
    * @param oUsedGeometry
	*  The output
	*/
    
	virtual HRESULT  GetUseGeometryForZ (boolean & UsedGeometry) const =0 ;

	/**
	* Sets if a Part Axis System is used or not.
    * @param iUsedPAS
	*  The flag
	*/
    
    virtual HRESULT  SetUsePAS(const boolean iUsedPAS)=0;
	
	/**
	* Checks if the MAchining Axis System definition is OK.
	*/

    virtual HRESULT  IsOK() const =0 ;
    
	/**
	* Gets the positioning geometry of the machining axis system.
    * @param oGeometry
	*  The geometry
	*/    
	virtual HRESULT  GetPositionGeometry(CATIMfgGeometryAccess_var& oGeometry) const =0 ;

	/**
	* Gets the Part Axis System of the definition of the Machining Axis System.
    * @param oPAS
	*  The part axis system
	*/    
	virtual HRESULT  GetPAS (CATIMfgGeometryAccess_var& oPAS) const =0 ;

	/**
	* Checks if Machining Axis System is complete.
	*/
    
	virtual int IsComplete()=0;

	/**
	* Checks if Machining Axis System is up to date.
	*/
        
	virtual int IsUpToDate()=0;

	/**
	* Gets the type of selection mode defined for the given axis.
	* @param iAxis	
	*		Type of axis
	*   <br><b>Legal values</b>:
 	*   <ul>
 	*   <li>X: for the X direction </li>
	*   <li>Z: for the Z direction </li>
 	*   </ul>
	* @param oSelectMode.
	*   The selection mode.
	*   <br><b>Legal values</b>:
 	*   <ul>
 	*   <li>Mfg_ToolAxis_Mode_Manual: manual mode </li>
 	*   <li>Mfg_ToolAxis_Mode_PtView: point in view mode </li>
  	*   <li>Mfg_ToolAxis_Mode_Selection: selection mode </li>
 	*   <li>Mfg_ToolAxis_Mode_NormalBottom: normal to bottom mode </li>
 	*   <li>Mfg_ToolAxis_Mode_Axis: axis mode </li>
	*	<li>Mfg_ToolAxis_Mode_NormalView: normal view mode</li>
	*	<li>Mfg_ToolAxis_Mode_2Rotations: two rotations mode </li>
	*   </ul>
	*/
	virtual HRESULT GetAxisSelectMode(const char &iAxis, CATUnicodeString &oSelectMode)=0;

	/**
	* Sets the type of selection mode defined for the given axis.
	* Set mode to Manual to modify the Axis direction using @href #SetXDirection and 
	* @href #SetZDirection
	* @param iAxis	
	*		Type of axis
	*   <br><b>Legal values</b>:
 	*   <ul>
 	*   <li>X: for the X direction </li>
	*   <li>Z: for the Z direction </li>
 	*   </ul>
	* @param iSelectMode
	*   The selection mode.
	*   <br><b>Legal values</b>:
 	*   <ul>
 	*   <li>Mfg_ToolAxis_Mode_Manual: manual mode </li>
 	*   <li>Mfg_ToolAxis_Mode_PtView: point in view mode </li>
  	*   <li>Mfg_ToolAxis_Mode_Selection: selection mode </li>
 	*   <li>Mfg_ToolAxis_Mode_NormalBottom: normal to bottom mode </li>
 	*   <li>Mfg_ToolAxis_Mode_Axis: axis mode </li>
	*	<li>Mfg_ToolAxis_Mode_NormalView: normal view mode</li>
	*	<li>Mfg_ToolAxis_Mode_2Rotations: two rotations mode </li>
	*   </ul>
	*/	
	virtual HRESULT SetAxisSelectMode(const char &iAxis, CATUnicodeString &iSelectMode)=0;
};

CATDeclareHandler(CATIMfgMachiningAxisSystem, CATBaseUnknown) ;

#endif







