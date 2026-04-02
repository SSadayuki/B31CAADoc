// COPYRIGHT Dassault Systemes 2011
//===================================================================
// CATIMmiMechanicalSet.h
// Define the CATIMmiMechanicalSet interface
//===================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#ifndef CATIMmiMechanicalSet_H
#define CATIMmiMechanicalSet_H

#include "CATMecModExtendItf.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
	extern ExportedByCATMecModExtendItf IID IID_CATIMmiMechanicalSet;
#else
	extern "C" const IID IID_CATIMmiMechanicalSet;
#endif


class CATListValCATIMmiMechanicalFeature_var;

//------------------------------------------------------------------
/**
 * Interface to handle a MechanicalSet.
 * <br><b>Role</b>: This interface enables to scan the content of a MechanicalSet.
 *
 */
class ExportedByCATMecModExtendItf CATIMmiMechanicalSet : public CATBaseUnknown
{
  CATDeclareInterface;

  public :

  /**
	* Retrieves the MechanicalSets directly aggregated under the MechanicalSet.
  * @param oMechanicalSets
  * A list of aggregated MechanicalSets.
  * @return
  * S_OK if the MechanicalSets are retrieved
  * <br> E_FAIL otherwise
	*/
	virtual HRESULT GetMechanicalSets(CATListValCATIMmiMechanicalFeature_var& oMechanicalSets)=0;

  /**
  * Retrieves the MechanicalElements directly aggregated under the MechanicalSet (excluding aggregated sets).
  * @param oFeatures
  * A list of aggregated MechanicalElements.
  * @return
  * S_OK if the MechanicalElements are retrieved
  * <br> E_FAIL otherwise
  */
  virtual HRESULT GetMechanicalFeatures(CATListValCATIMmiMechanicalFeature_var& oFeatures)=0;
};

CATDeclareHandler(CATIMmiMechanicalSet,CATBaseUnknown);
#endif
