#ifndef CATITPSFlagNote_H
#define CATITPSFlagNote_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"

extern "C" const IID IID_CATITPSFlagNote;

/**
 * Interface for the TPS Flag Note object.
 */
class CATITPSFlagNote: public IUnknown
{
  public:

    /**
     * Sets text.
     */
    virtual HRESULT SetText (const wchar_t *ipText) = 0;

    /**
     * Retrieves text.
     */
    virtual HRESULT GetText (wchar_t **opText) const = 0;

    /**
     * Sets flag text.
     */
    virtual HRESULT SetFlagText (const wchar_t *ipText) = 0;

    /**
     * Retrieves flag text.
     */
    virtual HRESULT GetFlagText (wchar_t **opText) const = 0;

    /**
     * Retrieves the number of URLs.
     *  @param oNumber
     *   the size of URL list.
     */
    virtual HRESULT GetUrlListSize ( int* oNumber ) const = 0;

    /**
     * Retrieves URL.
     *  @param iIndex
     *   Index of URL.
     *  @param opUrl
     *   URL
     *   @return
     *      S_OK if succeded (opUrl must be deleted).
     */
    virtual HRESULT GetURL (const int iIndex, wchar_t ** opUrl ) const = 0;

   /**
     * Sets or modifies a link to file or URL.
     *   @param pUrl
     *    The url or file link to set.
     *   @param iIndex
     *    index of the URL to modify.
     *   if the iIndex is not defined, the URL is added to the FlagNote.
     *   @return
     *      S_OK if succeded.
     */
    virtual HRESULT SetURL( const wchar_t *pUrl, const int iIndex = -1 ) const = 0;

    /**
     * Deletes an URL.
     *  @param iIndex
     *   Index of URL to remove.
     *  @return
     *      S_OK if succeded.
     */
    virtual HRESULT RemoveURL (const int iIndex) const = 0;

};
#endif
