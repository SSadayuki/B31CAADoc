#ifndef CATIRdgDisplay_h
#define CATIRdgDisplay_h

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */

#include "CATRdgItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATBooleanDef.h"


class CATPixelImage;
class CATUnicodeString;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATRdgItfCPP IID IID_CATIRdgDisplay;
#else
extern "C" const IID IID_CATIRdgDisplay;
#endif

/** 
 * Interface for preview display.
 * <b>Role</b>:
 * This is the interface that preview windows implements.
 * It is used by the rendering manager to display the
 * rendered images.
 */

class ExportedByCATRdgItfCPP CATIRdgDisplay : public CATBaseUnknown
{
/** @nodoc */
  CATDeclareInterface;

  public:

/**
 * Draws an image.
 * @param iImage
 *   The image to display.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT Draw(CATPixelImage *iImage) = 0;

/**
 * Clears drawing area.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT Clear() = 0;

/**
 * Checks if user requested abort.
 * @param oAborted
 *   The abort status.
 *   <ul> abort status.
 *   <li> TRUE  abort requested </li>
 *   <li> FALSE abort not requested </li>
 *   </ul>
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT CheckAbort(CATBoolean &oAborted) = 0;

/**
 * Sets the new progress bar position.
 * @param iProgress
 *   The new position.
 *   This value ranges from <code>0</code> to 
 *   <code>100</code>. 
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT SetProgress(int &iProgress) = 0;

/**
 * Sets the string to display in the message area.
 * @param iMessage
 *   The message to display.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT SetMessage(CATUnicodeString &iMessage) = 0;
};

/** @nodoc */
CATDeclareHandler(CATIRdgDisplay,CATBaseUnknown);

#endif
