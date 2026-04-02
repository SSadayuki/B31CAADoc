/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  2003
//=============================================================================

#ifndef CATIMfgActivityToolPathPackManagement_H
#define CATIMfgActivityToolPathPackManagement_H

/**
* @CAA2Level L1
* @CAA2Usage U5
*/

/**
* Interface to implement on a manufacturing operation to authorize tool path pack/unpack management.<br> 
* It gives access to Pack/Unpack interactive commands and the ability (through settings) to pack the
* tool path during computation.
*/

#include "MfgItfEnv.h"

#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgActivityToolPathPackManagement;
#else
extern "C" const IID IID_CATIMfgActivityToolPathPackManagement;
#endif


class ExportedByMfgItfEnv CATIMfgActivityToolPathPackManagement : public CATBaseUnknown
{
  CATDeclareInterface ;
  
  public :

};

CATDeclareHandler(CATIMfgActivityToolPathPackManagement, CATBaseUnknown) ;
#endif







