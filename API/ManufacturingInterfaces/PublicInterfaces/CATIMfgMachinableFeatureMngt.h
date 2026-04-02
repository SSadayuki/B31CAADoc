/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  1997
//=============================================================================
//
// CATIMfgMachinableFeatureMngt :
//
//=============================================================================
// Janvier 2005			Creation		SMD
//=============================================================================

#ifndef CATIMfgMachinableFeatureMngt_H
#define CATIMfgMachinableFeatureMngt_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/


#include "MfgItfEnv.h"

#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgMachinableFeatureMngt;
#else
extern "C" const IID IID_CATIMfgMachinableFeatureMngt;
#endif

/**
 * Interface to manage relation between Machinable Features and Machining Features.
 * <b>Role</b>: Use this interface to associate Machinable features to Machining Features.
 */
class ExportedByMfgItfEnv CATIMfgMachinableFeatureMngt : public CATBaseUnknown 
{
  CATDeclareInterface ;  

  public:
/**
 * Sets a Machinable Feature.
 * @param iMAF
 *     The Machinable feature
 */
  virtual HRESULT SetMachinableFeature (const CATBaseUnknown_var &iMAF) const=0;

/**
 * Gets a Machinable Feature.
 * @param oMAF
 *     The Machinable feature
 */
  virtual HRESULT GetMachinableFeature (CATBaseUnknown_var &oMAF) const=0;


};

CATDeclareHandler(CATIMfgMachinableFeatureMngt, CATBaseUnknown) ;

#endif







