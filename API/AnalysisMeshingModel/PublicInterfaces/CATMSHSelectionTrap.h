#ifndef CATMSHSelectionTrap_h
#define CATMSHSelectionTrap_h

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */ 

#include "MSHModel.h"
#include "CATMSHTrapMode.h"
#include "CATMathPlane.h"
#include "CATMathPoint2D.h"

class CAT3DCustomRep;
class CATFrmWindow;
class CATViewer;
class CATISO;
class CATModelForRep3D;

struct CATMSHTrapXYZ;

/**
 * Object representing a selection trap.
 * <b>Role</b>: A selection trap is a closed polygonal planar contour which may be used to select objects at screen.
 * The selection trap is used by the @href CATIMSHTrapSelector interface to build the list of selected objects from the contour.
 * <p>The selection trap can be be either explicitely built from a contour definition ( see @href CATMSHSelectionTrap ),
 *  or implicitely managed by a dialog agent.
 */
class ExportedByMSHModel CATMSHSelectionTrap 
{
  friend class CATMSHSelectionTrapAgent;

public:
  /**
   * Constructs a selection trap from contour definition. 
   * @param iMode
   *   Selection mode for trap (intersecting or inclusive).
   * @param iPlane
   *   Plane on which the selection trap is defined.
   * @param iNbPoints
   *   Number of points defining the trap contour.
   * @param iPoints
   *   Array of points defining the trap contour. This array should contain iNbPoints points.
   *   <br>The contour is implicitely closed. 
   */
  CATMSHSelectionTrap ( CATMSHTrapMode iMode , CATMathPlane * iPlane , int iNbPoints , CATMathPoint2D * iPoints );
  /**
   * Destructor.
   */
  virtual ~CATMSHSelectionTrap ();
  /**
   * Query if a given location is included within the trap. 
   * @param iXYZ
   *   Coordinates of the location.
	 * @return
	 *   The result of the query.
	 *   <br><b>Legal values</b>:
	 *   <dl><dt>0</dt><dd>The location is outside the trap contour.
	 *   <dt>1</dt><dd>The location is inside the trap contour.
	 *   </dl>
   */
  int Contains ( const double iXYZ[3] );
  /**
   * Returns the selection mode of the trap.
   */
 inline CATMSHTrapMode GetMode ();
  /**
   * Returns the plane on which the trap is defined.
   */
  const CATMathPlane * GetPlane ();
  /**
   * Get the definition of the trap contour.
   * @param oPoints
   *   Array containing points defining the trap contour.
   *   <br>The contour is implicitely closed. 
	 * @return
	 *   The number of points definig the contour.
   */
  int GetPoints ( const CATMathPoint2D *& oPoints );


private:

  CATMSHSelectionTrap ( CATFrmWindow * Window );
/**
 * Ecriture du mode de la trap
 */
inline void SetMode ( CATMSHTrapMode Mode );
/**
 * La trap est-elle valide?
 */
  int IsValid ();
/**
 * RAZ de la définition de la trappe
 */
  void Reset ();
/**
 * Acceptation du point courant 
 */
  void CommitPoint ();
/**
 * Modification du point courant
 */
  void SetPoint ( CATMathPoint2D & Point );
/**
 * Undo d'un point
 */
  void Undo ();
/**
 * Redo d'un point
 */
  void Redo ();
/**
 * Activation de la trap
 */
  void Activate ();
/**
 * Desactivation de la trap
 */
  void Desactivate ();
/**
 * Détermination du plan de la trap
 */
  void ComputePlane ();
/**
 * Test de validité du contour de la trap
 */
  void ComputeValidity ();
/**
 * Explicitation de la trap
 */
  void Explicit ();
/**
 * Calcul de la rep de la trap
 */
  CAT3DCustomRep * BuildRep ();
/**
 * Visualisation de la trap
 */
  void Visualize ();

  CATFrmWindow *     _Window;
  CATViewer *        _Viewer;
  CATISO *           _ISO;
  CATModelForRep3D * _Model;

  CATMathPlane      _Plane;
  int               _Valid;
  int               _Explicit;
  int               _SizPts;
  int               _MaxPts;
  int               _NbPts;
  CATMathPoint2D    _Cur;
  CATMathPoint2D *  _Pts;

  CATMSHTrapMode    _Mode;
  CATMSHTrapXYZ *   _XYZ;
  double            _Xmi;
  double            _Xma;
  double            _Ymi;
  double            _Yma;
  double            _Xco[4];
  double            _Yco[4];
};

//
//  Implémentations inline
//

//
//==================================================
// SetMode: écriture du mode de sélection de la trap
//==================================================
//
inline void CATMSHSelectionTrap::SetMode ( CATMSHTrapMode Mode )
{
  _Mode = Mode;
}

//
//==================================================
// GetMode: lecture du mode de sélection de la trap
//==================================================
//
inline CATMSHTrapMode CATMSHSelectionTrap::GetMode ()
{
  return _Mode;
}

#endif
