// COPYRIGHT DASSAULT SYSTEMES 2003
#ifndef _SWKICatalogPart_h
#define _SWKICatalogPart_h

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
//       SWKICatalogPart interface.
// *****************************************************************************
//  Usage:
//  ------
//    This interface allows to recognize between a part that is attached
//    to a manikin (that is, a prt created as the result of a manikin creation)
//    and one that is not.
//
//    If the part does not belong belong directly to a manikin, then it will
//    adhere to this interface and can be pasted onto a real manikin or be
//    stored in a CATSwl document for catalog access purposes.
//
//    To create such a catalog part (one that is not attached to a manikin)
//    please use method SWKIManikinPartFactory::CreateManikinPart().
// *****************************************************************************
//  Inheritance:
//  ------------
//
//    CATBaseUnknown
//
// *****************************************************************************
//  Main Methods:
//  -------------
//
//    GetName
//    SetName
//    GetType
//    GetTypes
//    AddItem
//    AddItemFromMTP
//    GetTime
//    Init
//    SaveIn
//    Apply
//    ApplyOnMTP
//    SetProperty
//    GetProperty
//    GetNbAttachAndCst
//    GetAttachAndCstInfos
//    SetAttachOrCstObject
// *****************************************************************************
//  History
//  -------
//
//  Author: Jean-Guy AUGUSTIN
//  Date  : 00/07/27
//  Goal  : Creation
// *****************************************************************************
//
// --- System
#include "CATBaseUnknown.h"
#include "CATBooleanDef.h"
#include "CATString.h"
//
// --- ApplicationFrame
#include "CATListOfCATBaseUnknown.h"
//
// --- DNBHumanModeling
#include "SWPartID.h"
//
// --- ComponentsCatalogsInterfaces
class CATICatalogDescription;
//
// --- DNBHumanModeling
class SWManikinPart;
//
// --- DNBHumanModelingInterfaces
class SWKIManikin;
class SWKIMTPComponentCCP;
//
// --- ProductStructure
class CATIMovable;
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
extern ExportedBySWKHumanModelingItf IID IID_SWKICatalogPart;
#else
extern "C" const IID IID_SWKICatalogPart;
#endif

/**
  * This interface allows to recognize between a part that is attached<br>
  * to a manikin (that is, a prt created as the result of a manikin creation)<br>
  * and one that is not.<br>
  * <br>
  * If the part does not belong belong directly to a manikin, then it will<br>
  * adhere to this interface and can be pasted onto a real manikin or be<br>
  * stored in a CATSwl document for catalog access purposes.
  **/

class ExportedBySWKHumanModelingItf SWKICatalogPart : public CATBaseUnknown
{
	CATDeclareInterface;

 public:

	/**
	  * @return The Name previously assigned to the part.
	  **/
	virtual CATUnicodeString GetName() const = 0;

		/**
	  * Assign a name to the part.
	  * @param piName The name to assign to the part.
	  * @return <code>S_OK</code> on success, and another error code on failure.
	  **/
	virtual HRESULT SetName(const CATUnicodeString & piName) = 0;

	/**
	  * @return The type of the catalog part
	  **/
	virtual CATString GetType() const = 0;

	/**
	  * Get all the types available in this CatalogPart.
	  **/
	virtual void GetTypes(CATListOfInt & poTypes) const = 0;

	/**
	  * Add one or many items in the catalog part.
	  **/
	virtual HRESULT AddItem(const SWPartID & piPartID, 
							SWKIManikin * piManikin,
							CATListOfInt & piSegments,
							CATBaseUnknown * piItem) = 0;

	/**
	  * Add an item of type SWPartFrame or SWPartPosture from a MoveToPosture.
	  * NOTE:  If the piSegments contains segments, the piMTPComponentCCP is
	  * not used, it can be NULL.
	  * All the segments contained in piSegments must be owned by a MTP.
	  **/
	virtual HRESULT AddItemFromMTP(const SWPartID & piPartID, 
								   SWKIMTPComponentCCP * piMTPComponentCCP,
								   CATListValCATBaseUnknown_var & piSegments) = 0;

	/**
	  *  Add a SWManikinPart in the list of item of the Catalog Part.
	  *  This function is used only for the conversion of a .swl into
	  *  a catalog
	  **/
	virtual HRESULT AddItem(SWManikinPart * piPart) = 0;

	/**
	  * @return The time when the part was last written on disk.
	  **/
	virtual void GetTime(CATUnicodeString & poTime) const = 0;

	/**
	  * Set the internal manikin part.<br>
	  * This mehtod is to be used by the system only.
	  **/
	virtual void Init(boolean piForce = FALSE) = 0;

	/**
	  * Save the catalog part in poDescription.
	  **/
	virtual HRESULT SaveIn(CATICatalogDescription * poDescription) = 0;

	/**
	  * Apply the elements wished (listed in piTypes) from the Catalog on
	  * the piManikin or the piSegments.
	  **/
	virtual HRESULT Apply(SWKIManikin * piManikin,
						  CATListOfInt & piSegments, 
						  const CATListValCATBaseUnknown_var & piElements,
						  const CATListOfInt & piTypes) = 0;

	/**
	  * Apply the catalog part (only the constraints) on a MoveToPosture.
	  **/
	virtual HRESULT ApplyOnMTP(SWKIMTPComponentCCP * piMTPComponentCCP,
							   const CATListOfInt & piTypes) = 0;

	/**
	  * Set an application-specific property to be saved with this catalog object.
	  *
	  * @param piPropertyName The name of the property.
	  *
	  * @param piPropertyValue The value of the property.
	  *
	  * @return A status code indicating whether the operation succeeded or failed.
	  **/
	virtual HRESULT SetProperty(const CATUnicodeString & piPropertyName,
										const CATUnicodeString & piValue) = 0;

	/**
	  * Retrieve the value of an existing property.
	  *
	  * @param piPropertyName The name of the property to be retrieved.
	  *
	  * @return The value of the specified property, or a string of the form
	  * "@Errorxxx", if the property is not defined or was not found.
	  **/
	virtual CATUnicodeString GetProperty(const CATUnicodeString & piPropertyName) = 0;

	/**
	  * Get the number of constraints and attaches contained in this
	  * catalog part.
	  **/
	virtual int GetNbAttachAndCst() const = 0;

	/**
	  * Returns the list of information related to the Attach/Cst contained
	  * in this catalog part. It is the Type, Name and the Segment
	  * related to each Attach/Cst.
	  **/
	virtual HRESULT GetAttachAndCstInfos(CATListOfCATUnicodeString & poInfos) = 0;

	/**
	  * Set the objects related to the attach or constraint at the index piItemIndex.
	  **/
	virtual HRESULT SetAttachOrCstObject(int piItemIndex, CATIMovable * piMovable) = 0;
};

CATDeclareHandler(SWKICatalogPart, CATBaseUnknown);

#endif
