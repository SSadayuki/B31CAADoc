/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  1997
//=============================================================================
//
// CATIMfgGenerateToolChanges :
//
//=============================================================================
// Usage Notes:
//
//=============================================================================
// Jan. 05   Creation                                    SMD
//=============================================================================
#ifndef CATIMfgGenerateToolChanges_H
#define CATIMfgGenerateToolChanges_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATIMfgActivity.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATBooleanDef.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByMfgItfEnv IID_CATIMfgGenerateToolChanges;
#else
extern "C" const IID IID_CATIMfgGenerateToolChanges;
#endif

/**
 * Interface to genrate and delete automaticaly tool changes.
 * <b>Role</b>: allow a Manufacturing program to generate and delete automatically the tool changes.
 */
class ExportedByMfgItfEnv CATIMfgGenerateToolChanges : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:
  

 /**
 * Generates automatically the tool changes associated to a program.
 * @param iRef 
 *     
 */
    virtual HRESULT CheckTools (const CATBaseUnknown_var& iRef=NULL_var) =0;
/**
 * Delete Tool Changes that have been automatically generated.
 * @param oToolChangesNumber The total number of tool changes
 * @param oDeletedNumber The number of deleted tool changes
 */
    virtual HRESULT DeleteAutomaticToolChanges (int & oToolChangesNumber, int & oDeletedNumber) =0;

};
CATDeclareHandler(CATIMfgGenerateToolChanges, CATBaseUnknown) ;
#endif
