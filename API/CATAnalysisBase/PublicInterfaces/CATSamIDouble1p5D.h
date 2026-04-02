// COPYRIGHT LMS INTERNATIONAL 2000
// COPYRIGHT DASSAULT SYSTEMES 2000
//=============================================================================
//
// CATSamIDouble1p5D
//
//=============================================================================
//
// Usage Notes: 
//
//=============================================================================
// April 2002   Creation                                                     KD
//=============================================================================
#ifndef CATSamIDouble1p5D_H
#define CATSamIDouble1p5D_H

/**
 * @CAA2Level L0
 * @CAA2Usage U2
 */

#include "CATSamI1DSpace.h"

class CATSamIDoubleVector;

class ExportedByCATSamExpression CATSamIDouble1p5D: public CATSamI1DSpace
{
  public:

/**
* Returns the CATSamIVector result at a given position from the 2d dimension in the 1.5D space.
* No other indexing scheme is available since it is not conservative.
* @param iIndexY
*   An index on dimension 2 between 0 and GetNumberOfSubSpaces()-1.
* @return
*   A CATSamI1DSpace space.
*   The caller should release returned space after use.
* @see CATSamIDoubleVector, CATSamI1DSpace
*/
  virtual const CATSamIDoubleVector* Get1DSpace( int iIndexY ) const = 0;

/**
* Returns the number of subspaces.
*/
  virtual int GetNumberOfSubSpaces() const = 0;

/*
* Says if the data is still homogeneous.
* If yes, it means that this CATSamI1p5DSpace is actually a vector. All CATSamI1DSpace instances
* returned on Get1DSpace() are the same.
*/
  virtual CATBoolean IsHomogeneous() const = 0;

};

#endif
