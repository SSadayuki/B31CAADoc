// COPYRIGHT DASSAULT SYSTEMES 2003
#ifndef _SWKIManikinPartFactory_h
#define _SWKIManikinPartFactory_h

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
//   SWKIManikinPartFactory interface.
//
//   This interface provides functionality for creating and retrieving
//   manikin parts inside a product document.
//
// *****************************************************************************
//  Usage:
//  ------
//
//  A pointer to this interface can be obtained from a CATProduct document
//  only.
//
//  Once this interface pointer is obtained, it is possible to create manikins
//  and other manikin parts (posture, anthropometry...) inside that document.
//
//  CATDocument * lDoc = ...; //  a pointer to my CATProduct document
//  SWKIManikinPartFactory * lFactory = SWKHmiGetManikinPartFactory(lDoc);
//
//  --- Create a manikin inside the document, under the root product
//  CATIProduct * lRootProduct = ...; // Get the root product
//
//  SWKIManikin * lCreatedManikin = NULL;
//  lFactory->CreateManikin(lRootProduct, "Toto", SW_ANTHRO_SEX_MALE, 50.0, lCreatedManikin);
// *****************************************************************************
//  Inheritance:
//  ------------
//
//  CATBaseUnknown
//
// *****************************************************************************
//  Main Methods:
//  -------------
//
//    CreateManikin
//    CreateCatalogPart
// *****************************************************************************
//  History
//  -------
//
//  Author: Jean-Guy AUGUSTIN
//  Date  : 00/07/26
//  Goal  : Creation
// *****************************************************************************
//
// --- System
#include "CATBaseUnknown.h"
//
// --- DNBHumanModelingInterfaces
#include "SWKIManikin.h"
//
// --- AppplicationFrame
#include "CATListOfCATBaseUnknown.h"
//
// --- ProductStructure
class CATIProduct;
//
// --- DNBHumanModelingInterfaces
class SWKICatalogPart;
class SWKIManikin;
//
// --- DNBHumanModeling
class SWDBAnthro;

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
extern ExportedBySWKHumanModelingItf IID IID_SWKIManikinPartFactory;
#else
extern "C" const IID IID_SWKIManikinPartFactory;
#endif

/**
  * This interface provides functionality for creating and retrieving<br>
  * manikin parts inside a product document.
  **/

class ExportedBySWKHumanModelingItf SWKIManikinPartFactory : public CATBaseUnknown
{
	CATDeclareInterface;

  public:

	/**
	  * Create a manikin.
	  *
	  * @param piTargetProduct The product under which the manikin will be created.
	  *
	  * @param piManikinName The name of the manikin.
	  *
	  * @param piSex The sex of the manikin. The value of this parameter must be<br>
	  * either <code>SW_ANTHRO_SEX_MALE</code> or <code>SW_ANTHRO_SEX_FEMALE</code>.
	  *
	  * @param piPercentile The percentile of the manikin.
	  *
	  * @param poCreatedManikin The created manikin.
	  *
	  * @param piForearmModel This parameter is used if the application wants
	  * to create a forearm model only.  By default the whole manikin is
	  * created (<code>SWKIManikin::WholeBody</code>).  Specifying the value
	  * <code>SWKIManikin::RightForearm</code> in this parameter will create
	  * a right forearm model only. Specifying the value
	  * <code>SWKIManikin::LeftForearm</code> in this parameter will create
	  * a left forearm model only.
	  *
	  * @param piPopulationDatabase The population database the manikin will
	  * be linked to.  If this parameter is <code>NULL</code>, then the default
	  * database (i.e. US Army Natick) will be used.
	  *
	  * @return A status code indicating if the operation succeeded or failed.
	  **/
	  virtual HRESULT CreateManikin(CATIProduct * piTargetProduct,
						CATUnicodeString piManikinName, int piSex,
						double piPercentile, SWKIManikin *& poCreatedManikin,
						SWKIManikin::SWKForearmModel piForearmModel = SWKIManikin::WholeBody,
						SWDBAnthro * piPopulationDatabase = NULL) = 0;

	/**
	  * This method creates an empty catalog part.
	  *
	  * Once the part is created, it is possible to fill it with
	  * atomic parts, and paste it onto other parts.
	  *
	  * The part returned is a feature created inside a document,
	  * and is therefore persistent.
	  *
	  * @param piPartID The type of the part to create.
	  *  This parameter can take one of the following values:
	  *  <code>SWPartAnthropometry</code>, <code>SWPartPosture</code>,
	  *  <code>SWPartVision</code>, <code>SWPartPrefAngles</code>,
	  *  <code>SWPartJointLimits</code>, <code>SWPartIKConstraints</code> or
	  *  <code>SWPartVisualLimits</code>.
	  *
	  * @return The created part, or <code>NULL</code> if an error
	  * occurred.
	  **/
	  virtual SWKICatalogPart * CreateCatalogPart() = 0;

	  /**
	    * Removes a catalog part from a document
		*
		* @param piPartToRemove The catalog part to remove
	    **/
	  virtual HRESULT RemoveCatalogPart(SWKICatalogPart * piPartToRemove) = 0;
};

CATDeclareHandler(SWKIManikinPartFactory, CATBaseUnknown);
#endif
