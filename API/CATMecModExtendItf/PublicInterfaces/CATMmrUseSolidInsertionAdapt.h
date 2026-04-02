#ifndef CATMmrUseSolidInsertionAdapt_h
#define CATMmrUseSolidInsertionAdapt_h

// COPYRIGHT DASSAULT SYSTEMES 2009

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

#include "CATMecModExtendItf.h"
#include "CATIMmiUseSolidInsertion.h"

/**
* Adaptor class for CATIMmiUseSolidInsertion 
*/
class CATIMmiMechanicalFeature_var;

class ExportedByCATMecModExtendItf CATMmrUseSolidInsertionAdapt : public CATIMmiUseSolidInsertion
{

public:

  CATMmrUseSolidInsertionAdapt();

  virtual ~CATMmrUseSolidInsertionAdapt();

  /**
  * Relocates a solid feature in a procedural body.
  * <br><b>Role:</b>This method is used to move a solid feature, that already exists in a procedural body, 
  * to another position.
  * If the given destination is not valid, a new destination will sometimes be automatically redefined.
  * @param iDestination
  * The place where the feature will be inserted depends on the factors described below:
  * <ul>
  * <li>The feature is a <b>Body or Solid Body</b>: the feature is set at the first position in the 
  * Body or Solid Body.</li>
  * <li>The feature is a <b>solid feature</b>: the feature is set after the given <tt>iDestination</tt></li>
  * <li>The feature equals <b>NULL_var</b>: the destination is automatically valuated with the "In Work Object" feature. 
  * The "In Work Object" can be set by using the interface @href CATIMmiUsePrtPart#SetCurrentFeature,
  * method and can be set with the @href CATIMmiUsePrtPart#GetCurrentFeature method.</li>
  * </ul>
  * If the given <tt>iDestination</tt> and the "In Work Object" feature are not valid, the <tt>ReorderFeature</tt> method will throw @href CATInternalError exceptions.
  * @return 
  * This method returns S_OK if the operation went through successfully and E_FAIL otherwise.
  */
  HRESULT ReorderFeature( const CATIMmiMechanicalFeature_var& iDestination );

  /**
  * Inserts a solid feature into a procedural body.
  * <br><b>Role:</b>This method is used to insert a solid feature into a procedural body. If the
  * feature already exists in a Body or Solid Body, use the @href #ReorderFeature method to move it.
  * @param iDestination
  * The place where the feature will be inserted depends on the factors described below:
  * <ul>
  * <li>The feature is a <b>Body or Solid Body</b>: the feature is set at the first position in the 
  * Body or Solid Body.</li>
  * <li>The feature is a <b>solid feature</b>: the feature is set after the given <tt>iDestination</tt></li>
  * <li>The feature equals <b>NULL_var</b>: the destination is automatically valuated with the "In Work Object" feature. 
  * The "In Work Object" can be set by using the interface @href CATIMmiUsePrtPart#SetCurrentFeature,
  * method and can be set with the @href CATIMmiUsePrtPart#GetCurrentFeature method.</li>
  * </ul>
  * If the given <tt>iDestination</tt> and the "In Work Object" feature are not valid, the <tt>ReorderFeature</tt> method will throw @href CATInternalError exceptions.
  * @return 
  * This method returns S_OK if the operation went through successfully and E_FAIL otherwise.
  */
  HRESULT InsertFeature( const CATIMmiMechanicalFeature_var&  iDestination );

private:
  CATMmrUseSolidInsertionAdapt (CATMmrUseSolidInsertionAdapt &);
  CATMmrUseSolidInsertionAdapt& operator=(CATMmrUseSolidInsertionAdapt&);
};

#endif
