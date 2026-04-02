/* -*-c++-*- */
#ifndef CATISimpleHole_H
#define CATISimpleHole_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include <PartItf.h>
#include <CATINewHole.h>

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATISimpleHole;
#else
extern "C" const IID IID_CATISimpleHole;
#endif

/**
 * Class to manage simple hole feature.
 * <b>Role</b>: This class inherits from CATINewHole.
 * @see CATINewHole
 */
class ExportedByPartItf CATISimpleHole : public CATINewHole
{
   CATDeclareInterface;

   public :
};

CATDeclareHandler(CATISimpleHole, CATINewHole);

#endif // CATISimpleHole_H
