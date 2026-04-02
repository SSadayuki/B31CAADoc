/* -*-c++-*- */
#ifndef CATIGSMUseGridSubset_H
#define CATIGSMUseGridSubset_H

// COPYRIGHT DASSAULT SYSTEMES 2001

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGSMUseItfExportedBy.h"
//System
#include "CATBaseUnknown.h"
#include "CATListOfDouble.h"
//ObjectSpecsModeler
#include "CATLISTV_CATIMmiMechanicalFeature.h"
//delayed includes
class CATIGSMUseGridFace_var;
class CATIGSMUseGridSet_var;
class CATMathDirection;
class CATICkeParm_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID IID_CATIGSMUseGridSubset;
#else
extern "C" const IID IID_CATIGSMUseGridSubset;
#endif

/**
 * Interface to GridSubset feature.
 * <br><b>Role</b>: Allows you to access/modify data of a GridSubset feature
 * <br>GridSubset features are used to create GridSets
 * @see CATIGSMUseFactory#CreateGridSet
 * @see CATIGSMUseGridSet
 */

class ExportedByCATGSMUseItf CATIGSMUseGridSubset: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Gets prefix of faces.
 *   @param oPrefix
 *      Subset's prefix.
 */
 virtual HRESULT GetNamingPrefix(CATUnicodeString &oPrefix) =0;

/**
 * Gets all faces sorted by absolute offsets.
 *   @param oLstFaces
 *      List of faces sorted by absolute offsets.
 *   @see CATIGSMUseGridFace
 */
 virtual HRESULT GetFacesSorted(CATLISTV(CATIMmiMechanicalFeature_var) &oLstFaces) =0;

/**
 * Gets all faces sorted by absolute offsets.
 *   @param oLstFaces
 *      List of faces sorted by absolute offsets.
 *   @param oLstAbsOffsets
 *      List of absolute offsets (in model unit (mm)) of "oFaces"
 *   @see CATIGSMUseGridFace
 */
 virtual HRESULT GetFacesSorted(CATLISTV(CATIMmiMechanicalFeature_var) &oLstFaces
                               ,CATListOfDouble              &oLstAbsOffsets) =0;

/**
 * Gets all faces sorted by absolute offsets.
 *   @param oLstFacesBfr
 *      List of before origin faces sorted by absolute offsets (decreasing order).
 *   @param ospOriginFace
 *      The origin face if exist in this subset.
 *   @param oLstFacesAft
 *      List of after origin faces sorted by absolute offsets (increasing order).
 *   @param oLstAbsOffsetsBfr
 *      List of absolute offsets (in model unit (mm)) of "oLstFacesBfr"
 *   @param oLstAbsOffsetsAft
 *      List of absolute offsets (in model unit (mm)) of "oLstFacesAft"
 *   @see CATIGSMUseGridFace
 */
 virtual HRESULT GetFacesSorted(CATLISTV(CATIMmiMechanicalFeature_var) &oLstFacesBfr
                               ,CATIGSMUseGridFace_var          &ospOriginFace
                               ,CATLISTV(CATIMmiMechanicalFeature_var) &oLstFacesAft
                               ,CATListOfDouble              &oLstAbsOffsetsBfr
                               ,CATListOfDouble              &oLstAbsOffsetsAft) =0;

/**
 * Gets the number of faces.
 *   @param oNbFaces
 *      The number of faces.
 */
 virtual HRESULT GetNbFaces(int &oNbFaces) =0;

/**
 * Gets the number of faces.
 *   @param oNbFacesBfr
 *      The number of faces before origin.
 *   @param oOriginFaceExist
 *      If this subset contains the origin face.
 *   @param oNbFacesAft
 *      The number of faces after origin.
 */
 virtual HRESULT GetNbFaces(int &oNbFacesBfr, CATBoolean &oOriginFaceExist, int &oNbFacesAft) =0;


/**
 * Gets the father (GridSet) of the Subset.
 *   @param ospSet
 *      The father of the Subset.
 *   @see CATIGSMUseGridSet
 */
 virtual HRESULT GetGridSet(CATIGSMUseGridSet_var &ospSet) =0;

};
CATDeclareHandler (CATIGSMUseGridSubset, CATBaseUnknown);
//------------------------------------------------------------------

#endif
