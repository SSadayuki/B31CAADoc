#ifndef CATIEleDocServices_H
#define CATIEleDocServices_H

// COPYRIGHT DASSAULT SYSTEMES 2001

/** 
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "ExportedByCATElectricalInterfaces.h"

#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATElectricalInterfaces IID IID_CATIEleDocServices;
#else
extern "C" const IID IID_CATIEleDocServices ;
#endif

/**   
 * Interface dedicated electrical environment initialization.
 * <b>Role</b>: This interface enable access to electrical features.
 */

class ExportedByCATElectricalInterfaces CATIEleDocServices: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Initialize electrical environment.
 */
  virtual HRESULT Initialize() = 0;

};


#endif
