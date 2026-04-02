/**
 *@CAA2Level L1
 *@CAA2Usage U3
 */


/**
 * The CATICfgMilestoneCallBack events
 *        - Milestone value changes
 */

#include "GUIDVPMInterfaces.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATICfgMilestoneCallBack;
#else
extern "C" const IID IID_CATICfgMilestoneCallBack;
#endif

#ifndef CATICfgMilestoneCallBack_H_
#define CATICfgMilestoneCallBack_H_
class CATUnicodeString;
class CATICfgValue_var;

#include "CATBaseUnknown.h"


class ExportedByGUIDVPMInterfaces  CATICfgMilestoneCallBack : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * A <b>Milestone</b> value has changed
 *  @param iMilestoneName
 *    The milestone name.
 *  @param inewValue
 *    The new milestone value.
 */
     virtual void CallValueChanged(CATUnicodeString &iMilestoneName, const CATICfgValue_var& inewValue) = 0;

};

CATDeclareHandler(CATICfgMilestoneCallBack,CATBaseUnknown);

//
// --------------------------------------------------------------
// Fin de la macro
// --------------------------------------------------------------

#endif

