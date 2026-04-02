/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================

#ifndef CATMfgManufacturingSettings_H
#define CATMfgManufacturingSettings_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"
class CATUnicodeString;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgManufacturingSettings;
#else
extern "C" const IID IID_CATIMfgManufacturingSettings;
#endif

/**
* Interface to manage manufacturing settings.
* <br><b>Role</b>: CATIMfgManufacturingSettings has methods to 
* manage manufacturing settings.
*/

class ExportedByMfgItfEnv CATIMfgManufacturingSettings: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
* Retrieves the StartEditMode parameter.
* <br><b>Role</b>: Retrieves the StartEditMode parameter.
*<br><b>Usage</b>:
*  CATIMfgManufacturingSettings *piSet=NULL;
*
*  CATString ClassName("CATMfgManufacturingSettings");
*  CATInstantiateComponent  (ClassName,
*                            CATIMfgManufacturingSettings::ClassId(),
*                            (void**) &piSet);
*   .....................
*
*   HRESULT Res = piSet->GetStartEditModeSetting (oStartEditMode);
*
* @param oStartEditMode
* 1 if the operation is edited after creation, 0 otherwise. 
*/

  virtual HRESULT GetStartEditModeSetting (int &oStartEditMode)=0;

/**
* Retrieves the SearchTool parameter.
* <br><b>Role</b>: Retrieves the SearchTool parameter.
*<br><b>Usage</b>:
*  CATIMfgManufacturingSettings *piSet=NULL;
*
*  CATString ClassName("CATMfgManufacturingSettings");
*  CATInstantiateComponent  (ClassName,
*                            CATIMfgManufacturingSettings::ClassId(),
*                            (void**) &piSet);
*   .....................
*
*   HRESULT Res = piSet->GetSearchToolInProgramSetting (oSearchTool);
*
* @param oSearchTool
* 1 if a compatible tool is searched in previous operations, 0 otherwise. 
*/

  virtual HRESULT GetSearchToolInProgramSetting (int &oSearchTool)=0;

/**
* Retrieves the CreateDefaultTool parameter.
* <br><b>Role</b>: Retrieves the CreateDefaultTool parameter.
*<br><b>Usage</b>:
*  CATIMfgManufacturingSettings *piSet=NULL;
*
*  CATString ClassName("CATMfgManufacturingSettings");
*  CATInstantiateComponent  (ClassName,
*                            CATIMfgManufacturingSettings::ClassId(),
*                            (void**) &piSet);
*   .....................
*
*   HRESULT Res = piSet->GetCreateDefaultToolSetting (oCreateDefaultTool);
*
* @param oCreateDefaultTool
* 1 if a default tool must be created, 0 otherwise. 
*/

  virtual HRESULT GetCreateDefaultToolSetting (int &oCreateDefaultTool)=0;

/**
* Retrieves the RequiredColor parameter.
* <br><b>Role</b>: Retrieves the RequiredColor parameter.
*<br><b>Usage</b>:
*  CATIMfgManufacturingSettings *piSet=NULL;
*
*  CATString ClassName("CATMfgManufacturingSettings");
*  CATInstantiateComponent  (ClassName,
*                            CATIMfgManufacturingSettings::ClassId(),
*                            (void**) &piSet);
*   .....................
*
*   HRESULT Res = piSet->GetRequiredColor (oR, oG, oB);
*
* @param oR
* Red component of the color. 
* @param oG
* Green component of the color. 
* @param oB
* Blue component of the color. 
*/

  virtual HRESULT GetRequiredColor (unsigned int &oR, unsigned int &oG, unsigned int &oB)=0;

/**
* Retrieves the OptionalColor parameter.
* <br><b>Role</b>: Retrieves the OptionalColor parameter.
*<br><b>Usage</b>:
*  CATIMfgManufacturingSettings *piSet=NULL;
*
*  CATString ClassName("CATMfgManufacturingSettings");
*  CATInstantiateComponent  (ClassName,
*                            CATIMfgManufacturingSettings::ClassId(),
*                            (void**) &piSet);
*   .....................
*
*   HRESULT Res = piSet->GetOptionalColor (oR, oG, oB);
*
* @param oR
* Red component of the color. 
* @param oG
* Green component of the color. 
* @param oB
* Blue component of the color. 
*/

  virtual HRESULT GetOptionalColor (unsigned int &oR, unsigned int &oG, unsigned int &oB)=0;

/**
* Retrieves the ValuatedColor parameter.
* <br><b>Role</b>: Retrieves the ValuatedColor parameter.
*<br><b>Usage</b>:
*  CATIMfgManufacturingSettings *piSet=NULL;
*
*  CATString ClassName("CATMfgManufacturingSettings");
*  CATInstantiateComponent  (ClassName,
*                            CATIMfgManufacturingSettings::ClassId(),
*                            (void**) &piSet);
*   .....................
*
*   HRESULT Res = piSet->GetValuatedColor (oR, oG, oB);
*
* @param oR
* Red component of the color. 
* @param oG
* Green component of the color. 
* @param oB
* Blue component of the color. 
*/

  virtual HRESULT GetValuatedColor (unsigned int &oR, unsigned int &oG, unsigned int &oB)=0;

/**
* Retrieves the TextColor parameter.
* <br><b>Role</b>: Retrieves the TextColor parameter.
*<br><b>Usage</b>:
*  CATIMfgManufacturingSettings *piSet=NULL;
*
*  CATString ClassName("CATMfgManufacturingSettings");
*  CATInstantiateComponent  (ClassName,
*                            CATIMfgManufacturingSettings::ClassId(),
*                            (void**) &piSet);
*   .....................
*
*   HRESULT Res = piSet->GetTextColor (oR, oG, oB);
*
* @param oR
* Red component of the color. 
* @param oG
* Green component of the color. 
* @param oB
* Blue component of the color. 
*/

  virtual HRESULT GetTextColor (unsigned int &oR, unsigned int &oG, unsigned int &oB)=0;

/**
* Retrieves the NotFoundColor parameter.
* <br><b>Role</b>: Retrieves the NotFoundColor parameter.
*<br><b>Usage</b>:
*  CATIMfgManufacturingSettings *piSet=NULL;
*
*  CATString ClassName("CATMfgManufacturingSettings");
*  CATInstantiateComponent  (ClassName,
*                            CATIMfgManufacturingSettings::ClassId(),
*                            (void**) &piSet);
*   .....................
*
*   HRESULT Res = piSet->GetNotFoundColor (oR, oG, oB);
*
* @param oR
* Red component of the color. 
* @param oG
* Green component of the color. 
* @param oB
* Blue component of the color. 
*/

  virtual HRESULT GetNotFoundColor (unsigned int &oR, unsigned int &oG, unsigned int &oB)=0;

/**
* Retrieves the NotUpToDateColor parameter.
* <br><b>Role</b>: Retrieves the NotUpToDateColor parameter.
*<br><b>Usage</b>:
*  CATIMfgManufacturingSettings *piSet=NULL;
*
*  CATString ClassName("CATMfgManufacturingSettings");
*  CATInstantiateComponent  (ClassName,
*                            CATIMfgManufacturingSettings::ClassId(),
*                            (void**) &piSet);
*   .....................
*
*   HRESULT Res = piSet->GetNotUpToDateColor (oR, oG, oB);
*
* @param oR
* Red component of the color. 
* @param oG
* Green component of the color. 
* @param oB
* Blue component of the color. 
*/

  virtual HRESULT GetNotUpToDateColor (unsigned int &oR, unsigned int &oG, unsigned int &oB)=0;

/**
* Retrieves the ouput path definition for nc code storage.
* <br><b>Role</b>: Retrieves the ouput path definition.
*<br><b>Usage</b>:
*  CATIMfgManufacturingSettings *piSet=NULL;
*
*  CATString ClassName("CATMfgManufacturingSettings");
*  CATInstantiateComponent  (ClassName,
*                            CATIMfgManufacturingSettings::ClassId(),
*                            (void**) &piSet);
*   .....................
*
*   HRESULT Res = piSet->GetNCCodeDirectory (oDirectory);
*
* @param oPath
* CATUnicodeString describing the full path to the directory where NC Code file is stored
*/

  virtual HRESULT GetNCCodeDirectory (CATUnicodeString &oDirectory)=0;


/**
* Retrieves the ouput path definition for Post-Processors.
* <br><b>Role</b>: Retrieves the PP path definition.
*<br><b>Usage</b>:
*  CATIMfgManufacturingSettings *piSet=NULL;
*
*  CATString ClassName("CATMfgManufacturingSettings");
*  CATInstantiateComponent  (ClassName,
*                            CATIMfgManufacturingSettings::ClassId(),
*                            (void**) &piSet);
*   .....................
*
*   HRESULT Res = piSet->GetPPPathDirectory (oDirectory);
*
* @param oPath
* CATUnicodeString describing the  path to the directory where Post-Processors are stored
* @param iFullPath
* int asking for full  path (as ../startup/Manufacturing/XXXPar )(> 0) 
*             or short Path (as ../startup/Manufacturing) (= 0 )
*/

  virtual HRESULT GetPPPathDirectory (CATUnicodeString &oDirectory,int iFullPath =0)=0;


/**
* Retrieves the current display mode.
* <br><b>Role</b>: Retrieves the display mode.
*<br><b>Usage</b>:
*  CATIMfgManufacturingSettings *piSet=NULL;
*
*  CATString ClassName("CATMfgManufacturingSettings");
*  CATInstantiateComponent  (ClassName,
*                            CATIMfgManufacturingSettings::ClassId(),
*                            (void**) &piSet);
*   .....................
*
*   HRESULT Res = piSet->GetDisplayMode (oDisplayMode);
*
* @param oDisplayMode
* Current display mode. May be 1 (nothing displayed), 2 (toolpath displayed) or 3 (geometry displayed)
*/

  virtual HRESULT GetDisplayMode (int &oDisplayMode)=0;

/**
* Sets the current display mode.
* <br><b>Role</b>: Sets the display mode.
*<br><b>Usage</b>:
*  CATIMfgManufacturingSettings *piSet=NULL;
*
*  CATString ClassName("CATMfgManufacturingSettings");
*  CATInstantiateComponent  (ClassName,
*                            CATIMfgManufacturingSettings::ClassId(),
*                            (void**) &piSet);
*   .....................
*
*   HRESULT Res = piSet->SetDisplayMode (iDisplayMode);
*
* @param iDisplayMode
* Current display mode. May be 1 (nothing displayed), 2 (toolpath displayed) or 3 (geometry displayed)
*/

  virtual HRESULT SetDisplayMode (const int iDisplayMode)=0;

/**
* Retrieves the IHM Basic mode.
* <br><b>Role</b>: Retrieves the IHM mode.
*<br><b>Usage</b>:
*  CATIMfgManufacturingSettings *piSet=NULL;
*
*
*   HRESULT Res = piSet->GetModeIHMBasic(oModeIHMBasic);
*
* @param oModeIHMBasic
* 0 means Basic mode not activated, 1 means Basic mode activated
*/

  virtual HRESULT GetModeIHMBasic (int & oModeIHMBasic)=0;

};

CATDeclareHandler(CATIMfgManufacturingSettings, CATBaseUnknown);

#endif
