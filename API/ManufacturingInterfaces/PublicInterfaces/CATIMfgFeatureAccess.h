/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================

#ifndef CATIMfgFeatureAccess_H
#define CATIMfgFeatureAccess_H

/**
* @CAA2Level L1
* @CAA2Usage U5
*/

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgFeatureAccess;
#else
extern "C" const IID IID_CATIMfgFeatureAccess;
#endif

/**
* Interface to access a manufacturing feature.
* <br><b>Role</b>: CATIMfgFeatureAccess has methods to access a 
* manufacturing feature.
*/

class ExportedByMfgItfEnv CATIMfgFeatureAccess : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:  

/**
* Determines if all the necessary datas of a manufacturing feature 
* are filled up. 
* @param oIsComplete
* 1 if the manufacturing feature is complete, 0 otherwise.
*/

    virtual HRESULT IsComplete (int &oIsComplete) = 0; 
};

CATDeclareHandler(CATIMfgFeatureAccess, CATBaseUnknown);

#endif


