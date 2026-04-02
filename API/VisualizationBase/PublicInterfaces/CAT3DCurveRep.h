#ifndef CAT3DCurveRep_H
#define CAT3DCurveRep_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


#include "CAT3DRep.h"
#include "CAT3DPolylineGP.h"
#include "CATViz.h"

//class CATRender;
//class CATModelIdentificator;
//class CATGraphicPrimitive;

class CAT3DPolylineGP;
class CATVisuController;

/**
 * Class to create the representation of a curve.
 * <b>Role</b>: This representation is a collection of <tt>CAT3DLineGP</tt>,
 * each one representing a Level of Detail (LOD).
 * LOD should be added in the order of increasing tessellation accuracy factor.
 * Example :
 * <ul>
 * <li> lod 0 => sag = 0.10 </li>
 * <li> lod 1 => sag = 0.25 </li>
 * <li> lod 3 => sag = 0.50 </li>
 * </ul>
 */
class ExportedByCATViz CAT3DCurveRep : public CAT3DRep
{
  friend class CATMarshallable3DCurveRep;
  friend class CATDmuStream3DCurveRep;
  friend class CATVrmlMaker3DCurveRep;
  friend class CATVrml2Maker3DCurveRep;
  CATDeclareClass;
  
  
public:

  virtual ~CAT3DCurveRep();

  /** Constructs an empty representation of a curve. */
  CAT3DCurveRep();

  /** @nodoc : deprecated constructor */
  CAT3DCurveRep (CATModelIdentificator &one_ident, CATVisuController *iCntl);
#ifdef CATIAV5R26  
  /** Constructs an empty representation of a curve. */
  static CAT3DCurveRep* CreateRep();
#endif
  /**
   * Adds a level of detail. <tt>iLODNumber</tt> and <tt>iSag</tt> must increase concurrently.
   * @param iLODNumber
   * This number identifies the LOD.
   * @param iGP
   * The graphic primitive associated to the LOD.
   * @param iSag
   * The tesselation accuracy used to create <tt>iGP</tt>
*/
  virtual void AddWireframeLOD (int               iLODNumber,
                                CAT3DPolylineGP * iGP,
                                float             iSag);
    
  /** @nodoc */  
  virtual void DrawShading (CATRender & iRender, int iInside);

  /**
   * Retrieves the number of Wireframe LOD.
   */
  int  GetNbWireframeLODs();

  /** Retrieves one specific Wireframe LOD.
   * @param iLODNumber
   * This number identifies the LOD.
   * @param oGP
   * The graphic primitive associated to the LOD.
   * @param oSag
   * The tesselation accuracy used to create <tt>iGP</tt>
   */  
  void GetWireframeLOD(int iLODNumber, CAT3DPolylineGP * & oGP, float & oSag);

protected:
    
  CAT3DPolylineGP ** _lodWireframe;          // list of CAT3DLineGP.  
  int                _nbLOD;                 // Number of levels of detail.
  float            * _fleches;               // Accuracies of levels of detail.
};

#endif // CAT3DCurveRep_H
