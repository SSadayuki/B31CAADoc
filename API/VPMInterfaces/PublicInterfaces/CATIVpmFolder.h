// --------------------------------------------------------            
// VPM (c) Copyright Dassault Systemes 1996                           
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
// -------------------------------------------------------------       
// Responsable: AHC                                                     
// --------------------------------------------------------------       
// Macro: CATIVpmFolder.h                                               
// --------------------------------------------------------------       
// Contenu:  Header pour gestion des Folders Persistants               
// --------------------------------------------------------------       
// Historique:                                                          
// Creation : 96/09/12 > AHC                                           
// --------------------------------------------------------------       
//
#ifndef CATIVpmFolder_H_
#define CATIVpmFolder_H_
//
#include "GUIDVPMInterfaces.h"

//
// -------------------------------
// Include des classes utilisees 
// -------------------------------
//
#include "CATBaseUnknown.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIVpmFolder ;
#else
extern "C" const IID IID_CATIVpmFolder ;
#endif

//
#include "CATUnicodeString.h"
#include "CATIContainer.h"
#include "CATContainersInSession.h"
#include "CATListOfCATUnicodeString.h"
#include "CATVpmType.h"
#include "CATListOfCATUnicodeString.h"
//
class CATIVpmFolder_var ;
// -------------------------------
// Definition de la classe Interface
//
class ExportedByGUIDVPMInterfaces CATIVpmFolder :public CATBaseUnknown 
  {
  //
  CATDeclareInterface;
  //
  public:
  //
  // Methodes  
  //
  virtual VPM_Logical SaveFolder ()=0  ;
  virtual VPM_Logical LoadFolder ()=0  ;
  virtual VPM_Boolean CloseFolder()=0  ; 
  virtual VPM_Boolean RemoveFolder()=0  ; 
  virtual VPM_Boolean ExportFolder 
                      ( const CATIVpmFolder_var&  iTargetFolder,
                        const CATBaseUnknown_var& iQueryForExport,
                        const CATListOfCATUnicodeString* iPackageList = NULL)=0  ;
  //
  virtual CATListOfCATUnicodeString*  GetFolderTypeList() = 0 ;
  virtual CATListOfCATUnicodeString*  GetFolderFormatList()= 0 ;
  //
  // bTrue  => indexed containers has been stored in database.
  // bFalse => indexed containers has been stored on file  
  //
  virtual VPM_Boolean      GetIndexedDataMode()=0;
  virtual CATUnicodeString GetFolderName()=0 ;
  virtual CATUnicodeString GetStorageFormat()=0 ;
  virtual CATUnicodeString GetExternalFormat()=0 ;
  virtual CATUnicodeString GetFormatType()=0 ;
  virtual CATUnicodeString GetStorageName()=0 ;
  virtual CATUnicodeString GetApplicationName()=0 ;
  virtual CATUnicodeString GetTitle() =0 ;
  //
  // iDBMSMode = bTrue  => all containers will be stored in database.
  // iDBMSMode = bFalse => all containers will be stored on file  
  //
  virtual void PutIndexedDataMode (VPM_Boolean iDBMSMode )=0;
  virtual void PutIndexedFileMode (VPM_Boolean& iIndexedFile) =0;
  virtual void PutFolderName (const CATUnicodeString& iTheFolderName)=0;
  virtual void PutStorageFormat (const CATUnicodeString& iTheStorageFormat )=0 ;
  virtual void PutStorageName (const CATUnicodeString& iTheStorageName )=0 ;
  virtual void PutApplicationName (const CATUnicodeString& iTheStorageName )=0 ;
  virtual void PutTitle (const CATUnicodeString& iTheTitle) =0 ;
  //
  virtual void AddContainerToFolder (const CATIContainer_var& iTheContainer)= 0;

  virtual const CATLISTP(CATIContainer)& ListContainers() =0 ;
  //
  virtual VPM_Boolean AddPackagesToFolder(const CATListOfCATUnicodeString & iPackages)=0;
  //
  };
  CATDeclareHandler(CATIVpmFolder,CATBaseUnknown);
//
// methode globale de creation
//
#ifdef	_WINDOWS_SOURCE
#ifdef	__VX0DOC01
#define	ExportedByVX0DOC01	__declspec(dllexport)
#else
#define	ExportedByVX0DOC01	__declspec(dllimport)
#endif
#else
#define	ExportedByVX0DOC01
#endif
ExportedByVX0DOC01 CATIVpmFolder_var CreateFolder
                      (const CATUnicodeString& iTheFolderName, 
                       const CATUnicodeString& iTheFolderType);
//
// --------------------------------------------------------------
// Fin de la macro                                                    
// --------------------------------------------------------------       
#endif
