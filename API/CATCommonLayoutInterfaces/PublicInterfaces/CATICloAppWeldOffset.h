#ifndef CATICloAppWeldOffset_H
#define CATICloAppWeldOffset_H
// COPYRIGHT DASSAULT SYSTEMES 2004
/**
  * @CAA2Level L1
  * @CAA2Usage U5  
  */
//===================================================================
//
// CATICloAppWeldOffset.h
// Define the CATICloAppWeldOffset interface
//
//===================================================================
//
// Usage notes:
// This interface will be called by the CATIA application code to give
// users the opportunity to plug in their own code to calculate the 
// weld offset. Users must define a .dic file tying the interface to 
// the application objects.  For example:
// CATPiping            CATICloAppWeldOffset           libxxxx
//
// If not implemented, the default calucation will be used. 
//===================================================================
//
//===================================================================


#include "IUnknown.h"

extern "C" const IID IID_CATICloAppWeldOffset;

/**
 * This interface provides the users the opportunity to calculate the  
 * weld offset for an application.  When implement, users must define 
 * a .dic file tying the interface to the application objects.   
 * For example:
 * <p><b>CATPiping       CATICloAppWeldOffset          libxxxx</b></p>
 *  
 * If not implemented, the default calculation will be used.
 */

class CATICloAppWeldOffset : public IUnknown
{
  public:  

  /**
  * Calculate the weld offset.
  * @param iaWeldEndStyle
  *   Weld EndStyle
  * @param idRunInsideRadius
  0
  *   Inside radius of the run
  * @param idRunOutsideRadius
  *   Outside radius of the run
  * @param idBranchInsideRadius
  *   Inside radius of the branch
  * @param idBranchInsideRadius
  *   Inside radius of the branch
  * @param idWeldGap
  *   Weld gap defined in the weld part
  * @return
  *   A boolean value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>TRUE</dt>
  *     <dd>operation is successful, offset is set</dd>
  *     <dt>FALSE</dt>
  *     <dd>offset is not set</dd>
  *   </dl>
  */

  virtual HRESULT GetWeldOffset ( const wchar_t* iaWeldEndStyle,
                                  const double idRunInsideRadius,
                                  const double idRunOutsideRadius,
                                  const double idBranchInsideRadius,
                                  const double idBranchOutsideRadius,
                                  const double idWeldGap,
                                  double* odWeldOffset     
                                ) = 0;

};
#endif
