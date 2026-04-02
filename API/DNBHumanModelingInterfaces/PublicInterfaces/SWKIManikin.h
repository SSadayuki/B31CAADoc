// COPYRIGHT DASSAULT SYSTEMES 2003
#ifndef _SWKIManikin_h
#define _SWKIManikin_h

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

// *****************************************************************************
// Framework DNBHumanModelingInterfaces
// Copyright Safework Inc.
// *****************************************************************************
//  Abstract:
//  ---------
//       SWKIManikin interface.
//       This interface offers non-IDL manikin services.
// *****************************************************************************
//  Usage:
//  ------
//
// *****************************************************************************
//  Inheritance:
//  ------------
//
//  SWKIManikinPart
//
// *****************************************************************************
//  Main Methods:
//  -------------
//
//    GetName
//    SetName
//    GetAnthro
//    GetBody
//    GetVision
//    GetIKManager
//    GetBodyNode
//    GetConstraintsNode
//    GetLoadsNode
//    GetPositionNode
//    GetPropertiesNode
//    GetSettingsNode
//    GetErgoAnalysis
//    IsBuilt
//    IsRootProduct
//    IsStandard
//    IsForearmModel
//    GetReferential
//    SetReferential
//    GetReferentialCoordinates
//    GetAbsReferentialCoordinates
//    SetReferentialCoordinates
//    GetReferentialAxis
//    GetAbsReferentialAxis
//    PasteFromManikin
//    PasteGraphicalPropertiesFrom
//    BuildManikin
//    DispatchCreation
//    DispatchDeletion
//    WriteToStreamData
//    IsDeleted
//    IsInBuild
//    GetCustomizedJoints
//    GetCustomizedJointAtIndex
//    AddCustomizedJoint
//    RemoveCustomizedJoint
// *****************************************************************************
//  History
//  -------
//
//  Author: Jean-Guy AUGUSTIN
//  Date  : 18/02/00
//  Goal  : Creation
//
//  Author: Jean-Guy AUGUSTIN
//  Date  : 26/09/00
//  Goal  : Revision
// *****************************************************************************
//
// --- DNBHumanModelingInterfaces
#include "SWKIManikinPart.h"
#include "SWKEnums.h"
#include "SWShortNames.h"
//
// --- System
#include "CATBooleanDef.h"
//
// --- DNBHumanModeling
class SWManikin;
class SWDBAnthro;
class SWKHmiPosturalScoreAnalysis;
//
// --- DNBHumanModelingInterfaces
class SWKIAnthro;
class SWKIBody;
class SWKIConstraintNode;
class SWKICustomizedJoint;
class SWKIErgoAnalysis;
class SWKIIKManager;
class SWKILoadNode;
class SWKIManikin;
class SWKIManikinPositionNode;
class SWKIManikinPropertiesNode;
class SWKIManikinSettingsNode;
class SWKISegmentNode;
class SWKIVision;
//
// ---  Mathematics
class CATMathAxis;
class CATMathDirection;
class CATMathPoint;
//
// --- System
class CATListValCATBaseUnknown_var;
class CATUnicodeString;

#ifdef _WINDOWS_SOURCE
#ifdef __SWKHumanModelingItf
#define ExportedBySWKHumanModelingItf __declspec(dllexport)
#else
#define ExportedBySWKHumanModelingItf __declspec(dllimport)
#endif
#else
#define ExportedBySWKHumanModelingItf
#endif

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedBySWKHumanModelingItf IID IID_SWKIManikin;
#else
extern "C" const IID IID_SWKIManikin;
#endif

/**
  *  This interface provides non-IDL manikin services.
  **/

class ExportedBySWKHumanModelingItf SWKIManikin : public SWKIManikinPart
{
	CATDeclareInterface;

  public:

	/**
	  * @return The instance name of the manikin.
	  **/
	virtual CATUnicodeString GetName() const = 0;

	/**
	  * Rename the manikin.
	  *
	  * @param piName The new name of the manikin.
	  * @return A status code indicating success or failure.
	  **/
	virtual HRESULT SetName(const CATUnicodeString & piName) = 0;

	/**
	  * @return The anthropometry of the manikin.
	  **/
	virtual SWKIAnthro * GetAnthro() const = 0;

	/**
	  * @return The body of the manikin.
	  **/
	virtual SWKIBody * GetBody() const = 0;

	/**
	  * @return The vision of the manikin.
	  **/
	virtual SWKIVision * GetVision() const = 0;

	/**
	  * @return The Inverse Kinematics (IK) manager of the manikin.
	  **/
	virtual SWKIIKManager * GetIKManager() const = 0;

	/**
	  * @return The body node of the manikin
	  **/
	virtual SWKISegmentNode * GetBodyNode() const = 0;

	/**
	  * @return The Constraints node of the manikin
	  **/
	virtual SWKIConstraintNode * GetConstraintsNode() const = 0; 

	/**
	  * @return The Loads node of the manikin
	  **/
	virtual SWKILoadNode * GetLoadsNode() const = 0; 

	/**
	  * Retrieve the position node of the manikin (the one displayed in the spec tree).
	  **/
	virtual SWKIManikinPositionNode * GetPositionNode() const = 0;

	/**
	  * Retrieve the properties node of the manikin (the one displayed in the spec tree).
	  **/
	virtual SWKIManikinPropertiesNode * GetPropertiesNode() const = 0;

	/**
	  * Retrieve the settings node of the manikin (the one displayed in the spec tree).
	  **/
	virtual SWKIManikinSettingsNode * GetSettingsNode() const = 0;

	/**
	  * @return The analysis object for this manikin.
	  **/
	virtual SWKIErgoAnalysis * GetErgoAnalysis() const = 0; 

	/**
	  * @return <code><strong><font color = "blue">TRUE</font></strong></code>
	  * if this manikin's internal manikin is built. (i.e. it has internal structure)
	  * <code><strong><font color = "blue">FALSE</font></strong></code> otherwise.
	  **/
	virtual boolean IsBuilt() const = 0;

	/**
	  * @return <code><strong><font color = "blue">TRUE</font></strong></code>
	  * if this manikin is the root of the product containing it, 
	  * <code><strong><font color = "blue">FALSE</font></strong></code> otherwise.
	  **/
	virtual boolean IsRootProduct() const = 0;

	/**
	  * @return <code><strong><font color = "blue">TRUE</font></strong></code>
	  * if this manikin is standard (i.e. is 5th, 50th or 95th percentile)
	  * <code><strong><font color = "blue">FALSE</font></strong></code> otherwise.
	  **/
	virtual boolean IsStandard() const = 0;

	enum SWKForearmModel {WholeBody = 0, RightForearm = 1, LeftForearm = 2};

	/**
	  * @return The forearm model type.
	  * If the manikin is constructed as a forearm model,
	  * then the method will retrun <code>RightForearm</code>
	  * or <code>LeftForearm</code>.  Otherwise, it will
	  * return <code>WholeBody</code>.
	  **/
	virtual SWKIManikin::SWKForearmModel IsForearmModel() const = 0;

	enum SWKReferential
	{
		SWKRefNone = -1,
		SWKRefEyePoint = 0,
		SWKRefHPoint = 1,
		SWKRefLeftFoot = 2,
		SWKRefRightFoot = 3,
		SWKRefLowestFoot = 4,
		SWKRefCrotch = 5,
		SWKRefLeftHand = 6,
		SWKRefRightHand = 7,
		SWKRefBetweenFeet = 8
	};

	/**
	  * Get the referential type of this manikin.
	  * The referential type defined which segment remains fixed
	  * while the manikin is being assigned postures.  The possible values are as
	  * described in the enum SWKReferential.
	  **/
	virtual SWKIManikin::SWKReferential GetReferential() = 0;

	/**
	  * Set the referential type of this manikin.
	  * The referential type defined which segment remains fixed
	  * while the manikin is being assigned postures.  The possible values are as
	  * described in the enum SWKReferential.
	  **/
	virtual void SetReferential(SWKIManikin::SWKReferential piReferential) = 0;

	/**
	  * Get the coordinates of the referential pioRef for this manikin.
	  *
	  * @param pioRef The referential type, from which the coordinates will be calculated.
	  *  Method <code>GetReferential()</code> is called if the value of this parameter is SWKRefNone.
	  **/
	virtual CATMathPoint GetReferentialCoordinates(SWKIManikin::SWKReferential & pioRef) = 0;

	/**
	  * Get the absolute coordinates of the referential pioRef for this manikin.
	  *
	  * @param pioRef The referential type, from which the coordinates will be calculated.
	  *  Method <code>GetReferential()</code> is called if the value of this parameter is SWKRefNone.
	  **/
	virtual CATMathPoint GetAbsReferentialCoordinates(SWKIManikin::SWKReferential & pioRef) = 0;

	/**
	  * Set the coordinates of the referential piRef of this manikin to the 
	  * piPoint position.
	  **/
	virtual void SetReferentialCoordinates(const CATMathPoint & piPoint,
										   SWKIManikin::SWKReferential piRef) = 0;

	/**
	  * Get the matrix of the referential pioRef for this manikin.
	  *
	  * @param pioRef The referential value, from which the matrix will be calculated.
	  * If the value of this parameter is <code>SWKRefNone</code>, it will be overwritten
	  * with the current referential of the manikin.
	  *
	  * @return The matrix giving the position/orientation of the referential,
	  * in local coordinates.
	  **/
	virtual CATMathAxis GetReferentialAxis(SWKIManikin::SWKReferential & pioRef) = 0;

	/**
	  * Get the absolute matrix of the referential pioRef for this manikin.
	  *
	  * @param pioRef The referential value, from which the matrix will be calculated.
	  * If the value of this parameter is <code>SWKRefNone</code>, it will be overwritten
	  * with the current referential of the manikin.
	  *
	  * @return The matrix giving the position/orientation of the referential,
	  * in global coordinates.
	  **/
	virtual CATMathAxis GetAbsReferentialAxis(SWKIManikin::SWKReferential & pioRef) = 0;

	/**
	  * Paste another manikin on this one.
	  *
	  * @param piAnotherManikin The manikin to paste (the source).
	  * @return <code>S_OK</code> if success, or an error code indicating failure.
	  **/
	virtual HRESULT PasteFromManikin(SWKIManikin * piAnotherManikin, boolean piNeedToRebuildRep = TRUE) = 0;

	/**
	  * Paste graphical properties from another manikin.
	  *
	  * @param piSourceManikin The manikin whose graphical properties must be pasted (the source).
	  * @return <code>S_OK</code> if success, or an error code indicating failure.
	  **/
	virtual HRESULT PasteGraphicalPropertiesFrom(SWKIManikin * piSourceManikin) = 0;

	/**
	  * Initialize the internal manikin.
	  * <strong>This method is to be used by the system only</strong>.
	  **/
	virtual HRESULT BuildManikin(int piSex = 0, double piPercentile = 50,
								SWDBAnthro * piPopulationDatabase = NULL) = 0;

	/**
	  * Initialize the internal manikin.
	  * <strong>This method is to be used by the system only</strong>.
	  **/
	virtual HRESULT DispatchCreation() = 0;

	/**
	  * Delete the internal manikin.
	  * <strong>This method is to be used by the system only</strong>.
	  **/
	virtual HRESULT DispatchDeletion() = 0;

	/**
	  * Write the manikin information internally.
	  * <strong>This method is to be used by the system only</strong>.
	  **/
	virtual HRESULT WriteToStreamData(SWKIManikin * piManikin) = 0;

	/**
	  * Called when the manikin is deleted.
	  * <strong>This method is to be used by the system only</strong>.
	  **/
	virtual void IsDeleted() = 0;

	/**
	  * Called to know if we are creating the manikin or not.
	  **/
	virtual boolean IsInBuild() = 0;

	/**
	  * Get the postural score analysis.
	  **/
	virtual SWKHmiPosturalScoreAnalysis * GetPosturalScoreAnalysis() = 0;

	/**
	  * Get the list of Customized Joint of this manikin.
	  **/
	virtual void GetCustomizedJoints(CATListValCATBaseUnknown_var & poJoints) = 0;

	/**
	  * Get the Customized Joint at the index piIndex.
	  **/
	virtual SWKICustomizedJoint * GetCustomizedJointAtIndex(int piIndex) const = 0;

	/**
	  * Add a new customized joint to this manikin and give an unique name.
	  **/
	virtual void AddCustomizedJoint(SWKICustomizedJoint *& poJoint,
									const SWShortName & piSegment1, 
									const SWShortName & piSegment2,
									const SWKEDOF & piDOFID) = 0;

	/**
	  * Remove the customized joint named piName.
	  **/
	virtual void RemoveCustomizedJoint(const CATUnicodeString & piName) = 0;
};

CATDeclareHandler(SWKIManikin, SWKIManikinPart);
#endif
