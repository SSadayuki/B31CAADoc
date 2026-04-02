// COPYRIGHT DASSAULT SYSTEMES 1999
#ifndef CATIDrwDimExtensionLine_H
#define CATIDrwDimExtensionLine_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
class CATGraphicAttributeSet;

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwDimExtensionLine ;
#else
extern "C" const IID IID_CATIDrwDimExtensionLine ;
#endif

/**
 * Manages the dimension extension line.
 * <b>Role</b>: This interface manages all parameters linked to extension-line(s).
 */

class ExportedByDraftingItfCPP CATIDrwDimExtensionLine : public CATBaseUnknown
{
  CATDeclareInterface;
  
 public:

    /**
     * Gets graphic parameters.
     *   @param oColor
     *    Color.
     *   @param oThickness
     *    Thickness.
     */
     virtual void GetGraphicParameters(int &oColor, double &oThickness) const = 0;

    /**
     * Gets gap.
     *   @return
     *    Gap value.
     */
     virtual double GetGap() const = 0;

    /**
     * Gets gaps.
     *   @param g1
     *    Extension line 1 gap.
     *   @param g2
     *    Extension line 2 gap.
     */
     virtual void GetGaps ( double &g1, double &g2 ) const = 0;

    /**
     * Gets overrun.
     *   @return
     *    Overrun value.
     */
     virtual double GetOverRun() const = 0;

    /**
     * Gets overruns.
     *   @param or1
     *    Extension line 1 overrun.
     *   @param or2
     *    Extension line 2 overrun.
     */
     virtual void GetOverRuns ( double &or1, double &or2 ) const = 0;

    /**
     * @nodoc
     * Gets display mode.
     *   @return
     *    Display mode.
     */
     virtual int GetDisplayMode() const = 0;
 
    /**
     * Sets graphic parameters.
     *   @param iColor
     *    Color.
     *   @param iThickness
     *    Thickness.
     */
     virtual void SetGraphicParameters(const int iColor, const double iThickness) = 0;
 
    /**
     * Sets gap.
     *   @param gap
     *    Gap value.
     */
     virtual void SetGap( const double gap ) = 0;
 
    /**
     * Sets gaps.
     *   @param g1
     *    Extension line 1 gap.
     *   @param g2
     *    Extension line 2 gap.
     */
     virtual void SetGaps ( double g1, double g2 ) = 0;

   /**
     * Sets overrun.
     *   @param overRun
     *    Overrun value.
     */
     virtual void SetOverRun( const double overRun ) = 0;

    /**
     * Sets overruns.
     *   @param or1
     *    Extension line 1 overrun.
     *   @param or2
     *    Extension line 2 overrun.
     */
     virtual void SetOverRuns ( double or1, double or2 ) = 0;

    /**
     * @nodoc
     * Sets display mode.
     *   @param dm
     *    Display mode.
     */
     virtual void SetDisplayMode( const int dm ) = 0;
 
    /**
     * Sets extension line visibility.
     *   @param left
     *    left extension line visibility (1=show, 0=hide).
     *   @param right
     *    right extension line visibility (1=show, 0=hide).
     */
     virtual void SetExtLineVisibility ( int left, int right ) = 0;
 
    /**
     * Gets extension line visibility.
     *   @param left
     *    left extension line visibility (1=show, 0=hide).
     *   @param right
     *    right extension line visibility (1=show, 0=hide).
     */
     virtual void GetExtLineVisibility ( int &left, int &right ) = 0;


    /**
     * Gets extension line points.
     *   @param oPtLdr1
     *    First extension line point.
     *   @param oPtLdr2
     *    Second extension line point.
     *   @param center
     *    Center extension line point.
     *    <br>Value is NULL if not circular extension line.
     */
     virtual void GetPoints(double *oPtLdr1, double *oPtLdr2, 
                            double *center=NULL) = 0;

    /**
     * Sets extension line points.
     *   @param iPtLdr1
     *    First extension line point.
     *   @param iPtLdr2
     *    Second extension line point.
     *   @param center
     *    Center extension line point.
     *    <br>Default value is NULL.
     */
     virtual void SetPoints(double *iPtLdr1, double *iPtLdr2, 
                            double *center=NULL) = 0;
  

    /**
     * Add an interrupt to an extension line.
     * The extension line which is interrupted is the nearest of
     * the iFirstIndPoint. This point is reprojected when the dimension
     * is modified.
     *   @param iFirstIndPoint
     *    Defines the first point of the gap to create.
     *   @param iLastIndPoint
     *    Defines the second point of the gap to create.
     *   @param iExtLine
     *    Defines the ExtLine to interrupt.
     *    <br> 0 : Both
     *    <br> 1 : Left
     *    <br> 2 : Right
     *    <br> 3 : Nearest (default)
     *   @return
     *        S_OK    if the interrupt is added.
     *    <br>E_FAIL  if the interrupt cannot be added.
     */
     virtual HRESULT AddInterrupt (double iFirstIndPoint [2], double iLastIndPoint [2], int iExtLine = 3) = 0;
  
    /**
     * Remove interruption on extension lines.
     *   @param iExtLine
     *    0 : (default) erase all interruptions on all extension lines. 
     *    <br>1, 2 : erase all interruptions on the extension line 1 or 2.
     *    <br>3 : erase all interrupts on the nearest extension line.
     *   @param iIndicationPoint
     *    The point to compute the nearest extension line if iExtLine equals 3.
     *   @return
     *    S_OK    if the interrupt are deleted.
     *    <br>S_FALSE if there is no interrupt on the extension line.
     *    <br>E_FAIL  if another problem occurs. (if iExtLine=3 and iIndicationPoint=NULL for example)
     */
     virtual HRESULT RemoveInterrupt (int iExtLine = 0 , double * iIndicationPoint = NULL) = 0;

    /**
     * Returns the number of interruptions stored in each extension lines.
     * Interruptions stored could be invisible, so this number is only the 
     * maximum number of interrupts that can be visible on each extension line.
     *   @param oNbInterruptOnExtLine1
     *   @param oNbInterruptOnExtLine2
     *   @return
     *    S_OK    No problem occurs.
     *    <br>E_FAIL  if a problem occurs.
     */
     virtual HRESULT GetNbInterrupt (int *oNbInterruptOnExtLine1, int *oNbInterruptOnExtLine2) = 0;

};
CATDeclareHandler(CATIDrwDimExtensionLine, CATBaseUnknown);
#endif
