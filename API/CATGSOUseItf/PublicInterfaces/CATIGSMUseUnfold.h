/* -*-c++-*- */
#ifndef CATIGSMUseUnfold_H
#define CATIGSMUseUnfold_H

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
* @CAA2Level L1
* @CAA2Usage U3
*/


#include "ExportedByCATGSOUseItf.h"
#include "CATBaseUnknown.h"

#include "CATGSMTransferDef.h"
#include "CATGSMUnfoldDef.h"

class CATListValCATIMmiMechanicalFeature_var;
class CATIMmiMechanicalFeature_var;
class CATIGSMUseDirection_var;
#include "CATDataType.h"

// __________________________________________________________________
// 
// Declares IID_CATIGSMUseUnfold
// __________________________________________________________________
//
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSOUseItf IID IID_CATIGSMUseUnfold;
#else
extern "C" const IID IID_CATIGSMUseUnfold;
#endif

// __________________________________________________________________
// 
// Declares CATIGSMUseUnfold
// __________________________________________________________________
//
/**
* Interface to Unfold feature.
* <b>Role</b>:Allows to access data of the Unfold feature.
* @see CATIGSOUseFactory#CreateUnfold
*/
class ExportedByCATGSOUseItf CATIGSMUseUnfold : public CATBaseUnknown
{
	CATDeclareInterface;

public: 
	/**
	* Set the surface to unfold.
	*   @param ihSpecObject
	*      the surface to unfold.
	*/
	virtual HRESULT SetSurfaceToUnfold(const CATIMmiMechanicalFeature_var &ihSpecObject)=0;
	/**
	* Gets the surface to unfold.
	*   @param ohSpecObject
	*      the surface to unfold.
	*/
	virtual HRESULT GetSurfaceToUnfold(CATIMmiMechanicalFeature_var &ohSpecObject)=0;

	/**
	* Set the origin of the surface to unfold.
	*   @param ihSpecObject
	*      the origin
	*/
	virtual HRESULT SetOriginToUnfold(const CATIMmiMechanicalFeature_var &ihSpecObject)=0;
	/**
	* Gets the origin of the surface to unfold.
	*   @param ohSpecObject
	*      the origin of the surface to unfold.
	*/
	virtual HRESULT GetOriginToUnfold(CATIMmiMechanicalFeature_var &ohSpecObject)=0;

	/**
	* Set the direction of the surface to unfold.
	*   @param ihSpecObject
	*      the direction
	*/
	virtual HRESULT SetDirectionToUnfold(const CATIMmiMechanicalFeature_var &ihSpecObject)=0;
	/**
	* Get the direction of the surface to unfold.
	*   @param ohSpecObject
	*      the direction
	*/
	virtual HRESULT GetDirectionToUnfold(CATIMmiMechanicalFeature_var &ohSpecObject)=0;


	/**
	* Gets the plane where to unfold.
	*   @param ohSpecObject
	*      the plane where to unfold.
	*/
	virtual HRESULT GetTargetSurface(CATIMmiMechanicalFeature_var &ohSpecObject)=0;
	/**
	* Set the the plane where to unfold.
	*   @param ihSpecObject
	*      the plane where to unfold.
	*/
	virtual HRESULT SetTargetSurface(const CATIMmiMechanicalFeature_var &ihSpecObject)=0;

	/**
	* Gets the plane where to unfold.
	*   @param ohSpecObject
	*      the plane where to unfold.
	*/
	virtual HRESULT GetTargetOrigin(CATIMmiMechanicalFeature_var &ohSpecObject)=0;
	/**
	* Set the the plane where to unfold.
	*   @param ihSpecObject
	*      the plane where to unfold.
	*/
	virtual HRESULT SetTargetOrigin(const CATIMmiMechanicalFeature_var &ihSpecObject)=0;

	/**
	* Gets the plane where to unfold.
	*   @param ohSpecObject
	*      the plane where to unfold.
	*/
	virtual HRESULT GetTargetDirection(CATIGSMUseDirection_var &ohDirection)=0;
	/**
	* Set the the plane where to unfold.
	*   @param ihSpecObject
	*      the plane where to unfold.
	*/
	virtual HRESULT SetTargetDirection(const CATIGSMUseDirection_var &ihDirection)=0;

	/**
	* Gets the specifications to tear.
	*   @param oSpecObjectsList
	*      the specifications to tear.
	*/
	virtual HRESULT GetElementsToTear(CATListValCATIMmiMechanicalFeature_var &oSpecObjectsList)=0;
	/**
	* Append a specification to tear.
	*   @param ihSpecObject
	*      the specification to tear to append.
	*/
	virtual HRESULT AppendElementsToTear(const CATIMmiMechanicalFeature_var &ihSpecObject)=0;
	/**
	* Append specifications to tear.
	*   @param iSpecObjectsList
	*      the specifications to tear to append.
	*/
	virtual HRESULT AppendElementsToTear(const CATListValCATIMmiMechanicalFeature_var &iSpecObjectsList)=0;
	/**
	* Removes a specification to tear.
	*   @param i
	*      the position of the specifications to tear to remove.
	*/
	virtual HRESULT RemoveElementToTear(const CATLONG32 i)=0;
	/**
	* Removes a specification to tear.
	*   @param ihSpecObject
	*      the specification to remove.
	*/
	virtual HRESULT RemoveElementToTear(CATIMmiMechanicalFeature_var &ihSpecObject)=0;

	/**
	* Removes all the specification to tear.
	*/
	virtual HRESULT RemoveAllElementsToTear()=0;
	/**
	* Replaces the specification at the position i in the list of specification to tear by ihSpecObject.
	*   @param i
	*      the position of the specifications to tear to remove.
	*   @param iSpecObjectsList
	*      the specification to tear to append.
	*/
	virtual HRESULT ReplaceElementsToTear(const CATLONG32 i, const CATIMmiMechanicalFeature_var &ihSpecObject)=0;

	/**
	* Gets the transfered elements.
	* <br> Note: It references its specification and its type of transformation.
	*   @param oSpecObjectsList
	*      List of Specifications  to transfer 
	*/
	virtual HRESULT GetTransferedElements(CATListValCATIMmiMechanicalFeature_var &oSpecObjectsList) =0;

	/**
	* Appends an element to transfer.
	*   @param ihSpecObject
	*      Specification to transfer 
	*   @param iTypeOfTransfer
	*      type of tranfer 
	* @see CATGSMTypeOfTransfer
	*/
	virtual HRESULT AppendElementsToTransfer(const CATIMmiMechanicalFeature_var &ihSpecObject, CATGSMTypeOfTransfer iTypeOfTransfer)=0;

	/**
	* Remove an elements to transfer.
	*   @param i
	*      the position of the specification to remove 
	*/
	virtual HRESULT RemoveElementToTransfer(const CATLONG32 i)=0;
	/**
	* Replace an elements to transfer.
	*   @param i
	*      the position of the specification to replace 
	*   @param ihSpecObject
	*      the specification to transfer  to append.
	*/
	virtual HRESULT ReplaceElementsToTransfer(const CATLONG32 i, const CATIMmiMechanicalFeature_var &ihSpecObject)=0;
	/**
	* Replace a type of transfer.
	*   @param i
	*      the position of the specification type to replace 
	*   @param iTypeOfTransfer
	*      type of tranfer 
	* @see CATGSMTypeOfTransfer
	*/
	virtual HRESULT ReplaceElementsToTransfer(const CATLONG32 i, CATGSMTypeOfTransfer iTypeOfTransfer)=0;

	/**
	* Sets the type of surface to unfold.
	*   @param iType
	*      CATGSMUndefinedSurfaceType if the type is undefined,
	*      CATGSMRuledSurfaceType if the type of surface is ruled,
	*	   CATGSMAnySurfaceType if the type of surface is all
	* @see CATGSMUnfoldSurfaceType
	*/
	virtual HRESULT SetSurfaceType(const CATGSMUnfoldSurfaceType iType)=0;
	/**
	* Gets the type of surface to unfold.
	*   @param oType
	*      CATGSMUndefinedSurfaceType if the type is undefined,
	*      CATGSMRuledSurfaceType if the type of surface is ruled,
	*	   CATGSMAnySurfaceType if the type of surface is all
	* @see CATGSMUnfoldSurfaceType
	*/
	virtual HRESULT GetSurfaceType(CATGSMUnfoldSurfaceType& oType)=0;
	/**
	* Sets the target surface orientation mode.
	*   @param iMode
	*      CATGSMUnfoldTargetOrientationMode_None if no axis inversion
	*	   CATGSMUnfoldTargetOrientationMode_ReverseU if U inversion axis
	*	   CATGSMUnfoldTargetOrientationMode_ReverseV if V inversion axis
	*	   CATGSMUnfoldTargetOrientationMode_ReverseUReverseV if U inversion axis and V inversion axis
	*      CATGSMUnfoldTargetOrientationMode_SwapReverseU if U inversion axis and swap U and V axis
	*	   CATGSMUnfoldTargetOrientationMode_SwapReverseV if V inversion axis and swap U and V axis
	*	   CATGSMUnfoldTargetOrientationMode_SwapReverseUReverseV if U inversion axis, V inversion axis and swap U and V axis
	*	   CATGSMUnfoldTargetOrientationMode_Swap if swap U and V axis
	* @see CATGSMUnfoldTargetOrientationMode
	*/
	virtual HRESULT SetTargetOrientationMode(const CATGSMUnfoldTargetOrientationMode iMode)=0;
	/**
	* Gets the target surface orientation mode.
	*   @param oMode
	*      CATGSMUnfoldTargetOrientationMode_None if no axis inversion
	*	   CATGSMUnfoldTargetOrientationMode_ReverseU if U inversion axis
	*	   CATGSMUnfoldTargetOrientationMode_ReverseV if V inversion axis
	*	   CATGSMUnfoldTargetOrientationMode_ReverseUReverseV if U inversion axis and V inversion axis
	*      CATGSMUnfoldTargetOrientationMode_SwapReverseU if U inversion axis and swap U and V axis
	*	   CATGSMUnfoldTargetOrientationMode_SwapReverseV if V inversion axis and swap U and V axis
	*	   CATGSMUnfoldTargetOrientationMode_SwapReverseUReverseV if U inversion axis, V inversion axis and swap U and V axis
	*	   CATGSMUnfoldTargetOrientationMode_Swap if swap U and V axis
	* @see CATGSMUnfoldTargetOrientationMode
	*/
	virtual HRESULT GetTargetOrientationMode(CATGSMUnfoldTargetOrientationMode& oMode)=0;

	/**
	*	Sets the positioning orientation when the reference origin is located on an edge to tear.
	*		@param iOrientation
	*			CATGSMUnfoldEdgeToTearUndefinedOrientation if the reference origin is not located on an edge to tear
	*			CATGSMUnfoldEdgeToTearDefaultOrientation if it is the default orientation
	*			CATGSMUnfoldEdgeToTearInversedOrientation if it is the inverse of the default orientation
	*/
	virtual HRESULT SetEdgeToTearPositioningOrientation(const CATGSMUnfoldEdgeToTearPositioning iOrientation)=0;

	/**
	*	Gets the positioning orientation when the reference origin is located on an edge to tear.
	*		@param iOrientation
	*			CATGSMUnfoldEdgeToTearUndefinedOrientation if the reference origin is not located on an edge to tear
	*			CATGSMUnfoldEdgeToTearDefaultOrientation if it is the default orientation
	*			CATGSMUnfoldEdgeToTearInversedOrientation if it is the inverse of the default orientation
	*/
	virtual HRESULT GetEdgeToTearPositioningOrientation(CATGSMUnfoldEdgeToTearPositioning& oOrientation)=0;

	/**
	* Sets the display mode of the distortion on the feature.
	*   @param ibMode
	*		TRUE : distortions are displayed
	*		FALSE : distortions are not displayed
	*/
	virtual HRESULT SetDisplayDistortionMode(const CATBoolean &ibMode) = 0;

	/**
	* Gets the display mode of the distortion on the feature.
	*   @param obMode
	*		TRUE : distortions are displayed
	*		FALSE : distortions are not displayed
	*/
	virtual HRESULT GetDisplayDistortionMode(CATBoolean &obMode) = 0;
};

CATDeclareHandler(CATIGSMUseUnfold, CATBaseUnknown);

#endif // CATIGSMUseUnfold_H
