#ifndef CAT3DLineRep_H
#define CAT3DLineRep_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CAT3DRep.h"
#include "CATViz.h"

class CAT3DLineGP;
class CATMathPointf;

/** Class to create the representation of a line segment. */
class ExportedByCATViz CAT3DLineRep : public CAT3DRep
{
  friend class CATMarshallable3DLineRep;
  friend class CATDmuStream3DLineRep;
  friend class CATVrmlMaker3DLineRep;
  friend class CATVrml2Maker3DLineRep;
  CATDeclareClass;

public:
 
  virtual ~CAT3DLineRep();
  
  /** Constructs an empty representation of a line segment. */
#ifdef CATIAV5R26
  static CAT3DLineRep* CreateRep();

  /** Constructs the representation of a line segment from end-point coordinates.
   * @param iCoordinates
   * The coordinates of the extremities of the line segment.
   */
  static CAT3DLineRep* CreateRep(const float iCoordinates[6]);

  /** Constructs the representation of a line segment from end-points.
   * @param iFirstPoint
   * The first extremity of the line segment.
   * @param iSecondPoint
   * The second extremity of the line segment.
   */
  static CAT3DLineRep* CreateRep(const CATMathPointf &firstPoint, const CATMathPointf &secondPoint);
#endif
  /** Constructs an empty representation of a line segment. */
  CAT3DLineRep();

  /** Constructs the representation of a line segment from end-point coordinates.
   * @param iCoordinates
   * The coordinates of the extremities of the line segment.
   */
  CAT3DLineRep(const float iCoordinates[6]);

  /** Constructs the representation of a line segment from end-points.
   * @param iFirstPoint
   * The first extremity of the line segment.
   * @param iSecondPoint
   * The second extremity of the line segment.
   */
  CAT3DLineRep(const CATMathPointf &firstPoint, const CATMathPointf &secondPoint);

  /** @nodoc : deprecated constructor. */
  CAT3DLineRep(CATModelIdentificator & iModelId,
               void     * iController = NULL);

  /** @nodoc : deprecated constructor. */
  CAT3DLineRep(const CATMathPointf   & iFirstPoint,
               const CATMathPointf   & iSecondPoint,
               CATModelIdentificator & iModelId,
               void     * iController = NULL);

  /** Modifies the representation of a line segment with the new end-point coordinates.
   * @param iCoordinates
   * The coordinates of the extremities of the line segment.
   */
  void Modify(const float iCoordinates[6]);

  /** Modifies the representation of a line segment with the new end-points.
   * @param iFirstPoint
   * The first extremity of the line segment.
   * @param iSecondPoint
   * The second extremity of the line segment.
   */
  void Modify(const CATMathPointf & iFirstPoint,
              const CATMathPointf & iSecondPoint);

  /** @nodoc */
  virtual void DrawShading(CATRender &iRender, int iInside);

  /** Retrieves the representation of the line.
   * @param oCoordinates
   * The array of points that will be filled with the extremity points.
   */
  void Get(float oCoordinates[6]);

  /** Retrieves the representation of the line.
   * @param oFirstPoint
   * The first extremity of the line segment.
   * @param oSecondPoint
   * The second extremity of the line segment.
   */
  void Get(CATMathPointf & oFirstPoint,
           CATMathPointf & oSecondPoint);

  /** @nodoc */
  virtual CATGraphicPrimitive* GetGeomElement(int iIndice);

protected:

  /* @nodoc */
  void BuildLine(const CATMathPointf & iFirstPoint, const CATMathPointf & iSecondPoint);

  // data
  CAT3DLineGP * _geometrie;

};

#endif // CAT3DLineRep_H









