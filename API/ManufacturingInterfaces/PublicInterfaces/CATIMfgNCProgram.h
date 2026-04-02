#ifndef CATIMfgNCProgram_H
#define CATIMfgNCProgram_H

//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES  2001
//=============================================================================

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

// module
#include "MfgItfEnv.h"
#include "CATIMfgActivity.h"
#include "CATLISTV_CATBaseUnknown.h"

class CATMathAxis;
class CATMathDirection;
class CATMathVector;
class CATMathTransformation;
class CATUnicodeString;

#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByMfgItfEnv IID_CATIMfgNCProgram;
#else
extern "C" const IID IID_CATIMfgNCProgram;
#endif

/**   
 * Interface dedicated to Program Object.
 * <b>Role</b>: This interface offers services to initialize the current compatible tool in Program for Activity object.<br>
 * @see CATIMfgActivity 
 */

class ExportedByMfgItfEnv CATIMfgNCProgram : public CATIMfgActivity
{
  CATDeclareInterface ;  

  public:

 /**
 * Writes the current authorized tool. 
 * @param iActivity
 *  The Activity
 */
    virtual HRESULT SetCurrentAuthorizedTool (const CATBaseUnknown_var& iActivity) =0;
  
};

CATDeclareHandler(CATIMfgNCProgram, CATIMfgActivity) ;

#endif







