// COPYRIGHT Dassault Systemes 2008
//===================================================================
// CATIMmiMechanicalFeature.h
// Define the CATIMmiMechanicalFeature interface
//===================================================================
/**
* @CAA2Level L1  
* @CAA2Usage U3
*/

#ifndef CATIMmiMechanicalFeature_H 
#define CATIMmiMechanicalFeature_H

#include "CATMecModLiveUseItf.h"
#include "CATBaseUnknown.h"
#include "IUnknown.h"

class CATIMmiMechanicalFeature_var;
class CATIMmiPrtContainer_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMecModLiveUseItf IID IID_CATIMmiMechanicalFeature;
#else
extern "C" const IID IID_CATIMmiMechanicalFeature ;
#endif

//------------------------------------------------------------------
/**
 * Interface to recognize a mechanical feature.
 * <br><b>Role</b>: This interface is available for any mechanical feature.
 *
 */
class ExportedByCATMecModLiveUseItf CATIMmiMechanicalFeature: public CATBaseUnknown
{
  CATDeclareInterface;

  public:
/**
 * Returns the MechanicalPart feature.
 * @param oPart
 * The mechanical part.
 * @return
 * The error code.
 * <br><b>Legal values</b>: <ul>
 * <li><tt>S_OK</tt>: The part is retrieved </li>
 * <li><tt>E_FAIL</tt>: The part could not be accessed.</li></ul>
 */
  virtual HRESULT GetMechanicalPart( CATIMmiMechanicalFeature_var & oPart ) const = 0;

/**
 * Returns the composite object if it is a mechanical feature.
 * @param oFather
 *   The composite object.
 * @return 
 * The <b>legal values</b> are:
 * <ul>
 * <li>S_OK The object could be read </li>
 * <li>E_FAIL otherwise </li>
 * </ul>
 */
  virtual HRESULT GetMechanicalFather( CATIMmiMechanicalFeature_var & oFather ) = 0 ;

/**
 * Reassigns the composite object of the current feature.
 *
 * <br><b>Role:</b>This method enables to define a new father for the current feature.  <br>
 * The <tt>ChangeMechanicalFather</tt> method will throw @href CATInternalError exceptions if the new father
 * is not in the same 3D shape as the current one.
 *
 * @param iTheNewFather
 *   The new composite object.
 * @return 
 * The <b>legal values</b> are:
 * <ul>
 * <li>S_OK The father could be changed </li>
 * <li>E_FAIL otherwise </li>
 * </ul>
 */
  virtual HRESULT ChangeMechanicalFather(CATIMmiMechanicalFeature_var iTheNewFather ) = 0 ;

  /**
 * Returns the specification container.
 * @param oThePrtContainer
 * The specification container.
 * @return
 * The error code.
 * <br><b>Legal values</b>: <ul>
 * <li><tt>S_OK</tt>: The container is retrieved </li>
 * <li><tt>E_FAIL</tt>: The container could not be accessed.</li></ul>
 */
  virtual HRESULT GetPrtContainer(CATIMmiPrtContainer_var & oThePrtCont ) = 0 ;
  
};

CATDeclareHandler(CATIMmiMechanicalFeature,CATBaseUnknown);
#endif
