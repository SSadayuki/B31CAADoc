// COPYRIGHT Dassault Systemes 2002
//===================================================================
//
// CATIDMUDataFlow.h
//   This interface allows the DMU Data Flow Management.
//
//===================================================================
//
// Jan 2002  Creation: LJE
//
//===================================================================
#ifndef CATIDMUDataFlow_H
#define CATIDMUDataFlow_H

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

#include "CATNavigatorItf.h"
#include "CATBaseUnknown.h"

#include "CATErrorDef.h"
#include "CATUnicodeString.h"
#include "CATListOfCATUnicodeString.h"
class CATDocument;

extern ExportedByCATNavigatorItf IID IID_CATIDMUDataFlow ;

//------------------------------------------------------------------

/**
 * Allows the DMU Data Flow Management within the DMU Navigator environment.
 * DMU Data Flow is a set of Methodologies, Tools and Customizations that supports the necessary Flow of Data
 * between Applications during DMU Industrial Processes.
 * Applications are DMU Navigator, VPM-PSN and Webtree (Enovia V5 will be treated in a second version).
 */
class ExportedByCATNavigatorItf CATIDMUDataFlow: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * Build the product and feed the cache with data corresponding to a document.
     * @param iListArg
     *   The list of arguments.
     * @param iListDoc
     *   The list of documents to treat.
     * @return
     *   HRESULT
     */
    virtual HRESULT BuildProduct (
      const CATListOfCATUnicodeString & iListArg,
      const CATListOfCATUnicodeString & iListDoc) const=0;
  
    /**
     * Prepare the distribution of a list of files from their location to a target.
     * @param iuDocumentDirectory
     *   The target directory for all documents.
     * @param iuCacheDirectory
     *   The cache directory for the target.
     * @param iListFiles
     *   The list of files whose corresponding cache has to be distributed.
     * @param iListTS
     *   The list of timestamp corresponding to files.
     *   The size of this list is equal to the one of iListFiles.
     * @param oListFrom
     *   The list of original location of cache data to be distributed.
     *   The size of this list is equal to the one of iListFiles.
     *   The location is blank if an error occurs during cache management.
     * @param oListTo
     *   The list of target location of cache data to be distributed.
     *   The size of this list is equal to the one of iListFiles.
     *   The location is blank if an error occurs during cache management.
     * @return
     *   HRESULT
     */
    virtual HRESULT PrepareDistribution(
      const CATUnicodeString & iuDocumentDirectory,
      const CATUnicodeString & iuCacheDirectory,
      const CATListOfCATUnicodeString & iListFiles,
      const CATListOfCATUnicodeString & iListTS,
      CATListOfCATUnicodeString & oListFrom,
      CATListOfCATUnicodeString & oListTo) const=0;

    /**
     * Replace all components of a product document by the corresponding CGR located in a directory.
     * @param ipDocument
     *   The document.
     * @param iuCGRDirectory
     *   The directory.
     * @return
     *   HRESULT
     */
    virtual HRESULT ReplaceByCGR(CATDocument * ipDocument, const CATUnicodeString & iuCGRDirectory) const=0;

    /**
     * List all referenced documents of a product document.
     * @param ipDocument
     *   The document (it must be a Product document).
     * @param oList
     *   The list of the identifiers of documents.
     * @return
     *   HRESULT
     */
    virtual HRESULT ListDocuments(CATDocument * ipDocument, CATListOfCATUnicodeString & oListOfIds) const=0;

    /**
     * Replace all referenced documents of a product document, contained in a list by corresponding document in another one.
     * @param ipDocument
     *   The document (it must be a Product document).
     * @param iListFromOfIds
     *   The list of the identifiers of documents to be replaced.
     * @param iListToOfIds
     *   The list of the identifiers of documents to replace.
     *   The size of this list is equal to the one of iListFrom.
     *   Each document of this list must have the same type and the same environment
     *   than the corresponding document in the other one.
     * @return
     *   HRESULT
     */
    virtual HRESULT ReplaceWithLists(
      CATDocument * ipDocument,
      const CATListOfCATUnicodeString & iListFromOfIds,
      const CATListOfCATUnicodeString & iListToOfIds) const=0;

    /**
     * Save all documents related to a product in a directory.
     * @param ipDocument
     *   The document (it must be a Product document).
     * @param iuDirectory
     *   The directory that will contain documents.
     * @param iuPrefix
     *   The prefix used to save product documents.
     * @param ibData
     *   To save geometries.
     * @param ibCache
     *   To save cache data.
     * @param oListFromOfIds
     *   The list of the identifiers of documents in the original location.
     * @param oListToOfIds
     *   The list of the identifiers of documents in the directory.
     * @return
     *   HRESULT
     */
    virtual HRESULT SaveAsFrozen(
      CATDocument * ipDocument,
      const CATUnicodeString & iuDirectory,
      const CATUnicodeString & iuPrefix,
      const CATBoolean & ibData,
      const CATBoolean & ibCache,
      CATListOfCATUnicodeString & oListFromOfIds,
      CATListOfCATUnicodeString & oListToOfIds) const=0;

    /**
     * Prepare the export in the cache of documents related to a product.
     * Retrieve all documents related to a product and compute their path in the directory.
     * @param ipDocument
     *   The document (it must be a Product document).
     * @param iuDirectory
     *   The directory that will contain documents.
     * @param iuPrefix
     *   The prefix used to save product documents.
     * @param ibData
     *   To export geometries.
     * @param oListFromOfIds
     *   The list of the identifiers of documents in the cache.
     * @param oListToOfIds
     *   The list of the identifiers of documents in the directory.
     * @return
     *   HRESULT
     */
    virtual HRESULT CacheExport(
      CATDocument * ipDocument,
      const CATUnicodeString & iuDirectory,
      const CATUnicodeString & iuPrefix,
      const CATBoolean & ibData,
      CATListOfCATUnicodeString & oListFromOfIds,
      CATListOfCATUnicodeString & oListToOfIds) const=0;

    /**
     * Prepare the import in the cache of marked documents in a directory.
     * Retrieve all marked documents from a directory and compute their path in the cache.
     * @param iuDirectory
     *   The directory containing marked documents.
     * @param oListFromOfIds
     *   The list of the identifiers of documents in the directory.
     * @param oListToOfIds
     *   The list of the identifiers of documents in the cache.
     * @return
     *   HRESULT
     */
    virtual HRESULT CacheImport(
      const CATUnicodeString & iuDirectory,
      CATListOfCATUnicodeString & oListFromOfIds,
      CATListOfCATUnicodeString & oListToOfIds) const=0;

    /**
     * List all cache files from a given type, related to a product document.
     * @param ipDocument
     *   The document (it must be a Product document).
     * @param iuCacheType
     *   The cache type.
     * @param oList
     *   The list of the identifiers of cache files.
     * @return
     *   HRESULT
     */
    virtual HRESULT ListCacheFiles(
      CATDocument * ipDocument,
      const CATUnicodeString & iuCacheType,
      CATListOfCATUnicodeString & oListOfIds) const=0;

    /**
     * Collapse a product document by replacing all sub-product by corresponding components.
     * @param ipDocument
     *   The document.
     * @return
     *   HRESULT
     */
    virtual HRESULT Collapse(CATDocument * ipDocument) const=0;

    /**
     *  @nodoc
     */
    virtual HRESULT Load(const CATUnicodeString & iuName, CATDocument *& opDocument) const=0;

    /**
     *  @nodoc
     */
    virtual HRESULT Execute(const CATUnicodeString & iuCommand) const=0;

};

//------------------------------------------------------------------

CATDeclareHandler( CATIDMUDataFlow, CATBaseUnknown );

#endif
