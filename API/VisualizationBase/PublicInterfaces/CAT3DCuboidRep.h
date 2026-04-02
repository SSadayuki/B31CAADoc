#ifndef CAT3DCuboidRep_H
#define CAT3DCuboidRep_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CAT3DRep.h"
#include "CATMathPointf.h"
#include "CATMathVectorf.h"
#include "CATViz.h"

class CAT3DPlanarFaceGP;
class CAT3DLineGP;
class CATRender;

// constants for visualizing only part of the box.
/** @nodoc */
#define CATBoxXFace1 (1 << 0)
/** @nodoc */
#define CATBoxYFace1 (1 << 1)
/** @nodoc */
#define CATBoxZFace1 (1 << 2)
/** @nodoc */
#define CATBoxXFace2 (1 << 3)
/** @nodoc */
#define CATBoxYFace2 (1 << 4)
/** @nodoc */
#define CATBoxZFace2 (1 << 5)
/** @nodoc */
#define CATBoxXFaces (CATBoxXFace1|CATBoxXFace2)
/** @nodoc */
#define CATBoxYFaces (CATBoxYFace1|CATBoxYFace2)
/** @nodoc */
#define CATBoxZFaces (CATBoxZFace1|CATBoxZFace2)
/** @nodoc */
#define CATBoxFaces  (CATBoxXFaces|CATBoxYFaces|CATBoxZFaces)
/** @nodoc */
#define CATBoxXEdges (1 << 6)
/** @nodoc */
#define CATBoxYEdges (1 << 7)
/** @nodoc */
#define CATBoxZEdges (1 << 8)
/** @nodoc */
#define CATBoxEdges  (CATBoxXEdges|CATBoxYEdges|CATBoxZEdges)

/**
 * Class to create the representation of a box.
 * <b>Role</b>: view a closed box (or part of a box).
 */
class ExportedByCATViz CAT3DCuboidRep : public CAT3DRep
{

public:
  virtual ~CAT3DCuboidRep();

  /**
   * Constructs a default representation of a box.
   * @param iFacesStatus
   * The style of the representation indicates which portions of the box are seen.
   */
  CAT3DCuboidRep( const int iFacesStatus = CATBoxFaces);

  /**
   * Constructs the representation of a box.
   * @param iCorner
   * The reference corner of the box.
   * @param iX
   * Yields the orientation and the length of the box along the first direction.
   * @param iY
   * Yields the orientation and the length of the box along the second direction.
   * @param iZ
   * Yields the orientation and the length of the box along the third direction.
   * @param iColor
   * Color of the representation.
   */
  CAT3DCuboidRep(const CATMathPointf  & iCorner,
                 const CATMathVectorf & iX,
                 const CATMathVectorf & iY,
                 const CATMathVectorf & iZ,
                 const int              iColor = 2);
#ifdef CATIAV5R26
   /**
   * Constructs a default representation of a box.
   * @param iFacesStatus
   * The style of the representation indicates which portions of the box are seen.
   */
  static CAT3DCuboidRep* CreateRep(const int iFacesStatus = CATBoxFaces);
  /**
   * Constructs the representation of a box.
   * @param iCorner
   * The reference corner of the box.
   * @param iX
   * Yields the orientation and the length of the box along the first direction.
   * @param iY
   * Yields the orientation and the length of the box along the second direction.
   * @param iZ
   * Yields the orientation and the length of the box along the third direction.
   * @param iColor
   * Color of the representation.
   */
  static CAT3DCuboidRep* CreateRep(const CATMathPointf  & iCorner,
                                   const CATMathVectorf & iX,
                                   const CATMathVectorf & iY,
                                   const CATMathVectorf & iZ,
                                   const int              iColor = 2);
#endif
  /**
   * Modifies the representation of a box.
   * @param iCorner
   * The reference corner of the box.
   */
  void Modify(const CATMathPointf  & iCorner);

  /**
   * Modifies the representation of a box.
   * @param iCorner
   * The reference corner of the box.
   * @param iX
   * Indicates the orientation and the length of the box along the first direction.
   * @param iY
   * Indicates the orientation and the length of the box along the second direction.
   * @param iZ
   * Indicates the orientation and the length of the box along the third direction.
   */
  void Modify(const CATMathPointf  & iCorner,
              const CATMathVectorf & iX,
              const CATMathVectorf & iY,
              const CATMathVectorf & iZ);
    
  /** @nodoc */
  virtual void UpdateTextureCoordinates(CATMappingOperator* iOperator = NULL);

  /** @nodoc */
  virtual void DrawShading(CATRender & iRender, int iInside);

protected:

  /** @nodoc */
  void BuildFaces();

  // data
  CAT3DPlanarFaceGP * _Face[6];
  CAT3DLineGP       * _Line[12];
  CATMathPointf       _Corner;
  CATMathPointf       _Center;
  CATMathVectorf      _MainAxis[3];
  int                 _FacesStatus;
  int                 _NFaces;
  int                 _NLines;
};


#endif // CAT3DCuboidRep_H
