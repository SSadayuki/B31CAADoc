#ifndef CAT3DSimpleSphereRep_H
#define CAT3DSimpleSphereRep_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CAT3DRep.h"
#include "CATVisualization.h"
#include "CATVisuController.h"

class CATRender;
class CAT3DFaceGP;
class CATMathPointf;

/**
 * Class to create the representation of a sphere.
 * <b>Role</b>: View a sphere.
 */  
class ExportedByCATVisualization CAT3DSimpleSphereRep : public CAT3DRep
{
  CATDeclareClass;

public:

  ~CAT3DSimpleSphereRep();

  CAT3DSimpleSphereRep(CATMathPointf iCenter,
                       float         iRadius,
                       int           iFactor = 32);

  /** @nodoc : deprecated constructor. */
  CAT3DSimpleSphereRep(CATMathPointf           iCenter,
                       float                   iRadius,
                       int                     iFactor,
                       CATModelIdentificator & iIdent,
                       CATVisuController     * iController = NULL);

  CAT3DSimpleSphereRep(CATMathPointf iCenter,
                       float         iRadius,
                       int           iFactor,
					   int			 UpDown);


  /** @nodoc */
  virtual void UpdateTextureCoordinates(CATMappingOperator* iOperator = NULL);

  /** @nodoc */
  virtual void DrawShading(CATRender & iRender, int iInside);

  /** Returns the graphic primitive describing the sphere. */
	virtual CAT3DFaceGP* GetGP() const;

protected:

  /** @nodoc */
  CAT3DFaceGP * BuildFaces(CATMathPointf iCenter, float iRadius, int iFactor = 32, int upDown = 0);

private:
  CAT3DFaceGP  * sphere_;
};


#endif // CAT3DSimpleSphereRep_H
