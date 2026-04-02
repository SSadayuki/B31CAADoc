/* -*-c++-*- */
#ifndef CATIPocket_H
#define CATIPocket_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include <PartItf.h>
#include <CATIPrism.h>

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATIPocket;
#else
extern "C" const IID IID_CATIPocket;
#endif

/**
 * Interface which characterizes the Pocket feature.
 */
class ExportedByPartItf CATIPocket : public CATIPrism
{
  CATDeclareInterface;

  public: 
   
};

CATDeclareHandler (CATIPocket, CATIPrism); 

#endif // CATIPocket_H
