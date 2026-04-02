/* -*-c++-*- */
#ifndef CATISewing_H
#define CATISewing_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include <PartItf.h>
#include <CATISuSplit.h>
#include "CATICkeParm.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATISewing;
#else
extern "C" const IID IID_CATISewing;
#endif

/**
 * Interface to represent sewing feature.
 * <b>Role</b>: The sewing feature allows users to sew a surfacic feature
 * with a mechanical feature. The result of the operation is a new mechanical
 * feature.
 * The sewing operation is made on the common surface of the two features and
 * the result of the operation is limited with this contact zone.
 * The behavior of this interface is defined in the CATISuSplit interface.
 * @see CATISuSplit, CATISplit
 */
class ExportedByPartItf CATISewing : public CATISuSplit
{
  CATDeclareInterface;

  public: 
 /**
 @nodoc
 - DO NOT USE -
 * Sets the surfacic feature on which a surface is to be sewn.
 * @param ihSupportSurface
 *	The surfacic feature.
 */
  virtual HRESULT ModifySupportSurface(CATBaseUnknown_var &ihSupportSurface) = 0;

	/**
 @nodoc
 - DO NOT USE -
 * Retrieves the surfacic feature upon which a surface is sewn.
 * @return the surfacic feature.
 * <br><b>Legal values</b>: The surfacic feature is either
 * <tt>CATBaseUnknown_var</tt> when the surfacic feature exists or
 * <tt>NULL_var</tt> if it does not exist.
 */  
  virtual HRESULT GetSupportSurface(CATBaseUnknown_var &ohSupportSurface) = 0; 
  /**
  * Sets the deviation value. This value is used only if tolerant mode is set to TRUE. The value
  * of this parameter should lie within resolution and 100*resolution.
  *   @param ihDeviation
  *     The deviation value.
  */
  virtual HRESULT SetDeviation(const CATICkeParm_var & ihDeviation) = 0;

  /**
  * Gets the deviation value.
  *   @param ohDeviation
  *     The deviation value.
  */
  virtual HRESULT GetDeviation(CATICkeParm_var & ohDeviation) = 0;
  /** 
  * Sets the tolerant mode.
  *   @param iMode
  *      The tolerant mode taken into account during sew construction.
  */
  virtual HRESULT SetTolerantMode(const CATPrtSewTolerantMode &iMode) = 0;

  /** 
  * Gets the tolerant mode.
  *   @param oMode
  *      The tolerant mode taken into account during sew construction.
  */
  virtual HRESULT GetTolerantMode(CATPrtSewTolerantMode &oMode) = 0;
};

CATDeclareHandler (CATISewing, CATISuSplit); 

#endif // CATISewing_H
