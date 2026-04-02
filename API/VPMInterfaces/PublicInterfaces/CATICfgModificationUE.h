#ifndef CATICfgModificationUE_H_
#define CATICfgModificationUE_H_

//COPYRIGHT  DASSAULT  SYSTEMES  2012

/**
*  @CAA2Level  L1
*  @CAA2Usage  U5
*/

#include "CATBaseUnknown.h"

#include "GUIDVPMInterfaces.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATICfgModificationUE;
#else
extern "C" const IID IID_CATICfgModificationUE;
#endif





/**
*    User exit interface to react to a configuration modification.
*/
class  ExportedByGUIDVPMInterfaces CATICfgModificationUE : public CATBaseUnknown
{

CATDeclareInterface;

public:

/**
*    Sets the default effectivity.
*/
    virtual  HRESULT SetEffectivity () = 0;
/**
*    Validates the default effectivity.
*/
    virtual  HRESULT ValidateEffectivity()=0;
};

CATDeclareHandler(CATICfgModificationUE,CATBaseUnknown);

#endif


