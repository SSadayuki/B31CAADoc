/* -*-c++-*- */
#ifndef CATISplit_H
#define CATISplit_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */


#include <PartItf.h>
#include <CATISuSplit.h>
#include "CATPrtEnum.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATISplit;
#else
extern "C" const IID IID_CATISplit;
#endif

/**
 * Interface to represent split feature.
 * <b>Role</b>:	The split feature allows users to split a mechanical feature
 * with a surfacic feature. The result of the operation is a new mechanical
 * feature.
 * The result of the splitting operation is the part relimited with the surfacic
 * feature.
 * The behavior of this interface is defined in the CATISuSplit interface.
 * @see CATISuSplit, CATISewing
 */
class ExportedByPartItf CATISplit : public CATISuSplit
{
  CATDeclareInterface;

  public:

 /** Retrieves the extrapolation mode in which the split feature is computed.
  * @param oMode
  * The extrapolation mode.
  *	<br><b>Legal values</b>: <tt>oMode</tt> equals <tt>CATPrtExtrapolation_None</tt> (=0) 
  *	or <tt>CATPrtExtrapolation_Tangent</tt> (=1).
  * The <tt>CATPrtExtrapolation_None</tt> indicates no propagation computation is done.
  * The <tt>CATPrtExtrapolation_Tangent</tt> indicates a tangent propagation of the splitting surface
  * is done
  */
  virtual HRESULT GetExtrapolationType(CATPrtExtrapolationType & oMode) = 0;

 /** Sets or modify the extrapolation mode in which the split feature is computed.
  * @param oMode
  * The extrapolation mode.
  *	<br><b>Legal values</b>: <tt>oMode</tt> equals <tt>CATPrtExtrapolation_None</tt> (=0) 
  *	or <tt>CATPrtExtrapolation_Tangent</tt> (=1).
  * The <tt>CATPrtExtrapolation_None</tt> indicates no propagation computation is done.
  * The <tt>CATPrtExtrapolation_Tangent</tt> indicates a tangent propagation of the splitting surface 
  * is done.
  */
  virtual HRESULT SetExtrapolationType(CATPrtExtrapolationType & iMode) = 0;

   
};

CATDeclareHandler (CATISplit, CATISuSplit); 

#endif // CATISplit_H
