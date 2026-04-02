#ifndef CATIPrtLimit_H
#define CATIPrtLimit_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include <PartItf.h>
#include <CATIPrtSimpleLimit.h>

#include <CATMathDef.h>
class CATICkeParm_var;
class CATGeometry_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATIPrtLimit;
#else
extern "C" const IID IID_CATIPrtLimit;
#endif

/**
 * Interface which provides an extended limit behaviour to a limit feature.
 * <b>Role</b>: Some features contain one or several limit components which 
 * describe how their own shape is limited.
 * A limit allows users to manage offsets.    
 * @see CATIPrismLimit, CATIHoleLimit, CATISweepLimit
 */
class ExportedByPartItf CATIPrtLimit : public CATIPrtSimpleLimit
{
  CATDeclareInterface;
   
public:
   
/**
 * Sets the offset specification in case the limit type is <tt>catOffsetLimit</tt>.
 * @param iOffset
 *   The offset value.
 */
  virtual void SetOffset(double iOffset) = 0;

/** 
 * @nodoc
 * Do not use - Not yet implemented.
 */
  virtual void SetOffsetFromSurface(double iOffset) = 0;
 
  
/**
 * Gets the offset specification.
 * @return
 *   The offset value.
 */
  virtual double GetOffset() const = 0;

/**
 * Gets the offset parameter.
 * @return
 *   The offset parameter.
 */
  virtual CATICkeParm_var GetOffsetParm() const = 0;

/** 
 * @nodoc
 * Do not use - Not yet implemented.
 */
  virtual double GetOffsetFromSurface() const = 0;

/** 
 * @nodoc
 * Do not use - Not yet implemented.
 */
  virtual CATICkeParm_var GetOffsetFromSurfaceParm() const = 0;
};

CATDeclareHandler(CATIPrtLimit, CATIPrtSimpleLimit);

#endif // CATIPrtLimit_H
