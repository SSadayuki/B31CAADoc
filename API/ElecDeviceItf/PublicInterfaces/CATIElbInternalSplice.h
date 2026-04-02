/* -*-c++ -*- */
#ifndef CATIElbInternalSplice_H
#define CATIElbInternalSplice_H

// COPYRIGHT DASSAULT SYSTEMES 2002

/** 
 * @CAA2Level L1
 * @CAA2Usage U3
 */

class CATListValCATBaseUnknown_var;
class CATMathPoint;
class CATICkeParm_var;
class CATIEhiBnlSegmentExtremity;

#include "CATBaseUnknown.h"
#include "ExportedByCATElbInterfaces.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATElbInterfaces IID IID_CATIElbInternalSplice;
#else
extern "C" const IID IID_CATIElbInternalSplice;
#endif

/**
 * Interface to manage Internal Splices.
 */
class ExportedByCATElbInterfaces CATIElbInternalSplice : public CATBaseUnknown
{
  CATDeclareInterface;
  
public:
 
/**
 * List of Terminations.
 *
 * @param oTerminations
 *   The list
 * @return
 *   Return code
 */
  virtual HRESULT ListTerminations(CATListValCATBaseUnknown_var*& oTerminations) = 0;

/**
 * Link to a bundle segment extremity.
 *
 * @param iBundleSegmentExtr
 *   The bundle segment extremity to link to the internal splice
 * @return
 *   Return code
 */
  virtual HRESULT LinkBundleSegmentExtremity(CATIEhiBnlSegmentExtremity*& iBundleSegmentExtr) = 0;

/**
 * UnLink to a bundle segment extremity.
 *
 * @param iBundleSegmentExtr
 *   The bundle segment extremity to unlink with the internal splice
 * @return
 *   Return code
 */
  virtual HRESULT UnLinkBundleSegmentExtremity() = 0;
  
/**
 * @nodoc
 * Get position point of an internal splice
 *
 * @param oPosition
 * The position.
 * @return
 * Return code
 */
  virtual HRESULT GetPosition(CATMathPoint& oPosition) = 0;

/**
 * @nodoc
 * Check the offset of an internal splice and return its position point
 *
 * @param iOffset
 * New Offset of IS (given as a CkeParm)
 * @param oPosition
 * New calculated position of the IS 
 * @return
 * Return code
 */
  virtual HRESULT CheckGivenOffsetAndReturnPosition(const CATICkeParm_var iOffset, CATMathPoint& oPosition) = 0;

/**
 * Get the bundle segment extremity linked to an internal splice.
 *
 * @param oBundleSegmentExtr
 *   The bundle segment extremity linked to the internal splice
 * @return
 *   Return code
 */
  virtual HRESULT GetLinkedBundleSegmentExtremity(CATIEhiBnlSegmentExtremity*& oBundleSegmentExtr) = 0;

};

CATDeclareHandler(CATIElbInternalSplice, CATBaseUnknown);
#endif
