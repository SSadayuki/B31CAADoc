/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  1999
//=============================================================================

#ifndef CATIMfgToolPathManagement_H
#define CATIMfgToolPathManagement_H
/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATBaseUnknown.h"
#include "CATIMfgToolPath.h"
#include "MfgItfEnv.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByMfgItfEnv IID_CATIMfgToolPathManagement;
#else
extern "C" const IID IID_CATIMfgToolPathManagement;
#endif

/**
 * Interface on the operation to manage links between it and its tool path.
 * <b>Role</b>: CATIMfgToolPathManagement has methods to set, retrieve and remove tool path on the operation
 */

class ExportedByMfgItfEnv CATIMfgToolPathManagement : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:

  /**
   *   Retrieves tool path on the operation.
   *   @param oToolPath
   *      The tool path linked to the operation
   *   @return
   *      The return code
   *      <br><b>Legal values</b>:
   *      <ul>
   *      <li>S_OK   : tool path found</li>
   *      <li>E_FAIL : no tool path found</li>
   *      </ul>
   **/
   virtual HRESULT              GetToolPath (CATIMfgToolPath_var &oToolPath) = 0; 

   /**
   *   Sets tool path on the operation.
   *   @param iToolPath
   *      The tool path to link to the operation
   **/
   virtual HRESULT              SetToolPath (const CATIMfgToolPath_var &iToolPath) = 0; 


   /**
   *   Removes tool path on the operation only if tool path is unlocked.
   **/
   virtual HRESULT              RemoveToolPath  () = 0;

   /**
   * @nodoc
   */
   virtual HRESULT              UnsetToolPath   () = 0;

  /**
   *   Indicates if the operation owns a tool path.
   *   @return
   *      The return code
   *      <br><b>Legal values</b>:
   *      <ul>
   *      <li>S_OK   : tool path found</li>
   *      <li>E_FAIL : no tool path found</li>
   *      </ul>
   **/
   virtual HRESULT              HasAToolPath   () = 0;

   /**
   * @nodoc
   */
   virtual HRESULT              GetToolPath2 (CATIMfgToolPath_var &oToolPath) = 0; 

};

CATDeclareHandler(CATIMfgToolPathManagement, CATBaseUnknown) ;

#endif







