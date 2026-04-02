#ifndef CATFRMLAYOUT_H
#define CATFRMLAYOUT_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

// Abstract: General Layout of Windows for an Application. 
//           A CATFrmLayout manages a set of CATFrmWindows
//           This Windows may be:  Tiled Windows
//                                 PopUp Windows
//                                (Free layout Windows (to be defined)) 
//
//----------------------------------------------------------------------------
// Usage:    A CATFrmLayout is created to manage all the Windows of the 
//           Application. A First Window is associated to the Layout, 
//           then new Windows may be created by splitting existing 
//           Windows or by creating PoPup Windows.
// 
//----------------------------------------------------------------------------
// Inheritance:  CATDialog (Dialog framework)
//                CATDlgBox 
//                 CATDlgFrame
//                  CATFrmLayout
//----------------------------------------------------------------------------
// Main methods:    
//
//           SetCurrentWindow
//           GetCurrentWindow
//       
//----------------------------------------------------------------------------
       
class CATFrmWindow;
class CATFrmMenuManager;
class CATFrmViewManager;
class CATFrmEditor;

#include "CD0WIN.h"
#include "CATDlgInclude.h"
#include "CATDlgFrame.h"
#include "CATListOfCATFrmWindow.h"

//enum  CATFrmWindowMode {MaximizeWindowMode, RestoredWindowMode};

/**
 * Class to manage a set of CATFrmWindow.
 * <b>Role</b>: This class offers a general layout of windows for applications.
 * It supplies standard functionnalities on these windows (cascade,
 * horizontal/vertical tile, maximize, minimize ...).
 * During a session of CATIA the unic instance of CATFrmLayout can be obtained
 * by using static method @href #GetCurrentLayout
 * @see CATFrmWindow
 */
class ExportedByCD0WIN CATFrmLayout: public CATDlgFrame
{
   DeclareResource(CATFrmLayout, CATDlgFrame)

   friend class CATFrmWindow;
   friend class CATFrmDebugCmd;

   CATDeclareClass ;
   
//------------------------------------------------------------------------------
 public:
/** @nodoc */
   static CATDlgWindow    *applicationWindow;
/** @nodoc */
   static CATUnicodeString applicationName;
  
//Constructor / Destructor
/** @nodoc */
  CATFrmLayout(CATDialog *);
  virtual ~CATFrmLayout();

//Current layout management
/**
 * Returns the unique CATFrmLayout created by CATIA session.
 */
  static  CATFrmLayout    *GetCurrentLayout();

//Current window management
/**
 * Changes the current active window.
 * @param iWindow 
 *    the window to be activated.
 */
  virtual void             SetCurrentWindow(CATFrmWindow * iWindow);
/**
 * Returns the current active window.
 */
  virtual CATFrmWindow    *GetCurrentWindow();

/** @nodoc */
  virtual int                      GetWindowCount(int winType=0);//return the number of windows
/**
 * Returns a list of windows.
 * @param iWinType 
 *    the type of window to be listed.
 *   <br><b> Legal values</b>:
 *   <li><tt>0</tt> all types of window (it's the default value)</li>
 *   <li><tt>1</tt> Restored windows</li>.
 *   <li><tt>2</tt> Minimized windows</li>.
 * @param iSort 
 *    the sort option for returned list.
 *    The sort is done according to activating time of windows.
 *   <br><b> Legal values</b>:
 *   <li><tt>0</tt> the list is not sorted (it's the default value)</li>
 *   <li><tt>1</tt> sort in increase order (the newest is the last)</li>.
 *   <li><tt>2</tt> sort in decrease order</li>.
 */
  virtual CATLISTP(CATFrmWindow) & GetWindowList (int iWinType=0, int iSort=0);//return the window list

/** @nodoc */
  virtual void               UpdateWindowList(); //(for internal use only)

/** @nodoc */
//Editor management
  virtual void               ActivateEditor(CATFrmEditor *);


//View/Window management (for internal use only)
/** @nodoc */
  virtual CATFrmViewManager *GetViewManager();
/** @nodoc */
  static  int                GetWindowIDCount(); //return a unic windowID number;     

/**
 * @nodoc
 * <br><b>Role:</b>Returns the callback manager to send and 
 * receive window and editor events.
 * This method is not useful, to receive an event you can write :
 * <pre>
 * ::AddCallback(this,
 *              CATFrmLayout::GetCurrentLayout(),
 *	           CATFrmEditor::EDITOR_CLOSE_ENDED(),
 *	           (CATSubscriberMethod)&MyClass::MyCBMethod,
 *	           NULL);
 * ::AddCallback(this,
 *              CATFrmLayout::GetCurrentLayout(),
 *	           CATFrmWindow::WINDOW_ACTIVATED(),
 *	           (CATSubscriberMethod)&MyClass::MyCBMethod,
 *	           NULL);
 * </pre>
 * @see CATFrmEditor , CATFrmWindow
 */
  virtual CATCallbackManager *  GetCallbackManager();

//MDI (for internal use only)
/** @nodoc */
   void FrmMDIIconArrange();
//   void FrmMDIActivate(CATFrmWindow*);
/** @nodoc */
   void FrmMDIRestore (CATFrmWindow*);
/** @nodoc */
   void FrmMDIMinimize(CATFrmWindow*);
/** @nodoc */
   void FrmMDIMaximize(CATFrmWindow*);
/** @nodoc */
   void FrmMDIClose   (CATFrmWindow*);
/** @nodoc */
   void FrmMDINext    (CATFrmWindow*);
/** @nodoc */
   void FrmMDIPrevious(CATFrmWindow*);
/** @nodoc */
   void FrmMDITile    (int type=CATDlgTileHorizontal);// CATDlgTileHorizontal/CATDlgTileVertical
/** @nodoc */
   void FrmMDICascade (int type=CATDlgTileSkipHidden);// CATDlgTileSkipHidden

 protected:

//Internal use only
//-----------------
//Degug
  /** @nodoc */
  virtual void             Dump(const CATString & str);
    
   

 private:
 
   static CATFrmLayout    *CurrentLayout;
   static int              WindowIDCount;
   static CATDlgDocument  *docWindow;

   // Command cree dans le constructeur
   // dans le mode replay et capture
   CATCommand      *_CommandBidon ;

   int                     _numberOfWindow;
   CATLISTP (CATFrmWindow) _windowList;
   CATLISTP (CATFrmWindow) _sortedList;

   void AddWindow(CATFrmWindow *);
   void RemoveWindow(CATFrmWindow *);
   void ActivateWindow(CATFrmWindow *);

  void        __InternalDeactivateWindow      (CATFrmWindow *);
  void        __InternalActivateWindow        (CATFrmWindow *);
  void        __InternalDeactivateEditor      (CATFrmEditor *);
  void        __InternalActivateEditor        (CATFrmEditor *);

  static void __SetCurrentWindow_Idle (CATCommand *, int, void *);
  static void __ActivateWindow_Idle   (CATCommand *, int, void *);

   CATDlgFrame     *_mainViewerFrame;
   CATFrmWindow    *_currentWindow;

   void MDICB(CATCommand *, CATNotification *, CATCommandClientData);

   CATFrmMenuManager * _menuManager;
   CATFrmViewManager * _viewManager;

   void AddCB();
   void RemoveCB();

   CATCallbackManager * _callbackManager;
   void WindowCB(CATCallbackEvent event, void * sender, CATNotification * notif, CATSubscriberData data, CATCallback);
  
   static int IncreaseOrder(CATFrmWindow * window1, CATFrmWindow * window2);
   static int DecreaseOrder(CATFrmWindow * window1, CATFrmWindow * window2);
};
#endif
