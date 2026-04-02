/* -*-c++-*- */
#ifndef CATIClose_H
#define CATIClose_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */


#include <PartItf.h>
#include <CATIShape.h>

class CATISpecObject_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATIClose;
#else
extern "C" const IID IID_CATIClose;
#endif

/**
 * Interface to represent close feature.
 * <b>Role</b>: The close feature allows users to change a surfacic feature
 * to a mechanical feature by closing it.
 * The closing operation does not introduce new vertices and edges.
 * The generated surfaces for closing are planes limited by the free edges 
 * of the surfacic feature to be closed.
 */
class ExportedByPartItf CATIClose : public CATIShape
{
  CATDeclareInterface;

  public: 

/**
 * Sets or swaps the surfacic feature to be closed.
 * @param iCloseElement
 *		The surfacic feature to be closed.
 */
  virtual void SwapCloseElement (const CATISpecObject_var iCloseElement) = 0;

	
/**
 * Retrieves the surfacic feature to be closed. 
 * @return the surfacic feature to be closed.
 * <br><b>Legal values</b>: The surfacic feature is either
 * <tt>CATISpecObject_var</tt> when the surfacic feature exists or
 * <tt>NULL_var</tt> if it does not exist.
 */
  virtual CATISpecObject_var GetCloseElement () = 0;

/** @nodoc */
  virtual void SetTolerance(double iTolerance) = 0;

/** @nodoc */
  virtual double GetTolerance() = 0;

};

CATDeclareHandler (CATIClose, CATIShape); 

#endif // CATIClose_H

