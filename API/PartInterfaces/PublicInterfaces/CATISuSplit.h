/* -*-c++-*- */
#ifndef CATISuSplit_H
#define CATISuSplit_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include <PartItf.h>
#include <CATIShape.h>
#include <CATPrtEnum.h>
#include <CATLISTV_CATISpecObject.h>

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATISuSplit;
#else
extern "C" const IID IID_CATISuSplit;
#endif

/**
 * Interface to represent sewing and split features.
 * <b>Role</b>: This interface defines the common behavior of 
 * sewing and split features.
 * @see CATISewing, CATISplit
 */
class ExportedByPartItf CATISuSplit : public CATIShape
{
  CATDeclareInterface;

  public:
   
/**
 * Sets or swaps the surfacic feature to be sewn or splitted.
 * @param ihSplitPlane
 *	The surfacic feature.
 */
  virtual void ModifySplitPlane(CATISpecObject_var ihSplitPlane) = 0;

/**
 * Sets or modifies the side to be kept for sewing or splitting operation.
 * @param iSplitType
 *	The side to be kept.
 *	<br><b>Legal values</b>: <tt>iSplitType</tt> equals <tt>PositiveSide</tt> (=0) 
 *	or <tt>NegativeSide</tt> (=1).
 *	The <tt>PositiveSide</tt> value refers to the same orientation as the surfacic
 *	feature normal vector.
 *	The <tt>NegativeSide</tt> value refers to the opposite orientation as the 
 *	surfacic feature normal vector.
 */
  virtual void ModifySplitType(CATPrtSplitType iSplitType) = 0;

/**
 * Retrieves the surfacic feature to be sewn or splitted.
 * @return the surfacic feature.
 * <br><b>Legal values</b>: The surfacic feature is either
 * <tt>CATISpecObject_var</tt> when the surfacic feature exists or
 * <tt>NULL_var</tt> if it does not exist.
 */  
  virtual CATISpecObject_var GetPlane() = 0;

/**
 * Retrieves the side to be kept for the splitting or sewing operation.
 * @return the side value.
 * <br><b>Legal values</b>: The side value is either
 * <tt>PositiveSide</tt> (=0) when it refers to the same
 * orientation as the surfacic feature normal vector or 
 * <tt>NegativeSide</tt> (=1) when it refers to the opposite 
 * orientation as the surfacic feature normal vector.
 */
  virtual int GetSplitType() = 0;

/** @nodoc */
  virtual HRESULT GetIntersectMode(CATPrtSewingIntersectMode& oMode) = 0;

/** @nodoc */
  virtual HRESULT ModifyIntersectMode(CATPrtSewingIntersectMode iMode) = 0;

/** @nodoc */
  virtual HRESULT GetSimplificationMode(CATPrtSewingSimplificationMode& oMode) = 0;

/** @nodoc */
  virtual HRESULT ModifySimplificationMode(CATPrtSewingSimplificationMode iMode) = 0;


};

CATDeclareHandler (CATISuSplit, CATIShape); 

#endif // CATISuSplit_H
