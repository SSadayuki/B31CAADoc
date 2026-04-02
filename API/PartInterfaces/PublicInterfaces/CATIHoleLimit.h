#ifndef CATIHoleLimit_H
#define CATIHoleLimit_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include <PartItf.h>
#include <CATIPrtLimit.h>

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATIHoleLimit;
#else
extern "C" const IID IID_CATIHoleLimit;
#endif

/**
 * Class to manage hole bottom limit.
 * <b>Role</b>: Class CATIHoleLimit inherits from CATIPrtLimit. 
 * Methods defined below are specifics to hole limit. They manage
 * angle value of bottom limit in case of V bottom limit.
 * @see CATIPrtLimit
 */
class ExportedByPartItf CATIHoleLimit : public CATIPrtLimit
{
   CATDeclareInterface;
   
   public:

/**
 * Returns parameter linked to bottom limit angle.
 * @param oAngleParm
 *  Parameter linked to bottom limit angle. 
 */
      virtual void GetAngle (CATICkeParm_var & oAngleParm) = 0;
/**
 * Returns angle value of bottom limit.
 * @param oAngle
 *  Value of bottom limit angle. 
 */
      virtual void GetAngle (double & oAngle)          = 0;
/**
 * Sets angle value of bottom limit.
 * @param iAngle
 *  Value of bottom limit angle. 
 */   
      virtual void SetAngle (const double iAngle)     = 0;
};

CATDeclareHandler (CATIHoleLimit, CATIPrtLimit);

#endif // CATIHoleLimit_H
