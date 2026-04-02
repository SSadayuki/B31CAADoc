#ifndef CATViewer_H
#define CATViewer_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */



#include "CATVisualization.h"

#include "list.h"
#include "CATDlgFrame.h"
#include "CATViewerUtility.h"
#include "CATPickPathList.h"
#include "CATPickPath.h"
#include "CATCallbackManager.h"
#include "CATMathLine.h"
#include "CATMathPointf.h"
#include "CATMathPoint2Df.h"
#include "CATMathDirectionf.h"
#include "CATMathDirection.h"
#include "CATProjectionType.h"
#include "CATVizViewer.h"
#include "CATVis2DModeType.h"

//class CATGraphicWindow;
class CATManipulator;
class CATIndicator;
class CATViewpointEditor;
class CAT2DViewpointEditor;
class CAT3DViewpointEditor;
class CATViewerEvent;
class CATPickPath;
class CATRepPath;
class CATNotification;
class CATDevice;
class CATDeviceEvent;

class CATViewpoint;
class CAT2DViewpoint;
class CAT2DRep;
class CAT2DCustomRep;
class CAT2DBagRep;
class CAT3DViewpoint;
class CAT3DRep;
class CATColorMap;
class CATDialog;
class CATSupport;
class CATPixelImage;
class CATGraphicMaterial;
class CATKeyboardEvent;
class CATMouseEvent;
class CATMarshal;
class CATPathElementRep;
class CATOverview2DViewer;
class CAT3DLightSourceRep;
class CATPerformanceGaugeRep;
class CATRepShortHelp;
class CATSOWithPickingData;

class CATVizCursor;
class CATVizContextualMenuHandler;
class CATVizStatusBarHandler;


class CATDlgContextualMenu;
class CATDlgDocument;
class CATDlgCheckItem;
class CATDlgDialog;
#ifdef _WINDOWS_SOURCE
class CATDlgWindows;
#else
#include "CATDlgMotif.h"
#endif
class CATMouseDevice;
class CATKeyboardDevice;
class CATSpaceDevice;
class CATPositionDevice;
class CATDrillSelector;
class CATSOWithPickingData;
class CATTexturePixelImage;
class CAT3DBagRep;
class CATMathTransformation;
class CATVizDisplayContext;
class CATVisInfiniteEnvironment;

// SBP (device split)
class CATIncrementEvent;
class CATPositionEvent;

class CATVizDuration;

class CATPickOptions;

struct stack;



/**
 * Class to display Graphic Representations on the screen.
 * 
 */
class ExportedByCATVisualization CATViewer : public CATDlgFrame
{
  /** @nodoc */
  friend class CATManipulator;
  
 // CATDeclareClass expanded
  
 private :
  /** @nodoc */
  static CATMetaClass *meta_object;
 
 public :
  /** @nodoc */
  virtual CATMetaClass *  __stdcall GetMetaObject() const; 
  /** @nodoc */
  virtual const char *              IsA() const;
  /** @nodoc */
  virtual int                       IsAKindOf(const char *) const;
  /** @nodoc */
  static CATMetaClass *   __stdcall MetaObject();

  /**  
   * Returns the class identifier for which the given object is an instance.
   */
  static const CLSID &    __stdcall ClassId();
 
  /** @nodoc */
  static const char *     __stdcall ClassName();
  /** @nodoc */
  static CATBaseUnknown *CreateItself();
 
  // end CATDeclareClass
 
  /** @nodoc */
  DeclareResource(CATViewer,CATDlgFrame)

  /** @nodoc */
  CATDeclareCBEvent (VIEWER_UPDATE);
  /** @nodoc */
  CATDeclareCBEvent (VIEWER_SELECTED);
  /** @nodoc */
  CATDeclareCBEvent (VIEWER_DESTROYED);
  /** @nodoc */
  CATDeclareCBEvent (VIEWER_OVERVIEW_DESTROYED);
  /** @nodoc */
  CATDeclareCBEvent (VIEWER_MAINVIEWPOINT_CHANGED);
  /** @nodoc */
  CATDeclareCBEvent (VIEWER_BACKGROUND_CHANGED);
  /** @nodoc */
  CATDeclareCBEvent (VIEWER_BEGIN_VIEWPOINT_ANIMATION);
  /** @nodoc */
  CATDeclareCBEvent (VIEWER_END_VIEWPOINT_ANIMATION);
  /** @nodoc */
  CATDeclareCBEvent (VIEWER_END_VIEWPOINT_MANIPULATION);
  /** @nodoc */
  CATDeclareCBEvent (VIEWER_LIGHT_MODIFIED);
  /**
   * Event sent when something happens to the viewer. 
   * <br><b>Role</b>: This event contains a
   * @href CATVisViewerFeedbackEvent class pointer to describe itself. This event is not dispatched
   * when the end user uses the Preselection Navigator. 
   * <br>Sample of callback: 
   * <pre>
   *::AddCallback(this,
   *         _myViewer,
   *          CATViewer::VIEWER_FEEDBACK_UPDATE(),
   *          (CATSubscriberMethod)&MyClass::MyCBMethod,
   *         NULL);
   * <pre>
   */
  CATDeclareCBEvent (VIEWER_FEEDBACK_UPDATE);


  // Destruction method:
  // -------------------
  //   The CATViewer class can t be built as a stand alone object. It must be
  //   inherited from to be efficient in displaying elements.

  virtual ~CATViewer();


  /** @nodoc */
  virtual CATCallbackManager *GetCallbackManager();

  /** 
   * Adds a representation 2D in the main  CAT2DViewpoint. 
   * <br>The representation will appear only at the next @href CATViewer#Draw 
   * @param iRep 
   *  The @href CAT2DRep to add
   */
  virtual void AddRep (CAT2DRep *iRep);

  /** 
   * Removes a representation 2D from the main CAT2DViewpoint.
   *  The representation will disappear at the next @href CATViewer#Draw 
   *   @param iRep the @href CAT2DRep to remove
   */
  virtual void RemoveRep (CAT2DRep *iRep);

  /** 
   * Removes a representation 2D from the main CAT2DViewpoint.
   * The representation will appears at the next @href CATViewer#Draw 
   * Use this method in the process of removing many representations
   *   @param iRep the @href CAT2DRep to remove   
   */
  virtual void RemoveReps (CAT2DRep *iRep);

  /** 
   * Updates the 2D viewpoint to take into account the removal of reps.
   * <br>Call that method after removing many representations with RemoveReps
   */
  virtual void End2DRemoveReps ();

  /** 
   * Adds a representation 3D in the Main 3D Viewpoint. 
   * <br>The representation will appears only at the next CATViewer::Draw 
   * @param iRep 
   * The rep to Add
   */

  virtual void AddRep (CAT3DRep *iRep);

  /** 
   * Removes a representation 3D from the main CAT3DViewpoint.
   * <br>The representation will appears at he next @href CATViewer#Draw 
   * Use this method in the process of removing many representations
   * @param iRep 
   * The 3D rep to remove  
   */
  virtual void RemoveRep (CAT3DRep *iRep);

  /** 
   * Removes a representation 3D from the Main CAT3DViewpoint to be visualized.
   * <br> The representation will appears at he next CATViewer::Draw 
   * @param iRep 
   * the 3D Rep to remove  
   */
  virtual void RemoveReps (CAT3DRep *iRep);

  /** 
   * Updates the 3D viewpoint to take into account the removal of reps.
   * <br>Call that method after removing many representations with RemoveReps
   */
  virtual void EndRemoveReps ();

  /** 
   * Adds a furtive representation in the Main CAT2DViewpoint.
   * <br><b>Role:</b>The furtive representation will be displayed 
   * with the XOR color. See the @href #DrawElement method
   *  @param iRep 
   *  the @href CAT2DRep to add
   */
  virtual void AddRepFurtive (CAT2DRep *iRep);

  /** 
   * Removes a 2D furtive representation from Main 2D Viewpoint .
   *  @param iRep 
   *  the @href CAT2DRep to remove   
   */
  virtual void RemoveRepFurtive (CAT2DRep *iRep);

  /** 
   * Removes a furtive representation from the Main 2D Viewpoint.
   * <br><b>Role:</b>The representation will disappear at the next @href CATViewer#Draw.
   * Use this method in the process of removing many representations.
   */

  virtual void RemoveRepsFurtive (CAT2DRep *iRep);

  /** 
   * Updates the 2D viewpoint to take into account the removal of reps.
   * Call that method after removing many representations with RemoveRepsFurtive
   */
  virtual void End2DRemoveRepsFurtive ();

  /** 
   * Adds a 3D furtive representation in the main CAT3DViewpoint. 
   * @param iRep 
   * The 3D Rep to add  
   */
  virtual void AddRepFurtive (CAT3DRep *iRep);

  /** 
   * Removes a 3D furtive representation from main 3D Viewpoint.
   * @param iRep 
   * The 3D Rep to remove  
   */
  virtual void RemoveRepFurtive (CAT3DRep *iRep);

  /** 
   * Removes a furtive representation from the main 3D Viewpoint.
   * <br>The representation will disappear at the next @href CATViewer#Draw 
   * Use this method in the process of removing many representations
   * @param iRep 
   * The 3D Rep to remove  
   */
  virtual void RemoveRepsFurtive (CAT3DRep *iRep);

  /** 
   * Updates the 3D viewpoint to take into account the removal of reps.
   * <br>Call that method after removing many representations with RemoveRepsFurtive
   */
  virtual void EndRemoveRepsFurtive ();


  /** 
   * Asks for generating a new "image" displayed in the Viewer's screen. 
   * <br>
   * This image is composed of all representations attached to each viewpoint.
   * This image is not computed immediately but as soon as possible.
   */
  virtual void Draw();

  /** 
   * Changes the Main Viewpoint to have all the repreentations visible on screen.
   */
  virtual void Reframe();

  /** @nodoc */
  virtual void ReframeAllViewpoints();

  /** @nodoc */
  virtual void BeginDrawElement();

  /** 
   * Draws a  CATRepPath without redrawing the entire screen .
   * <br> if the  @href CATRepPath is furtive. The  @href CATRepPath is drawn in XOR mode
   *  @param iPath 
   * the  CATRepPath to redraw
   */
  virtual void DrawElement   (CATRepPath &iPath);

  /** @nodoc */
  virtual void EndDrawElement(unsigned int saveRenderBuffer);

  /** 
   * Draws a list of CATRepPath without redrawing the entire screen. 
   *  if the  @href CATRepPath is furtive. The  @href CATRepPath is drawn in XOR mode
   * @param iPaths the list of  @href CATRepPath to redraw
   */
  virtual void DrawElements  (list<CATRepPath> &iPaths);

  /** 
   * Undraws  a CATRepPath if it is Furtive .
   *  @param iPath the @href CATRepPath to undraw
   */
  virtual void UndrawElement (CATRepPath &iPath);

  /** 
   * Undraws  a list of CATRepPath if they are Furtive .
   * @param iPaths the list of @href CATRepPath to undraw
   */
  virtual void UndrawElements(list<CATRepPath> &iPaths);

  /**
   * Adds a new viewpoint in the Viewer's list with the highest/lowest priority.
   * The representations of this viewpoint will be displayed behind the other viewpoints
   * @param iViewpoint 
   * the Viewpoint to add
   * @param iPlace 
   * <b>Legal values</b>: Foreground and Background 
   */
  void AddViewpoint( CATViewpoint * iViewpoint, const CATViewerPlacement iPlace);

  /** 
   * Removes the viewpoint from the viewer's list.
   * @param iViewpoint 
   * @href CATViewpoint to remove
   */
  void RemoveViewpoint        (CATViewpoint *iViewpoint);


  /** 
   * Sets the main viewpoint of the viewer. 
   * @param viewpoint 
   * the viewpoint that is to be manipulated by local transformations
   */
  virtual void SetMainViewpoint(CATViewpoint *viewpoint);

  /** 
   * Gets the main CAT2DViewopint.
   * @return 
   * the main @href CAT2DViewpoint 
   */
  CAT2DViewpoint & GetMain2DViewpoint() const;

  /** 
   * Gets the main CAT3DViewopint.
   * @return 
   * the main @href CAT3DViewpoint 
   */
  CAT3DViewpoint & GetMain3DViewpoint() const;

  /** 
   * Gets the OverlayViewpoint.
   * <br><b>Role:</b>
   * This viewpoint is a @href CAT2DViewpoint displayed in front of any other representation 
   * @return 
   *  the overlay @href CAT2DViewpoint
   */
  CAT2DViewpoint & GetOverlayViewpoint() const;

  /** 
   * Gets the main viewpoint.
   * <br>This viewpoint is the one being modified by local transformations
   */
  CATViewpoint   & GetMainViewpoint() const;

  /** 
   * Stores the Current MainViewpoint so that it can be restored later. 
   */
  virtual void SaveViewpoint();

  /** Gets wether or not there is a viewpoint store before the current one.
   * @return the result of the test 
   */
  virtual int IsPreviousViewpoint() const;

  /** 
   * Restores the Viewpoint store before the current viepoint.
   */
  virtual void DisplayPreviousViewpoint();

  /** 
   * Gets wether or not there is a viewpoint store after the current one.
   * @return the result of the test
   */
  virtual int IsNextViewpoint() const;

  /** 
   * Restores the Viewpoint store after the current viepoint.
   */
  virtual void DisplayNextViewpoint();

  /** @nodoc */
  void SetDisplayContext(CATVizDisplayContext *);

  /** @nodoc */
  CATVizDisplayContext * GetDisplayContext();


  /** @nodoc */
  virtual void ZoomIn();		

  /** @nodoc */
  virtual void ZoomOut();

  /** @nodoc */
  virtual void AddCullingBox (const int nb_planes, const float *point, const float *normal);
  /** @nodoc */
  virtual void RemoveCullingBox ();

  /** @nodoc*/
  void SetOverviewVisibility (CATBool state);

  /** @nodoc */
  CATBool IsOverviewVisible() const;

  /** 
   * Generates a CATPickPathList corresponding to all representations laying under
   *  the given position.
   *  @param  istyle    
   *   A CATPickingStyle specifying the way the @href CATPickPathList is generated
   *  @param  ix        
   *   The x coordinate of the position at wich we want to pick
   *  @param  iy        
   *   The y coordinate of the position at wich we want to pick
   *  @param  idx       
   *   The width in pixel 
   *  @param  idy       
   *   The height in pixel
   *  @param  oPlist    
   *   The CATPickPathList generated
   *  @param  irepp     
   *   The CATRepPath we want to pick on. If this parameter is NULL, we pick on all representations
   *  @param  ipolygon  
   *   If the CATPickingStyle is CATPickingInsidePolygon, define the polygon used for the picking
   *  @param  inb_point 
   *   If the CATPickingStyle is CATPickingInsidePolygon, define the number of points in the polygon
   *  @param  ipick_style 
   *   The @href CATViewModeType used to do the picking
   *
   */
  void Pick (const CATPickingStyle istyle, const float ix, const float iy, const float idx, const float idy, CATPickPathList &oPlist, CATRepPath *irepp = NULL, const float *ipolygon = NULL, const int inb_point = 0, const int ipick_style = 0);

  /** 
   * Generates a CATPickPathList corresponding to all representations laying under
   *  the given position.
   *  @param  istyle      A CATPickingStyle specifying the way the @href CATPickPathList is generated
   *  @param  iorg        The Point from wich we pick
   *  @param  idir        The direction into wich we pick
   *  @param  ineard      The distance from iorg at wich we begin to pick
   *  @param  ifard       The distance from iorg at wich we stop to pick
   *  @param  oPlist      The @href CATPickPathList generated
   *  @param  irepp       The @href CATRepPath we want to pick on. If this parameter is NULL, we pick on all representations
   *  @param  ipick_style The @href CATViewModeType used to do the picking
   */ 
  void Pick (const CATPickingStyle istyle, const CATMathPointf &iorg, const CATMathDirectionf &idir, const float ineard, const float ifard, const float idx, const float idy, CATPickPathList &oPlist, CATRepPath * irepp= NULL, const int ipick_style = 0);

  /** @nodoc */
  void SetPickWindowSize (int pixelSize);

  /** @nodoc */
  int  GetPickWindowSize () const;

  /** 
   * Gets the options attached to this viewer for picking.
   * @return  the options used for picking.
   */ 
  CATPickOptions& GetPickingOptions ();

  /** @nodoc */
  void IncrementPick (const float, const float , CATPickPathList &, int sense);

  /** @nodoc */
  void IncrementDrillPick (int sens, int iDoNoPick = 0);

  /** @nodoc */
  void DoPickNextTime();


  /** @nodoc */
  static CATViewer * GetCurrentViewer();

  /** @nodoc */
  static CATViewer * GetSelectedViewer();

  /** @nodoc */
  static void SetSelectedViewer(CATViewer *);

  /** @nodoc */
  static void SetCurrentViewer(CATViewer *);

  /** @nodoc */
  static void InitViewerClassList();

  /** @nodoc */
  static CATViewer * GetNextClassElement();

  /** SVQ 22/01/02 : this method retrieves the CATViewer instance bind
    to a given CATVizViewer instance **/

  /** @nodoc */
  static CATViewer * FindClassElement(CATVizViewer *letter);

  /** @nodoc */
  static CATViewer * FindClassElement(CATViewpoint *vp);

  /** @nodoc */
  CATPickPath & GetCurrentPath();

  /** 
   * Sets the CATManipulator to activate on next mouse interaction.
   * @param iManip the @href CATManipulator to activate
   */
  void SetManipulatorToActive ( CATManipulator * iManip);

  /** 
   * Removes the CATManipulator to be activated.
   */
  void RemoveManipulatorToActive();

  /** 
   * Gets the CATManipulator to activate.
   * @return  the @href CATManipulator to Activate
   */
  const CATManipulator * GetManipulatorToActive() const;

  /** @nodoc */
  void CheckAutomaticBehavior();

  /** @nodoc 
    ViewerInteractiveState GetInteractiveState() const;
   */
  /** @nodoc */
  void AddManipOnRepPath ( CATPathElementRep * iPath);

  /** @nodoc */
  void RemoveManipOnRepPath ( CATPathElementRep * );


  /** @nodoc */
  virtual int SaveState(CATNotification *, CATMarshal &);

  /** @nodoc */
  virtual int RestoreState(CATNotification *, CATMarshal &);

  /** 
   * Gets the size in pixel of the viewer. 
   * @param owidth 
   * @param oheight
   */
  void GetGraphicSize(float * owidth, float * oheight) const;

  /**
   * Gets the Inverse of the size(height) of a pixel in millimeter.
   */
  float GetMMInSupportUnit() const;

  /** @nodoc */
  void ComputeModelFromDeviceEvent(CATMathPointf &NearPoint, CATMathPointf &FarPoint,
      CATViewpoint &viewpoint, CATDeviceEvent &deviceEvent);
  /** @nodoc */
  void GetViewpointCoordinatesFromPixel(CATMathPointf &neard, CATMathPointf &fard, 
      const CATViewpoint &, const float xPixel, const float yPixel);


  /**
   * Sets the current indicator. The Background and foreground indicator are
   * two uniques indicators. When you set the indicators, YOU MUST SAVE the 
   * previous one to put yours. Then at the end of your use, you connect back
   * the saved one.
   * @param iIndic the @href CATIndicator
   * @param iPlace Placement Background or Foregroung
   * @return Previous Current indicator to save.
   */
  CATIndicator *SetIndicator (CATIndicator *iIndic,const CATViewerPlacement iPlace);

  /** 
   * Gets the CATSupport associated to the CATViewer.
   * @return the @href CATSupport
   **/
  CATSupport & GetSupport() const;

  /** @nodoc */
  CATMouseDevice& GetMouseDevice() const;

  /** @nodoc */
  virtual CATManipulator * ChooseManipulator(CATPickPathList &, 
      CATPickPath &PickPathChoosen);


  /** @nodoc */
  virtual CATViewpointEditor * SetViewpointEditor (CATViewpointEditor *Editor);


  /** @nodoc */
  virtual void Preactivate     (CATManipulator *Manipulator, CATDevice *Device);
  /** @nodoc */
  virtual void MoveOver        (CATManipulator *Manipulator, CATDevice *Device);
  /** @nodoc */
  virtual void Move            (CATManipulator *Manipulator, CATDevice *Device);
  /** @nodoc */
  virtual void EndPreactivate  (CATManipulator *Manipulator, CATDevice *Device);
  /** @nodoc */
  virtual void Activate        (CATManipulator *Manipulator, CATDevice *Device);
  /** @nodoc */
  virtual void BeginManipulate (CATManipulator *Manipulator, CATDevice *Device);
  /** @nodoc */
  virtual void Manipulate      (CATManipulator *Manipulator, CATDevice *Device);
  /** @nodoc */
  virtual void EndManipulate   (CATManipulator *Manipulator, CATDevice *Device);
  /** @nodoc */
  virtual void Context         (CATManipulator *Manipulator, CATDevice *Device);
  /** @nodoc */
  virtual void EndContext      (CATManipulator *Manipulator, CATDevice *Device);
  /** @nodoc */
  virtual void Edit            (CATManipulator *Manipulator, CATDevice *Device);


  /** 
   * Sets the cursor displayed when the mouse is over the viewer.
   * @param iCursor
   */
  CATDialog::CATDlgCursor SetCursor(CATDialog::CATDlgCursor iCursor);

#ifdef _WINDOWS_SOURCE
  /** @nodoc */
  void ChangeFocusMagnifier(int xClient, int yClient, int widthClient, int heightClient);
#endif


  /** @nodoc */
  void OnShowDrill (void *d);

  /** @nodoc */
  void ResetDrill ();

  /** @nodoc */
  void UpdateDrillSelector(CATRep* rep);

  /** @nodoc */
  virtual void ReceiveKeyEvent( CATKeyboardEvent &key );

  /** @nodoc */
  virtual void InterpretKeybdEvent( CATCallbackEvent, void *,
      CATNotification *, CATSubscriberData, CATCallback);


  /** @nodoc */
  void SetStereoMode (const int mode = 0, const float eyeGap = 0.f);

  /** @nodoc */
  void GetStereoMode (int *mode, float *eyeGap) const;

  /** @nodoc */
  virtual void SetOcclusionMode (const int mode);

  /** @nodoc */
  int GetOcclusionMode () const;


  /** @nodoc */
  CATPixelImage * GrabPixelImage (void);

  /** @nodoc */
  CATPixelImage * GrabPixelImage (int x0,int y0,int width,int height,
      CATPixelImage *image = NULL);
  /** @nodoc */
  void GetMousePosition          (int *x, int *y);



  /** 
   * @nodoc 
   * Z Buffer access:
   *
   *   - ReadZBuffer: <format> indicates the type of data that is to be returned
   *   by the call: 0 UNSIGNED_BYTE, 1 BYTE, 2 UNSIGNED_SHORT, 3 SHORT,
   *   4 UNSIGNED_INT, 5 INT, 6 FLOAT. Returned pointer has to be freed after
   *   use (a call to malloc is made inside the routine).
   */
  void *ReadZBuffer (int format);

  /** @nodoc */
  void *ReadFrameBuffer (int format);

  /** @nodoc */
  /*
   *  Parameter iOnOff :
   *    0   Not activated
   *    1   Activated with both ZBuffer and FrameBuffer support
   *    2   Activated with FrameBuffer support only
   *    3   Activated with ZBuffer support only
   */
  void ActivateSprites(int iOnOff);
  /** @nodoc */
  int AreSpritesActivated(void);
  /** @nodoc */
  void EmptySprites();

  /** @nodoc */
  void AddIconFrame (const CATDlgFrame *frame);


  /** 
   * Sets the viewer's FullScreen state.
   *  @param iOnOff the FullScreen mode
   */
  virtual void SetFullScreen( const int iOnOff=1);

  /** 
   * Gets whether or not the Viewer is in fullScreen.
   */
  virtual int IsFullScreen() const;


  /**
   * Sets the viewmode for viewer enclosed in the current CATSupport.
   * @param iMode
   * The viewer mode
   * <br><b>Legal values:</b> @href CATViewModeType 
   * @param iActive
   * 0 = off.
   * 1 = on.
   *
   */
  void SetViewMode (const int iMode, const int iActive);

  /**
   * Returns whether or not the given mode is active.
   * @param iMode
   * the viewer mode.
   * <br><b>Legal values:</b> @href CATViewModeType
   */
  int ViewMode     (const int iMode) const;

  /** @nodoc */
  void UpdateActiveLightSource();

  /** @nodoc */
  void UpdateLights(CAT3DViewpoint* iVp = NULL);

  /** 
   * Gets the two CAT3DLightSourceRep associated to the viewer.
   */
  void GetLightSourceReps(const CAT3DLightSourceRep * & lightRep1,
      const CAT3DLightSourceRep * & lightRep2);

  /** 
   * Sets the two CAT3DLightSourceRep associated to the viewer.  
   * @param lightRep1 the first light source
   * @param lightRep2 the second light source
   */
  void SetLightSourceReps(CAT3DLightSourceRep       *   lightRep1,
      CAT3DLightSourceRep       *   lightRep2);

  /** @nodoc */
  void ApplicateDefaultLights(int iOnOff = 1);

  /** 
   * Sets the global ambient light color.
   *@param iR
   * the red composant color.
   *@param iG
   * the green composant color.
   *@param iB
   * the blue composant color.
   */
  void SetGlobalAmbientLight (const float iR, const float iG, const float iB);

  /** 
   * Retreives the global ambient light color.
   *@param oR
   * the red composant color.
   *@param oG
   * the green composant color.
   *@param oB
   * the blue composant color.
   */
  void GetGlobalAmbientLight (float * oR, float * oG, float * oB);

  /** 
   * Sets the background color.
   *@param iR
   * the red composant color.
   *@param iG
   * the green composant color.
   *@param iB
   * the blue composant color.
   */
  virtual void SetBackgroundColor     (const float iR, const float iG, const float iB,
      const int save=1);
  /** 
   * Retreives the background color.
   *@param oR
   * the red composant color.
   *@param oG
   * the green composant color.
   *@param oB
   * the blue composant color.
   */
  void         GetBackgroundColor     (float *oR, float *oG, float *oB);

  /**
   *  Sets whether or not the background is graduated. 
   *@param iActive  
   * 0 = off.
   * 1 = on.
   */
  virtual void SetGraduatedBackground (const int iActive);

  /** Gets whether or not the background is graduated. 
   * @return the result of the test*/
  int          IsBackgroundGraduated  () const;

  /** @nodoc */
  virtual void SetSaveBackgroundColor(const float, const float, const float);

  /** @nodoc */
  void GetSaveBackgroundColor(float *, float *, float *);

  /** 
   * Gets the CATColormMap. 
   * @return the CATColorMap
   */
  CATColorMap & GetCATColormap();

  /** @nodoc */
  CAT2DBagRep* GetbackgroundBag();


  /** @nodoc */
  void Create       (CATCommand *, CATNotification *, CATCommandClientData);

  /** 
   * Resize the viewer.
   *@param iWidth
   * the new width in pixel for the viewer.
   *@param iHeight
   * the new width in pixel for the viewer.
   */
  void Resize (const float iWidth, const float iHeight);

  /** @nodoc */
  void ResizeWindow (CATCommand *, CATNotification *, CATCommandClientData);


  /** @nodoc */
  void ResetTexture              (void);

  /** @nodoc */
  void SetLightSourceTexture     (void);

  /** @nodoc */
  void SetTexture                (CATGraphicMaterial *ioMat);

  /** @nodoc */
  CATGraphicMaterial *GetTexture (void) const ;

  /** @nodoc */
  unsigned long GetFrameDuration      (void);

  /** 
   * @nodoc 
   * returns is seconds
   */
  virtual float GetLastUpdateDuration (void) const;

  /** 
   * @nodoc
   * VISURENDER : OBSOLETE!!!
   */
  virtual void GetLastUpdateDuration (float &Total, float &Culling, float &Draw, float &OCulling, float &ODraw) const;

  /** @nodoc */
  virtual void GetLastUpdateDuration (CATVizDuration** o_pprDuration);

  /** @nodoc */
  void SetLastUpdateDuration (CATVizDuration* i_pDuration);

  /** @nodoc */
  void GenerateUpdateEvent();  

  /** @nodoc */
  void GetLinetypeTable    (int nbseg[7], float des[7][16]) const;


  /**
   * Gets the  CATDlgContextualMenu displayed when you right click on the viewer. 
   */
  CATDlgContextualMenu	*GetContextualMenu() const;

  /** @nodoc */
  void SetStaticQuality  (float  ,int  );
  /** @nodoc */
  void GetStaticQuality  (float *,int *);
  /** @nodoc */
  void SetDynamicQuality (float  ,int  );
  /** @nodoc */
  /** @nodoc */
  void GetDynamicQuality (float *,int *);
  /** @nodoc */
  int  GetOutlineMode();
  /** @nodoc */
  void SetOutlineMode(const int);

  /** @nodoc */
  CATDialog * GetMotif();


  /** @nodoc */
  void SetTransparencyMode (const int);
  /** @nodoc */
  int  GetTransparencyMode() const;

  /** @nodoc */
  void SetAntiAliasingMode (const int);
  /** @nodoc */
  int  GetAntiAliasingMode() const;

  /** 
   * Gets the default CATIndicator associated to the backGround.
   */
  CATIndicator * GetDefaultBackgroundIndicator() const;


  /** @nodoc */
  int AnimateViewpoint(const CATMathPointf &,
      const CATMathPointf &,
      const CATMathPointf &);
  /** @nodoc */
  int AnimateViewpoint(const CAT3DViewpoint &);
  /** @nodoc */
  int AnimateViewpoint(const CAT2DViewpoint &);

  /** 
   * @nodoc 
   * 1 = POINT, 2= LINE, 3 = FILL
   */
  void SetPolygonDrawingMode (const int);   

  /** @nodoc */
  void SetLogicalOperation   (const int type ); /* type = 0 : COPY          => source
                                                          1 : CLEAR         => 0
                                                          2 : SET           => 1
                                                          3 : COPY          => source
                                                          4 : COPY_INVERTED => ~source
                                                          5 : NOOP          => destination
                                                          6 : INVERT        => ~destination
                                                          7 : AND           => source & destination
                                                          8 : NAND          => ~(source & destination)
                                                          9 : OR            => source | destination
                                                         10 : NOR           => ~(source | destination)
                                                         11 : XOR           => source ^ destination
                                                         12 : EQUIV         => ~(source ^ destination)
                                                         13 : AND_REVERSE   => source & ~destination
                                                         14 : AND_INVERTED  => ~source & destination
                                                         15 : OR_REVERSE    => source | ~destination
                                                         16 : OR_INVERTED   => ~source | destination */

  /** @nodoc */
  void ActivateGauge(const int);

  /** @nodoc */
  int IsGaugeActivated(); 

  /** @nodoc */
  void ActivateScalePlane(  const int Activate, const float Scale=1.0f, const float Width=200.0f, const float Height = 100.0f, 
                            const int ShowPlane = 1, const float LineWidth=10.0f, const float LineHeight=10.0f);
  /** @nodoc */
  int  IsScalePlaneActivated();

  //*** UNDER REMOVAL: ***********************************************************
  /** @nodoc */
  void AddRepOverlay (CAT2DRep *);
  /** @nodoc */
  void RemoveRepOverlay (CAT2DRep *);
  /** @nodoc */
  void AddRepFurtiveOverlay (CAT2DRep *);
  /** @nodoc */
  void RemoveRepFurtiveOverlay (CAT2DRep *);
  /** @nodoc */
  virtual void SetPreselectModeOn();
  /** @nodoc */
  void SetMesh           (const int);
  /** @nodoc */
  void SetOutLine        (const int);
  /** @nodoc */
  void SetHLR            (const int);
  /** @nodoc */
  void SetEdge           (const int);
  /** @nodoc */
  void SetMaterialRep    (const int);
  /** @nodoc */
  void AddForeGroundViewpoint (CATViewpoint *);
  /** @nodoc */
  CATIndicator * SetBackgroundIndicator( CATIndicator * );
  /** @nodoc */
  CATIndicator * SetForegroundIndicator( CATIndicator * );
  //******************************************************************************

  /** 
   * @nodoc 
   * Associates a CATViewpointEditor to a CATViewpoint.
   */
  void SetViewpointEditor(CATViewpoint* viewpoint, CATViewpointEditor* viewpointEditorMonipulatingIt);

  /** @nodoc */
  CATRepShortHelp * SetShortHelpState(CATULong state);

  /**
   * Sets the feedback mode.
   * @param iOnOff
   *   The feedback mode.
   *   <br><b>Legal values</b>: 
   *    <ul>
   *     <li><tt>FALSE</tt>= Off (default value), no feedback </li>
   *     <li><tt>TRUE</tt>= On , a @href CATVisViewerFeedbackEvent is sent
   *      when something appends in the viewer. </li>
   *    </ul>
   *
   */
  void SetFeedbackMode(const CATBoolean iOnOff=FALSE);

  /**
   * Returns the feedback mode.
   * @return 
   *   The feedback mode. 
   *   <br><tt>TRUE</tt> if the feedback mode is active, <tt>FALSE</tt> otherwise.
   */
  CATBoolean GetFeedbackMode() const;

  /** @nodoc */
  CATViewerStyle GetViewerStyle();

  /** @nodoc */
  void RemoveUpdateCB();


  /** @nodoc */
  int IsNextPickPath(int mode, int firstPickPath);

  /** @nodoc */
  int GetPickPathListPointer();

  /** @nodoc */
  void ReloadModifier();

  /** @nodoc */
  void SetDrillSelectorOn(int state);

  /** @nodoc */
  void SetDrillSelector(CATDrillSelector * iDrillSelector);
  /** @nodoc */
  void UnrefDrillSelector(CATDrillSelector * iDrillSelector);

  /** @nodoc */
  void DisableContext();

  /** @nodoc */
  void EnableContext();

  /** 
   * @nodoc
   * Locks/Unlocks the viewer's draw.
   * @param iValue
   *  iValue = 0 -- Draw is Unlocked
   *           1 -- Draw is locked
   */
  void LockDrawRequest(int iValue);

  /** @nodoc */
  virtual void RestoreLastMainViewpoint();

  /** @nodoc */
  void SetPickEditor();

  /** @nodoc */
  void ComputeShadowMap(CATTexturePixelImage* oTexture, CATMathTransformation* oMatrix,
      CAT3DViewpoint* vp, CAT3DBagRep* bag,								 
      CAT3DLightSourceRep* light, int smooth,
      unsigned char shadowRed = 0, unsigned char shadowGreen = 0, 
      unsigned char shadowBlue = 0, unsigned char shadowAlpha = 0,
      int typeBE = 0);


  /** @nodoc */
  virtual void SetSaveIndicatorCursor(int iOnOff);

  /** @nodoc */
  virtual int GetSaveIndicatorCursor();

  /** @nodoc */
  inline CATVizViewer* GetVizViewer() const {return _letter;};

  /** @nodoc */
  CATSpaceDevice& GetSpaceDevice() const;

  /** @nodoc 
   * // SBP (device split)
   */
  CATPositionEvent* _actionPositionEvent;
  /** @nodoc 
   * // SBP (device split)
   */
  CATIncrementEvent* _actionIncrementEvent;

  // ces deux fonctions permettemt de creer de image a partir d'une rep et d'un viewpoint
  // Attention ces deux fonctions ne sont valides que dans le cas
  // des CATNavigation2D/3DViewer
  /** @nodoc  */
  CATPixelImage* CreatePictureWithRep(CAT2DViewpoint* vp, CAT2DRep* rep, int dx, int dy);

  /** @nodoc */
  CATPixelImage* CreatePictureWithRep(CAT3DViewpoint* vp, CAT3DRep* rep, int dx, int dy);

  /** @nodoc */
  const list <CATPickPath> &GetPickPathList ();

  /** @nodoc */
  CATUnicodeString * GetNumberForStatusBar();

  /** @nodoc */
  void SetSpecific2DMode(const int iOnOff);

  /** @nodoc */
  void Set2DMode(CATVis2DModeType i_2DMode);
  /** @nodoc */
  CATVis2DModeType Get2DMode();
  /** @nodoc */
  void Set2DModePlane(CATMathPlane& i_plane);
  /** @nodoc */
  CATMathPlane* Get2DModePlane();

  /** @nodoc */
  void SetInfiniteEnvironment(CATVisInfiniteEnvironment* iEnv);
  /** @nodoc */
  void SetInfiniteEnvironment(const CATString& iName);
  /** @nodoc */
  void PushInfiniteEnvironment(const CATString& iName);
  /** @nodoc */
  void PopInfiniteEnvironment();
  /** @nodoc */
  void PushOverloadInfiniteEnvironment(CATVisInfiniteEnvironmentOverload* iOverloadEnv);
  /** @nodoc */
  void PopOverloadInfiniteEnvironment(CATVisInfiniteEnvironmentOverload* iOverloadEnv=NULL);
  /** @nodoc */
  const CATString& GetInfiniteEnvironmentRootName();
  /** @nodoc */
  CATVisInfiniteEnvironment* GetCloneOfInfiniteEnvironment();
  /** @nodoc */
  void LockInfiniteEnvGroundUpdate(int iOnOff);
  
  protected:
  
// SVQ 6/02/02 : pour corriger une erreur de build dans CATDraftingViewer.cpp (a degager des que possible)

  int _backgroundGraduated;
  CATViewpoint *_backgroundViewpoint;

  /** Called On viewer creation. This methods constructs the CATVizViewer derived object embedded
    in the CATViewer **/

  CATVizViewer *_letter;
  CATVizViewer *CreateLetterObject(CATString i_szName, int i_nSizeX, int i_nSizeY, CATViewerStyle i_viewerStyle);

  /** @nodoc */
  void OnDeviceAction (CATCallbackEvent  e,
      void*             p,
      CATNotification*  n,
      CATSubscriberData d,
      CATCallback       c);


  /**
   * Constructs a CATViewer.
   * @param iFather  
   * @param istyle
   * @param iwidth  Width in pixel
   * @param iheight Height in pixel
   * @param iViewerStyle
   *  Options of the viewer's behaviour. (Combinations of styles are alloyed) 
   */
  CATViewer (CATDialog *iFather,
      const CATString &iName,
      CATDlgStyle istyle = NULL,
      const int iwidth = 400,
      const int iheight = 400,
      const CATViewerStyle iViewerStyle=NULL,
      CATVizViewer *letter = NULL);


  /** @nodoc */
  void UnreferenceManipulator( CATManipulator *Manipulator);


  /** @nodoc */
  CATDeviceEvent *_PositionEvent;
  /** @nodoc */
  CATPositionDevice *_PositionAgent;
  /** @nodoc */
  CATViewerEvent *_PositionVEvent;

  /** @nodoc */
  virtual void InterpretDeviceEvent( CATCallbackEvent Id, void *From, 
      CATNotification *Event, CATSubscriberData Data, CATCallback Callback);
  /** @nodoc */
  virtual void InterpretUpdate( CATCallbackEvent Id, void *From, 
      CATNotification *Event, CATSubscriberData Data, CATCallback Callback);
  /** @nodoc */
  void InterpretContextEvent(CATCommand *c, CATNotification *n, 
      CATCommandClientData);

  /** @nodoc */
  void DragAndDropInformation(CATCommand *c, CATNotification *n, 
      CATCommandClientData);

  // Manage the deletion of the motif/windows 
  /** @nodoc */
  void OnDlgWindowDeleteCB(CATCallbackEvent iEvent,void *iPublisher, CATNotification *iNotif, CATSubscriberData iData, CATCallback iCallback);


  /** @nodoc */
  CATCallback _UpdateCB;
  /** @nodoc */
  CATCallback _DeviceInterpretationCB;
  /** @nodoc */
  CATCallback _KeybdCB;
  /** @nodoc */
  CATCallbackManager *_CallbackManager;



  /** @nodoc */
  CATDlgFrame *_iconFrame[10];
  /** @nodoc */
  int         _nbIconFrame;

  /** @nodoc */
  int _IsFullScreen;
  /** @nodoc */
  virtual void UnsetFullScreen( CATCommand *command, CATNotification *notification, CATCommandClientData data);
  /** @nodoc */
  CATDlgCheckItem *_wFullScreen;
  /** @nodoc */
  CATDlgDialog   *_wFullWindow;
  /** @nodoc */
  virtual void UpdateLayout();



#ifdef _WINDOWS_SOURCE
  /** @nodoc */
  CATDlgWindows *_motif;
#else
  /** @nodoc */
  CATDlgMotif   *_motif;
  Widget         _motifFather;
#endif

  /** @nodoc */
  CATDlgFrame *_IconBar;
  /** @nodoc */
  int _vtab;
  /** @nodoc */
  int _htab;
  /** @nodoc */
  int _vtabR;
  /** @nodoc */
  int _htabR;
  /** @nodoc */
  CATDlgDocument * _wMainWindow ;

  /** @nodoc */
  int _isBuilt;


  /*
     void UpdateBackground (CATCallbackEvent  e,
     void*             p,
     CATNotification*  n,
     CATSubscriberData d,
     CATCallback       c);
   */

  /** @nodoc */
  void OverviewDestroyed (CATCommand*, CATNotification *, CATCommandClientData);
  /** @nodoc */
  CATOverview2DViewer *_overviewViewer;
  /** @nodoc */
  int _overviewVisible; 
  /** @nodoc */
  CATDlgDialog       *_overviewDialog;


  /** @nodoc */
  CATDrillSelector* _drillSelector;  
  /** @nodoc */
  int _isDrillAvailable;
  /** @nodoc */
  unsigned int _drillSelectorOn : 1;
  
  /*
     int _saveIndicatorCursor;
   */

  /** @nodoc */
  void EnableSpaceFocus(int spaceFocusEnable);

  // permet d'allouer le viewer utile a la generation d'image
  // pour le drill selector dans le cas des 
  // CATNavigation2D/3DViewer
  /** @nodoc */
  void SetPictureGenerator(CATViewer* viewer);

  private:

  CATDlgContextualMenu	*_contextualMenu;

  void InterpretViewerSelected( CATNotification *Event);

  void ViewpointModified( CATCallbackEvent, void *, CATNotification *, CATSubscriberData Data, CATCallback);

  static CATViewer *_currentViewer;
  static CATViewer *_SelectedViewer;
  static list<CATViewer> _viewerClass;

  float _width;
  float  _height;

  int _ContextOK;

  CATCallback       _DeviceActionCB;
  CATRepShortHelp  *_shortHelp;

  CATCallback _GaugeCB;
  CATPerformanceGaugeRep *_GaugeRep;
  void UpdateGauge(CATCallbackEvent, void *, CATNotification *,CATSubscriberData, CATCallback);

  CATVizCursor*                _cursor_handler;
  CATVizContextualMenuHandler* _ctx_handler;
  CATVizStatusBarHandler *_statusBarHandler;

  CATCallback _VizViewerBeginViewpointAnimationCB;
  CATCallback _VizViewerEndViewpointAnimationCB;
  CATCallback _VizViewerEndViewpointManipulationCB;
  CATCallback _VizViewerMainViewpointChangedCB;
  CATCallback _VizViewerViewpointEditorSetCB;
  CATCallback _VizViewerUpdateManipulatorCB;
  CATCallback _VizViewerFeedbackCB;

  int _NumberOfFeedbackCB;

  void OnBeginViewpointAnimation( CATCallbackEvent, void *, CATNotification *, CATSubscriberData Data, CATCallback);
  void OnEndViewpointAnimation( CATCallbackEvent, void *, CATNotification *, CATSubscriberData Data, CATCallback);
  void OnEndViewpointManipulation( CATCallbackEvent, void *, CATNotification *, CATSubscriberData Data, CATCallback);
  void OnMainViewpointChanged( CATCallbackEvent, void *, CATNotification *, CATSubscriberData Data, CATCallback);

  // JQT/JOV : (short help split)
  void OnManipulatorUpdate( CATCallbackEvent, void *, CATNotification *, CATSubscriberData, CATCallback);

  void OnFeedback( CATCallbackEvent, void *, CATNotification *, CATSubscriberData, CATCallback);

#ifndef _WINDOWS_SOURCE
  static void InterpretDestroyEvent( Widget, XtPointer, XtPointer );
#endif

  friend class CATPositionDriver;

  // viewer permettant de generer des image a partir de rep et viewpoint
  CATViewer* _pictureGenerator;

public:  
  /** @nodoc */
  void StartDrill(CATSOWithPickingData* iPathes);

private:
  int InterpretDeviceEventForDrill(CATNotification* iEvent);
  int InterpretKeybdEventForDrill(CATNotification* iEvent);
  
  int FillPickPathList(int reset = 0);

  void ShowDrill(CATSOWithPickingData* iPathes, int iAsynchronous);
  void CreateDrillCB(CATCommand*, CATNotification *, CATCommandClientData);
  void CreateDrill();

  CATPickPathList _currentPickPathList;
  int _pickPathListPointer;
  int _drillx, _drilly;

  CATSOWithPickingData* _drillPathes;
};
#endif


