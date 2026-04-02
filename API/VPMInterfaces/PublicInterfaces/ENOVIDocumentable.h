#ifndef ENOVIDocumentable_H
#define ENOVIDocumentable_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// =================================================================
// Includes
// =================================================================
// System
#include "GUIDVPMInterfaces.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATListOfCATIAVPMDocumentVersion.h"

// =================================================================
// Forward classes declaration
// =================================================================
class CATICfgFilter;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_ENOVIDocumentable;
#else
extern "C" const IID IID_ENOVIDocumentable;
#endif

//------------------------------------------------------------------
/**
 * Interface to manage associated documents.
 */
class ExportedByGUIDVPMInterfaces ENOVIDocumentable : public CATBaseUnknown
{
    CATDeclareInterface;

    public:
    //
    // =======================================================
    // Method(s) 
    // =======================================================
    //iDocumentType : par defaut VPMTPDocumentation

/**
 * Associate a new Document.
 * @param iDocument
 *   The CATIAVPMDocumentVersion object.
 * @param iDocumentType
 *   The Document Type.
 *   <br><b>Legal Values</b>: The default value for the Document Type is set to "".
 * @param iDomainName
 *   The Domain Name.
 *   <br><b>Legal Values</b>: The default value for the Domain Name is set to "".
 * @param iRole
 *   The Role Name.
 *   <br><b>Legal Values</b>: The default value for the Role Name is set to "ENO_UNVAL" (i.e. we don't valuate this attribute). 
 * @return
 * <ul>
 *  <li> S_OK  put_Document succeeded.
 *  <li> S_FALSE iDocument is already associated to this.
 *  <li> E_FAIL put_Document failed.
 * </ul>    
 */
    virtual HRESULT put_Document(const CATIAVPMDocumentVersion* iDocument,
				 const CATUnicodeString& iDocumentType="",
				 const CATUnicodeString& iDomainName="",
				 const CATUnicodeString& iRole="ENO_UNVAL")=0;

    //iDocumentType : par defaut VPMTPDocumentation
/**
 * Retrieves the Documents that matches the criteria of specified DocumentType, Config Filter and Domain Name.
 * @param oDocument
 *   The CATListOfCATIAVPMDocumentVersion.
 * @param iDocumentType
 *   The Document Type.
 *   <br><b>Legal Values</b>: The default value for the Document Type is set to "".
 * @param icfgFilter
 *   The Config Filter.
 *   <br><b>Legal Values</b>: The default value for the CATICfgFilter is set to NULL.
 * @param iDomainName
 *   The Domain Name.
 *   <br><b>Legal Values</b>: The default value for the Domain Name is set to "".
 * @param iRole
 *   The Role Name.
 *   <br><b>Legal Values</b>: The default value for the Role Name is set to "ENO_UNVAL" (i.e. we don't filter on this attribute).
 *   if iRole is "ENO_NOPRIMSEC", return documents neither Primary, nor Secondary. 
 */
    virtual HRESULT get_Documents(CATListOfCATIAVPMDocumentVersion& oDocument,
				  const CATUnicodeString& iDocumentType="",
				  const CATICfgFilter* icfgFilter=NULL,
				  const CATUnicodeString& iDomainName="",
				  const CATUnicodeString& iRole="ENO_UNVAL")=0;

    //iDocumentType : par defaut VPMTPDocumentation

/**
 * Detaches an associated document.
 * @param iDocumentType
 *   The document to detach.
 * @param iDocumentType
 *   The document type.
 *   <br><b>Legal Values</b>: The default value for the Document Type is set to "VPMTPDocument". 
 * @param iDomainName
 *   The Domain Name.
 *   <br><b>Legal Values</b>: The default value for the Domain Name is set to "TEMPLAT".
 * @return
 * <ul>
 *  <li> S_OK  DetachDocument succeeded.
 *  <li> S_FALSE iDocument is not associated to this.
 *  <li> E_FAIL DetachDocument failed.
 * </ul> 
 */
    virtual HRESULT DetachDocument(const CATIAVPMDocumentVersion* iDocument,
				   const CATUnicodeString& iDocumentType="",
				   const CATUnicodeString& iDomainName="")=0;
};
//-----------------------------------------------------------------
// Handler definition
//-----------------------------------------------------------------
/** @nodoc */
CATDeclareHandler(ENOVIDocumentable, CATBaseUnknown);

#endif



