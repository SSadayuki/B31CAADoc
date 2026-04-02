#ifndef CATIRdgEngine_h
#define CATIRdgEngine_h

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */

#include "CATRdgItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATBooleanDef.h"


class CATIRdgWorld;
class CATUnicodeString;
class CATIRdgOptions;
class CATDialog;
class CATRdgShootingFrame;
class CATDlgFrame;


enum CATRdgPixelFormat { RGBA_UC=1, RGBA_FP=2 };


typedef void (*CATRdgDisplayCB)();
typedef CATBoolean (*CATRdgAbortCB)();
typedef void (*CATRdgProgressCB)(int);
typedef void (*CATRdgMessageCB)(CATUnicodeString &);
typedef void (*CATRdgFrameDoneCB)();
typedef struct {int xl, yl, xh, yh;} CATRdgWindow;

#define LOCAL_HOST "localhost"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATRdgItfCPP IID IID_CATIRdgEngine;
#else
extern "C" const IID IID_CATIRdgEngine;
#endif

/** 
 * Interface for plug-in engines.
 * <b>Role</b>:
 * This is the interface that plug-in engine implements.
 * It is used by the rendering manager to communicate with
 * the plugged engines.
 */

class ExportedByCATRdgItfCPP CATIRdgEngine : public CATBaseUnknown
{
/** @nodoc */
  CATDeclareInterface;

  public:

/**
 * Translate and render the scene.
 * @param iWorld
 *   The scene description.
 * @param iOptions
 *   The rendering options.
 * @param iPixels
 *   The image pixels reference.
 * @param iW
 *   The image width.
 * @param iH
 *   The image height.
 * @param iFormat
 *   The image format.
 * @param iWindow
 *   The sub window of the image to render. If NULL, the whole image is rendered.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT Render(CATIRdgWorld *iWorld, CATIRdgOptions *iOptions, void *iPixels, int iW, int iH, CATRdgPixelFormat iFormat, CATRdgWindow *iWindow=NULL) = 0;

/**
 * Attaches a display callback to the engine.
 * @param iUserMethod
 *   The method to call for pixel display.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT SetDisplayCB(CATRdgDisplayCB iUserMethod) = 0;

/**
 * Attaches an abort callback to the engine.
 * @param iUserMethod
 *   The method to call for abort checking.
 *   This method returns TRUE if abort has been requested
 *   FALSE otherwise.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT SetAbortCB(CATRdgAbortCB iUserMethod) = 0;

/**
 * Attaches a progress callback to the engine.
 * @param iUserMethod
 *   The method to call for progress update.
 *   This method has an input parameter which
 *   value ranges from <code>0</code> to 
 *   <code>100</code>. 
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT SetProgressCB(CATRdgProgressCB iUserMethod) = 0;

/**
 * Attaches a message callback to the engine.
 * @param iUserMethod
 *   The method to call for message display.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT SetMessageCB(CATRdgMessageCB iUserMethod) = 0;

/**
 * Attaches a frame done callback to the engine.
 * @param iUserMethod
 *   The method to call when current frame is done.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT SetFrameDoneCB(CATRdgFrameDoneCB iUserMethod) = 0;

/**
 * Returns the NLS name used for the engine.
 * This string is used in CATIA options to list the
 * available rendering engines.
 * @param oName
 *   The engine alias.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetAlias(CATUnicodeString &oName) = 0;

/**
 * Returns the count of frames for specific controls.
 * @param oCount
 *   The count of frames.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetShootingFrameCount(int &oCount) = 0;

/**
 * Returns the dialog frame for specific controls.
 * @param iSize
 *   The index of the frame to build (from 0 to count-1).
 * @param iParent
 *   The parent class in the CATCommand agregation hierarchy.
 * @param oFrame
 *   The frame to add in the shooting dialog.
 * @param oTitle
 *   The NLS title for the frame tab page.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetShootingFrame(int &iIndex, CATDialog *iParent, CATRdgShootingFrame **oFrame, CATUnicodeString& oTitle) = 0;

/**
 * Returns the network rendering support status.
 * @param oSupported
 *   The network rendering support status.
 *   <ul> network renderingsupport status.
 *   <li> TRUE  network rendering is supported </li>
 *   <li> FALSE network rendering is not supported </li>
 *   </ul>
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT IsNetworkSupported(CATBoolean &oSupported) = 0;

/**
 * Adds a new host for network rendering and, on success 
 * returns information on the host.
 * @param iHost
 *   The hostname to add.
 * @param oOs
 *   The operating system of the added host.
 * @param oCpus
 *   The cpu count of the added host.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT AddHost(CATUnicodeString &iHost, CATUnicodeString &oOs, unsigned int &oCpus) = 0;

/**
 * Removes a host from network rendering.
 * @param iHost
 *   The hostname to remove.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT RemoveHost(CATUnicodeString &iHost) = 0;

/**
 * Returns the dialog frame for specific network controls.
 * @param iParent
 *   The parent class in the CATCommand agregation hierarchy. 
 * @param oFrame
 *   The frame to append in the network dialog.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetNetworkFrame(CATDialog *iParent, CATDlgFrame **oFrame) = 0;
};

/** @nodoc */
CATDeclareHandler(CATIRdgEngine,CATBaseUnknown);

#endif
