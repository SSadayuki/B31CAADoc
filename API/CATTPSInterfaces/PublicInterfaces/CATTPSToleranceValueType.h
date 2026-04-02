#ifndef CATTPSToleranceValueType_H
#define CATTPSToleranceValueType_H

// COPYRIGHT DASSAULT SYSTEMES 2018

/**
* @CAA2Level L1
* @CAA2Usage U1
*/

/**
* Enum to describe tolerance value type for geometrical specifications.
* @param CATTPSTolNumericalValue  
*   Numerical value is used to specify tolerance zone.
* @param CATTPSTolTabulatedValue  
*    Tabulated value is used to specify tolerance zone.
* @param CATTPSTolNonUniformValue  
*   Non uniform value is employed to specify tolerance value.
*<br />In this case, tolerance zone is explicitly given by 2 surfaces one for each bound of the tolerance zone.
* @param CATTPSTolLinearNonUniformValue  
*   Linear non uniform value is employed to specify tolerance value.
<br />2 restricted areas are necessary to relimit tolerance zone.
*/
enum CATTPSToleranceValueType
{
  CATTPSTolNumericalValue         = 0,
  CATTPSTolTabulatedValue         = 1,
  CATTPSTolNonUniformValue        = 2,
  CATTPSTolLinearNonUniformValue  = 3
};

#endif
