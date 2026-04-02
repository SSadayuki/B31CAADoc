//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2002
//=============================================================================
#ifndef ENOVIAVaultAndDocFile_H
#define ENOVIAVaultAndDocFile_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */


/**
 * Class to manage associations with Files in the Vault.
 * 
 * <b>Role</b>: This interface allows to manage attached files <ul>
 *              <li>get files from the Vault</li>
 *              <li>store attached files into the Vault</li>
 *              <li>get information about associated file and Vault </li></ul>
 *
 * @see ENOVIVaultDocument.
 */

// =================================================================
// Includes
// =================================================================
// System
#include "GUIDVPMInterfaces.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"

// =================================================================
// Forward classes declaration
// =================================================================
class ENOVIVaultDocument;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_ENOVIAVaultAndDocFile;
#else
extern "C" const IID IID_ENOVIAVaultAndDocFile;
#endif

//------------------------------------------------------------------
class ExportedByGUIDVPMInterfaces ENOVIAVaultAndDocFile : public CATBaseUnknown
{
	 CATDeclareInterface;
	 
public:
	 // =======================================================
	 // Method(s) 
	 // =======================================================
	 /**
	  * creates a Vault document and puts it into the Vault
	  * <br> Returns E_FAIL if the Vault document was already created.
	  * @param iFullPathName : the full path file name.
	  * @param iType         : the type of the file (CATPart,CATDrawing,...) 
	  * @param oData         : the created Vault document
	  *
	  */  
	 virtual HRESULT  __stdcall AggregateData	 (const CATUnicodeString & iFullPathName,
											  const CATUnicodeString & iType,
											  ENOVIVaultDocument *& oData)=0;
	 
	 /**
	  * get the Document File from the Vault.
	  * returns E_FAIL if no vault document is attached to the current object.x
	  * @param oData : the VaultDocument extracted from the Vault.
	  */  
	 virtual HRESULT  __stdcall get_Data(ENOVIVaultDocument *& oData)=0;
	 
	 /**
     * get name of the attached File stored in the vault .
	 * @param oFileName
	 * the name of the attached File
     */  
	 virtual HRESULT  __stdcall get_FileName(CATUnicodeString & oFileName)=0;
	 
	 /**
	  * delete the Vault document attached to the current object.
	  */  
	 virtual HRESULT  __stdcall DeleteData()=0;
	 
	 /**
	  * check if there is a vault item attached to the current object.<br>
	  * returns : <ul>
	  *           <li>S_OK    if the object points at an attached file in the Vault</li>
	  *           <li>S_FALSE if the object does not point at an attached file in the Vault</li>
	  *           <li>E_FAIL  else </li></ul>
	  */  
	 virtual HRESULT  __stdcall IsDocumented()=0;
	 
	 /**
	  * get the type of the attached file, i.e. the input type of the AggregateData method.
	  * @param oType
	  * the type of the attached file.
	  */  
	 virtual HRESULT  __stdcall get_Type(CATUnicodeString & oType)=0;
	 
    /**
     * sets the name of the Vault where the vault documents will be stored for the current object
	 * @param iVaultName 
	 * the Vault Name to be set.
     */  
	 virtual HRESULT  __stdcall put_VaultName(const CATUnicodeString & iVaultName)=0;

    /**
     * get the Vault name where the attached file is stored.
	 * @param VaultName
     */  
	 virtual HRESULT  __stdcall get_VaultName(CATUnicodeString & oVaultName)=0;
	 
	 /**
	  * allows to validate modifications done on the attached vault document
	  * 
	  */  
	 virtual HRESULT  __stdcall NotifyModifications()=0;
	 
	 /**
	  * associates current object with a Vault document.
	  * @param iVaultDocument 
	  * the Vault entity which will be attached to current instance
	  */  
	 virtual HRESULT  __stdcall AttachVaultDocument(ENOVIVaultDocument * iVaultDocument)=0;
};
//-----------------------------------------------------------------
// Handler definition
//-----------------------------------------------------------------
CATDeclareHandler(ENOVIAVaultAndDocFile, CATBaseUnknown);

#endif

