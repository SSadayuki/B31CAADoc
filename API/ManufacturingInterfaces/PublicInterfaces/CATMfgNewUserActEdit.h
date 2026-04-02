//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES  2003
//=============================================================================

#ifndef __CATMfgNewUserActEdit_h__
#define __CATMfgNewUserActEdit_h__
/**
* @CAA2Level L1
* @CAA2Usage U3
*/
//
// Only Manufacturing can use these strings
//
#include "CATIAV5Level.h"
#include "MfgItfEnv.h"

class CATUnicodeString;

/**
 * Data decicated to CATIEdit behaviour customisation for ManufacturingActivities.
 * <b>Role</b>: This data is use to delete on demand the newly created ManufacturingActivity
 * if CATIEdit command is exited with Cancel.
 */ 


 /**
  * Set MfgNewUserEdit to 1 to have the ManufacturingActivity deleted.
  */

ExportedByMfgItfEnv extern int MfgNewUserActEdit;

#endif
