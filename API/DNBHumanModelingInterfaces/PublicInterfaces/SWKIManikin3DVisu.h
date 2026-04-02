// COPYRIGHT DASSAULT SYSTEMES 2003
#ifndef _SWKIManikin3DVisu_h
#define _SWKIManikin3DVisu_h

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
//
//    SWKIManikin3DVisu interface.
//    This interface offers non-IDL manikin visu services.
//
// *****************************************************************************
//  Usage:
//  ------
//
// *****************************************************************************
//  Inheritance:
//  ------------
//
//    SWKI3DVisu
//
// *****************************************************************************
//  Main Methods:
//  -------------
//
//    SetOldDisplayFlag
//    GetOldDisplayFlag
//    GetDisplayFlagBeforeHide
//    SetOldViewpoint
//    GetOldViewPoint
//    Hide
//    Show
//    IsHidden
//    GetBodyNode
//    GetConstraintsNode
//    GetLoadsNode
//    GetPositionNode
//    GetManikinPropertiesNode
//    GetManikinSettingsNode
//    BuildBaseMesh
//    BuildBaseMesh
//    UpdateMultiresMesh
//    UpdateMultiresMesh
//    GetBuildingRepFlag
//    SetBuildingRepFlag
// *****************************************************************************
//  History
//  -------
//
//  Author: Olivier LAMOTTE
//  Date  : 00/02/18
//  Goal  : Creation
// *****************************************************************************
//
// --- DNBHumanModelingInterfaces
#include "SWKI3DVisu.h"
//
// --- System
#include "CATBooleanDef.h"
#include "CATListOfInt.h"
//
// --- DNBHumanModelingInterfaces
class SWKIBody;
class SWKIConstraintNode;
class SWKILoadNode;
class SWKIManikinPositionNode;
class SWKIManikinPropertiesNode;
class SWKIManikinSettingsNode;
class SWKISegmentNode;
//
// --- Visualization
class CAT3DViewpoint;
//
// --- System
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
extern ExportedBySWKHumanModelingItf IID IID_SWKIManikin3DVisu;
#else
extern "C" const IID IID_SWKIManikin3DVisu;
#endif


/**
  * This interface is used by the body elements worksop.
  * It is used to store a certain number of information
  * on the manikin subject to the workshop change
  * (from PRDWorkshop to SWKBodyElementsWks)
  * This information is retrieved when it is time to switch
  * back to the manikin workshop.
  **/

class ExportedBySWKHumanModelingItf SWKIManikin3DVisu : public SWKI3DVisu
{
	CATDeclareInterface;

  public:
	
	/**
	  * Store the Old display flag.
	  **/
	virtual void SetOldDisplayFlag(const int piDisplayFlag) = 0;

	/**
	  * Return the Old display flag
	  **/
	virtual int GetOldDisplayFlag() const = 0;

	/**
	  * If the manikin is not hidden, this method returns the same
	  * value as method <code>GetDisplayFlag()</code>.
	  * If the manikin is hidden, this method returns the display flag
	  * the manikin had just before it was hidden.
	  **/
	virtual int GetDisplayFlagBeforeHide() const = 0;

	/**
	  * Store the Old Viewpoint
	  **/
	virtual void SetOldViewpoint(CAT3DViewpoint * piViewpoint) = 0;

	/**
	  * Return the Old Viewpoint
	  **/
	virtual CAT3DViewpoint * GetOldViewpoint() const = 0;

	/**
	  * Hide the manikin.
	  **/
	virtual HRESULT Hide() = 0;

	/**
	  * Show the manikin.
	  **/
	virtual HRESULT Show() = 0;

	/**
	  * @return <code><font color="blue"><strong>TRUE</strong></font></code>
	  * if the manikin is hidden,
	  * <code><font color="blue"><strong>FALSE</strong></font></code> otherwise.
	  **/
	virtual boolean IsHidden() const = 0;

	/**
	  * Retrieve the body node of the manikin (the one displayed in the spec tree).
	  **/
	virtual SWKISegmentNode * GetBodyNode() = 0;

	/**
	  * Retrieve the constraints node of the manikin (the one displayed in the spec tree).
	  **/
	virtual SWKIConstraintNode * GetConstraintsNode() = 0;

	/**
	  * Retrieve the load node of the manikin (the one displayed in the spec tree).
	  **/
	virtual SWKILoadNode * GetLoadsNode() = 0;

	/**
	  * Retrieve the position node of the manikin (the one displayed in the spec tree).
	  **/
	virtual SWKIManikinPositionNode * GetPositionNode() = 0;

	/**
	  * Retrieve the properties node of the manikin (the one displayed in the spec tree).
	  **/
	virtual SWKIManikinPropertiesNode * GetPropertiesNode() = 0;

	/**
	  * Retrieve the settings node of the manikin (the one displayed in the spec tree).
	  **/
	virtual SWKIManikinSettingsNode * GetSettingsNode() = 0;

	/**
	  * Update the whole base mesh
	  * @param piBody Pointer to the body object interface
	  **/
	virtual void BuildBaseMesh(SWKIBody * piBody) = 0;

	/**
	  * Update the base mesh
	  * @param piBody Pointer to the body object interface
	  * @param poListOfSegmentsToUpdate The list of hierarchies to update
	  **/
	virtual void BuildBaseMesh(SWKIBody * piBody,
							   CATListOfInt * poListOfSegmentsToUpdate) = 0;

	/**
	  * Update the whole subdivision surface
	  * @param piBody Pointer to the body object interface
	  * @param piLevel The level of subdivision
	  **/
	virtual void UpdateMultiresMesh(SWKIBody * piBody, int piLevel = -1) = 0;

	/**
	  * Update the subdivision surface
	  * @param piBody Pointer to the body object interface
	  * @param piHierarchies The list of hierarchies to update
	  * @param piLevel The level of subdivision
	  **/
	virtual void UpdateMultiresMesh(SWKIBody * piBody,
									CATListOfInt * piHierarchies,
									int piLevel = -1) = 0;

	/**
	  * nodoc
	  **/
	virtual boolean GetBuildingRepFlag() = 0;
	virtual void SetBuildingRepFlag(boolean piBuildingRep) = 0;
};

CATDeclareHandler(SWKIManikin3DVisu, SWKI3DVisu);

#endif
