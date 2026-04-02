#ifndef CATIGSMUseGridFace_H
#define CATIGSMUseGridFace_H

// COPYRIGHT DASSAULT SYSTEMES 2001

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

//GSMInterfaces
#include "CATGSMUseItfExportedBy.h"
//System
#include "CATBaseUnknown.h"
#include "CATBoolean.h"
//delayed includes
class CATIGSMUseGridSubset_var;
class CATIGSMUseGridSet_var;
class CATIMmiMechanicalFeature_var;
class CATIGSMUseDirection_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID IID_CATIGSMUseGridFace;
#else
extern "C" const IID IID_CATIGSMUseGridFace ;
#endif

/**
 * Interface to GridFace features.
 * <br><b>Role</b>: Allows you to access/modify data of a GridFace feature
 * <br>GridFace features are used to create GridSets
 * @see CATIGSMUseFactory#CreateGridGridSet
 * @see CATIGSMUseGridSet
 * @see CATIGSMUseGridSubset
 */

class ExportedByCATGSMUseItf CATIGSMUseGridFace: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Gets the reference.
 *   @param ospReference
 *      The reference of the face.
 */
 virtual HRESULT GetReference(CATIMmiMechanicalFeature_var &ospReference) =0;

/**
 * Gets the signed offset value from reference.
 *   @param oRelOffset
 *      Offset numerical value in model unit (mm).
 */
 virtual HRESULT GetRelOffset(double &oRelOffset) =0;

/**
 * Gets the signed offset value from GridSet's origin.
 *   @param oAbsOffset
 *      Offset numerical value in model unit (mm).
 *   @see CATIGSMUseGridSet
 */
 virtual HRESULT GetAbsOffset(double &oAbsOffset) =0;

/**
 * Test if it is an origin face.
 *   @return
 *          S_OK    if it is an origin face
 *      <br>S_FALSE if it is not an origin face
 *      <br>E_FAIL  if an error occured
 */
 virtual HRESULT IsOriginFace() =0;

/**
 * Gets the GridSet's direction feature.
 *   @param ohDirection
 *      GridSet's direction (GridSet's orientation is not taken in account).
 *   @see CATIGSMUseDirection, CATIGSMUseGridSet
 */
 virtual HRESULT GetGridSetDirection(CATIGSMUseDirection_var &ospDirection) =0;

/**
 * Gets the GridSet's orientation.
 *   @param oOrient
 *      GridSet's orientation according to its direction.
 *      <br>(TRUE means that GridSet's orientation is the same as its direction)
 *   @see CATIGSMUseGridSet
 */
 virtual HRESULT GetGridSetOrientation(CATBoolean &oOrient) =0;

/**
 * Gets the father (GridSubset) of the face.
 *   @param ospSubset
 *      The father of the face.
 *   @see CATIGSMUseGridSubset
 */
 virtual HRESULT GetGridSubset(CATIGSMUseGridSubset_var &ospSubset) =0;
    
/**
 * Gets the grand-father (GridSet) of the face.
 *   @param ospSet
 *      The grand-father of the face.
 *   @see CATIGSMUseGridSet
 */
 virtual HRESULT GetGridSet(CATIGSMUseGridSet_var &ospSet) =0;

};

CATDeclareHandler (CATIGSMUseGridFace, CATBaseUnknown);
//------------------------------------------------------------------

#endif
