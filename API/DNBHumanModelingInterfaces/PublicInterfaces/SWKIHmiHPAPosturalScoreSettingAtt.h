// COPYRIGHT DASSAULT SYSTEMES 2003
#ifndef SWKIHmiHPAPosturalScoreSettingAtt_H
#define SWKIHmiHPAPosturalScoreSettingAtt_H

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
//    GetInfoPosturalScoreFavorite
//    SaveFavoriteList
//    LoadFavoriteList
//    IsFavoriteListLoaded
//    ClearFavoriteList
//    GetIndexList
//    GetFavoriteShortNameList
//    GetFavoriteIndex
//    GetInfoPosturalScoreColors
//    SetWholeHandColor
//    GetWholeHandColor
//    SetGlobalScoreColor
//    GetGlobalScoreColor
//    SetCurrentScoreColor
//    GetCurrentScoreColor
//    SetSelectedScoreColor
//    GetSelectedScoreColor
//    GetHandFilter
//    SetHandFiler
//    UpdateEnvState
//    GetSettingRep
// *****************************************************************************
//  History
//  -------
//
//  Author: Rachid AZIZI
//  Date  : 04/03/01
//  Goal  : Creation
// *****************************************************************************
//
// --- System
#include "CATBaseUnknown.h"
#include "CATBooleanDef.h"
#include "CATListOfInt.h"
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
extern ExportedBySWKHumanModelingItf IID IID_SWKIHmiHPAPosturalScoreSettingAtt;
#else
extern "C" const IID IID_SWKIHmiHPAPosturalScoreSettingAtt ;
#endif

class ExportedBySWKHumanModelingItf SWKIHmiHPAPosturalScoreSettingAtt: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

	/**
	  * Initialize all the attributes of the HPA Postural Score settings.
	  **/
	virtual HRESULT Initialize() = 0;

	/**
	  * Get the CATSettingInfo of the PosturalScoreFavorites
	  **/
	virtual HRESULT GetPosturalScoreFavoriteInfo(CATSettingInfo * poInfo) = 0;

	/**
	  * Save the FavoritesList
	  **/
	virtual HRESULT SaveFavoriteList() = 0;

	/**
	  *  Load the FavoritesList
	  **/
	virtual HRESULT LoadFavoriteList() = 0;
	
	/**
	  * @return true if the FavoritesList has already been loaded
	  **/
	virtual boolean IsFavoriteListLoaded() = 0;

	/**
	  * Clear the FavoritesList
	  **/
	virtual void ClearFavoriteList() = 0;
	
	/**
	  * @return a & to the FavoritesList
	  **/
	virtual CATListOfInt & GetIndexList() = 0;
	
	/**
	  * @piFavorite The CATListOfInt containing the FavoritesShortNamesList
	  **/
	virtual	void SetFavoriteShortNameList(CATListOfInt piFavorite) = 0 ;

	/**
	  * @poFavorite The CATListOfInt containing the FavoritesShortNamesList
	  **/
	virtual void GetFavoriteShortNameList(CATListOfInt & poFavorite) = 0;
	
	/**
	  * @poFavorite The CATListOfInt containing the FavoriteList
	  **/
	virtual void GetFavoriteIndex(CATListOfInt & poFavorite) = 0;

	/**
	  * Get the CATSettingInfo of the PosturalScoreColors
	  **/
	virtual HRESULT GetPosturalScoreColorsInfo(CATSettingInfo * poInfo) = 0;

	/**
	  * @piColor The new color of the WholeHand bar
	  **/
	virtual HRESULT SetWholeHandColor(const unsigned piColor) = 0;
	
	/**
	  * @poColor The current color of the WholeHand bar
	  **/
	virtual HRESULT GetWholeHandColor(unsigned & poColor) = 0;

	/**
	  * Get the CATSettingInfo of the WholeHandColor.
	  **/
	virtual HRESULT GetWholeHandColorInfo(CATSettingInfo * poInfo) = 0;

	/**
	  * Set the Lock of the WholeHandColor.
	  **/
	virtual HRESULT SetWholeHandColorLock (unsigned char iLocked) = 0;

	/**
	  * @piColor The new color of the GlobalScore bar
	  **/
	virtual HRESULT SetGlobalScoreColor(const unsigned piColor) = 0;
	
	/**
	  * @poColor The current color of the GlobalScore bar
	  **/
	virtual HRESULT GetGlobalScoreColor(unsigned & poColor) = 0;
	
	/**
	  * Get the CATSettingInfo of the GlobalScoreColor.
	  **/
	virtual HRESULT GetGlobalScoreColorInfo(CATSettingInfo * poInfo) = 0;

	/**
	  * Set the Lock of the GlobalScoreColor.
	  **/
	virtual HRESULT SetGlobalScoreColorLock (unsigned char iLocked) = 0;

	/**
	  * @piColor The new color of the CurrentScore bar
	  **/
	virtual HRESULT SetCurrentScoreColor(const unsigned piColor) = 0;
	
	/**
	  * @poColor The current color of the CurrentScore bar
	  **/
	virtual HRESULT GetCurrentScoreColor(unsigned & poColor) = 0;
	
	/**
	  * Get the CATSettingInfo of the CurrentScoreColor.
	  **/
	virtual HRESULT GetCurrentScoreColorInfo(CATSettingInfo * poInfo) = 0;

	/**
	  * Set the Lock of the CurrentScoreColor.
	  **/
	virtual HRESULT SetCurrentScoreColorLock (unsigned char iLocked) = 0;

	/**
	  * @piColor The new color of the SelectedScore bar
	  **/
	virtual HRESULT SetSelectedScoreColor(const unsigned piColor) = 0;
	
	/**
	  * @poColor The current color of the SelectedScore bar
	  **/
	virtual HRESULT GetSelectedScoreColor(unsigned & poColor) = 0;

	/**
	  * Get the CATSettingInfo of the SelectedScoreColor.
	  **/
	virtual HRESULT GetSelectedScoreColorInfo(CATSettingInfo * poInfo) = 0;

	/**
	  * Set the Lock of the SelectedScoreColor.
	  **/
	virtual HRESULT SetSelectedScoreColorLock (unsigned char iLocked) = 0;

	/**
	  * @poHandFilter The hand filter used in the postural score dialog/report 
	  **/
	virtual HRESULT GetHandFilter(boolean & poHandFiler) = 0;

	/**
	  * @piHandFilter The hand filter used in the postural score dialog/report 
	  **/
	virtual HRESULT SetHandFilter(const boolean piHandFilter) = 0;

	/**
	  * Update the display of the manikins depending of the settings.
	  **/
	virtual HRESULT UpdateEnvState() = 0;

	/**
	  * Get the setting repository associated with the attributes of the HPA Postural Score settings.
	  **/
	virtual CATSettingRepository * GetSettingRep() const = 0;
};
#endif
