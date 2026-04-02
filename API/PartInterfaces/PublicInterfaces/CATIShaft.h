/* -*-c++-*- */
#ifndef CATIShaft_H
#define CATIShaft_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include <PartItf.h>
#include <CATIRevol.h>

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATIShaft;
#else
extern "C" const IID IID_CATIShaft;
#endif

/**
 * Interface which characterizes the Shaft feature.
 */
class ExportedByPartItf CATIShaft : public CATIRevol
{
  CATDeclareInterface;

  public: 

};

CATDeclareHandler (CATIShaft, CATIRevol); 

#endif // CATIShaft_H
