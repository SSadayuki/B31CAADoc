#ifndef CATIGSMGridFace_H
#define CATIGSMGridFace_H

// COPYRIGHT DASSAULT SYSTEMES 2001

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

//GSMInterfaces
#include "CATGitInterfacesExportedBy.h"
//System
#include "CATBaseUnknown.h"
#include "CATBoolean.h"
//delayed includes
class CATIGSMGridSubset_var;
class CATIGSMGridSet_var;
class CATISpecObject_var;
class CATIGSMDirection_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID IID_CATIGSMGridFace;
#else
extern "C" const IID IID_CATIGSMGridFace ;
#endif

/**
 * Interface to GridFace features.
 * <br><b>Role</b>: Allows you to access/modify data of a GridFace feature
 * <br>GridFace features are used to create GridSets
 * @see CATIGSMFactory#CreateGridGridSet
 * @see CATIGSMGridSet
 * @see CATIGSMGridSubset
 */

class ExportedByCATGitInterfaces CATIGSMGridFace: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Gets the reference.
 *   @param ospReference
 *      The reference of the face.
 */
 virtual HRESULT GetReference(CATISpecObject_var &ospReference) =0;

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
 *   @see CATIGSMGridSet
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
 *   @see CATIGSMDirection, CATIGSMGridSet
 */
 virtual HRESULT GetGridSetDirection(CATIGSMDirection_var &ospDirection) =0;

/**
 * Gets the GridSet's orientation.
 *   @param oOrient
 *      GridSet's orientation according to its direction.
 *      <br>(TRUE means that GridSet's orientation is the same as its direction)
 *   @see CATIGSMGridSet
 */
 virtual HRESULT GetGridSetOrientation(CATBoolean &oOrient) =0;

/**
 * Gets the father (GridSubset) of the face.
 *   @param ospSubset
 *      The father of the face.
 *   @see CATIGSMGridSubset
 */
 virtual HRESULT GetGridSubset(CATIGSMGridSubset_var &ospSubset) =0;
    
/**
 * Gets the grand-father (GridSet) of the face.
 *   @param ospSet
 *      The grand-father of the face.
 *   @see CATIGSMGridSet
 */
 virtual HRESULT GetGridSet(CATIGSMGridSet_var &ospSet) =0;

};

CATDeclareHandler (CATIGSMGridFace, CATBaseUnknown);
//------------------------------------------------------------------

#endif
