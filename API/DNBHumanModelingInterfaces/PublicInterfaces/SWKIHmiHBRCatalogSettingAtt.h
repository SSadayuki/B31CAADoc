// COPYRIGHT DASSAULT SYSTEMES 2003
#ifndef SWKIHmiHBRCatalogSettingAtt_h
#define SWKIHmiHBRCatalogSettingAtt_h

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
//    SWKIHmiHBRDisplaySettingAtt interface.
// *****************************************************************************
//  Usage:
//  ------
//
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
//    Initialize
//    GetTreeViewerSize
//    SetTreeViewerSize
//    GetDescViewerSize
//    SetDescViewerSize
//    GetDescTreeViewerSize
//    SetDescTreeViewerSize
//    GetDisplayMode
//    SetDisplayMode
//    GetMaxNbOfOpenedCatalog
//    GetOpenedCatalogList
//    SetOpenedCatalogList
//    GetCurrentChapterPath
//    SetCurrentChapterPath
//    UpdateEnvState
//    GetSettingRep
// *****************************************************************************
//  History
//  -------
//
//  Author: Rachid AZIZI
//  Date  : 04/02/25
//  Goal  : Creation
// *****************************************************************************
//
// --- System
#include "CATBaseUnknown.h"
#include "CATListOfCATUnicodeString.h"
#include "CATDataType.h"
//
// --- System
class CATSettingInfo;
class CATSettingRepository;
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
extern ExportedBySWKHumanModelingItf IID IID_SWKIHmiHBRCatalogSettingAtt;
#else
extern "C" const IID IID_SWKIHmiHBRCatalogSettingAtt;
#endif

class ExportedBySWKHumanModelingItf SWKIHmiHBRCatalogSettingAtt: public CATBaseUnknown
{
	CATDeclareInterface;

 public:

	/**
	  * Initialize all the attributes of the HBRCatalog settings.
	  **/
	virtual HRESULT Initialize() = 0;

	/**
	  * This function gets the size in X and in Y of the 'Tree' viewer.
	  *
	  * @param poSizeX The size in X.
	  *
	  * @param poSizeY The size in Y.
	  **/
	virtual HRESULT GetTreeViewerSize(int & poSizeX, int & poSizeY) = 0;

	/**
	  * This function sets the size in X and in Y of the 'Tree' viewer.
	  *
	  * @param piSizeX The size in X.
	  *
	  * @param piSizeY The size in Y.
	  **/
	virtual HRESULT SetTreeViewerSize(const int piSizeX, const int piSizeY) = 0;

	/**
	  * Get the CATSettingInfo of the 'Tree' viewer size.
	  **/
	virtual HRESULT GetTreeViewerSizeInfo(CATSettingInfo * poInfoX) = 0;

	/**
	  * Set the Lock of the Tree Viewer Size.
	  **/
	virtual HRESULT SetTreeViewerSizeLock (unsigned char iLocked) = 0;

	/**
	  * This function gets the size in X and in Y of the 'Description' viewer when
	  * the 'Tree' viewer is not displayed.
	  *
	  * @param poSizeX The size in X.
	  *
	  * @param poSizeY The size in Y.
	  **/
	virtual HRESULT GetDescViewerSize(int & poSizeX, int & poSizeY) = 0;

	/**
	  * This function sets the size in X and in Y of the 'Description' viewer when
	  * the 'Tree' viewer is not displayed.
	  *
	  * @param piSizeX The size in X.
	  *
	  * @param piSizeY The size in Y.
	  **/
	virtual HRESULT SetDescViewerSize(const int piSizeX, const int piSizeY) = 0;

	/**
	  * Get the CATSettingInfo of the 'Description' viewer when the 'Tree' viewer
	  * is not displayed.
	  **/
	virtual HRESULT GetDescViewerSizeInfo(CATSettingInfo * poInfoX) = 0;

	/**
	  * Set the Lock of the Desc Viewer Size.
	  **/
	virtual HRESULT SetDescViewerSizeLock (unsigned char iLocked) = 0;

	/**
	  * This function gets the size in X and in Y of the 'Description' viewer when
	  * the 'Tree' viewer is displayed.
	  *
	  * @param poSizeX The size in X.
	  *
	  * @param poSizeY The size in Y.
	  **/
	virtual HRESULT GetDescTreeViewerSize(int & poSizeX, int & poSizeY) = 0;

	/**
	  * This function sets the size in X and in Y of the 'Description' viewer when
	  * the 'Tree' viewer is displayed.
	  *
	  * @param piSizeX The size in X.
	  *
	  * @param piSizeY The size in Y.
	  **/
	virtual HRESULT SetDescTreeViewerSize(const int piSizeX, const int piSizeY) = 0;

	/**
	  * Get the CATSettingInfo of the 'Description' viewer when the 'Tree' viewer
	  * is displayed.
	  **/
	virtual HRESULT GetDescTreeViewerSizeInfo(CATSettingInfo * poInfoX) = 0;

	/**
	  * Set the Lock of the Desc Tree Viewer Size.
	  **/
	virtual HRESULT SetDescTreeViewerSizeLock (unsigned char iLocked) = 0;

	/**
	  * This function gets the 'Display mode' of the catalog navigator.
	  *
	  * @param poDisplayOptions The flag of the display mode.
	  **/
	virtual HRESULT GetDisplayMode(CATULONG32 & poDisplayOptions) = 0;
	
	/**
	  * This function sets the 'Display mode' of the catalog navigator.
	  *
	  * @param piDisplayOptions The flag of the display mode.
	  **/
	virtual HRESULT SetDisplayMode(const CATULONG32 piDisplayOptions) = 0;

	/**
	  * Get the CATSettingInfo of the catalog navigator display mode.
	  **/
	virtual HRESULT GetDisplayModeInfo(CATSettingInfo * poInfo) = 0;

	/**
	  * Set the Lock of the Display Mode.
	  **/
	virtual HRESULT SetDisplayModeLock (unsigned char iLocked) = 0;

	/**
	  * Get the maximum number of possible opened catalog to display in the
	  * 'Current' combo of the catalog navigator.
	  **/
	virtual HRESULT GetMaxNbOfOpenedCatalog(int& oNb) = 0;

	/**
	  * Get the list of opened catalog to display in the 'Current' combo of the
	  * catalog navigator.
	  **/
	virtual HRESULT GetOpenedCatalogList(CATListOfCATUnicodeString & poOpenedCatalogList,
							  CATListOfCATUnicodeString & poOpenedCatalogDocEnvList) = 0;

	/**
	  * Set the list of opened catalog to display in the 'Current' combo of the
	  * catalog navigator.
	  **/
	virtual HRESULT SetOpenedCatalogList(const CATListOfCATUnicodeString & piOpenedCatalogList,
							  const CATListOfCATUnicodeString & piOpenedCatalogDocEnvList) = 0;

	/**
	  * Get the current chapter path of the latest opened catalog.
	  **/
	virtual HRESULT GetCurrentChapterPath(CATListOfCATUnicodeString & poCurrentChapterPath) = 0;

	/**
	  * Set the current chapter path of the latest opened catalog.
	  **/
	virtual HRESULT SetCurrentChapterPath(const CATListOfCATUnicodeString & piCurrentChapterPath) = 0;

	/**
	  * Update the Catalog of the manikins depending of the settings.
	  **/
	virtual HRESULT SaveRepository(const char *tmp=0) = 0;

	/**
	  * Update the Catalog of the manikins depending of the settings.
	  **/
	virtual HRESULT UpdateEnvState() = 0;

	/**
	  * Get the setting repository associated with the attributes of the HBR Catalog settings.
	  **/
	virtual CATSettingRepository * GetSettingRep() const = 0;
};
#endif
