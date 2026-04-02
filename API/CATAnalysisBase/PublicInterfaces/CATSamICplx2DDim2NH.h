// COPYRIGHT LMS INTERNATIONAL 2000
// COPYRIGHT DASSAULT SYSTEMES 2000
//=============================================================================
//
// CATSamICplx2DDim2NH
//
//=============================================================================
//
// Usage Notes: 
//
//=============================================================================
// March 2002   Creation                                                     KD
//=============================================================================
#ifndef CATSamICplx2DDim2NH_H
#define CATSamICplx2DDim2NH_H

/**
 * @CAA2Level L0
 * @CAA2Usage U2
 */

#include "CATSamI2DSpace.h"
#include "CATMathComplex.h"

class CATSamIComplexVector;
class CATSamI1DSpace;

class ExportedByCATSamExpression CATSamICplx2DDim2NH: public CATSamI2DSpace
{
  public:

/**
* Returns the CATSamIVector result at a given position from the 2d dimension in the 2D Space.
* No other indexing scheme is available since it is not conservative.
* @param iIndexY
*   An index on dimension 2 between 0 and GetLengthY()-1.
* @return
*   A CATSamI1DSpace space.
*   The caller should release returned space after use.
* @see CATSamIComplexVector, CATSamI1DSpace
*/
  virtual const CATSamIComplexVector* Get1DSpaceForDim2( int iIndexY ) const = 0;

/**
* Returns the number of subspaces for dimension 2.
*/
  virtual int GetLengthY() const = 0;

};

#endif
