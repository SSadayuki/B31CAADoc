#ifndef CATIPrtAngularLimit_H
#define CATIPrtAngularLimit_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Required
 */

#include <PartItf.h>
#include <CATIPrtLimit.h>

#include <CATMathDef.h>
class CATICkeParm_var;
class CATGeometry_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATIPrtAngularLimit;
#else
extern "C" const IID IID_CATIPrtAngularLimit;
#endif

/**
 * Interface which provides an extended angular limit behaviour to a limit feature.
 * <b>Role</b>: Angular Limit is used to allow for angular dimension and angular offset to Revol Features. 
 * describe how their own shape is limited.
 * A limit allows users to manage offsets.
 *@see CATIRevolLimit    
 */
class ExportedByPartItf CATIPrtAngularLimit : public CATIPrtLimit
{
  CATDeclareInterface;
   
public:
   
/**
 * @nodoc
 * Sets the Angular offset specification in case the limit type is <tt>catOffsetLimit</tt>.
 * @param iOffset
 *   The offset value.
 */
   virtual void SetAngularOffset (double iOffset) = 0;

/** 
 * @nodoc
 * Do not use - Not yet implemented.
 */
  virtual void SetAngularOffsetFromSurface (double iOffset) = 0;

/**
 * @nodoc
 * Gets the offset specification.
 * @return
 *   The offset value.
 */ 
  virtual double GetAngularOffset () const = 0;

/**
 * @nodoc
 * Gets the offset parameter.
 * @return
 *   The offset parameter.
 */
  virtual CATICkeParm_var GetAngularOffsetParm () const = 0;

/** 
 * @nodoc
 * Do not use - Not yet implemented.
 */
  virtual double GetAngularOffsetFromSurface () const = 0;

/** 
 * @nodoc
 * Do not use - Not yet implemented.
 */
  virtual CATICkeParm_var GetAngularOffsetFromSurfaceParm ()  const = 0;
};

CATDeclareHandler(CATIPrtAngularLimit, CATIPrtLimit);

#endif // CATIPrtAngularLimit_H
