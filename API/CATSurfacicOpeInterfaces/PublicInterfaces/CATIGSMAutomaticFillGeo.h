#ifndef CATIGSMAutomaticFillGeo_H
#define CATIGSMAutomaticFillGeo_H
 
// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"

#include "CATDataType.h"
#include "CATCollec.h"
#include "CATBoolean.h"
#include "CATMathConstant.h"

#include "CATSoiInterfacesExportedBy.h"


class CATMathAxis;
class CATMathPoint;

class CATBody;
class CATVertex;
class CATEdge;

class CATListPtrCATBody; 

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSoiInterfaces IID IID_CATIGSMAutomaticFillGeo;
#else
extern "C" const IID IID_CATIGSMAutomaticFillGeo;
#endif


/**
* Class defining the topological operator that fills  a space defined by a set of wires.
* <br> The wires must define a closed area and be connected.
* Continuity criteria can be precised: G0, G1 if the supporting surfaces of the wire
* are given, G0 otherwise. The supporting surfaces must be coherent to allow the operator to
* compute a G1 continuity.
* If the given continuity constraints are not compatible, the fill result could not
* not satisfy the continuity contraints. 
* if the given continuity constraints define a too scattered set of normals, the shape of
* fill result could not be correct.It is also possible to have no result.  
* 
* <br>The CATIGSMAutomaticFillGeoFill operator creates the resulting filling skin body
* separately from the inputs: the wires of the input bodies are not used to define the topology
* of the resulting fill body.  
*<ul>
* <li>A CATIGSMAutomaticFillGeoFill operator is created with the <tt>CreateTopologicalAutomaticFill</tt> global function.
* It must be directly deleted with the usual C++ <tt>delete</tt> operator. It is is not streamable. 
*<li>Options can be precised with the <tt>SetXxx</tt> methods, before
* asking for the computation with the <tt>Run</tt> method 
*<li>The result is accessed with the <tt>GetResult</tt> method. If you do not want 
* to keep the resulting body, use the @href CATICGMContainer#Remove method to remove it from the 
* geometric factory.
* <li>The journal corresponding to the fill operation is not yet implemented.
*</ul>
*/
//-----------------------------------------------------------------------------


class ExportedByCATSoiInterfaces CATIGSMAutomaticFillGeo : public CATBaseUnknown
{
   
   CATDeclareInterface;
   
public:
   
  /** 
   * Types for automatic fill. 
   * @param Auto 
   *  use as input of the Automatic fill, it gives the operator free to define best solution 
   * @param Analytic 
   *  will generate an Analytic fill in any case if used as Input 
   *  Return information on type of fill use by operator if the  resulting fill is analytic 
   * @param PowerFill 
   *  will generate an Power Fill  any case if used as Input  
   *  Return information on type of fill use by operator if the  resulting fill is powerFill
   */
   enum    CATGSMAutomaticFillGeoType  { Auto     = 1 ,     Analytic = 2 ,   PowerFill= 3 };
   
   
   //=============
   //  Set Methods  
   //=============
   

   // -----------------------------------------------------------------------
   // Inner wires 
   // -----------------------------------------------------------------------
   /** 
   * Sets one inner wire. An inner wire is an inner boundary of the fill result. 
   * <br>To set N inner wires,the method AddInnerWires must be called N times. 
   * @Param iListOfWires
   * The list of pointers to wire bodies representing the inner wire.
   * @Param iListOfSupports
   * The list of pointers to shell bodies representing the supports associated with the wire bodies.
   * if a  wire  body has no support, the corresponding element of <tt> iListOfSupports</tt> must be
   * set to <tt> NULL</tt>.  
   * @Param iListOfInnerTransitionContinuity
   * The list of the continuity criteria associated with the wires bodies.
   * The continuity criteria
   * <br><b>Legal values</b>: <tt>0</tt> for G0 continuity (default mode), <tt>1</tt> for G1 continuity.
   */ 
   
   virtual HRESULT AddInnerWires(CATListPtrCATBody const & iListOfWires, 
      CATListPtrCATBody const & iListOfSupports,CATListOfInt & 
      iListOfInnerTransitionContinuity )=0 ;
   
   // -----------------------------------------------------------------------
   // Paasing Point and curves
   // -----------------------------------------------------------------------
   /** 
   * Sets a list of passing curves. The resulting fill surface must pass by the passing curves,
   * but the passing curves do not belong to the resulting topology. In particular a passing curve
   * is not a boundary of the fill surface.  
   * @Param iListOfWires
   * The list of bodies (wires) representing the passing curves.
   */
   virtual HRESULT SetPassingCurves(CATListPtrCATBody const & iListOfWires)=0;
   
   /** 
   * Sets a list of passing points. The fill result must pass  through this points.   
   * @Param iListOfVertices  
   * The list  of pointers to vertex bodies representing the passing points.  
   */
   virtual HRESULT SetPassingPoints (CATListPtrCATBody const & iListOfVertices)=0;
   
 /** 
   * Sets a  passing curve. The resulting fill surface must pass by this passing curve.
   * Note: The resulting fill surface must pass by this passing curve regarding a tolerance value.   
   * <br> but : 
   * <br> - the passing curve does not belong to the resulting topology. 
   * <br> - In particular a passing curve is not a boundary of the fill surface.  
   * @Param iWire
   * The body wire  representing the passing curve.
   * @Param iTolerance
   * The Tolerance corresponding to iWire. If iTolerance =0.0 default 
   * tolerance 0.001 is taken into account.
   */
   virtual HRESULT  AddPassingCurve( CATBody * iWire ,  double iTolerance=0.0)=0;

   /** 
   * Sets a  passing point. 
   * Note: The fill result must pass through this point regarding a tolerance value.   
   * @Param iVertex  
   * The pointer to vertex body representing the passing point. 
   * @Param iTolerance
   * The Tolerance corresponding to iVertex. If iTolerance =0.0 default 
   * tolerance 0.001 is taken into account.
   */
  virtual HRESULT   AddPassingPoint( CATBody * iVertex ,  double iTolerance=0.0 )=0;   
   // -----------------------------------------------------------------------
   // Continuity set-up 
   // -----------------------------------------------------------------------
   /**
   * Defines the continuity criteria to take into account for a given wire (<tt>ADVANCED mode</tt>).
   * @param iWhichWire
   * The rank (beginning at 1) of the input wire.
   * @param iTransitionContinuity
   * The continuity criteria
   * <br><b>Legal values</b>: <tt>0</tt> for G0 continuity (default mode), <tt>1</tt> for G1 continuity.
   */ 
   virtual HRESULT SetTransitionContinuity(const CATLONG32 iWhichWire, 
      const CATLONG32 iTransitionContinuity)=0;
   
   
   // -----------------------------------------------------------------------
   // Orientation ofresulting face 
   // -----------------------------------------------------------------------
   /**
   * Defines the orientation of the fill face. 
   * <br>The fill face is oriented according to the orientation of the first
   * edge in the first wire. 
   */
   virtual HRESULT OrientationByFirstEdge()=0;
   
   
   
   // -----------------------------------------------------------------------
   // Planar mode is possible 
   // -----------------------------------------------------------------------
   /**
   * Activates the flat face mode.
   * @param iMode
   * The flat mode.
   * <br><b>Legal values</b>: 
   * <dl><dt>1</dt><dd> to activate the flat face mode: in this case, it creates a planar face if the hole
   * to fill is flat.
   * <dt>0</dt><dd> to deactivate the flat face mode.
   *</dl>
   */
   virtual HRESULT SetFlatFaceMode(const CATLONG32 iMode = 1)=0;
   
   
   
   /**
   * Sets the tolerance maximum. 
   * @param  iTolerance
   * the required maximum  tolerance on the result surface 
   */
   virtual HRESULT SetGapTolerance( const double iTolerance)=0;
   
   
   //=============
   //  Run  Method  
   //=============
   
   /**
   * Runs <tt>this</tt> operator (<tt>ADVANCED</tt> mode).
   */
   virtual HRESULT Run()=0;
   
   //=============
   //  Get Methods  
   //=============
   
   /**
   * Returns the result of <tt>this</tt> operator.
   * @return
   * The pointer to the created body. You must delete it with the @href CATICGMContainer#Remove 
   * method if you do not want to keep it. Note: in case of multiple <tt>Run</tt>s, the operator
   * deletes the intermediate bodies.
   */
   virtual CATBody * GetResult()=0;
   
   
   /**
   * Returns the fill type.
   * @return
   * <br> Analytic :
   *    The edges of the domain to fill are isoparametric  curves of the final surfaces.
   *    The numberof generated faces is depending on the number of wires.
   *	Best practices : Use it for simple domain to fill, as rectangular area.
   *    <br>Useful in automatic mode to know which solution was chosen.
   * <br>PowerFill :  
   *    The aera is filled with a single surface.
   *    This allows you to manage wires which describe a complex topology 
   */
   virtual   CATIGSMAutomaticFillGeo::CATGSMAutomaticFillGeoType GetFillType () =0;
   
   /**
   * Returns the maximum continuity gap on the result. 
   */
   virtual double GetG0MaxDeviation ()=0;
   
   /**
   * Returns the maximum  tangency gap (in radians) on the result.
   */
   virtual CATAngle GetG1MaxDeviation()=0;
   
   
   /**
   * Returns the maximum continuity gap regards to a particular edge. 
   * <br>If ioMaxPoint is not null, then it will be filled with the coordinates
   * where maximum has been reached.
   */
   virtual double GetG0MaxDeviation (const CATEdge * iEdge,CATMathPoint * ioMaxPoint=NULL)=0;
   
   /**
   * Returns the maximum  tangency gap (in radians) regards to a particular edge.
   * <br>If ioMaxPoint is not null, then it will be filled with the coordinates
   * where maximum has been reached.
   */
   virtual CATAngle GetG1MaxDeviation(const CATEdge * iEdge,CATMathPoint * ioMaxPoint=NULL)=0;
   
   
   
   /**
   * Returns  the maximum admissible continuity gap on the result.
   * <br>This value is computed by taking into account some incompatibilities in the input model 
   * Hence, it can be larger than the factory resolution.
   */
   virtual double GetG0MaxAccuracy()=0;
   
   
   
   
   
   /** 
   * Using common support of input wire if exist. 
   * <br> If  all the wires are lying on the same support ,  this support is used  to compute the filled surface.  
   *  Therefore, if  there is no passing point ,  no  inner curve  and no passing curve, 
   *  the filled surface  is a piece of this support. 
   */
   virtual HRESULT UsingCommonSupport()=0;
   
   
   // -----------------------------------------------------------------------
   // Check 
   // -----------------------------------------------------------------------
   
   /**
   * @nodoc
   * check the computation, to be used for debug intend. 
   * @return
   * <tt>0</tt> if the computation occured without problem.
   */
   virtual CATLONG32 Check() =0;

   
   // -----------------------------------------------------------------------
   // Analytic only 
   // -----------------------------------------------------------------------
   
   /**
   * @nodoc
   * Only available if the type of fill is analytic 
   * Returns the center point inside the hole to fill.
   * <br>The fill algorithm fills the hole with four sided faces. In case of not four sided input holes,
   * the algorithm defines a center point allowing it to create four sided faces. This point can also
   * be defined by the <tt>SetCenterPoint</tt> method (<tt>ADVANCED mode</tt>).
   * @param ioCenterPoint
   * The vertex representing the center point.
   */
   virtual HRESULT GetCenterPoint(CATVertex &ioCenterPoint)=0;
   
   /**
   * @nodoc
   * Only available if the type of fill is analytic 
   * TRUE -> there is a center point
   * FALSE -> else.
   */
   virtual CATBoolean IsCenterPointCreated() const=0 ;
   
   /**
   * @nodoc
   * Sets Ccenter point for Analytic case. 
   * <br> If the type of fill is analytic: it defines the center point inside the hole to fill (<tt>ADVANCED mode</tt>).
   * <br> The fill algorithm fills the hole with four sided faces. In case of not four sided input holes,
   * this method defines a center point allowing the algorithm to create four sided faces. 
   * otherwise Defines a passing point for the fill surface 
   * @param iCenterPoint
   * The vertex representing the center point.
   */
   virtual HRESULT SetCenterPoint(CATVertex & iCenterPoint)=0;
   
   /**
   * @nodoc
   * Only available if the type of fill is analytic 
   * Lets the algorithm define the default center point.
   */
   virtual HRESULT ResetCenterPoint()=0; 
   
   
   
   /**
   *@nodoc
   * Checks whether holes must be detected in the input wires (<tt>ADVANCED mode</tt>).
   * Only available if the type of fill is analytic 
   * @param iMode
   * The validation mode.
   * <br><b>Legal values</b>: <tt>1</tt> to check the inputs, <tt>0</tt> for no check (default mode).
   */
   virtual HRESULT SetInputValidationMode(const CATLONG32 iMode = 1)=0;
   
   
 };
 
 CATDeclareHandler(CATIGSMAutomaticFillGeo, CATBaseUnknown);
 
#endif
 
 
