//------------------------------------------------------------------------------
// COPYRIGHT DASSAULT SYSTEMES 2002
//------------------------------------------------------------------------------
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
#ifndef CATIIniSearchCombinationCriterion_H
#define CATIIniSearchCombinationCriterion_H

#include "CATInteractiveInterfaces.h"
#include "CATIIniSearchCriterion.h"

// Global Unique IDentifier defined in .cpp 
extern ExportedByCATInteractiveInterfaces IID IID_CATIIniSearchCombinationCriterion;

/**
 * Interface to define a logical complex criterion.
 * <b>Role:</b> This interface defines a complex criterion 
 * based on two simpler criteria. Only its derived interfaces can be used: 
 * @href CATIIniSearchAndCriterion , @href CATIIniSearchOrCriterion , @href CATIIniSearchExceptCriterion .
 */
class ExportedByCATInteractiveInterfaces CATIIniSearchCombinationCriterion : public CATIIniSearchCriterion
{
  CATDeclareInterface;

public:
  /**
   * Sets the two criteria used in the logical operation.
   * <br><b>Role:</b> This method sets the 2 criteria that 
   * will be used in the logical operation of the derived class.
   * @param iCriterion1
   *    The first criterion of the complex criterion.
   * @param iCriterion2
   *    The second criterion of the complex criterion.
   * @return
   *    <ul><li>E_FAIL if the criterion is not correctly set up.</li>
   *    <li>S_OK otherwise.</li></ul>
   */
  virtual HRESULT SetParameters(const CATIIniSearchCriterion* iCriterion1, 
                                const CATIIniSearchCriterion* iCriterion2) = 0;
};
#endif
