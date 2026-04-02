/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  1997
//=============================================================================
//
// CATIMfgActivitySyntax :
//
//=============================================================================
// Usage Notes:
//
//=============================================================================
// Sep. 98   Creation                                   LAS
//=============================================================================
#ifndef CATIMfgActivitySyntax_H
#define CATIMfgActivitySyntax_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgActivitySyntax;
#else
extern "C" const IID IID_CATIMfgActivitySyntax;
#endif

/**   
 * Interface dedicated to activity object managing PP words.
 * <b>Role</b>: This interface offers services to manage PP words of activity.
 */

class ExportedByMfgItfEnv CATIMfgActivitySyntax : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:

  /**
   * Possible PP words syntax initialisation mode.
   * @param InitFromPPTable
   *       the PP words syntax is initialised from the current PP words table
   * @param InitFromUser
   *       the PP words syntax is initialised from user Input
   */
   enum MfgPPWORDSyntaxMode {InitFromPPTable=0, InitFromUser=1};

  /**
   * Retrieves the PP words syntax mode.
   * @return
   *   S_OK when the method succeeds, and E_FAIL otherwise
   * @param oMode
   *       The PP words syntax mode
   */
   virtual HRESULT   GetPPWORDSyntaxMode (CATIMfgActivitySyntax::MfgPPWORDSyntaxMode &oMode) =0;	

  /**
   * Resets the PP words syntax.
   * @return
   *   S_OK when the method succeeds, and E_FAIL otherwise
   */
   virtual HRESULT   ResetPPWORDSyntax () =0;	

  /**
   * Retrieves the PP words syntax.
   * @return
   *   S_OK when the method succeeds, and E_FAIL otherwise
   * @param oMode
   *       The PP words syntax 
   */
   virtual HRESULT   GetPPWORDSyntax (CATUnicodeString &oPPWORDs) =0;	

  /**
   * Sets the PP words syntax.
   * @return
   *   S_OK when the method succeeds, and E_FAIL otherwise
   * @param iPPWORDs
   *       The user PP words syntax to set
   */
   virtual HRESULT   SetPPWORDSyntax (const CATUnicodeString &iPPWORDs) =0;	

  /**
   * Retrieves the NC instruction.
   * @return
   *   S_OK when the method succeeds, and E_FAIL otherwise
   * @param oPPWORDs
   *       The PP words instruction 
   */
   virtual HRESULT   GetNCInstruction (CATString &oPPWORDs) =0;	

};

CATDeclareHandler(CATIMfgActivitySyntax, CATBaseUnknown) ;
#endif







