#ifndef CAT3DPointRep_H
#define CAT3DPointRep_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


#include "CAT3DRep.h"
#include "CAT3DMarkerGP.h"
#include "CATMathPointf.h"
#include "CATViz.h"

/**
 * Class to create the representation of a point.
 * <b>Role</b>: This class is used to represent a point. Different symbols are available.
 * 
 */
class ExportedByCATViz CAT3DPointRep : public CAT3DRep
{
 friend class CATMarshallable3DPointRep;
 friend class CATDmuStream3DPointRep;
 friend class CATVrmlMaker3DPointRep;
 friend class CATVrml2Maker3DPointRep;
 CATDeclareClass;

 public:

  virtual ~CAT3DPointRep();
#ifdef CATIAV5R26  
  /** Constructs the representation of a point. */
  static CAT3DPointRep* CreateRep(); 

  /** Constructs the representation of a point.
   * @param iCoordinates
   * The point to be represented.
   * @param iSymbol
   * The symbol used to visualize the point.
   */
  static CAT3DPointRep* CreateRep(const CATMathPointf & iPoint,
                                  CATSymbolType         iSymbol = CROSS);
#endif
  /** Constructs the representation of a point. */
  CAT3DPointRep (); 

  /** Constructs the representation of a point.
   * @param iCoordinates
   * The point to be represented.
   * @param iSymbol
   * The symbol used to visualize the point.
   */
  CAT3DPointRep (const CATMathPointf & iPoint,
                 CATSymbolType            iSymbol = CROSS);

  /** @nodoc : deprecated constructor. */
  CAT3DPointRep (CATModelIdentificator & iModelId,
                 void     * iController);
  
  /** @nodoc : deprecated constructor. */
  CAT3DPointRep (const CATMathPointf   & iPoint,
                 CATSymbolType              iSymbol,
                 CATModelIdentificator & iModelId,
                 void     * iController = NULL);

  /** Returns the coordinates of the point. */
  CATMathPointf GetPoint() const;

  /** Modifies the coordinates of the representation of a point.
   * @param iPoint
   * The new coordinates of the point.
   */
  void Modify (const CATMathPointf & iPoint);

  /** Modifies the symbol of the represented of a point.
   * @param iSymbol
   * The new symbol to be used.
   */
  void SetSymbol (CATSymbolType iSymbol);

  /** @nodoc */
  virtual void DrawShading (CATRender & iRender, int iInside);

 protected:

  /* @nodoc */
  void BuildPoint (const CATMathPointf &point, CATSymbolType symbol);

  // data
  CAT3DMarkerGP *_geometrie;
};

#endif // CAT3DPointRep_H









