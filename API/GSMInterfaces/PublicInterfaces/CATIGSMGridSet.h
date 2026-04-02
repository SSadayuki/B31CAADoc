#ifndef CATIGSMGridSet_H
#define CATIGSMGridSet_H

// COPYRIGHT DASSAULT SYSTEMES 2001

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGitInterfacesExportedBy.h"
//system
#include "CATBaseUnknown.h"
#include "CATListOfInt.h"
#include "CATListOfDouble.h"
//ObjectSpecsModeler
#include "CATLISTV_CATISpecObject.h"
//delayed includes
class CATIGSMGridSubset_var;
class CATIGSMGridFace_var;
class CATISpecObject;
class CATIGSMDirection_var;
class CATICkeParm_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID IID_CATIGSMGridSet;
#else
extern "C" const IID IID_CATIGSMGridSet ;
#endif

/**
 * Interface to GridSet feature.
 * <br><b>Role</b>: Allows you to access/modify data of the GridSet feature.
 * <br> GridSet feature allows to generate sets of parallel GridFaces.
 * @see CATIGSMFactory#CreateGridSet
 * @see CATIGSMGridSubset, CATIGSMGridFace
 */
class ExportedByCATGitInterfaces CATIGSMGridSet: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

//==================================================================================================================
// SPECS MANAGEMENT
//==================================================================================================================

/**
 * Gets the origin.
 *   @param ohIOrigin
 *      GridSet's origin: a point.
 *   @see CATISpecObject
 */
 virtual HRESULT GetOrigin(CATISpecObject_var &ohIOrigin) =0;

/**
 * Sets the origin.
 *   @param ihIOrigin
 *      GridSet's origin: a point.
 *   @return
 *      S_OK    if the origin has been set
 *      S_FALSE if the origin was already "ihIOrigin"
 *      E_FAIL  if an error occured
 *   @see CATISpecObject
 */
 virtual HRESULT SetOrigin(const CATISpecObject_var &ihIOrigin) =0;

/**
 * Gets the direction.
 *   @param ohIDirection
 *      GridSet's direction.
 *   @see CATIGSMDirection
 */
 virtual HRESULT GetDirection(CATIGSMDirection_var &ohIDirection) =0;

/**
 * Sets the direction.
 *   @param ihIDirection
 *      GridSet's direction.
 *   @return
 *      S_OK    if the direction has been set
 *      S_FALSE if the direction was already "ihIDirection"
 *      E_FAIL  if an error occured
 *   @see CATIGSMDirection
 */
 virtual HRESULT SetDirection(const CATIGSMDirection_var &ihIDirection) =0;

/**
 * Gets the orientation.
 *   @param oOrient
 *      GridSet's orientation.
 *      (TRUE means that orientation is the same as direction)
 */
 virtual HRESULT GetOrientation(CATBoolean &oOrient) =0;

/**
 * Sets the orientation.
 *   @param iOrient
 *      GridSet's orientation.
 *      (TRUE means that orientation will be the same as direction)
 *   @return
 *      S_OK    if the orientation has been set
 *      S_FALSE if the orientation was already "iOrient"
 *      E_FAIL  if an error occured
 */
 virtual HRESULT SetOrientation(CATBoolean iOrient) =0;

/**
 * Inverts the GridSet's orientation.
 */
 virtual HRESULT InvertOrientation() =0;

//==================================================================================================================
// SUBSETS MANAGEMENT
//==================================================================================================================

/**
 * Gets the number of subsets.
 *   @param oNbSubsets
 *      The number of subsets.
 */
 virtual HRESULT GetNbSubsets(int &oNbSubsets) =0;

/**
 * Gets all subsets.
 *   @param oLstSubsets
 *      List of subsets.
 *   @see  CATIGSMGridSubset
 */
 virtual HRESULT GetSubsets(CATLISTV(CATISpecObject_var) &oLstSubsets) =0;

/**
 * Gets a subset.
 *   @param iPrefix
 *      The prefix to retrieve.
 *   @param ohISubset
 *      The returned subset (NULL_var if not found).
 *   @return
 *      S_OK         if the subset has been found
 *      E_INVALIDARG if the prefix has not been found
 *      E_FAIL       if an error occured
 *   @see CATIGSMGridSubset
 */
 virtual HRESULT GetSubset(const CATUnicodeString &iPrefix, CATIGSMGridSubset_var &ohISubset) =0;

/**
 * Adds a subset.
 * Remark: in a same GridSet, two GridSubsets could not have the same prefix.
 *   @param iPrefix
 *      The prefix of the subset to add.
 *   @param ohISubset
 *      The created subset.
 *   @return
 *      S_OK         if the subset has been created
 *      E_INVALIDARG if a subset with the same prefix already exist or if prefix is an empty string
 *      E_FAIL       if an error occured
 *   @see CATIGSMGridSubset
 */
 virtual HRESULT AddSubset(const CATUnicodeString &iPrefix, CATIGSMGridSubset_var &ohISubset) =0;

/**
 * Changes the prefix of a subset.
 *   @param ihISubset
 *      The subset where the prefix must be changed.
 *   @param iPrefix
 *      The new prefix.
 *   @return
 *      S_OK         if the prefix has been changed
 *      E_INVALIDARG if a subset with the same prefix already exist or if "ihISubset" is equal to NULL_var
 *      E_FAIL       if an error occured
 *   @see CATIGSMGridSubset
 *   @see CATUnicodeString
 */
 virtual HRESULT ChangeSubsetPrefix(const CATIGSMGridSubset_var &ihISubset, const CATUnicodeString &iPrefix) =0;

/**
 * Removes a subset and all its agregated faces.
 *   @param iohISubset
 *      The subset to remove.
 *      "iohISubset" is set to NULL_var if the remove operation ended successfully.
 *   @return
 *      S_OK         if the subset has been removed
 *      E_INVALIDARG if "iohISubset" is equal to NULL_var
 *      E_FAIL       if an error occured
 *   @see CATIGSMGridSubset
 */
 virtual HRESULT RemoveSubset(CATIGSMGridSubset_var &iohISubset) =0;

/**
 * Removes all subsets and all faces.
 */
 virtual HRESULT RemoveSubsets() =0;

//==================================================================================================================
// FACES MANAGEMENT
//==================================================================================================================

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
 * Gets all faces.
 *   @param oLstFaces
 *      List of faces.
 *   @see  CATIGSMGridFace
 */
 virtual HRESULT GetFaces(CATLISTV(CATISpecObject_var) &oLstFaces) =0;

/**
 * Gets all faces sorted by absolute offsets.
 *   @param oLstFaces
 *      List of faces sorted by absolute offsets (increasing order).
 *   @see CATIGSMGridFace
 */
 virtual HRESULT GetFacesSorted(CATLISTV(CATISpecObject_var) &oLstFaces) =0;

/**
 * Gets all faces sorted by absolute offsets.
 *   @param oLstFaces
 *      List of faces sorted by absolute offsets (increasing order).
 *   @param oLstAbsOffsets
 *      List of absolute offsets (in model unit (mm)) of "oLstFaces".
 *   @see CATIGSMGridFace
 */
 virtual HRESULT GetFacesSorted(CATLISTV(CATISpecObject_var) &oLstFaces
                               ,CATListOfDouble              &oLstAbsOffsets) =0;

/**
 * Gets all GridFaces (except the origin one) sorted by absolute offsets.
 *   @param oLstFacesBfr
 *      List of GridFaces (before the origin) sorted by absolute offsets (decreasing order).
 *   @param oOriginFace
 *      The origin face.
 *   @param oLstFacesAft
 *      List of GridFaces (after the origin) sorted by absolute offsets (increasing order).
 *   @see CATIGSMGridFace
 */
 virtual HRESULT GetFacesSorted(CATLISTV(CATISpecObject_var) &oLstFacesBfr
                               ,CATIGSMGridFace_var          &ohIOriginFace
                               ,CATLISTV(CATISpecObject_var) &oLstFacesAft ) =0;

/**
 * Gets all GridFaces (except the origin one) sorted by absolute offsets.
 *   @param oLstFacesBfr
 *      List of GridFaces (before the origin) sorted by absolute offsets (decreasing order).
 *   @param oOriginFace
 *      The origin face.
 *   @param oLstFacesAft
 *      List of GridFaces (after the origin) sorted by absolute offsets (increasing order).
 *   @param oLstAbsOffsetsBfr
 *      List of absolute offsets (in model unit (mm)) of "oLstFacesBfr".
 *   @param oLstAbsOffsetsAft
 *      List of absolute offsets (in model unit (mm)) of "oFacesAftOrg".
 *   @see CATIGSMGridFace
 */
 virtual HRESULT GetFacesSorted(CATLISTV(CATISpecObject_var) &oLstFacesBfr
                               ,CATIGSMGridFace_var          &ohIOriginFace
                               ,CATLISTV(CATISpecObject_var) &oLstFacesAft
                               ,CATListOfDouble              &oLstAbsOffsetsBfr
                               ,CATListOfDouble              &oLstAbsOffsetsAft) =0;

/**
 * Gets the both (before and after origin) farthest GridFace according to origin.
 *   @param ohIFaceBfr
 *      The farthest GridFace before origin
 *      Return NULL_var if there is (no GridFace before origin) and (no GridFace at origin)
 *   @param ohIFaceAft
 *      The farthest GridFace after origin
 *      Return NULL_var if there is (no GridFace after origin) and (no GridFace at origin)
 *   @param oAbsOffsetBfr
 *      Signed absolute offset (in model unit (mm)) of "ohIFaceBfr"
 *      Return 0.0 if there is (no GridFace before origin) and (no GridFace at origin)
 *   @param oAbsOffsetAft
 *      Signed absolute offset (in model unit (mm)) of "ohIFaceAft"
 *      Return 0.0 if there is (no GridFace after origin) and (no GridFace at origin)
 *   @see CATIGSMGridFace
 */
 virtual HRESULT GetExtremeFaces(CATIGSMGridFace_var &ohIFaceBfr
                                ,CATIGSMGridFace_var &ohIFaceAft
                                ,double              &oAbsOffsetBfr
                                ,double              &oAbsOffsetAft) =0;

/**
 * Gets a face.
 *   @param iAbsOffset
 *      The absolute offset to retrieve.
 *   @param ohIFace
 *      The returned face (NULL_var if not found).
 *   @return
 *      S_OK         if the face was found
 *      E_INVALIDARG if the face was not found
 *      E_FAIL       if an error occured
 *   @see  CATIGSMGridFace
 */
 virtual HRESULT GetFace(double iAbsOffset, CATIGSMGridFace_var &ohIFace) =0;

/**
 * Adds a face.
 * Remark: In a same GridSet, two GridFaces could not have the same offset.
 *   @param iAbsOffset
 *      The absolute offset of the face to add.
 *   @param ihISubset
 *      The subset where the face must be aggregated.
 *   @param ohIFace
 *      The created face.
 *   @return
 *      S_OK         if the face has been created
 *      E_INVALIDARG if "ihISubset" is equal to NULL_VAR or if a face with the same offset already exist
 *      E_FAIL       if an error occured
 *   @see CATIGSMGridSubset
 *   @see CATIGSMGridFace
 */
 virtual HRESULT AddFace(double iAbsOffset, const CATIGSMGridSubset_var &ihISubset, CATIGSMGridFace_var &ohIFace) =0;

/**
 * Adds a face at a relative position.
 *   @param bAfterFace
 *      TRUE if the face is added after ispRefFace, FALSE otherwise.
 *   @param bAfterOrigin
 *      TRUE if the face is added after the origin of GridSet, FALSE otherwise.
 *   @param iRelOffset
 *      The relative offset value between the reference face and the face to add.
 *   @param ihISubset
 *      The subset where the face must be aggregated.
 *   @param ihRefFace
 *      The reference face.
 *   @param ihNewFace
 *      The face to add.
 *   @return
 *      S_OK         if the face has been inserted correctly
 *      E_INVALIDARG if "ihISubset" is equal to NULL_VAR
 *      E_FAIL       if an error occured
 *   @see CATIGSMGridSubset
 *   @see CATIGSMGridFace
 */
 virtual HRESULT AddNewFace(CATBoolean bAfterFace, CATBoolean bAfterOrigin, double iRelOffset, const CATIGSMGridSubset_var &ihISubset, CATISpecObject_var &ihRefFace, CATIGSMGridFace_var &ihNewFace)=0;

/**
 * Adds a face at the end of GridSet.
 * Remark: In a same GridSet, two GridFaces could not have the same offset.
 *   @param iRelOffset
 *      The relative offset of the face to add according to the extremum face.
 *   @param ihISubset
 *      The subset where the face must be aggregated.
 *   @param iAfterOrigin
 *      Determine at which extremity the face must be added.
 *   @param ohIFace
 *      The created face.
 *   @return
 *      S_OK         if the face has been created
 *      E_INVALIDARG if "ihISubset" is equal to NULL_VAR or if "iRelOffset" is less than or equal to 0
 *      E_FAIL       if an error occured
 *   @see CATIGSMGridSubset
 *   @see CATIGSMGridFace
 */
 virtual HRESULT AddExtremeFace(double iRelOffset, const CATIGSMGridSubset_var &ihISubset, boolean iAfterOrigin, CATIGSMGridFace_var &ohIFace) =0;

/**
 * Gets the both (before and after origin) farthest GridFaces, among visible ones, according to origin.
 *   @param ohIFaceBfr
 *      The farthest not hidden GridFace before origin
 *      Return NULL_var if there is (no GridFace before origin) and (no GridFace at origin)
 *   @param ohIFaceAft
 *      The farthest not hidden GridFace after origin
 *      Return NULL_var if there is (no GridFace after origin) and (no GridFace at origin)
 *   @param oAbsOffsetBfr
 *      Signed absolute offset (in model unit (mm)) of "ohIFaceBfr"
 *   @param oAbsOffsetAft
 *      Signed absolute offset (in model unit (mm)) of "ohIFaceAft"
 *   @see CATIGSMGridFace
 */
 virtual HRESULT GetVisibleExtremeFaces(CATIGSMGridFace_var &ohIFaceBfr
                                       ,CATIGSMGridFace_var &ohIFaceAft
                                       ,double              &oAbsOffsetBfr
                                       ,double              &oAbsOffsetAft) =0;

/**
 * Changes the relative offset of a face (It also moves next faces).
 *   @param ihIFace
 *      The face where the offset must be changed.
 *   @param iRelOffset
 *      The new relative offset (in absolute value).
 *   @return
 *      S_OK         if the face has been moved
 *      E_INVALIDARG if "ihIFace" is equal to NULL_var, "iRelOffset" is smaller than zero.
 *      E_FAIL       if an error occured
 *   @see CATIGSMGridFace
 */
 virtual HRESULT ChangeFaceRelOffset(const CATIGSMGridFace_var &ihIFace, double iRelOffset) =0;

/**
 * Changes the subset aggregation of a face.
 *   @param ihIFace
 *      The face where the subset must be changed.
 *   @param ihISubset
 *      The new subset.
 *   @return
 *      S_OK         if the face has been moved
 *      E_INVALIDARG if "ihIFace" or "ihISubset" is NULL_var
 *      E_FAIL       if an error occured
 *   @see CATIGSMGridSubset
 *   @see CATIGSMGridFace
 */
 virtual HRESULT ChangeFaceSubset(const CATIGSMGridFace_var &ihIFace, const CATIGSMGridSubset_var &ihISubset) =0;

/**
 * Removes a face (It also moves next faces).
 *   @param iohIFace
 *      The face to remove.
 *      "iohIFace" is set to NULL_var if the remove operation ended successfully.
 *   @return
 *      S_OK         if the face has been removed
 *      E_INVALIDARG if "iohIFace" is equal to NULL_var
 *      E_FAIL       if an error occured
 *   @see CATIGSMGridFace
 */
 virtual HRESULT RemoveFace(CATIGSMGridFace_var &iohIFace) =0;

/**
 * Shrink GridSet (deleted faces are extreme ones).
 * The origin face will never been deleted with this method.
 *   @param iNbToCropBfr
 *      Number of before origin GridFace to remove
 *   @param iNbToCropAft
 *      Number of after origin GridFace to remove
 */
 virtual HRESULT RemoveExtremeFaces(int iNbToCropBfr, int iNbToCropAft) =0;

/**
 * Removes all GridFaces.
 */
 virtual HRESULT RemoveFaces() =0;

//==================================================================================================================
// BUILD METHOD
//==================================================================================================================

/**
 * Build or modify a GridSet.
 * Remark: In modification cases, existing faces are re-used (but not subsets).
 *         The face order is kept to avoid losing associativities.
 *   @param iAbsOffsets
 *      The absolute offsets where the faces must be created.
 *   @param iSubsetsPrefix
 *      The prefix of subsets where to add the faces.
 *      The subset prefix must be specified for each face.
 *   @return
 *      S_OK         all is done
 *      E_INVALIDARG if lists does not have the same size or if 2 faces have the same absolute offsets
 *      E_FAIL       an error occured
 *      
 */
 virtual HRESULT Build(CATListOfDouble iAbsOffsets, CATListOfCATUnicodeString iSubsetsPrefix) =0;

};
CATDeclareHandler (CATIGSMGridSet, CATBaseUnknown);
#endif
