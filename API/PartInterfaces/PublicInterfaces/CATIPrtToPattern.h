/* -*-c++-*- */
#ifndef CATIPrtToPattern_H
#define CATIPrtToPattern_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

#include <PartItf.h>
#include <CATBaseUnknown.h>
#include <CATBody.h>
#include "CATMathPoint.h"
#include "CATMathDirection.h"
 
class CATISpecObject_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATIPrtToPattern;
#else
extern "C" const IID IID_CATIPrtToPattern;
#endif

/**
 * Interface to specify pattern behaviors.
 * <b>Role</b>: Implement this interface allows users to define the behaviors of the patterned feature.
 */
class ExportedByPartItf CATIPrtToPattern : public CATBaseUnknown
{
  CATDeclareInterface;

  public: 

  /**
   *  Returns the boolean flag indicating the algorithm used to compute the pattern.
   *  The result must be equal to True.
   */
  virtual CATBoolean SpecificPatternNecessity() const = 0;

  /**
   *  Returns the boolean flag indicating if the feature can be used to generate a user pattern feature.
   */
  virtual CATBoolean ValidForUserPattern() const = 0;
};

CATDeclareHandler (CATIPrtToPattern, CATBaseUnknown); 

#endif // CATIPrtToPattern_H
