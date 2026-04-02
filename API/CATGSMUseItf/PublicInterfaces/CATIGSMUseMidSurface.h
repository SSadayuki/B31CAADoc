/* -*-c++-*- */
#ifndef CATIGSMUseMidSurface_H
#define CATIGSMUseMidSurface_H

// COPYRIGHT DASSAULT SYSTEMES 2019

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATGSMUseItfExportedBy.h"
#include "CATIMmiMechanicalFeature.h"
#include "CATLISTV_CATIMmiMechanicalFeature.h"
#include "CATBaseUnknown.h"
#include "CATGSMMidSurfaceDef.h"
#include "CATICkeParm.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID  IID_CATIGSMUseMidSurface;
#else
extern "C" const IID IID_CATIGSMUseMidSurface;
#endif

/**
* Interface to Mid Surface feature.
* <b>Role</b>: Allows you to gets or/and sets the definition elements of a Mid Surface
* @see CATIGSMUseFactory#CreateMidSurface
*/

class ExportedByCATGSMUseItf CATIGSMUseMidSurface : public CATBaseUnknown
{
	CATDeclareInterface;

public:

	/**
	* Gets the input solid from which the mid surface will be extracted.
	*   @param ospElem
	*      Solid feature
	*/
	virtual HRESULT GetInputSolid(CATIMmiMechanicalFeature_var & ospElem) = 0;

	/**
	* Sets the input solid from which the mid surface will be extracted.
	*   @param ispElem
	*      Solid feature
	*/
	virtual HRESULT SetInputSolid(const CATIMmiMechanicalFeature_var & ispElem) = 0;

	/**
	* Gets MidSurface creation mode : by face pairs or by faces to offset or automatic.
	*  @param oCreationMode
	*/
	virtual HRESULT GetCreationMode(CATGSMMidSurfaceCreationMode & oCreationMode) = 0;

	/**
	* Sets MidSurface creation mode : by face pairs or by faces to offset or automatic.
	*  @param iCreationMode
	*/
	virtual HRESULT SetCreationMode(const CATGSMMidSurfaceCreationMode & iCreationMode) = 0;

	/**
	* Gets the number of pairs of faces.
	* Used for Face Pairs creation mode only
	*   @param oNbFacePairs
	*      number of pairs of faces
	*/
	virtual HRESULT GetNbFacePairs(int & oNbFacePairs) = 0;

	/**
	* Gets all the pairs of faces.
	* Used for Face Pairs creation mode only
	*   @param ospListFace1
	*   @param ospListFace2
	*/
	virtual HRESULT GetAllFacePairs(CATLISTV(CATIMmiMechanicalFeature_var) & ospListFace1, CATLISTV(CATIMmiMechanicalFeature_var) & ospListFace2) = 0;

	/**
	* Add a new face pair.
	* Used for Face Pairs creation mode only
	*   @param ispFace1
	*      face from input solid
	*   @param ispFace2
	*      face from input solid
	*/
	virtual HRESULT AddFacePair(const CATIMmiMechanicalFeature_var & ispFace1, const CATIMmiMechanicalFeature_var & ispFace2) = 0;

	/**
	* Remove a face pair.
	* Used for Face Pairs creation mode only
	*   @param iIndex
	*      index in list of face pairs
	*      if index is null, all face pairs are removed
	*/
	virtual HRESULT RemoveFacePair(int iIndex) = 0;

	/**
	* Swap a face pair.
	* Used for Face Pairs creation mode only
	* swap input faces
	*   @param iIndex
	*      index in list of face pairs
	*/
	virtual HRESULT SwapFacePair(int iIndex) = 0;

	/**
	* Sets a face pair.
	* Used for Face Pairs creation mode only
	*   @param iIndex
	*      index in list of face pairs
	*   @param ispFace1
	*      face from input solid
	*   @param ispFace2
	*      face from input solid
	*/
	virtual HRESULT SetFacePair(int iIndex, const CATIMmiMechanicalFeature_var & ispFace1, const CATIMmiMechanicalFeature_var & ispFace2) = 0;

	/**
	* Gets a face pair.
	* Used for Face Pairs creation mode only
	*   @param iIndex
	*      index in list of face pairs
	*   @param ispFace1
	*      face from input solid
	*   @param ispFace2
	*      face from input solid
	*/
	virtual HRESULT GetFacePair(int iIndex, CATIMmiMechanicalFeature_var & ospFace1, CATIMmiMechanicalFeature_var & ospFace2) = 0;


	/**
	* Gets the number of faces to offset.
	* Used for Faces To Offset creation mode only
	*   @param oNbFacesToOffset
	*      number of faces to offset
	*/
	virtual HRESULT GetNbFacesToOffset(int & oNbFacesToOffset) = 0;

	/**
	* Gets all the faces to offset.
	* Used for Faces To Offset creation mode only
	*   @param ospListFacesToOffset
	*/
	virtual HRESULT GetAllFacesToOffset(CATLISTV(CATIMmiMechanicalFeature_var) & ospListFacesToOffset) = 0;

	/**
	* Add a new face to offset.
	* Used for Faces To Offset creation mode only
	*   @param ispFace
	*      face from input solid
	*/
	virtual HRESULT AddFaceToOffset(const CATIMmiMechanicalFeature_var & ispFace) = 0;

	/**
	* Remove a face to offset.
	* Used for Faces To Offset creation mode only
	*   @param iIndex
	*      index in list of face pairs
	*      if index is null, all faces to offset are removed
	*/
	virtual HRESULT RemoveFaceToOffset(int iIndex) = 0;

	/**
	* Sets a face to offset.
	* Used for Faces To Offset creation mode only
	*   @param iIndex
	*      index in list of faces to offset
	*   @param ispFace
	*      face from input solid
	*/
	virtual HRESULT SetFaceToOffset(int iIndex, const CATIMmiMechanicalFeature_var & ispFace) = 0;

	/**
	* Gets a face to offset.
	* Used for Faces To Offset creation mode only
	*   @param iIndex
	*      index in list of face pairs
	*   @param ispFace
	*      face from input solid
	*/
	virtual HRESULT GetFaceToOffset(int iIndex, CATIMmiMechanicalFeature_var & ospFace) = 0;


	/**
	* Gets the offset value.
	* Used for Faces To Offset creation mode only
	*   @param ospOffsetValue
	*      offset ratio
	*/
	virtual    HRESULT GetOffsetValue(CATICkeParm_var & ospOffsetValue) = 0;

	/**
	* Gets the offset ratio.
	*   @param ospOffsetRatio
	*      offset ratio
	*/
	virtual    HRESULT GetOffsetRatio(CATICkeParm_var & ospOffsetRatio) = 0;

	/**
	* Do not use - Internal Use only.
	*/
	virtual    HRESULT SetOffsetRatio(const CATICkeParm_var & ispOffsetRatio) = 0;

	/**
	* Gets the limiting mid surface used to relimiting current mid surface.
	*   @param ospLimitingMidSurface
	*      surface feature
	*/
	virtual HRESULT GetLimitingMidSurface(CATIMmiMechanicalFeature_var & ospLimitingMidSurface) = 0;

	/**
	* Sets the limiting mid surface used to relimiting current mid surface.
	*   @param ospLimitingMidSurface
	*      surface feature
	*/
	virtual HRESULT SetLimitingMidSurface(const CATIMmiMechanicalFeature_var & ispLimitingMidSurface) = 0;

	/**
	* Gets the Threshold.
	*   @param ospThreshold
	*      Threshold
	*/
	virtual HRESULT GetThreshold(CATICkeParm_var & ospThreshold) = 0;

	/**
	* Do not use - Internal Use only.
	*/
	virtual    HRESULT SetThreshold(const CATICkeParm_var & ispThreshold) = 0;

	/**
	* Gets FacesToOffset's Computation mode : by Manual or Automatic.
	*  @param oComputationMode
	*/
	virtual HRESULT GetComputationMode(CATGSMMidSurfaceComputationMode & oComputationMode) = 0;

	/**
	* Sets FacesToOffset's Computation mode : by Manual or Automatic.
	*  @param iComputationMode
	*/
	virtual HRESULT SetComputationMode(const CATGSMMidSurfaceComputationMode & iComputationMode) = 0;

	/**
	* Gets Computation method of FacesToOffset's Automatic compu mode : by Maximum or Minimum or Average.
	*  @param oComputationMethod
	*/
	virtual HRESULT GetComputationMethod(CATGSMMidSurfaceComputationMethod & oComputationMethod) = 0;

	/**
	* Sets Computation method of FacesToOffset's Automatic compu mode : by Maximum or Minimum or Average.
	*  @param iComputationMethod
	*/
	virtual HRESULT SetComputationMethod(const CATGSMMidSurfaceComputationMethod & iComputationMethod) = 0;

	/**
	* Gets Automatic Thickness Threshold in Automatic creation mode : by Maximum thickness.
	*  @param oAutoThicknessThreshold
	*/
	virtual    HRESULT GetAutoThicknessThreshold(int & oAutoThicknessThreshold) = 0;

	/**
	* Sets Automatic Thickness Threshold in Automatic creation mode : by Maximum thickness.
	*  @param oAutoThicknessThreshold
	*/
	virtual    HRESULT SetAutoThicknessThreshold(const int & iAutoThicknessThreshold) = 0;

	/**
	* Gets the boolean telling whether partial surfaces as results are accepted or not.
	*  @param oAllowPartialResult
	*/
	virtual HRESULT GetAllowPartialResult(CATBoolean & oAllowPartialResult) = 0;

	/**
	* Sets the boolean telling whether partial surfaces as results are accepted or not.
	*  @param iAllowPartialResult
	*/
	virtual HRESULT SetAllowPartialResult(const CATBoolean & iAllowPartialResult) = 0;

	/**
	* Gets the OffsetSelectedFaceMode : Set(1) or Unset(0).
	*  @param oOffsetSelectedFaceMode
	*/
	virtual    HRESULT GetOffsetSelectedFaceMode(int & oOffsetSelectedFaceMode) = 0;

	/**
	* Sets the OffsetSelectedFaceMode : Set(1) or Unset(0).
	*  @param iOffsetSelectedFaceMode
	*/
	virtual    HRESULT SetOffsetSelectedFaceMode(const int & iOffsetSelectedFaceMode) = 0;

	/**
	* Gets the integer telling whether the mid surface should be computed, provided it.
	* is possible, based on the offset operator only
	*  @param oOffsetMode
	*      <b>Legal values</b>:
	*      <ul>
	*         <li>0: Do not base the computation on the offset operator only.</li>
	*         <li>1: Provided it is possible, base the computation on the offset operator only.</li>
	*      </ul>
	*/
	virtual HRESULT GetOffsetMode(int & oOffsetMode) = 0;

	/**
	* Sets the integer telling whether the mid surface should be computed, provided it.
	* is possible, based on the offset operator only
	*  @param iOffsetMode
	*      <b>Legal values</b>:
	*      <ul>
	*         <li>0: Do not base the computation on the offset operator only.</li>
	*         <li>1: Provided it is possible, base the computation on the offset operator only.</li>
	*      </ul>
	*/
	virtual HRESULT SetOffsetMode(const int & iOffsetMode) = 0;

};

//-----------------------------------------------------------------------
CATDeclareHandler(CATIGSMUseMidSurface, CATBaseUnknown);

#endif
