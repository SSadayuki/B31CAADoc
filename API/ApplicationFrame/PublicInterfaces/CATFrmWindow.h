#ifndef CATFRMWINDOW_H
#define CATFRMWINDOW_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

//------------------------------------------------------------------------------
// Abstract: Working area to visualize application data:
//           geometries, graphs, ...
//
//------------------------------------------------------------------------------
// Usage:    A CATFrmWindow is a rectanglar subarea of an application frame.
//           It allows to display and manipulate application data.
//           It has always a ApplicationWindow as Parent.
// 
//           This class will be derived by application to display in Windows
//           of the ApplicationFrame the application data.   
//------------------------------------------------------------------------------
// Inheritance: CATDlgDialog (Dialog framework)
//------------------------------------------------------------------------------
// Main methods:    
//
//           PrintWindow
//           AddCommand
//           ExecuteCommand
//           GetViewer
//           GetEditor
//       
//------------------------------------------------------------------------------
// Events:    
//	       WINDOW_ACTIVATED    (from uncurrent window to current window)
//	       WINDOW_DEACTIVATED  (from current window to uncurrent window)
//	       WINDOW_CREATED
//	       WINDOW_DELETED
//         VIEWER_SELECTED    (MouseButton1 Down on a Viewer) (sender is viewer)
//         VIEWER_ACTIVATED   (The CurrentViewer has been changed) (sender is viewer)
//         VIEWPOINT_CHANGED  (The main viewpoint of the currentViewer has been changed) (sender is window)
//         VIEWER_SHOW        (the viewer is seen in show space)
//         VIEWER_NO_SHOW     (the viewer is seen in noshow space)
//------------------------------------------------------------------------------

#include "CD0WIN.h"
#include "CATDlgInclude.h"
#include "CATDlgDialog.h"
#include "CATFrmLayout.h"

#include "CATListPV.h"
class CATFrmAuxWindow;

class CATDlgFrame;
class CATViewer ;
class CATFrmEditor ;
class CATPrintImage ;
class CATICamera ;
class CATFrmWindowCommand;
class CATVisibilityPanel;
class CATMagnifierPanel;

/** 
 * @nodoc
 * Defines the MDI state of the window.
 * @param MinimizeWindow
 *  The <tt>CATFrmWindow</tt> is minimized.
 * @param MaximizeWindow
 *  The <tt>CATFrmWindow</tt> is maximized.
 * @param RestoredWindow
 *  The <tt>CATFrmWindow</tt> is restored.
 * @see CATFrmWindow#GetWindowMDIState
 */
enum  CATFrmWindowState {MinimizeWindow, RestoredWindow, MaximizeWindow};

/** @nodoc */
#define MAXWINCMD 50

/**
 * Class to provid a working area to visualize application data.
 * <b>Role</b>: Allows to display and manipulate application data.
 * This basic class will be derived by application to display 
 * the application's specific data. See also: @href CATFrmNavigGraphicWindow, 
 * @href CATFrmGraphAnd3DWindow and @href CATFrmGraphAnd2DWindow.
 */
class ExportedByCD0WIN CATFrmWindow: public CATDlgDialog
{
   friend class CATFrmLayout;

   friend class CATFrmAuxWindow;

   DeclareResource(CATFrmLayout, CATDlgDialog) ;

 public:

 /**
    * Event sent when the window is activated.
	* <br><b>Role:</b><br>this event is sent by the CATFrmLayout.
	* <br>Sample of callback:
	* <pre>
    * ::AddCallback(this,
    *              CATFrmLayout::GetCurrentLayout(),
	*	           CATFrmWindow::WINDOW_ACTIVATED(),
	*	           (CATSubscriberMethod)&MyClass::MyCBMethod,
	*	           NULL);
	* </pre>
	*/
   CATDeclareCBEvent(WINDOW_ACTIVATED);

 /**
    * Event sent when the window is deactivated.
	* <br><b>Role:</b><br>this event is sent by the CATFrmLayout.
	* <br>Sample of callback:
	* <pre>
    * ::AddCallback(this,
    *              CATFrmLayout::GetCurrentLayout(),
	*	           CATFrmWindow::WINDOW_DEACTIVATED(),
	*	           (CATSubscriberMethod)&MyClass::MyCBMethod,
	*	           NULL);
	* </pre>
	*/
   CATDeclareCBEvent(WINDOW_DEACTIVATED);

   /** @nodoc */
   CATDeclareCBEvent(WINDOW_CREATED);
 /**
    * Event sent when the window is deleted.
	* <br><b>Role:</b><br>this event is sent by the CATFrmLayout.
	* <br>Sample of callback:
	* <pre>
    * ::AddCallback(this,
    *              CATFrmLayout::GetCurrentLayout(),
	*	           CATFrmWindow::WINDOW_DELETED(),
	*	           (CATSubscriberMethod)&MyClass::MyCBMethod,
	*	           NULL);
	* </pre>
	*/
   CATDeclareCBEvent(WINDOW_DELETED);
   /** @nodoc do not use */
   CATDeclareCBEvent(WINDOW_MOVED);
   /** @nodoc do not use */
   CATDeclareCBEvent(WINDOW_RESIZED);
    /** @nodoc do not use */
   CATDeclareCBEvent(WINDOW_MAXIMIZED);
   /** @nodoc do not use */
   CATDeclareCBEvent(WINDOW_MINIMIZED);
   /** @nodoc do not use */
   CATDeclareCBEvent(WINDOW_RESTORED);
   /** @nodoc */
   CATDeclareCBEvent(VIEWER_SELECTED);
   /** @nodoc */
   CATDeclareCBEvent(VIEWER_ACTIVATED);
   /** @nodoc */
   CATDeclareCBEvent(VIEWPOINT_CHANGED);
   /** @nodoc */
   CATDeclareCBEvent(VIEWER_SHOW);
   /** @nodoc */
   CATDeclareCBEvent(VIEWER_NO_SHOW);

   CATDeclareClass ;

//------------------------------------------------------------------------------


// Constructor
// -----------
/**
 * Constructs a CATFrmWindow.
 * @param iWindowTag 
 *   The window name.
 *   This name is the base of displayed window title.
 * @param iEditor 
 *   The editor of the document.
 */
   CATFrmWindow(const CATString & iWindowTag, CATFrmEditor * iEditor = NULL);

// Duplicator
// ----------
/**
 * Creates and returns a new window of the same document.
 */
   virtual CATFrmWindow * DuplicateWindow();

// Destructor
// ----------
   virtual ~CATFrmWindow();
/**
 * Close the window.
 */
   virtual void            DeleteWindow();

// Print the contents of window
// ----------------------------
/** @nodoc */
   virtual CATPrintImage * PrintWindow();

// Update the View menu in menu bar
// --------------------------------
/** @nodoc */
   virtual void            InitViewCommand();
/** @nodoc */
   virtual void            AddCommand();
/** @nodoc */
   virtual void            RemoveCommand();

// Execute a View menu item command
// --------------------------------
/** @nodoc */
   virtual void  ExecuteCommand(const CATString & commandId);

// Get current viewer
// ------------------
/**
 * Returns the frame in wich the viewer will be attached.
 */
   virtual CATDlgFrame     * GetViewerFrame();
/** @nodoc */
   virtual void              SetViewerFrame(CATDlgFrame *);

/**
 * Returns the viewer created in the window.
 */
   virtual CATViewer       * GetViewer();
/**
 * Changes the current viewer of the window.
 * @param iViewer 
 *   The new current viewer.
 */
   virtual void              SetViewer(CATViewer * iViewer);

/** @nodoc */
   virtual void              SetViewerSelectable(CATViewer * iViewer);
/** @nodoc */
   virtual void              UnsetViewerSelectable(CATViewer * iViewer);

// Get/Set current viewpoint
// -------------------------
/** 
 * Retrieves the current viewpoint of the window.
 * <br><b>Role</b>:See the @href #SetCurrentCamera method.
 * @return 
 * The current viewpoint. This pointeur must be released after usage. 
 */
   virtual CATICamera      * GetCurrentCamera();
/** 
 * Changes the viewpoint of the window.
 * <pre>
 * Example to handle the camera:
 *
 *   CATICamera *pICamera = NULL ;
 *   pICamera = myWindow->GetCurrentCamera();
 *
 *   // Modify the camera 
 *   pICamera->....... 
 *
 *   myWindow->SetCurrentCamera(pICamera);
 *
 *   pICamera->Release();
 *   pICamera = NULL ;
 * </pre>
 * @param iCamera
 *  This Camera contains the new viewpoint.
 * 
 */
   virtual void              SetCurrentCamera(CATICamera * iCamera);

// GetEditor
// ---------
/**
 * Returns the document editor.
 */
   virtual CATFrmEditor    * GetEditor();

// Window name management
// ----------------------
/**
 * Changes the name of window.
 * @param iWindowName 
 *   The new name of window.
 */
   virtual void      SetBaseName(const CATUnicodeString & iWindowName);
/**
 * Returns the name of window.
 */
   CATUnicodeString &GetBaseName();

// Data persistence 
//-----------------
//   virtual void WriteToStream(void ** stream, unsigned long& length);
//   virtual void ReadFromStream(void * stream, unsigned long  length);

/** @nodoc */
   virtual void ReadSettings ();
/** @nodoc */
   virtual void WriteSettings();

// Background Color
//-----------------
/** @nodoc */
   virtual void SetBackgroundColor(const float R, const float G, const float B);

/** 
 * @nodoc
 * Returns the MDI state of the window.
 * <br><b>Caution</b>:Never try to change the MDI status of the window thanks to
 * the Dialog Framework. You can only know the status of a <tt>CATFrmWindow</tt>, and 
 * you can't change its state.
 */
   CATFrmWindowState GetWindowMDIState();                  // MinimizeWindow/RestoredWindow

// Lowlight Management
//--------------------
/** @nodoc */
  virtual int IsLowlightModeOn();

// gdx. P3. Flag for switching into a immersive Look when window is maximized
/** @nodoc */
  void SetImmersiveUIGranted(const int YesNo);
/** @nodoc */
  int IsImmersiveUIGranted();

 protected:

//Internal use only
//-----------------
/** @nodoc */
   int               GetWindowOrder();

/** @nodoc */
   void	             SetWindowMDIState(CATFrmWindowState); //(MinimizeWindow/RestoredWindow)

// Degug
/** @nodoc */
   virtual void   Dump(const CATString & str);

/** @nodoc */
  void InitViewer();
   
/** @nodoc */
   virtual void  InitDuplicatedWindow(CATFrmWindow * ipDupWindow);

 private:
   int IsDispatchEventModeOn(CATCallbackEvent iEvent);

   CATFrmLayout      *_currentLayout;
   CATFrmEditor      *_currentEditor;
   CATFrmWindowState  _currentMDIState;
   CATViewer         *_currentViewer;
   int                _windowOrder;
   int                _nbrViewCommandBase;
   CATFrmWindowCommand *_windowCmdBase[MAXWINCMD];

// Icon bar
   CATDlgFrame       *_viewerFrame;
   int                _isCurrentWindow;

// Identification
   CATUnicodeString   _windowName;
   CATUnicodeString   _windowTitle;

   void                  AddCB();
   void                  RemoveCB();
   void                  Activate();
   void                  Deactivate();

// Call back
   CATCallbackManager * _callbackManager;
   
   void SetCurWindowCB(CATCallbackEvent, void *, CATNotification *Event, CATSubscriberData , CATCallback);
   void ChangeMainViewpointCB(CATCallbackEvent, void *, CATNotification *Event, CATSubscriberData , CATCallback);

   void MDICB   (CATCommand*, CATNotification *, CATCommandClientData);
   void DepthEffectPanelDestroyed  (CATCommand*, CATNotification *, CATCommandClientData);
   void MagnifierPanelDestroyed (CATCommand*, CATNotification *, CATCommandClientData); 
   
// Settings panels
   CATVisibilityPanel * _depthEffectPanel;
   CATMagnifierPanel  * _magnifierPanel;

// Closing management
   int       _closing;
   int       CloseWindow();

// P3 Immersive UI Flag
  CATBoolean _grantImmersiveUI;

   // Aux window management
   // ---------------------
   CATFrmAuxWindow * _activeAuxWindow;
   CATListPV         _auxWindowList;

   HRESULT AddAuxWindow(CATFrmAuxWindow * iAuxWindow);
   HRESULT RemoveAuxWindow(CATFrmAuxWindow * iAuxWindow);

   HRESULT SetActiveAuxWindow(CATFrmAuxWindow * iAuxWindow);

 public:
    // Aux Window Management
    //----------------------
    /** @nodoc */
    CATListPV GetAuxWindowList();
    /** @nodoc */
    CATFrmAuxWindow * GetActiveAuxWindow();
}; 
#endif
