/* -*-c++-*- */
#ifndef CATIGroove_H
#define CATIGroove_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include <PartItf.h>
#include <CATIRevol.h>

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATIGroove;
#else
extern "C" const IID IID_CATIGroove;
#endif

/**
 * Interface which characterizes the Groove feature.
 */
class ExportedByPartItf CATIGroove : public CATIRevol
{
  CATDeclareInterface;

  public: 
   
};

CATDeclareHandler (CATIGroove, CATIRevol); 

#endif // CATIGroove_H


