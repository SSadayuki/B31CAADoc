/* -*-c++-*- */
#ifndef CATIAsmNavigateStruct_h
#define CATIAsmNavigateStruct_h
// COPYRIGHT DASSAULT SYSTEMES  1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "AS0STARTUP.h"
#include "CATINavigateObject.h"
class CATUnicodeString;

extern ExportedByAS0STARTUP IID IID_CATINavigateStruct;
extern ExportedByAS0STARTUP IID IID_CATIAsmNavigateStruct;

/**
* Interface to allow new navigation behaviour on one implementation that already binds to CATINavigateObject.
* @see CATINavigateObject
*/

class ExportedByAS0STARTUP CATIAsmNavigateStruct : public CATINavigateObject
{
  CATDeclareInterface;

  public:
 
};

CATDeclareHandler(CATIAsmNavigateStruct,CATINavigateObject);

#endif 
