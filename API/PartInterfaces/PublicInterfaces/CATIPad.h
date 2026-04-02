/* -*-c++-*- */
#ifndef CATIPad_H
#define CATIPad_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include <PartItf.h>
#include <CATIPrism.h>

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATIPad;
#else
extern "C" const IID IID_CATIPad;
#endif

/**
 * Interface which characterizes the Pad feature.
 */
class ExportedByPartItf CATIPad : public CATIPrism
{
  CATDeclareInterface;

  public: 

};

CATDeclareHandler (CATIPad, CATIPrism); 

#endif // CATIPad_H
