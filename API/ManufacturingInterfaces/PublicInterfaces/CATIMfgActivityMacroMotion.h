#ifndef CATIMfgActivityMacroMotion_H
#define CATIMfgActivityMacroMotion_H

//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES  2000
//=============================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U3
*/
//=============================================================================
//

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATMathPlane.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgActivityMacroMotion;
#else
extern "C" const IID IID_CATIMfgActivityMacroMotion;
#endif
/**   
 * Interface dedicated to manage the approach, retract, and clerance  groups of path of a macro.
 * <b>Role</b>: This interface offers services to access elementary macro motion and clearance general datas<br>
 */
class ExportedByMfgItfEnv CATIMfgActivityMacroMotion : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:
	
	/**
	* Access to an elementary macro motion .
	*/	  
	
	virtual HRESULT GetElementaryMotion  (const int iPosition, CATBaseUnknown_var &oMacroMotion)=0;
	
	  /**
	* Returns the number of macro motions of a group (approach, retract, clearance (= 3 in this case)).
	*/
	
	virtual HRESULT GetNumberOfElementaryMotions  (int& oNumber)=0; 	  
	
	/**
	* Inserts an elementary motion in the macro motion.
	* @param iPosition
	*     The position in the aggregate
	* @param iMotion
	*     The motion to add
	* @param iNotify  
	*       The flag to indicate whether an event is sent.
	*  <br><b>Legal values</b>:
	*  <ul>
	*  <li> = 1 : an event is sent to notify the change</li>
	*  <li> other value : no event sent</li>
	*  </ul>
	*/
	
	virtual HRESULT InsertElementaryMotion (int iPosition, CATBaseUnknown_var & iMotion, int iNotify = 1)=0;
	
	/**
	* Inserts an elementary motion in the macro motion.
	* @param iPosition
	*     The position in the aggregate
	* @param iMotionType
	*     Type of the motion to add
	* @param iNotify  
	*       The flag to indicate whether an event is sent.
	*  <br><b>Legal values</b>:
	*  <ul>
	*  <li> = 1 : an event is sent to notify the change</li>
	*  <li> other value : no event sent</li>
	*  </ul>
	*/
	
	virtual HRESULT InsertElementaryMotion (int iPosition, CATUnicodeString & iMotionType, int iNotify = 1)=0;
	
	/**
	* Deletes an elementary motion in the macro motion.
	* @param iMotion
	*     The motion to delete
	* @param iNotify  
	*       The flag to indicate whether an event is sent.
	*  <br><b>Legal values</b>:
	*  <ul>
	*  <li> = 1 : an event is sent to notify the change</li>
	*  <li> other value : no event sent</li>
	*  </ul>
	*/
	
	virtual HRESULT DeleteElementaryMotion (CATBaseUnknown_var & iMotion, int iNotify = 1)=0;
	
	/**
	* Deletes an elementary motion in the macro motion.
	* @param iPosition
	*     The position of the motion to delete in the aggregate
	* @param iNotify  
	*       The flag to indicate whether an event is sent.
	*  <br><b>Legal values</b>:
	*  <ul>
	*  <li> = 1 : an event is sent to notify the change</li>
	*  <li> other value : no event sent</li>
	*  </ul>
	*/
	
	virtual HRESULT DeleteElementaryMotion (int iPosition, int iNotify = 1)=0;
	
	/**
	* Read the type of Clearance.
    * @param oMode
	* <ul>
	* <li>  1:Distance (or Optimized in clearance of 3-axis operations)    </li> 
	* <li>  2:To a plane (or Perpendicular to safety plane in clearance of 3-axis operations)  </li>
	* <li>  3:To safety plane </li>
	* <li>  4:Along tool axis in clearance of 3-axis operations </li>
    * </ul>
	*/

	virtual HRESULT GetClearanceMode  (int& oMode)=0; 	  
	
	/**
	* Returns clearance distance if clearance mode=Distance.
	*/
	
	virtual HRESULT GetClearanceDistance  (double& oDistance)=0; 	  

	/**
	* Returns clearance plane if clearance mode=To a Plane.
	*/

	virtual HRESULT GetClearancePlane  (CATMathPlane& oPlane)=0; 	 

	/**
	* @nodoc
	*/
	
	/**
	* Returns if a macromotion  is complete or not on an operation.
    * @param iSfyPlane
	* <ul>
	*   <li> 0:no safety plane         </li>
    *   <li> 1: safety plane defined   </li>
    * </ul>
	* @param oComplete
	* <ul>
	*   <li> 0:not complete </li>
    *   <li> 1:complete     </li>
	* </ul>
	*/
	
	virtual HRESULT IsComplete (const int& iSfyPlane, int& oComplete)=0;	 

 	  
};

CATDeclareHandler(CATIMfgActivityMacroMotion, CATBaseUnknown) ;
#endif








