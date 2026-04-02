#ifndef CATITPSIDServices_H
#define CATITPSIDServices_H

// COPYRIGHT Dassault Systemes 2005

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"

class CATUnicodeString;
class CATDocument;

extern "C" const IID IID_CATITPSIDServices ;

/**
 * Interface to retrieve FTA object by identificator or to generate FTA identificator.
 * <b>Role<\b>: This interface allows to retrieve a FTA feature by its identificator inside 
 * the input document. Use CATInstanciateComponent service to retrieve a pointer on this interface.
 */

class CATITPSIDServices: public IUnknown
{
  public:

    /**
     * Retrieves the FTA key of the FTA Feature.
     *   @param ipiObj
     *     FTA feature in the Document
     *   @param oFtaKey
     *     The unique identificator of the FTA object.
     *     If return code E_FAIL ipiObj is not found in the document.
     *     If return code S_OK and oFtaKey != "" ipiObj is a FTA object having 
     *      an unique FTA key.
     *     If return code S_OK and oFtaKey == "" ipiObj is a FTA object not having 
     *      an unique FTA key.
     */
    virtual HRESULT GetFTAKeyFromFeature(const IUnknown* ipiObj,
                                         CATUnicodeString& oFtaKey) const = 0;

    /**
     * Retrieves the FTA feature with the FTA key in a document.
     *   @param iFtaKey
     *     The unique identificator for a document
     *   @param ipdoc
     *     The document where the FTA feature is sought.
     *   @param opiObj
     *     The FTA object found.
     *     If return code E_FAIL opiObj is not found in the document.
     *     If return code S_OK opiObj is found in the document.
     *
     */
    virtual HRESULT GetFeatureFromFTAKey(const CATUnicodeString& iFtaKey,
                                         CATDocument * ipdoc,
                                         IUnknown ** opiObj) const = 0;

};
#endif
