#ifndef CATFrmNavigGraphicWindow_H_
#define CATFrmNavigGraphicWindow_H_

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CD0STWIN.h"
#include "CATDlgInclude.h"
#include "CATFrmWindow.h"
#include "CATBaseUnknown_var.h"
#include "list.h"

class  CATFrmEditor;
class  CATNavigBox;
class  CATDlgSplitter;
class  CATVisManager;
class  CATFrmWindowCommand;

class  CATViewer;
class  CATViewpoint;
class  CAT3DViewpoint;
class  CAT2DViewpoint;
class  CATNormalDisplay;
class  CATMirrorDisplay;
class  CATOverview3DWindow;
class  CATPathElement;
class  CAT2DViewpointEditor;
class  CATNavigParametersValue;

class CATMultiViewWizard;
class CATSubTreeDlgManager;

/** @nodoc */
//#define _windowCmdCount 10

/**
 * Class providing a standard window with a graph and a viewer.
 * <b>Role</b>: This standard window offers a NavigBox (Graph) and a Geometric viewer.
 * It supplies standard functionnalities on these viewers.
 * @see CATNavigBox
 */
class ExportedByCD0STWIN CATFrmNavigGraphicWindow: public CATFrmWindow
{
  CATDeclareClass ;
public:
  
   /** @nodoc */
   CATDeclareCBEvent(TREE_DISPLAY_ON);
   /** @nodoc */
   CATDeclareCBEvent(TREE_DISPLAY_OFF);

  /** @nodoc */
  typedef enum ItemStateEnum {
    View3D = 0,              // See Geometry Only 
    ViewG,                   // See Tree Structure Only 
    ViewG3D,                 // See Tree and Geometry 
    NoState                  // Unknown State 
    } ItemState;

/** @nodoc */
  // The navigatorXXX parameters are used to change CATNavigBox Creation Options
  CATFrmNavigGraphicWindow(
    const CATString        &  windowTag,
    CATBaseUnknown_var    m,
    CATFrmEditor           *  editor = 0,
    CATClassId                navigatorId = "Default",
    int                       navigatorWidth = 150,
    int                       navigatorHeight = 400,
    int                       navigatorDepth = -1, // Systematically expand nodes by default
    int                       graphDuplicate = 0   // No duplicate by default       
    );

/**
 * Constructs a CATFrmNavigGraphicWindow.
 * @param iWindowTag 
 *   The window name.
 *   This name is the base of displayed window title.
 * @param iEditor 
 *   The editor of the document.
 * @param iModel 
 *   The root object of the model.
 *   If this object implements the @href CATINavigateObject then
 *   a specification graph of the model can be constructed automatically.
 * @param iNavigatorId 
 *   The name of the graph navigator.
 *   By default it is set to "Default".
 * @param iNavigatorDepth 
 *   The parameter of the graph navigator indicates the maximum number of
 *   visible levels in the graph.
 *   This parameter can be set to any positive integer value.
 *   The default value is set to -1 (no limit for the visible graph level).
 * @param iGraphDuplicate 
 *   The parameter of the graph navigator indicates if a node in the 
 *   graph will be duplicated when it is instanciated more than one time.
 *   <br><b> Legal values</b>:
 *   <li><tt>0</tt> the nodes are not duplicated (it's the default value)</li>
 *   <li><tt>1</tt> otherwise</li>.
 */
  CATFrmNavigGraphicWindow(
    const CATString        & iWindowTag,
    CATFrmEditor           * iEditor,
    CATBaseUnknown_var       iModel,
    CATClassId               iNavigatorId = "Default",
    int                      iNavigatorDepth = -1, // Systematically expand nodes by default
    int                      iGraphDuplicate = 0   // No duplicate by default
    );

  virtual ~CATFrmNavigGraphicWindow();

  /**
  * Deletes the window.
  * <br><b>Role</b>: Calls this method in place of the destructor.
  */

  virtual void  DeleteWindow();
  
  /**
  * Creates a clone window.
  * <br><b>Role</b>: This method creates a new instance of this class. It's called
  * to create a new window of the same document.
  */
  virtual CATFrmWindow* DuplicateWindow ();

  // Update and manage the View menu in menu bar
  // -------------------------------------------
  /** @nodoc */
  virtual void InitWindowCmd();
  /** @nodoc */
  virtual void AddCommand();
  /** @nodoc */
  virtual void RemoveCommand();
  /** @nodoc */
  virtual void ExecuteCommand (const CATString&);

  // Management of the 4 possible States 
  /** @nodoc */
  virtual CATFrmNavigGraphicWindow::ItemState GetWindowState ();
  /** @nodoc */
  virtual void SetWindowState (CATFrmNavigGraphicWindow::ItemState);

  // Use it as Parent of the  CATDlgFrame displaying geometry to be created 
  /** @nodoc */
  virtual CATDlgBox   * GetGraphicViewerBox();

  // Call it to indicate to CATFrmNavigGraphicWindow the CATDlgFrame displaying geometry
  /** @nodoc */
  virtual void          SetGraphicFrame( CATDlgFrame * );

  // To be overloaded to indicate the current Geometry Viewer (Not mandatory). 
/**
 * Returns the geometric viewer.
 */
  virtual CATViewer   * GetGraphicViewer ();

/**
 * Returns the navigbox (graph).
 */
  virtual CATNavigBox * GetNavigBox ();
/** @nodoc */
  virtual CATNavigBox * GetGraphViewer ();   // Temporary, to be replaced by GetNavigBox() 
/**
 * Returns the viewer of the graph.
 */
  virtual CATViewer   * GetNavigViewer ();

  /** @nodoc */
  virtual void ReadSettings();
  /** @nodoc */
  virtual void WriteSettings();
  /** @nodoc */
  virtual void ReadTreeSettings();
  
  /** @nodoc */
  virtual void SetBackgroundColor(const float R, const float G, const float B);

  /** @nodoc
   * Internal Use
   */
  void SetP3Components(const int OnOff);

  /** @nodoc */
  void GraphContextCB(CATCommand *, CATNotification *, CATCommandClientData);

  /** @nodoc */
  void ContextCB(CATCallbackEvent, void *, CATNotification *,
                 CATSubscriberData, CATCallback);

  /** @nodoc */
  void ActivateShowOnContext(int i);

  /** @nodoc */
  void ActivatePropertiesOnContext(int i);

   /** @nodoc */
  void ActivateSubTreeOnContext(int i);

  /** @nodoc */
  void AddSubTree(CATPathElement* path);

protected:
  
  virtual CATNavigBox *CreateNavigBox(
    CATViewer              * viewer,
    CATBaseUnknown_var       m,
    CATClassId               navigatorId = "Default",
    int                      graphDuplicate = 0,  // No duplicate by default       
    int                      navigatorDepth = -1, // Systematically expand nodes by default
    int                      navigatorWidth = 150,
    int                      navigatorHeight = 400,
    int                      extensionMode = 0);

  virtual void AttachVisuManager();

  /** @nodoc */
  /* This method should be called by any applicative frmwindow
   * (like the drawing frmwindow) - which derives from the 
   * CATFrmNavigGraphicWindow - at the end of the class constructor
   * with non NULL argument AND at the begining of the DeleteWindow
   * method with a NULL argument.
   * 
   * The goal of this method is to set/unset internal parameters, 
   * values or callbacks depending on the look of the current 
   * window : P1, P2, LookP2, P3.
   */
  void SetLookSpecificParameters(const int OnOff);

  /** @nodoc */
  void RemoveGraphViewPoint();

  /** @nodoc */
  void AddGraphViewPoint();

  /** @nodoc */
  void ActivateP3Graph();

  /** @nodoc */
  void RemoveGeomViewPoint();

  /** @nodoc */
  void AddGeomViewPoint();

// Internal use only
   CATViewer                 *_graphViewer;
   CATViewpoint              *_geomViewpoint;
   CAT2DViewpoint            *_specViewpoint;

private:
  
  void ShowFrame (CATDlgFrame*);
  void HideFrame (CATDlgFrame*);
  void UpdateCommand();

  void AddCB();
  void RemoveCB();
  void WindowCB(CATCallbackEvent event, void * sender, CATNotification * notif, CATSubscriberData data, CATCallback);
 
  //      void VisuCB  (CATCallbackEvent event, void * sender, CATNotification * notif, CATSubscriberData data, CATCallback);

  CATCallbackManager        * _callbackManager;
  CATFrmLayout              * _currentLayout;

  //CATFrmWindowCommand       *_windowCmd[_windowCmdCount];
  CATFrmWindowCommand       **_windowCmd;
  CATDlgSplitter            *_splitter;
  CATNavigBox               *_navigBox;
  CATDlgFrame               *_graphicFrame;
  int                       _graphicFrameHide;
  CATDlgFrame               *_navigBoxFrame;
  int                       _navigBoxFrameHide;
  ItemState                 _viewState;

  CATNavigParametersValue* _treeSettting;

  double _sashPosition;
  CATNormalDisplay * _normalDisp;
  CATMirrorDisplay * _mirrorDisp;

  CATOverview3DWindow * _overview3DWindow;
  int _nbrViewCommand;

  CATBaseUnknown_var     _Part;
  CATPathElement        *_path;
  list<IID>              _listIID ;
  CATVisManager         *_visuManager ;
  CATPathElement        *_path_ISO;
  CATPathElement        *_path_FurtiveISO;
  CATPathElement        *_path_BackgrdISO;

  CAT2DViewpointEditor * _specVpEditor;

  // Viewpoint snapping
  int _snapViewpoint;
  void SnapViewpoint(CATViewer * viewer);

  CATMultiViewWizard * _multiViewPointWizard;

  unsigned int _showContext : 1;
  unsigned int _propertiesContext : 1;
  unsigned int _subTreeContext : 1;

  CATSubTreeDlgManager* _subTreeManager;
};

#endif
