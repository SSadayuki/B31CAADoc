#ifndef CATITPSManageAssociativity_H
#define CATITPSManageAssociativity_H

// COPYRIGHT DASSAULT SYSTEMES 2017

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATTPSItfCPP.h"
#include "CATBaseUnknown.h"

class CATITPS;
class CATITTRS;
class CATIDftLeader;
#include "CATDrwAssDefs.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATTPSItfCPP IID IID_CATITPSManageAssociativity;
#else
extern "C" const IID IID_CATITPSManageAssociativity;
#endif

/**
* Interface to manage Associativity (Positional and Orientational).
* <br><b>Role</b>: This interface is available for any TPS Annotation.It gives the ability to add or delete Associativity (Positional and Orientational).
*/

class ExportedByCATTPSItfCPP CATITPSManageAssociativity : public CATBaseUnknown
{
  CATDeclareInterface;

public:

  /**
  * Creates Position link between the Annotation and another Master Annotation or TTRS.
  * To create Position link successfully, below preconditions should be fulfilled along with proper Ass_xx policy
  * @precondition:
  *   - Annotation and Master Annotation (or TTRS) must be defined in the same FTA View.
  *   - For Annotation and Master Annotation: Must be based on the same TTRS.
  *   - For Annotation and TTRS: TTRS of the Annotation and TTRS must be the identitcal.
  * @param iProjectingMode
  *    Associative projection mode.
  *    Default : Ass_Region.
  * @param ipiMasterTPS
  *    Master Annotation with which position link has to be established
  * @param ipiTTRS
  *    TTRS with which position link has to be established
  * @return
  *    S_OK     position link has been created
  *    E_FAIL   No position link created
  */
  virtual HRESULT CreateAssiocativePosition(const CATAssProjectingMode iProjectingMode = Ass_Region,
                                            const CATITPS * ipiMasterTPS = NULL, const CATITTRS* ipiTTRS = NULL) = 0;

  /**
  * Creates Orientation link between the Annotation and another Master Annotation or TTRS.
  * To create Orientation link successfully, below preconditions should be fulfilled along with proper Ass_xx policy
  * @precondition:
  *   - Annotation and Master Annotation (or TTRS) must be defined in the same FTA View.
  *   - For Annotation and Master Annotation: Must be based on the same TTRS.
  *   - For Annotation and TTRS: TTRS of the Annotation and TTRS must be the identitcal.
  * @param iProjectingMode
  *    Associative projection mode.
  *    Default : Ass_Region.
  * @param ipiMasterTPS
  *    Master Annotation with which orientation link has to be established
  * @param ipiTTRS
  *    TTRS with which orientation link has to be established
  * @return
  *    S_OK     orientation link has been created
  *    E_FAIL   No orientation link created
  */
  virtual HRESULT CreateAssociativeOrientation(const CATAssProjectingMode iProjectingMode = Ass_Region,
                                               const CATITPS * ipiMasterTPS = NULL, const CATITTRS* ipiTTRS = NULL) = 0;

  /**
  * Removes the existing Position link of Annotation with other Annotation or TTRS.
  * @return
  *    S_OK     position link has been deleted successfully
  *    E_FAIL   Failed to delete the position link
  */
  virtual HRESULT DeleteAssiciativePosition() = 0;

  /**
  * Removes the existing Orientation link of Annotation with other Annotation or TTRS.
  * @return
  *    S_OK     Orientation link has been deleted successfully
  *    E_FAIL   Failed to delete the Orientation link
  */
  virtual HRESULT DeleteAssiciativeOrientation() = 0;

  /**
  * Checks whether the Annotation has Position link with other Annotation or TTRS.
  * @return
  *    TRUE     position link exists for Annotation
  *    FALSE    position link does not exists for Annotation
  */
  virtual CATBoolean IsAssociativePositionApplied() = 0;

  /**
  * Checks whether the Annotation has Orientation link with other Annotation or TTRS.
  * @return
  *    TRUE     Orientation link exists for Annotation
  *    FALSE    Orientation link does not exists for Annotation
  */
  virtual CATBoolean IsAssociativeOrientationApplied() = 0;

  /**
  * Creates Position link between the Leader and another Master Annotation or TTRS.
  * To create Position link successfully for Leader, below preconditions should be fulfilled along with proper Ass_xx policy
  * @precondition:
  *   - Annotation Leader and Master Annotation (or TTRS) must be defined in the same FTA View.
  *   - For Annotation Leader and Master Annotation: Must be based on the same TTRS.
  *   - For Annotation Leader and TTRS: TTRS of the Annotation Leader and TTRS must be the identitcal.
  * @param iProjectingMode
  *    Associative projection mode.
  *    Default : Ass_Region.
  * @param ipiMasterTPS
  *    Master Annotation with which position link has to be established
  * @param ipiTTRS
  *    TTRS with which position link has to be established
  * @return
  *    S_OK     position link has been created
  *    E_FAIL   No position link created
  */
  virtual HRESULT CreateLeaderAssociativePosition(CATIDftLeader *ipiDftLeader, const CATAssProjectingMode iProjectingMode = Ass_Region,
                                                  const CATITPS *ipiMasterTPS = NULL, const CATITTRS *ipiTTRS = NULL) = 0;

  /**
  * Creates Orientation link between the Leader and another Master Annotation or TTRS.
  * To create Orientation link successfully for Leader, below preconditions should be fulfilled along with proper Ass_xx policy
  * @precondition:
  *   - Annotation Leader and Master Annotation (or TTRS) must be defined in the same FTA View.
  *   - For Annotation Leader and Master Annotation: Must be based on the same TTRS.
  *   - For Annotation Leader and TTRS: TTRS of the Annotation Leader and TTRS must be the identitcal.
  * @param iProjectingMode
  *    Associative projection mode.
  *    Default : Ass_Region.
  * @param ipiMasterTPS
  *    Master Annotation with which orientation link has to be established
  * @param ipiTTRS
  *    TTRS with which orientation link has to be established
  * @return
  *    S_OK     orientation link has been created
  *    E_FAIL   No orientation link created
  */
 virtual HRESULT CreateLeaderAssociativeOrientation(CATIDftLeader *ipiDftLeader, const CATAssProjectingMode iProjectingMode = Ass_Region,
                                                    const CATITPS *ipiMasterTPS = NULL, const CATITTRS *ipiTTRS = NULL) = 0;

 /**
 * Removes the existing Position link of Leader with other Annotation or TTRS.
 * @param ipiDftLeader
 *    Annotation Leader of which AssociativePosition link is to be deleted
 * @return
 *    S_OK     position link has been deleted successfully
 *    E_FAIL   Failed to delete the position link
 */
 virtual HRESULT DeleteLeaderAssociativePosition(CATIDftLeader *ipiDftLeader) = 0;

 /**
 * Removes the existing Orientation link of Leader with other Annotation or TTRS.
 * @param ipiDftLeader
 *    Annotation Leader of which AssociativeOrientation link is to be deleted
 * @return
 *    S_OK     Orientation link has been deleted successfully
 *    E_FAIL   Failed to delete the Orientation link
 */
 virtual HRESULT DeleteLeaderAssociativeOrientation(CATIDftLeader *ipiDftLeader) = 0;

 /**
 * Checks whether the Leader has Position link with other Annotation or TTRS.
 * @param ipiDftLeader
 *    Annotation Leader
 * @return
 *    TRUE     position link exists for Leader
 *    FALSE    position link does not exists for Leader
 */
 virtual CATBoolean IsLeaderAssociativePositionApplied(CATIDftLeader *ipiDftLeader) = 0;

 /**
 * Checks whether the Leader has Orientation link with other Annotation or TTRS.
 * @param ipiDftLeader
 *    Annotation Leader
 * @return
 *    TRUE     Orientation link exists for Leader
 *    FALSE    Orientation link does not exists for Leader
 */
 virtual CATBoolean IsLeaderAssociativeOrientationApplied(CATIDftLeader *ipiDftLeader) = 0;

};

CATDeclareHandler(CATITPSManageAssociativity, CATBaseUnknown);

#endif
