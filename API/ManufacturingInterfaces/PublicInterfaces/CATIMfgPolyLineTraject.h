/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  1998
//=============================================================================
#ifndef CATIMfgPolyLineTraject_H
#define CATIMfgPolyLineTraject_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATIMfgTPSingleMotion.h"
#include "IUnknown.h"
#include "CATCORBABoolean.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgPolyLineTraject;
#else
extern "C" const IID IID_CATIMfgPolyLineTraject;
#endif

/**
* Interface with identifies polyline traject object.<br>
* A polyline traject object is a set of tool linear motions characterized by a type of traject
* and a type of feedrate.<br>
*
* PLEASE NOTE that you should use CATIMfgTPMultipleMotion interface instead of CATIMfgPolylineTraject.<br>
* CATIMfgTPMultipleMotion interface allows to store linear motions, circular motions and PP Instructions
* (described by a string or by a NC_Command and a NC_Instruction described in PP Table). <br>
* It needs less memory and CPU time.<br>
* It is the recommended way to modelize tool motions.<br>
* 
* @see CATIMfgTPMultipleMotion
*/

class ExportedByMfgItfEnv CATIMfgPolyLineTraject : public CATIMfgTPSingleMotion
{
  CATDeclareInterface ;
  
  public :
};

CATDeclareHandler(CATIMfgPolyLineTraject, CATIMfgTPSingleMotion);

#endif







