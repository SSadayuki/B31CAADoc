#ifndef CATITPSNoa_H
#define CATITPSNoa_H

// COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"
#include "CATBoolean.h"
extern "C" const IID IID_CATITPSNoa;

/**
 * Interface for the TPS Noa object.
 */
class CATITPSNoa: public IUnknown
{
  public:
    /**
     * Sets Type of Noa.
     *  @param ipNoaType
     *   Kind of Noa, which will serve for filtering.
     */
    virtual HRESULT SetNoaType (const wchar_t *ipNoaType) = 0;

    /**
     * Retrieves Type of Noa.
     *  @param opNoaType
     *   Kind of Noa.
     *   @return
     *      S_OK if succeded (opNoaType must be deleted).
     */
    virtual HRESULT GetNoaType (wchar_t **opNoaType) const = 0;

    /**
     * Sets Text Representation.
     *  @param ipText
     *   Text for graphical representation.
     */
    virtual HRESULT SetText (const wchar_t *ipText) = 0;

    /**
     * Retrieves Text Representation.
     *   @param opText
     *     Returned text for graphical representation.
     *   @return
     *      S_OK if succeded (opText must be deleted).
     */
    virtual HRESULT GetText (wchar_t **opText) const = 0;

    /**
     * Sets Flag Text.
     *  @param ipText
     *   Flag Text
     */
    virtual HRESULT SetFlagText (const wchar_t *ipText) = 0;

    /**
     * Retrieves Flag Text.
     *  @param opText
     *   Flag Text
     *   @return
     *      S_OK if succeded (opText must be deleted).
     */
    virtual HRESULT GetFlagText (wchar_t **opText) const = 0;

    /**
     * Retrieves the number of urls.
     *  @param oNumber
     *   the size of url list.
     */
    virtual HRESULT GetUrlListSize ( int* oNumber ) const = 0;

    /**
     * Retrieves url.
     *  @param iIndex
     *   Index of url.
     *  @param opUrl
     *   url
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
     * Delete an url.
     *  @param iIndex
     *   Index of url to remove.
     *  @return
     *      S_OK if succeded.
     */
    virtual HRESULT RemoveURL (const int iIndex) const = 0;

    /**
     * @nodoc 
     * Specifies if instances of a Noa can be modified or not
     * at instanciation and after.
     *  @param ibEdit
     *   <br><b>Legal values</b>: <tt>TRUE</tt> if instances ca be modified,
     *   or <tt>FALSE</tt> otherwise.
     */
    virtual HRESULT SetNoaEditabilityForInstances (const CATBoolean ibEdit) = 0;

    /**
     * @nodoc 
     * Tells if instances of a Noa can be modified or not
     * at instanciation and after.
     *  @param obEdit
     *   <br><b>Legal values</b>: <tt>TRUE</tt> if instances ca be modified,
     *   or <tt>FALSE</tt> otherwise.
     */
    virtual HRESULT GetNoaEditabilityForInstances (CATBoolean * obEdit) const = 0;

};
#endif
