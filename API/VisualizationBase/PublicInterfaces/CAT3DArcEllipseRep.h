#ifndef CAT3DArcEllipseRep_H
#define CAT3DArcEllipseRep_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CAT3DRep.h"
#include "CATMathConstant.h"
#include "CATViz.h"

#include "CATMathPointf.h"
#include "CATMathVectorf.h"

class CAT3DArcEllipseGP;

/**
 * Class to create the representation of a 3D ellipse or a 3D ellipse arc.
 * <b>Role</b>: view (a portion of) a 3D ellipse lying in a plane.
 */
class ExportedByCATViz CAT3DArcEllipseRep : public CAT3DRep
{
	 friend class CATDmuStream3DArcEllipseRep;
  CATDeclareClass;
  
public:
    
  virtual ~CAT3DArcEllipseRep();

  /**
   * Constructs the representation of an ellipse arc.
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
  CAT3DArcEllipseRep (const CATMathPointf  & iCenter,
                      const CATMathVectorf & iNormal,
                      const float            iMajorRadius,
                      const float            iMinorRadius,
                      const CATMathVectorf & iAxis,
                      const float            iStartAngle    = 0.f,
                      const float            iEndAngle      = (float) CAT2PI,
                      const int              iStaticSagUsed = 0);

#ifdef CATIAV5R26    
  /**
   * Constructs the representation of an ellipse arc.
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
  static CAT3DArcEllipseRep* CreateRep (const CATMathPointf  & iCenter,
                                       const CATMathVectorf & iNormal,
                                       const float            iMajorRadius,
                                       const float            iMinorRadius,
                                       const CATMathVectorf & iAxis,
                                       const float            iStartAngle    = 0.f,
                                       const float            iEndAngle      = (float) CAT2PI,
                                       const int              iStaticSagUsed = 0);
#endif

  /**
   * Modify the representation of an ellipse arc.
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
   * Modify the representation of an ellipse arc.
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
   * Modify the representation of an ellipse arc.
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
  virtual void DrawShading (CATRender & iRender, int iInside);
    
  /** @nodoc */
  virtual void FixArc( int iIsFixed );
    
protected:

 /**
  * @nodoc
  * Constructs an empty 3DArcCircleRep -UnStreaming-
  */
  CAT3DArcEllipseRep ();

  CAT3DArcEllipseGP * _geometrie;
};

#endif // CAT3DArcEllipseRep_H
