/* -*-c++-*- */
#ifndef CATITaperedHole_H
#define CATITaperedHole_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include <PartItf.h>
#include <CATINewHole.h>

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATITaperedHole;
#else
extern "C" const IID IID_CATITaperedHole;
#endif

/**
 * Class to manage tapered hole feature.
 * <b>Role</b>: This class inherits from CATINewHole. It is
 * used to manage angle of a tapered hole.
 * @see CATINewHole 
 */
class ExportedByPartItf CATITaperedHole : public CATINewHole
{
   CATDeclareInterface;

   public: 
/**
 * Returns the value of tapered angle.
 * @param oAngle
 *  Value of tapered angle. 
 */
      virtual void GetAngle    (double & oAngle)               = 0;

/**
 * Returns parameter linked to tapered angle.
 * @param oAngleParm
 *  Parameter linked to tapered angle. 
 */
      virtual void GetAngle    (CATICkeParm_var & oAngleParm)      = 0;

/**
 * Sets angle value of tapered angle.
 * @param iAngle
 *  Value of tapered angle. 
 */   
      virtual void SetAngle    (const double iAngle)          = 0;
};

CATDeclareHandler(CATITaperedHole, CATINewHole);

#endif // CATITaperedHole_H
