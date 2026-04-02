#ifndef CATIMfgActivityMacroParameters_H
#define CATIMfgActivityMacroParameters_H

//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES  2001
//=============================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U3
*/
//=============================================================================
//

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATMathPlane.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgActivityMacroParameters;
#else
extern "C" const IID IID_CATIMfgActivityMacroParameters;
#endif

/**   
 * Interface dedicated to manufacturing operation management with macros.
 * <b>Role</b>: This interface offers services to access macros from an operation<br>
 */

class ExportedByMfgItfEnv CATIMfgActivityMacroParameters : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:
	/**
	 * Access to the approach motions of a macro of a given type on a operation. 
     * Not used for Retract Macro and Clearance.
     * @param iMacroType
	 *  <br><b>Legal values</b>:
     *  <dl>
     *  	<dt>  1:Approach       
     *      <dt>  2:Retract 
     *  	<dt>  3:ReturnOneLevel    
     *  	<dt>  4:ReturnTwoLevels          
     *  	<dt>  5:Linking     
     *  	<dt>  6:ReturnFinihPath  
     *  	<dt>  7:Clearance      
     *	</dl>
     * @param oMacroMotions The macro motions
	 */	  	
	  virtual HRESULT GetApproachMacroMotions  (const int& iMacroType, CATBaseUnknown_var &oMacroMotions)=0; 

	/**
	 * Access to the retract motions of a macro of a given type on a operation.
     * Not used for Approach Macro and Clearance.
     * @param iMacroType
	 *  <br><b>Legal values</b>:
     *  <dl>
     *  	<dt>  1:Approach       
     *      <dt>  2:Retract 
     *  	<dt>  3:ReturnOneLevel    
     *  	<dt>  4:ReturnTwoLevels          
     *  	<dt>  5:Linking     
     *  	<dt>  6:ReturnFinihPath  
     *  	<dt>  7:Clearance      
     *	</dl>
     * @param oMacroMotions The macro motions
	 */	  	
	  virtual HRESULT GetRetractMacroMotions  (const int& iMacroType, CATBaseUnknown_var &oMacroMotions)=0;

	/**
	 * Access to the clearance macro motions on a operation.
	 */	  	
	  virtual HRESULT GetClearanceMacroMotions  (CATBaseUnknown_var &oMacroMotions)=0;
	  
	/**
	 * Determines wether a macro type on an operation is active or not.
     * @param iMacroType
	 *  <br><b>Legal values</b>:
     *  <dl>
     *  	<dt>  1:Approach       
     *      <dt>  2:Retract 
     *  	<dt>  3:ReturnOneLevel    
     *  	<dt>  4:ReturnTwoLevels          
     *  	<dt>  5:Linking     
     *  	<dt>  6:ReturnFinihPath  
     *  	<dt>  7:Clearance      
     *	</dl>
     * @param oActive
     * <dl>
     *	 <dt> 0:not active  </li>
     *   <dt> 1:Active      </li>
     * </dl>
	 */
	  virtual HRESULT IsActive (const int& iMacroType, int& oActive)=0;	 

	  /**
       * Determines wether the clearance on the operation is cornerized or not.
       * @param oCornerized
       * <dl>
       *   <li> 0:not cornerized  </li>
       *   <li> 1:cornerized      </li>
       * </dl>
	   */
	  virtual HRESULT IsClearanceCornerized  (int& oCornerized)=0; 

	  
	  /**
	* Returns clearance radius if clearance is cornerized.
	*/

	  virtual HRESULT GetClearanceCornerizedRadius (double& oRadius)=0; 	  
 

	  /**
	* Returns setup safety plane (use if clearance mode=Safety Plane).
	*/

	  virtual HRESULT GetSafetyPlane  (CATMathPlane& oPlane)=0; 	 

	/**
	* @nodoc
	*/
	  /**
	* Returns if a macro  or if all macros is/are complete or not on an operation.
     * @param iMacroType
	 *  <br><b>Legal values</b>:
     *  <dl>
     *  	<dt>  1:Approach       
     *      <dt>  2:Retract 
     *  	<dt>  3:ReturnOneLevel    
     *  	<dt>  4:ReturnTwoLevels          
     *  	<dt>  5:Linking     
     *  	<dt>  6:ReturnFinihPath  
     *  	<dt>  7:Clearance      
     *	</dl>
     * @param oComplete
     * <dl>
     *	 <dt> 0:not complete  
     *   <dt> 1:complete      
     * </dl>
	 */	  
	  virtual HRESULT IsComplete (const int& iMacroType, int& oComplete)=0;
	  

	  /**
	   * Access to the global approach macro motion (circular milling and thread milling).
	   */	  	
	  virtual HRESULT GetGlobalApproachMacroMotions  (CATBaseUnknown_var &oMacroMotions)=0; 

 
	  /**
	   * Access to the global retract macro motion (circular milling and thread milling).
	   */	  	
	  virtual HRESULT GetGlobalRetractMacroMotions  (CATBaseUnknown_var &oMacroMotions)=0; 

    	     	  

};

CATDeclareHandler(CATIMfgActivityMacroParameters, CATBaseUnknown) ;
#endif








