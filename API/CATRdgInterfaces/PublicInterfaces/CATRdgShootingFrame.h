#ifndef CATRdgShootingFrame_h
#define CATRdgShootingFrame_h

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */

#include "CATRdgItfCPP.h"
#include "CATDlgFrame.h"

class CATIRdgOptions;


/** 
 * Virtual class for shooting dialog frame.
 * <b>Role</b>:
 * This class must be inherited to provide a new frame
 * in the shooting definition dialog.
 * It is used to edit specific parameters for plug-in
 * providers.
 */

class ExportedByCATRdgItfCPP CATRdgShootingFrame : public CATDlgFrame
{
/** @nodoc */
  CATDeclareClass;
  
  public:

/**
 * Constructs a class to gather custom shooting parameters.
 * @param iParent
 *   The parent class in the CATCommand agregation hierarchy. 
 * @param iDialogObjectName
 *   The dialog object name. 
 * @param iStyle
 *   The application window styles. You can cumulate several
 *   styles using a logical or.
 *   <br><b>Legal values</b>: 
 *   <ul>
 *   <li> <tt>NULL (default)</tt> so that the 
 *   frame is visible and has a title, and so that its layout is 
 *   managed using tabulations </li> 
 *   <li> <tt>CATDlgFraNoTitle</tt> if the 
 *   the frame has no title </li> 
 *   <li><tt>CATDlgFraNoFrame</tt> 
 *   if the the frame is not visible, its contents remaining visible,
 *   (this hides the title if any) </li> 
 *   <li><tt>CATDlgGridLayout</tt> if the 
 *   frame layout is managed using a grid.</li>
 *   </ul>
 */
    CATRdgShootingFrame(CATDialog *iParent, const CATString &iDialogObjectName, CATDlgStyle iStyle=CATDlgFraNoTitle|CATDlgFraNoFrame);

/**
 * @nodoc 
 */
    virtual ~CATRdgShootingFrame();

/**
 * Initializes the frame with the new edited shooting.
 * @param iOptions
 *   The edited options.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT Init(CATIRdgOptions *iOptions) = 0;

/**
 * Returns the long help Id for the current frame (Used when
 * F1 key is pressed.
 * @param oLongHelpId
 *   The long help Id.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetLongHelpId(CATString &oLongHelpId) = 0;
};
#endif
