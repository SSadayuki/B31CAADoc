/* -*-c++-*- */
#ifndef CATSketcherSettings_h
#define CATSketcherSettings_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATCallbackManager.h"
#include "CATSktSettings.h"
#include "CAT2DCstType.h"
#include "CAT2DCstDiag.h"

/**
 * Abstract class defining the setttings of the Sketcher behavior. 
 * <br><b>Precondition<\b>Only one instance of Sketcher settings exists in the same time. When an application 
 * uses the sketcher component the sketcher settings must be initialized. If the application can not initialized
 * it, settings must be initialized to <tt>NULL</tt> to activate the protocol <tt>CATISketcherSettings</tt>
 * interface.
 * This interface exports 5 events. The type of these events are accessible by the following methods:
 *                GridModification()
 *                CpltModification()
 *                SnapModification()
 *                Visu3DUIModification()
 *                GeomUIModification()
 *                MultiModification()
 * @see CATISketcherSettings
 */
class ExportedByCATSktSettings CATSketcherSettings : public CATCallbackManager
{

  CATDeclareClass;

public:

/**
 * Returns the settings of the sketcher component used by the current application. 
 * If no current settings exist, the current UIActive object settings (through CATISketcherSettings
 * interface)are returned.
 */
  static CATSketcherSettings * GetSketcherSettings(void);

/**
 * Forces the initialization of the sketcher settings used by the application.
 * @param <tt>CATSketcherSettings * iSettings</tt>
 * [in] The concrete instance of the setting to activate. This argument may be
 * <tt>NULL</tt> to initialize the standard management of the settings by using CATISketcherSettings interface.
 */
  static void SetSketcherSettings( CATSketcherSettings * iSettings );

/**
 * Defines the event to control the settings modification linked to the Grid.
 * @see CATDeclareCBEvent
 */
  CATDeclareCBEvent( GridModification );

/**
 * Defines the event to control the settings modification linked to the Smartpick.
 * @see CATDeclareCBEvent
 */
  CATDeclareCBEvent( CpltModification );

/**
 * Defines the event to control the settings modification linked to the visual behavior. 
 * @see CATDeclareCBEvent
 */
  CATDeclareCBEvent( Visu3DUIModification );

/**
 * Defines the event to control the settings modification linked to the snap on the Grid. 
 * @see CATDeclareCBEvent
 */
  CATDeclareCBEvent( SnapModification );

/**
 * Defines the event to control the settings modification linked to the geometry management. 
 * @see CATDeclareCBEvent
 */
  CATDeclareCBEvent( GeomUIModification );

/**
 * Defines the event to control the settings modification linked to several type of previous events.
 * @see CATDeclareCBEvent
 */
  CATDeclareCBEvent( MultiModification );

/**
 * Saves the repository of the sketcher settings.
 * @return 
 * A <tt>HRESULT</tt>.
 */
  virtual HRESULT SaveRepository ( void ) = 0;  

/**
 * Returns the visualization mode of the grid (check button).
 * @return 
 * A <tt>int</tt>, if the value is not equal to zero, the grid is visible.
 */
  virtual int GetGridVisuMode ( void ) = 0;  

/**
 * Returns the visualization mode of the shadow Grid (check button).
 * @return 
 * A <tt>int</tt>, if the value is not equal to zero, the grid is shadowed.
 */
  virtual int GetGridGroundMode ( void ) = 0; 

/**
 * Returns the mode of points creation: On the Grid or not (Check Button).
 * @return 
 * A <tt>int</tt>, if the value is not equal to zero, the points are created on the Grid.
 */
  virtual int GetGridSnapMode ( void ) = 0;

/**
 * Returns the mode of grid scaling w.r.t. current viewpoint (Check Button).
 * @return 
 * A <tt>int</tt>, if the value is not equal to zero, the grid adapts itself to viewpoint (default adapter value is 0).
 */
  virtual int GetGridAdaptativeMode ( void );
 
#ifdef CATIAR216
/**
 * Returns the step of the Grid in MKS unit.
 * @return 
 * a  <tt>double</tt>, returns the value of the Grid step in MKS unit (m).
 * @param <tt> CATCkeScale iScale </tt>
 * [in] Defines the scale for the grid step value
 */
  virtual double GetGridPrimSpac ( CATCkeScale iScale = CATNormalScale ) = 0;

/**
 * Returns the number of graduations of the primary spacing.
 * @return 
 * A <tt>int</tt>, returns this value.
 * @param <tt> CATCkeScale iScale  </tt>
 * [in] Defines the scale for the number of graduation
 */
  virtual int GetGridSecStep (  CATCkeScale iScale = CATNormalScale) = 0;

/**
 * Returns the mode of disproportion of the Grid.
 * @return 
 * A <tt>int</tt>, if the value is not equal to zero, the H and the V of the Grid may be differente.
 * @param <tt> CATCkeScale iScale  </tt>
 * [in] Defines the scale for the distortion mode
 */
  virtual int GetAllowDistortions (  CATCkeScale iScale = CATNormalScale ) = 0;

/**
 * Returns the step of the Grid in the V direction in MKS unit.
 * @return 
 * A <tt>double</tt>, returns the value of the Grid step in MKS unit (m).
 * @param <tt> CATCkeScale iScale </tt>
 * [in] Defines the scale for the grid step value
 */
  virtual double GetGridVPrimSpac (  CATCkeScale iScale = CATNormalScale) = 0;

/**
 * Returns the number of graduations in the V direction of the primary spacing.
 * @return 
 * A <tt>int</tt>, returns the number of the subdivisions.
 * @param <tt> CATCkeScale iScale  </tt>
 * [in] Defines the scale for the number of graduation
 */
  virtual int GetGridVSecStep (  CATCkeScale iScale = CATNormalScale ) = 0;
#else
  /**
 * Returns the step of the Grid in MKS unit.
 * @return 
 * A  <tt>double</tt>, returns the value of the Grid step in MKS unit (m).
 */
  virtual double GetGridPrimSpac ( void ) = 0;

/**
 * Returns the number of graduations of the primary spacing.
 * @return 
 * A <tt>int</tt>, returns this value.
 */
  virtual int GetGridSecStep ( void ) = 0;

/**
 * Returns the mode of disproportion of the Grid.
 * @return 
 * A <tt>int</tt>, if the value is not equal to zero, the H and the V of the Grid may be differente.
 */
  virtual int GetAllowDistortions ( void ) = 0;

/**
 * Returns the step of the Grid in the V direction in MKS unit.
 * @return 
 * A <tt>double</tt>, returns the value of the Grid step in MKS unit (m).
 */
  virtual double GetGridVPrimSpac ( void ) = 0;

/**
 * Returns the number of graduations in the V direction of the primary spacing.
 * @return 
 * A <tt>int</tt>, returns the number of the subdivisions.
 */
  virtual int GetGridVSecStep ( void ) = 0;
#endif

/**
 * Returns the "enter" mode of the sketch (Check button).
 * @return 
 * A <tt>int</tt>, if the value is not equal to zero, the point of view is parallel to the sketch plane.

 */
  virtual int GetViewNormalTo ( void ) = 0;

/**
 * Returns the mode of creation of the circle center or ellipse center (check button).
 * @return 
 * A <tt>int</tt>, if the value is not equal to zero, the centers ares created automatically.
 */
  virtual int GetCreateCenter ( void ) = 0;

/**
 * Returns the detection mode of the geometry.
 * @return 
 * A <tt>int</tt>, if the value is not equal to zero, the detection is activated.
 */
  virtual int GetPosSupports ( void ) = 0;

/**
 * Returns the detection mode when the elements are created at the verticality or 
 * horizontality of other element (check button)
 * @return 
 * A <tt>int</tt>, if the value is not equal to zero, the detection is activated.
 */
  virtual int GetPosHorVertTo ( void ) = 0;


/**
 * Returns the detection mode for elements created horizontally or vertically(check button).
 * @return 
 * A <tt>int</tt>, if the value is not equal to zero, the detection is activated.
 */
  virtual int GetDirHorVert ( void ) = 0;

/**
 * Returns the detection mode of parallelism, perpandicularity and tangent elements (check buttons) .
 * @return 
 * A <tt>int</tt>, if the value is not equal to zero, all detections are activated.
 */
  virtual int GetDirParaPerpTan ( void ) = 0;

/**
 * Returns the detection mode of parallelism (check button)
 * @return 
 * A <tt>int</tt>, if the value is not equal to zero, the detection is activated.
 */
  virtual int GetDirParallel ( void ) = 0;

/**
 * Returns the detection mode of perpandicularity (check button)
 * @return 
 * A <tt>int</tt>, if the value is not equal to zero, the detection is activated.
 */
  virtual int GetDirPerpend ( void ) = 0;

/**
 * Returns the detection mode of tangent elements (check button)
 * @return 
 * A <tt>int</tt>, if the value is not equal to zero, the detection is activated.
 */
  virtual int GetDirTangent ( void ) = 0;

/**
 * Returns the constraint creation mode detected by the picking assistant (check button).
 * @return 
 * A <tt>int</tt>, if the value is not equal to zero, the detection is activated.
 */
  virtual int GetCreateConstraint ( void ) = 0;

/**
 * Returns the constraint creation mode if a parameter is valuated in the toolbar "Sketchere Information" (check button)
 * @return 
 * A <tt>int</tt>, if the value is not equal to zero, the constraints are created automatically.
 */
  virtual int GetValidateConstraint ( void ) = 0;

/**
 * Returns the mode of creation of the given constraint.
 * @param <tt> CAT2DCstType iCstType </tt>
 * @return 
 * A <tt>int</tt>, if the value is not equal to zero, the constraints are created automatically.
 */
  virtual int GetValidateCstType ( CAT2DCstType iCstType ) = 0;

/**
 * Returns the dragging mode of the elements created in the sketch (check button).
 * @return 
 * A <tt>int</tt>,if the value is not equal to zero, the elements are moved including the limit points.
 */
  virtual int GetDragWithEndPts ( void ) = 0;

/**
 * Returns the dragging mode of sketch elements (radio-button).
 * @return 
 * A <tt>int</tt>
 * 0 - Standard dragging 
 * 1 - Dragging with minimun moving
 * 2 - Dragging in relaxation
 */
  virtual int GetDragMode ( void ) = 0;

/**
 * Returns the dragging mode of sketch elements (check button).
 * @return 
 * A <tt>int</tt>,if the value is not equal to zero, the moving of elements are authorized.
 */
  virtual int GetDragElts(void) = 0;

/**
 * Returns the visualization mode of constraint elements diagnostic.
 * @return 
 * A <tt>int</tt>, if the value is not equal to zero, the diagnostic is displayed.
 */
  virtual int GetDiagElts(void) = 0;

/**
 * Returns the color code of the constraint elements.
 * @param <tt> CAT2DCstDiag iDiag </tt>
 * [in] type de diagnostique
 * @param <tt> unsigned int * iRed </tt>
 * [out] red color code.
 * @param <tt> unsigned int * iGreen </tt>
 * [out] green color code.
 * @param <tt> unsigned int * iBlue </tt>
 * [out] blue color code.
 */
  virtual void GetColorDiagElts(CAT2DCstDiag iDiag, unsigned int * iRed, unsigned int * iGreen, unsigned int * iBlue) = 0;
/**
 * Returns the color of isolated elements.
 * @param <tt> unsigned int * iRed </tt>
 * [out] red color code.
 * @param <tt> unsigned int * iGreen </tt>
 * [out] green color code.
 * @param <tt> unsigned int * iBlue </tt>
 * [out] blue color code.
 */
  virtual void GetColorIsolatedElts(unsigned int * iRed, unsigned int * iGreen, unsigned int * iBlue) = 0;
/**
 * Returns the color of protected elements.
 * @param <tt> unsigned int * iRed </tt>
 * [out] red color code.
 * @param <tt> unsigned int * iGreen </tt>
 * [out] green color code.
 * @param <tt> unsigned int * iBlue </tt>
 * [out] blue color code.
 */
  virtual void GetColorProtectedElts(unsigned int * iRed, unsigned int * iGreen, unsigned int * iBlue) = 0;
/**
 * Returns the color of constructed elements.
 * @param <tt> unsigned int * iRed </tt>
 * [out] red color code.
 * @param <tt> unsigned int * iGreen </tt>
 * [out] green color code.
 * @param <tt> unsigned int * iBlue </tt>
 * [out] blue color code.
 */
  virtual void GetColorConstructElts(unsigned int * iRed, unsigned int * iGreen, unsigned int * iBlue) = 0;
/**
 * Returns the color of picking assistant elements.
 * @param <tt> unsigned int * iRed </tt>
 * [out] red color code.
 * @param <tt> unsigned int * iGreen </tt>
 * [out] green color code.
 * @param <tt> unsigned int * iBlue </tt>
 * [out] blue color code.
 */
  virtual void GetColorSmartPick(unsigned int * iRed, unsigned int * iGreen, unsigned int * iBlue) = 0;

/**
 * Returns the display of the H and V parameters in the toolbar.
 * @return
 * A <tt>int</tt>
 * <b>Legal Values</b>:
 * <dl>
 * <dt> <tt>0</tt> <dd> The parameters are not displayed in the toolbar
 * <dt> <tt>1</tt> <dd> The parameters are displayed in the toolbar
 * </dl>
 */
  virtual int GetShowPosition() = 0;


/**
 * Returns the display of the H and V parameters in the cursor.
 * @return
 * A <tt>int</tt>
 * <b>Legal Values</b>:
 * <dl>
 * <dt> <tt>0</tt> <dd> The parameters are not displayed in the cursor
 * <dt> <tt>1</tt> <dd> The parameters are displayed in the cursor
 * </dl>
 */
  virtual int GetShowPositionOnCursor() = 0;


/**
 * Defines the display of the Grid.
 * @param <tt> int iCheck </tt>
 * [in] If the value is not equal to zero the Grid is displayed.
 * @param <tt> int iEvt </tt>
 * [in] iEvt: If the value is not equal to zero, an event is propagated.
 */
  virtual void SetGridVisuMode ( int iCheck, int iEvt ) = 0;

/**
 * Defines the display of the shadow mode of the Grid.
 * @param <tt> int iCheck </tt>
 * [in] If the value is not equal to zero, the shadow mode is displayed.
 * @param <tt> int iEvt </tt>
 * [in] iEvt: If the value is not equal to zero; an event is propagated in the current sketch.
 */
  virtual void SetGridGroundMode ( int iCheck, int iEvt ) = 0;

/**
 * Defines the creation mode of points on the Grid.
 * @param <tt> int iCheck </tt>
 * [in] If the value is not equal to zero, points are created on the Grid.
 * @param <tt> int iEvt </tt>
 * [in] iEvt: If the value is not equal to zero, an event is propagated in the current sketch.
 */
  virtual void SetGridSnapMode ( int iCheck, int iEvt ) = 0;

#ifdef CATIAR216
/**
 * Defines the primary spacing of the Grid in MKS (m).
 * @param <tt> double iSpacing </tt>
 * [in] Value of the primary spacing in MKS (m).
 * @param <tt> int iEvt </tt>
 * [in] iEvt: If the value is not equal to zero, an event is propagated in the current sketch.
 * @param <tt> CATCkeScale iScale </tt>
 * [in] Defines the scale for the grid step value
 */
  virtual void SetGridPrimSpac ( double iSpacing, int iEvt, CATCkeScale iScale = CATNormalScale ) = 0;

/**
 * Defines the number of graduations of the primary spacing.
 * @param <tt> int iStep </tt>
 * [in] value of the number of subdivisions.
 * @param <tt> int iEvt </tt>
 * [in] iEvt: If the value is not equal to zero, an event is propagated in the current sketch.
 * @param <tt> CATCkeScale iScale  </tt>
 * [in] Defines the scale for the number of graduation
 */
  virtual void SetGridSecStep ( int iStep, int iEvt, CATCkeScale iScale = CATNormalScale  ) = 0;

/**
 * Defines  le mode de disproportions de la grille.
 * @param <tt> int iCheck </tt>
 * [in] specifie le mode de disproportion.
 * @param <tt> int iEvt </tt>
 * [in] iEvt: If the value is not equal to zero, an event is propagated in the current sketch.
 * @param <tt> CATCkeScale iScale  </tt>
 * [in] Defines the scale for the distortion mode
 */
  virtual void SetAllowDistortions ( int iCheck, int iEvt, CATCkeScale iScale = CATNormalScale  ) = 0;

/**
 * Definit le pas principal suivant V de la grille em MKS (m).
 * @param <tt> double iSpacing </tt>
 * [in] specifie la valeur du pas principal en MKS (m).
 * @param <tt> int iEvt </tt>
 * [in] iEvt: If the value is not equal to zero, an event is propagated in the current sketch.
 * @param <tt> CATCkeScale iScale </tt>
 * [in] Defines the scale for the grid step value
 */
  virtual void SetGridVPrimSpac ( double iSpacing, int iEvt, CATCkeScale iScale = CATNormalScale ) = 0;

/**
 * Defines the number of graduations in "V" direction of the primary spacing.
 * @param <tt> int iStep </tt>
 * [in] value of the number of graduations.
 * @param <tt> int iEvt </tt>
 * [in] iEvt: If the value is not equal to zero, an event is propagated in the current sketch.
 * @param <tt> CATCkeScale iScale  </tt>
 * [in] Defines the scale for the number of graduation
 */
  virtual void SetGridVSecStep ( int iStep, int iEvt, CATCkeScale iScale = CATNormalScale ) = 0;
#else
  /**
 * Defines the primary spacing of the Grid in MKS (m).
 * @param <tt> double iSpacing </tt>
 * [in] Value of the primary spacing in MKS (m).
 * @param <tt> int iEvt </tt>
 * [in] iEvt: If the value is not equal to zero, an event is propagated in the current sketch.
 */
  virtual void SetGridPrimSpac ( double iSpacing, int iEvt ) = 0;

/**
 * Defines the number of graduations of the primary spacing.
 * @param <tt> int iStep </tt>
 * [in] value of the number of subdivisions.
 * @param <tt> int iEvt </tt>
 * [in] iEvt: If the value is not equal to zero, an event is propagated in the current sketch.
 */
  virtual void SetGridSecStep ( int iStep, int iEvt ) = 0;

/**
 * Defines  le mode de disproportions de la grille.
 * @param <tt> int iCheck </tt>
 * [in] specifie le mode de disproportion.
 * @param <tt> int iEvt </tt>
 * [in] iEvt: If the value is not equal to zero, an event is propagated in the current sketch.
 */
  virtual void SetAllowDistortions ( int iCheck, int iEvt ) = 0;

/**
 * Definit le pas principal suivant V de la grille em MKS (m).
 * @param <tt> double iSpacing </tt>
 * [in] specifie la valeur du pas principal en MKS (m).
 * @param <tt> int iEvt </tt>
 * [in] iEvt: If the value is not equal to zero, an event is propagated in the current sketch.
 */
  virtual void SetGridVPrimSpac ( double iSpacing, int iEvt ) = 0;

/**
 * Defines the number of graduations in "V" direction of the primary spacing.
 * @param <tt> int iStep </tt>
 * [in] value of the number of graduations.
 * @param <tt> int iEvt </tt>
 * [in] iEvt: If the value is not equal to zero, an event is propagated in the current sketch.
 */
  virtual void SetGridVSecStep ( int iStep, int iEvt ) = 0;
#endif

/**
 * Definit the "enter" mode in the sketch.
 * @param <tt> int iCheck </tt>
 * [in] if the value is not equal to zero, the sketh is openned with the projection plane parallel to the screen.
 * @param <tt> int iEvt </tt>
 * [in] iEvt: If the value is not equal to zero, an event is propagated in the current sketch.
 */
  virtual void SetViewNormalTo ( int iCheck, int iEvt ) = 0;

/**
 * Defines the mode of circle centers creation or ellispe centers creation.
 * @param <tt> int iCheck </tt>
 * [in] if the value is not equal to zero, centers are automatically created.
 * @param <tt> int iEvt </tt>
 * [in] iEvt: If the value is not equal to zero, an event is propagated in the current sketch.
 */
  virtual void SetCreateCenter ( int iCheck, int iEvt ) = 0;

/**
 * Defines the mode of geometry detection of support elements.
 * @param <tt> int iCheck </tt>
 * [in] If the value is not equal to zero the detection mode is activated.
 * @param <tt> int iEvt </tt>
 * [in] iEvt: If the value is not equal to zero, an event is propagated in the current sketch.
 */
  virtual void SetPosSupports ( int iCheck, int iEvt ) = 0;

/**
 * Defines the detection mode of the picking assistant for elements it le mode de detection de l'assistant pour la creation des elements
 * a l'horizontal ou a la vertical des autres elements.
 * @param <tt> int iCheck </tt>
 * [in] If the value is not equal to zero the detection mode is activated.
 * @param <tt> int iEvt </tt>
 * [in] iEvt: If the value is not equal to zero, an event is propagated in the current sketch.
 */
  virtual void SetPosHorVertTo ( int iCheck, int iEvt ) = 0;

/**
 * Defines the detection mode of the picking assistant to create vertical or horizontal elements.
 * @param <tt> int iCheck </tt>
 * [in] If the value is not equal to zero the detection mode is activated.
 * @param <tt> int iEvt </tt>
 * [in] iEvt: If the value is not equal to zero, an event is propagated in the current sketch.
 */
  virtual void SetDirHorVert ( int iCheck, int iEvt ) = 0;

/**
 * @nodoc
 * Definit le mode de detection de l'assistant pour la creation d'elements 
 * parallele a, perpendiculaire a, tangent a,...  (boutton a cocher).
 * Migration : utiliser les methodes SetDirParallel, SetDirPerpend et SetDirTangent
 * a la place.
 * ATTENTION : pour rendre compatible l'utilisation de ces 3 nouvelles methodes
 * avec GetDirParaPerpTan, il faut noter que lorsque les 3 modes sont actifs, alors
 * GetDirParaPerpTan rend <>0.
 * @param <tt> int iCheck </tt>
 * [in] specifie la detection (si il est different de zero, la detection est active).
 * @param <tt> int iEvt </tt>
 * [in] precise si un evenement doit etre emis sur le sketch courant
 * (si il est different de zero, l'evenement est emis).
 */
  virtual void SetDirParaPerpTan ( int iCheck, int iEvt ) = 0;

/**
 * Defines the detection mode fot the picking assistant to create an element parallel to an other element. (check button)
 * @param <tt> int iCheck </tt>
 * [in] If the value is not equal to zero the detection mode is activated.
 * @param <tt> int iEvt </tt>
 * [in] iEvt: If the value is not equal to zero, an event is propagated in the current sketch.
 */
  virtual void SetDirParallel ( int iCheck, int iEvt ) = 0;

/**
 * Defines the detection mode fot the picking assistant to create an element perpandicular to an other element. (check button)
 * @param <tt> int iCheck </tt>
 * [in] If the value is not equal to zero the detection mode is activated.
 * @param <tt> int iEvt </tt>
 * [in] iEvt: If the value is not equal to zero, an event is propagated in the current sketch.
 */
  virtual void SetDirPerpend ( int iCheck, int iEvt ) = 0;

/**
 * Defines the detection mode fot the picking assistant to create a tangent element to an other element. (check button)
 * @param <tt> int iCheck </tt>
 * [in] If the value is not equal to zero the detection mode is activated.
 * @param <tt> int iEvt </tt>
 * [in] iEvt: If the value is not equal to zero, an event is propagated in the current sketch.
 */
  virtual void SetDirTangent ( int iCheck, int iEvt ) = 0;

/**
 * Definit the creation mode of detected constraint by the picking assistant.
 * @param <tt> int iCheck </tt>
 * [in] If the value is not equal to zero, constraints are created.
 * @param <tt> int iEvt </tt>
 * [in] iEvt: If the value is not equal to zero, an event is propagated in the current sketch.
 */
  virtual void SetCreateConstraint ( int iCheck, int iEvt ) = 0;

/**
 * Defines the creation mode of constraints if a parameter is valuated in the toolbar "Sketcher Information".
 * @param <tt> int iCheck </tt>
 * [in] If the value is not equal to zero, constraints are created.
 * @param <tt> int iEvt </tt>
 * [in] iEvt: If the value is not equal to zero, an event is propagated in the current sketch.
 */
  virtual void SetValidateConstraint ( int iCheck, int iEvt ) = 0;

/**
 * Defines the mode of moving elements int the sketch.
 * @param <tt> int iCheck </tt>
 * [in] If the value is not equal to zero, the elements are moved by including limit points
 * @param <tt> int iEvt </tt>
 * [in] iEvt: If the value is not equal to zero, an event is propagated in the current sketch.
 */
  virtual void SetDragWithEndPts ( int iCheck, int iEvt ) = 0;

/**
 * Defines the mode of moving elements int the sketch.
 * @param <tt> int iDragMode </tt>
 * [in] mode of moving
 * 0 - Standard Dragging 
 * 1 - Minimun dragging moving
 * 2 - Relaxation dragging 
 * @param <tt> int iEvt </tt>
 * [in] iEvt: If the value is not equal to zero, an event is propagated in the current sketch.
 */
  virtual void SetDragMode ( int iDragMode, int iEvt ) = 0;

/**
 * Defines the mode of moving elements int the sketch.
 * @param <tt> int iCheck </tt>
 * [in]If the value is not equal to zero, the moving of elements are authorized.
 * @param <tt> int iEvt </tt>
 * [in] iEvt: If the value is not equal to zero, an event is propagated in the current sketch.
 */
  virtual void SetDragElts( int iCheck, int iEvt ) = 0;
/**
 * Defines the visualization mode of constraint elements diagnostic.
 * @return 
 * Un <tt>int</tt>, if the value is not equal to zero,the diagnostic is displayed.
 */
  virtual void SetDiagElts( int iCheck, int iEvt ) = 0;
/**
 * Defines the color code by diagnostic.
 * @param <tt> CAT2DCstDiag iDiag </tt>
 * [in] type de diagnostique
 * @param <tt> unsigned int iRed </tt>
 * [in] red code color <tt>(0<=iRed<=255)</tt>
 * @param <tt> unsigned int iGreen </tt>
 * [in] green code color <tt>(0<=iGreen<=255)</tt>
 * @param <tt> unsigned int iBlue </tt>
 * [in] blue code color <tt>(0<=iBlue<=255)</tt>
 */
  virtual void SetColorDiagElts(CAT2DCstDiag iDiag, unsigned int iRed, unsigned int iGreen, unsigned int iBlue, int iEvt ) = 0;
/**
 * Defines the color code of isolated elements.
 * @param <tt> unsigned int iRed </tt>
 * [in] red code color <tt>(0<=iRed<=255)</tt>
 * @param <tt> unsigned int iGreen </tt>
 * [in] green code color <tt>(0<=iGreen<=255)</tt>
 * @param <tt> unsigned int iBlue </tt>
 * [in] blue code color <tt>(0<=iBlue<=255)</tt>
 */
  virtual void SetColorIsolatedElts(unsigned int iRed, unsigned int iGreen, unsigned int iBlue, int iEvt ) = 0;
/**
 * Defines the color code of protected elements.
 * @param <tt> unsigned int iRed </tt>
 * [in] red code color <tt>(0<=iRed<=255)</tt>
 * @param <tt> unsigned int iGreen </tt>
 * [in] green code color <tt>(0<=iGreen<=255)</tt>
 * @param <tt> unsigned int iBlue </tt>
 * [in] blue code color <tt>(0<=iBlue<=255)</tt>
 */
  virtual void SetColorProtectedElts(unsigned int iRed, unsigned int iGreen, unsigned int iBlue, int iEvt ) = 0;
/**
 * Defines the color code of constructed element.
 * @param <tt> unsigned int iRed </tt>
 * [in] red code color <tt>(0<=iRed<=255)</tt>
 * @param <tt> unsigned int iGreen </tt>
 * [in] green code color <tt>(0<=iGreen<=255)</tt>
 * @param <tt> unsigned int iBlue </tt>
 * [in] blue code color <tt>(0<=iBlue<=255)</tt>
 */
  virtual void SetColorConstructElts(unsigned int iRed, unsigned int iGreen, unsigned int iBlue, int iEvt ) = 0;
/**
 * Defines the color code of the picking assistant element.
 * @param <tt> unsigned int iRed </tt>
 * [in] red code color <tt>(0<=iRed<=255)</tt>
 * @param <tt> unsigned int iGreen </tt>
 * [in] green code color <tt>(0<=iGreen<=255)</tt>
 * @param <tt> unsigned int iBlue </tt>
 * [in] blue code color <tt>(0<=iBlue<=255)</tt>
 */
  virtual void SetColorSmartPick(unsigned int iRed, unsigned int iGreen, unsigned int iBlue, int iEvt ) = 0;

/**
 * Defines the display of position parameters (H and V) in the toolbar
 * @param <tt>unsigned int iShow</tt>
 * [in] value
 * <b>Legal value</b>:
 * <dl>
 * <dt> <tt>0</tt> <dd> Parameters are not displayed in the toolbar.
 * <dt> <tt>1</tt> <dd> Parameters are displayes in the toolbar.
 * </dl>

 * @param <tt>int iEvt</tt>
 * [in] iEvt: If the value is not equal to zero, an event is propagated in the current sketch.
 */
  virtual void SetShowPosition(int iShow, int iEvt) = 0;

/**
 * Defines the display of position parameters (H and V) located on the cursor 
 * @param <tt>unsigned int iShow</tt>
 * [in] : <b>Legal values</b>:
 * <dl>
 * <dt> <tt>0</tt> <dd> Parameters are not displayed on the cursor.
 * <dt> <tt>1</tt> <dd> Parameters are displayes on the cursor.
 * </dl>
 * @param <tt>int iEvt</tt>
 * [in] iEvt: If the value is not equal to zero, an event is propagated in the current sketch.
 * <b>Valeurs legales </b>:
 */
  virtual void SetShowPositionOnCursor(int iShow, int iEvt) = 0;


private:

  static CATSketcherSettings * mgpInstance;

};

#endif
