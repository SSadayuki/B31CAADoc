/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES 2007
//=============================================================================

#ifndef CATIMfgCatalogServices_H
#define CATIMfgCatalogServices_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATUnicodeString.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgCatalogServices;
#else
extern "C" const IID IID_CATIMfgCatalogServices;
#endif

/**
* Interface to manage (machining processes) components instantiation.
* <br><b>Role</b>: CATIMfgCatalogServices has methods to 
* manage launch of (machining processes) components instantiation from catalog access .
*/

class ExportedByMfgItfEnv CATIMfgCatalogServices: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
* Launch the machining process instantiation from a catalog.
* <br><b>Role</b>: Launch machining process instantiation in a CATCommand from a catalog
*<br><b>Usage</b>:
*  CATIMfgCatalogServices *piServices=NULL;
*
*  CATString ClassName("CATMfgCatalogServices");
*  CATInstantiateComponent (ClassName,
*                            CATIMfgCatalogServices::ClassId(),
*                            piServices);
*   .....................
*
*   HRESULT Res = piServices->LaunchMPApplication(const CATUnicodeString& iPathDocument, 
*                              const CATUnicodeString& iPathChapter,
*                              const CATUnicodeString& NomMPRef, const CATString& MPKeyword);
*
* @param iPathDocument
* Catalog Name including the path where the catalog is located 
* For example : "PathDocument = "C:\\install\\intel_a\\startup\\Manufacturing\\Processes\\MP_demo.catalog" under Windows
* @param iPathChapter
* Path in the catalog where the machining process component is located
* For example :   iPathChapter = "Chapter.1/Drilling Processes"
*/

  virtual HRESULT LaunchMPApplication(const CATUnicodeString& PathDocument, 
                              const CATUnicodeString& PathChapter,
                              const CATUnicodeString& NomMPRef, const CATString& MPKeyword)= 0;

/**
* Build the path from the Install path and the startup directory .
* <br><b>Role</b>: Build the path from the Install path and the startup directory
*<br><b>Usage</b>:
* The path is built from the "CATInstallPath" environment variable and the startup directory
* "/startup/Manufacturing/Processes/". It is available under Windows and Unix platforms
* @param iCatalogName
* Catalog Name 
* For example : iCatalogName="MP_demo.catalog"
*
*/
  virtual HRESULT BuildMfgStartupMPPath(const CATUnicodeString & iCatalogName, CATUnicodeString & oPath) = 0;

};

CATDeclareHandler(CATIMfgCatalogServices, CATBaseUnknown);

#endif

