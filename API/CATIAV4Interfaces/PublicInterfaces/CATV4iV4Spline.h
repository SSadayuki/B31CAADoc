// COPYRIGHT Dassault Systemes 2003
//===================================================================

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */
#ifndef CATV4iV4Spline_H
#define CATV4iV4Spline_H

#include "CATV4iV4Element.h"

/**
 * Describe your class here.
 * <p>
 * Using this prefered syntax will enable mkdoc to document your class.
 */
class ExportedByCATV4iServices CATV4iV4Spline: public CATV4iV4Element
{
  public:

  // Standard constructors and destructors
  // -------------------------------------
     CATV4iV4Spline (const CATBaseUnknown*  iElement);
     CATV4iV4Spline (const CATV4iV4Element* iV4Element);
     virtual ~CATV4iV4Spline ();

  /**
  * Retrieves the mathematic definition of an element.
  * @param oMathBlock [out]
  *   The mathematical definition
  * @param oBlockLength [out]
  *   The size of the mathematic block
  */
     int GetMathematicalData(double* &oMathBlock, int &oBlockLength);

  /**
  * Retrieves the address and the size of the V4 element's description.
  * @param oConstraintBlock [out]
  *   array 
  * @param oBlockLength [out]
  *   The size of the V4 element description  having the type iDescriptionType
  */
     int GetConstraintData(double* &oConstraintBlock, int &oBlockLength);

/*
  // Copy constructor and equal operator
  // -----------------------------------
  CATV4iV4Spline (CATV4iV4Spline &);
  CATV4iV4Spline& operator=(CATV4iV4Spline&);*/

};

//-----------------------------------------------------------------------

#endif
