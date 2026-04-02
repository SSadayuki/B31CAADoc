#ifndef CAT3DArcEllipseGP_H
#define CAT3DArcEllipseGP_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

//------------------------------------------------------------------------------
// Inheritance: CAT3DArcEllipseGP
//                 CATDynamicGP
//                   CATGraphicPrimitive
//                      CATBaseUnknown 
//------------------------------------------------------------------------------

#include "CATViz.h"

#include "CATDynamicGP.h"
#include "CAT4x4Matrix.h"
#include "CATMathPointf.h"
#include "CAT3DBoundingSphere.h"

class CATStreamer;

/**
 * Class to create the dynamic graphic primitive of a 3D arc ellipse or a 3D ellipse.
 */
class ExportedByCATViz CAT3DArcEllipseGP : public CATDynamicGP
{
 CATDeclareClass;

 public :

  /**
   * @nodoc
   * Constructs an empty 3D Arc Ellipse dynamic graphic primitive
   */
	 CAT3DArcEllipseGP ();

  /**
   * Constructs a 3D ellipse arc or a 3D ellipse graphic primitive
   * @param iCenter
   *   The center of the ellipse arc.
   * @param iNormal
   *   The normal to the ellipse plan.
   *   This vector must be normalized
   * @param iXRadius
   *   The ellipse arc radius in the reference axis direction.
   * @param iYRadius
   *   The ellipse arc radius in the reference axis normal direction
   * @param iReferenceAxis
   *   The reference axis.
   *   It is in the ellipse plan.
   * @param iStartAngle
   *   The start angle of the arc with
   *   respect to the reference axis.
   *   <br><b>Legal values</b>: The default start angle value
   *   is 0.
   * @param iEndAngle
   *   The end angle of the arc with
   *   respect to the reference axis.
   *   <br><b>Legal values</b>: The default end angle value
   *   is 360 degrees.
   * @param iStaticSagUsed
   *   Used to specify whether using a dynamic or a static
   *   sag for the ellipse arc visualization.
   *   <br><b>Legal values</b>:
   *   <dl>
   *      <dt>1</dt>
   *        <dd>The sag value is static and taken
   *            from the settings, and is constant whatever the distance between
   *            the view point and the ellipse arc may be</dd>
   *      <dt>0</dt>
   *        <dd>The sag value is dynamic and calculated depending on
   *            the distance between the view point and the ellipse arc</dd>
   *   </dl>
   *   
   */
   CAT3DArcEllipseGP( const CATMathPointf  &iCenter,
                      const CATMathVectorf &iNormal,
                      const float           iXRadius,
                      const float           iYRadius,
                      const CATMathVectorf &iReferenceAxis,
                      const float           iBeginAngle = 0.f,
                      const float           iEndAngle   = 6.2831853f,
                      const int             iStaticSagUsed = 0);
  /**
   * Draws the ellipse arc.
   * @param iRender
   *   The render through which the arc is drawn.
   * @param iViewpoint
   *   The viewpoint through which the arc is seen.
   * @param iViewport
   *   The viewport in which the arc is located.
   */
   virtual void ImmediateDraw (CATRender &iRender,
                               const CATViewpoint *iViewpoint,
                               const CATViewport *iViewport);   

  /**
   * Modify the ellipse arc.
   * @param iCenter
   * The center of the ellipse.
   * @param iNormal
   * The normal to the plane of the ellipse.
   * @param iMajorRadius
   * The radius of the ellipse along the major axis, parallel to iAxis.
   * @param iMinorRadius
   * The radius of the ellipse along the minor axis, normal to iAxis.
   * @param iAxis
   * The direction in the plane of the ellipse used as major axis.
   * @param iStartAngle
   * The offset in radian of the beginning of the ellipse arc.
   * @param iEndAngle
   * The offset in radian of the end of the ellipse arc.
   * @param iStaticSagUsed
   * Used to specify whether using a dynamic or a static sag for the ellipse arc.
   *   <br><b>Legal values</b>:
   *   <dl>
   *      <dt>1</dt>
   *        <dd>The sag value is static and taken
   *            from the settings, and is constant whatever the distance between
   *            the view point and the arc ellipse may be</dd>
   *      <dt>0</dt>
   *        <dd>The sag value is dynamic and calculated depending on
   *            the distance between the view point and the arc ellipse</dd>
   *   </dl>
   */
  void Modify ( const CATMathPointf  & iCenter,
                const CATMathVectorf & iNormal,
                const float            iMajorRadius,
                const float            iMinorRadius,
                const CATMathVectorf & iAxis,
                const float            iStartAngle,
                const float            iEndAngle,
                const int              iStaticSagUsed );

  /**
   * Modify the ellipse arc.
   * @param iCenter
   * The center of the ellipse.
   * @param iMajorRadius
   * The radius of the ellipse along the major axis, parallel to iAxis.
   * @param iMinorRadius
   * The radius of the ellipse along the minor axis, normal to iAxis.
   * @param iStartAngle
   * The offset in radian of the beginning of the ellipse arc.
   * @param iEndAngle
   * The offset in radian of the end of the ellipse arc.
   */
  void Modify ( const CATMathPointf  & iCenter,
                const float            iMajorRadius,
                const float            iMinorRadius,
                const float            iStartAngle,
                const float            iEndAngle );

  /**
   * Modify the ellipse arc.
   * @param iCenter
   * The center of the ellipse.
   * @param iNormal
   * The normal to the plane of the ellipse.
   * @param iAxis
   * The direction in the plane of the ellipse used as major axis.
   */
  void Modify ( const CATMathPointf  & iCenter,
                const CATMathVectorf & iNormal,
                const CATMathVectorf & iAxis );

  /** @nodoc */
  virtual void FixArcGP( int iIsGPFixed );

  /**
   * @nodoc
   */
  virtual int DetailCulling(CATRender *render);

  /**
   * @nodoc
   */
  virtual void Stream(CATStreamer& oStr,int iSaveType=0);

  /**
   * @nodoc
   */
  virtual void UnStream(CATStreamer& str);

//--------------------------------------------------------------------------------
 
 protected :

  virtual ~CAT3DArcEllipseGP();

  void BuildArcEllipse();
   
//--------------------------------------------------------------------------------

 private :

  CAT3DBoundingSphere bs3D;
  double _XRadius, _YRadius, _begin_angle, _end_angle;

  // working data
  CATMathPointf _center;
  CATMathVectorf _axis;
  CATMathVectorf _normal;
  double dcos, dsin;

  int          _sagmax;
  unsigned int _IsGPFixed:1;
};

#endif
