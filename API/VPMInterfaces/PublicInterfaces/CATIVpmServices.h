// --------------------------------------------------------
// VPM (c) Copyright Dassault Systemes 1996
// -------------------------------------------------------------
// Responsable: AHC
// --------------------------------------------------------------
// Macro: CATIVpmServices.h
// --------------------------------------------------------------
// Contenu:  Header pour gestion des entites VPM
// --------------------------------------------------------------
// Historique:
// Creation : 96/09/16 > AHC 
// --------------------------------------------------------------
// Debut de la macro
// --------------------------------------------------------------
//
#ifndef CATIVpmServices_H_
#define CATIVpmServices_H_
//
#ifdef	_WINDOWS_SOURCE

#ifdef	__VX0TOOLS
#define	ExportedByVX0TOOLS	__declspec(dllexport)
#else //__VX0TOOLS
#define	ExportedByVX0TOOLS	__declspec(dllimport)
#endif  //__VX0TOOLS

#ifdef	__GUIDVPMServices
#define	ExportedByGUIDVPMServices	__declspec(dllexport)
#else //__GUIDVPMServices
#define	ExportedByGUIDVPMServices	__declspec(dllimport)
#endif //__GUIDVPMServices


#else //_WINDOWS_SOURCE
#define	ExportedByGUIDVPMServices
#define	ExportedByVX0TOOLS
#endif //_WINDOWS_SOURCE

//
// -------------------------------
// Include des classes utilisees
// -------------------------------
#include "CATBaseUnknown.h"
extern ExportedByGUIDVPMServices IID IID_CATIVpmServices ;      

#include "CATUnicodeString.h"
#include "CATVpmType.h"
#include "CATIContainer.h"
#include "CATListOfCATUnicodeString.h"
#include "sequence_octet.h"
/**
*	@CAA2Level L1
*	@CAA2Usage U3
*  @deprecated V5R15
*/
//
// methode globale de creation
//
class CATIVpmServices ;

/**
 * This class encapsulates various basic services. Prefer to
 * use equivalent services proposed by the System FW when possible.
 */
class ExportedByGUIDVPMServices CATIVpmServices : public CATBaseUnknown 
     {
     //
     CATDeclareInterface ;
     //
     public:
		/**
			* @nodoc
			*/
       // Do not use this method. Use CATFindPath from CATLib.h instead.
       virtual CATUnicodeString SeekFile
                   (const CATUnicodeString& iFileName,
                    const CATUnicodeString& iPath    ) = 0;


    /** @nodoc
     * @deprecated V5R15
     *
    * Returns the access on a file. 
    * @param iFullpath
    *  Name of the file 
    * @return
    *  A VPM_Access structure Exist/Read/Write/Execute
    */
     virtual VPM_Access CheckFile (const CATUnicodeString& iFullpath) =0;

    /**
     * @deprecated V5R15
     *
    * Loads a schema by its name. 
    * @param iSchemaName
    *  Name of the schema 
    * @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>0</dt>
    *     <dd>Load operation failed</dd>
    *     <dt>Other</dt>
    *     <dd>Load operation succeeded</dd>
    *   </dl>
    *
    */
     virtual int  LoadSchema (const CATUnicodeString& iSchemaName) =0;

    /**
     * @deprecated V5R15
     *
     * Gets the settings' separator. 
     */
       virtual CATUnicodeString  GetSettingSeparator () =0;

    /**
     * @deprecated V5R15
     *
    * Puts a new settings' separator.
    * @param iSeparator
    *  The new separator 
    */
     virtual void  PutSettingSeparator 
                             (const CATUnicodeString& iSeparator) =0;

    /**
     * @deprecated V5R15
     *
    * Returns the value of a setting.
    * @param iSettingName
    *  Name of the setting
    * @param iFileName
    *  Name of the settings' file.
    *
    * Attention the iFileName parameter cannot be a pathname, it must be the filename and that file must be in the CATUserSettingPath or CATReferenceSettingPath.
    */
     virtual CATUnicodeString GetSetting
                             (const CATUnicodeString& iSettingName,
                              const CATUnicodeString& iFileName   )=0;

    /**
     * @deprecated V5R15
     *
    * Adds a new setting.
    * @param iSettingName
    *  Name of the new setting
    * @param iSettingValue
    *  Value of the new setting
    * @param iFileName
    *  Name of the settings' file
    */
     virtual HRESULT PutSetting
                  (const CATUnicodeString& iSettingName  ,
                   const CATUnicodeString& iSettingValue , 
                   const CATUnicodeString& iFileName     )=0 ;

    /**
     * @deprecated V5R15
     *
    * Removes a setting.
    * @param iSettingName
    *  Name of the setting
    * @param iFileName
    *  Name of the settings' file
    */
     virtual HRESULT RemoveSetting
                  (const CATUnicodeString& iSettingName  ,
                   const CATUnicodeString& iFileName     )=0;

    /**
     * @deprecated V5R15
     *
    * Gets the list of a setting variable.
    * @param iFileName
    *  Name of the settings' file
    */
     virtual CATListOfCATUnicodeString  ListOfSettingVariables
                   (const CATUnicodeString& iFileName )=0;

    /**
     * @deprecated V5R14
     *
    * Gets the path of a file using the SearchOrder by VPM_SEARCH_PATH in VPMAdmin Setting
    * @param iFileName
    *  Name of the file
    */
       // 
       // Use CATGetFilePathFromOfficialVariable instead.
       //       
     virtual CATUnicodeString SearchPath
                               (const CATUnicodeString& iFileName)=0;

    /**
     * @deprecated V5R15
     *
    * Splits a path of a file and puts all elements in a list.
    * @param iFullPath
    *  The whole path of the file
    */
     virtual CATListOfCATUnicodeString SeekPath
                               (const CATUnicodeString& iFullPath) =0;

    /**
     * @deprecated V5R15
     *
    * Splits a path of a environment variable and puts all elements in a list.
    * @param iEnvName
    *  The name of the environment variable
    */
      virtual CATListOfCATUnicodeString GetEnv
                                (const CATUnicodeString& iEnvName) =0;

    /**
     * @deprecated V5R15
     *
    * Returns a unique UUID as a sequence of octet.
    */
      virtual SEQUENCE(octet) GetOctetIdentifier() =0;

    /**
     * @deprecated V5R15
     *
    * Returns a unique UUID as a CATUnicodeString.
    */
      virtual CATUnicodeString GetIdentifier() =0;
 
    /**
     * @deprecated V5R14
     *
     * Returns the list of the dynamic objects.
     * @param iInterfaceName
     *  A specified interface's name
     */
       // Use CATMetaClass::ListOfSupportedClass instead.
      virtual CATListOfCATUnicodeString GetDynamicObjList
              (const CATUnicodeString& iInterfaceName) =0;

    /**
     * @deprecated V5R15
     *
    * Creates the simple container.
    * @param iModelType
    *  The type of the model
    * @param iShemaName
    *  The name of the schema    
    */
      virtual CATIContainer_var CreateSimpleContainer
              (const CATUnicodeString& iModelType   ,
               const CATUnicodeString& iShemaName ) =0;

    /** @nodoc */
       virtual CATUnicodeString SeekEnv( const CATUnicodeString& iPath )=0 ; 
      };
      CATDeclareHandler(CATIVpmServices,CATBaseUnknown);

    /**
    * Global method to create the services
    */
ExportedByVX0TOOLS CATIVpmServices_var CreateServices();
//
// -------------------------------
// fin de classe 
// -------------------------------
//
#endif
