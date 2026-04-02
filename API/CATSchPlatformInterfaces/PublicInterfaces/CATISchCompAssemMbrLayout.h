#ifndef CATISchCompAssemMbrLayout_H
#define CATISchCompAssemMbrLayout_H

//	COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"

extern "C" const IID IID_CATISchCompAssemMbrLayout ;

/**
 * Interface to control the positioning of a member of a
 * Schematic component assembly relative to the component
 * assembly.
 * <b>Role</b>: To manage the matrx for the position of the
 * graphic of an component assembly member.
 * 
 */
class CATISchCompAssemMbrLayout : public IUnknown
{
  public:  
  
  /**
  * Sets the matrix for layout of the component assembly member graphic.
  * The component assembly member must also implement the @href CATISchAppAssemblyMember 
  *
  * @param iDb6TransMatrix
  *   The orientation matrix in the form of a delta, [x1,y1,x2,y2,o1,o2].
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT SetLayoutMatrix (const double iDb6TransMatrix[6]) = 0;
  /**
  * Gets the matrix for layout of the component assembly member graphic.
  * @param iDb6TransMatrix
  *   The orientation matrix.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetLayoutMatrix (double *oDb6TransMatrix) = 0;

};
#endif
