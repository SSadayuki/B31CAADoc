#ifndef CATIDrwDimToleranceNum_H
#define CATIDrwDimToleranceNum_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
#include "CATBaseUnknown.h"

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwDimToleranceNum ;
#else
extern "C" const IID IID_CATIDrwDimToleranceNum ;
#endif

/**
 * Manages the dimension numerical tolerance.
 */

class ExportedByDraftingItfCPP CATIDrwDimToleranceNum : public CATBaseUnknown
{
  CATDeclareInterface;

   public:

    /**
     * @nodoc
     * Gets the tolerance position mode.
     *   @return
     *    Position mode.
     */
     virtual int GetPositionMode() const = 0;

    /**
     * @nodoc
     * Gets the tolerance character ratio.
     *   @param cr
     *    Character ratio.
     */
     virtual void GetCharRatio(double & cr) const = 0;

    /**
     * @nodoc
     * Gets the tolerance values.
     *   @param vg1
     *    First value.
     *   @param vg2
     *    Second value.
     */
     virtual void GetValue(double & vg1, double & vg2) const = 0;
     
    /**
     * @nodoc
     * Sets the tolerance position mode.
     *   @param p
     *    Position mode.
     */
     virtual void SetPositionMode(const int p) = 0;

    /**
     * @nodoc
     * Sets the tolerance character ratio.
     *   @param c
     *    Character ratio.
     */
     virtual void SetCharRatio(const double c) = 0;

    /**
     * @nodoc
     * Sets the tolerance first value.
     *   @param v1
     *    First value.
     *   @param v2
     *    Second value.
     */
     virtual void SetValue(const double v1, const double v2) = 0;

};
CATDeclareHandler(CATIDrwDimToleranceNum, CATBaseUnknown);
#endif

