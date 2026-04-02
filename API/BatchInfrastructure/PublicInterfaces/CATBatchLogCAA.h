/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  2001
//=============================================================================
//
// CATBatchLogCAA
//     
//
//=============================================================================
// Usage Notes:
//

//=============================================================================
//	December 2001   Creation                                jnm
//=============================================================================
#ifndef CATBatchLogCAA_H
#define CATBatchLogCAA_H 
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */



#include "CATBatchUtils.h"
#include "CATErrorDef.h"
#include "CATUnicodeString.h"


//------------------------------------------------------------------

/**
 * Execution Log management.
 * <b>Role</b>: This class allow you to manage the log of the batch
 */
class ExportedByCATBatchUtils CATBatchLogCAA 
{
  public :

/** 
 * This method writes in the log of the batch.
 *
 *
 */
  static HRESULT PutInLog(const CATUnicodeString& str);
 
 /** 
 * This method delete the log of the batch. with the given uuid
 * Not to be called from the batch iteself.
 *
 */ 
  static HRESULT DeleteLogs(const char* uuid);

 
};

#endif
