#ifndef CATIDrwDimDimensionLineForshortened_H
#define CATIDrwDimDimensionLineForshortened_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATIDrwDimDimensionLine.h"

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwDimDimensionLineForshortened ;
#else
extern "C" const IID IID_CATIDrwDimDimensionLineForshortened ;
#endif

/**
 * Manages the forshortened dimension line.
 */

class ExportedByDraftingItfCPP CATIDrwDimDimensionLineForshortened : public CATIDrwDimDimensionLine
{
  CATDeclareInterface;

   public:
    /**
     * Gets dimension value location mode.
     *   @return
     *    The forshortened dimension line is made of 3 segments: 
     *    <ul>
     *    <li>the one which is near the circle center is called the first segment.
     *    <li>the one which is near the circle arc is called the second segment.
     *    <li>the one in the middle is not named.
     *    </ul>
     *    <p>Dimension value location mode legal values are (see define definition file):
     *    <dl>
     *    <dt><tt>CATDrwDimFShortFirstSeg</tt> <dd>located on first dimension line segment.</dd>
     *    <dt><tt>CATDrwDimFShortSecondSeg</tt> <dd>located on second dimension line segment.</dd>
     *    </dl>
     */
     virtual int GetValueLocationMode() const = 0;

    /**
     * Gets segment orientation mode.
     *   @return
     *    This method manages the second segment.
     *    <br>Orientation mode legal values are (see define definition file):
     *    <dl>
     *    <dt><tt>CATDrwDimFShortParallel</tt> <dd>Second segment is parallel to the first one.</dd>
     *    <dt><tt>CATDrwDimFShortConvergent</tt> <dd>Second segment converges to the circle center.</dd>
     *    </dl>
     */
     virtual int GetSegmentOrientationMode() const = 0;

    /**
     * Gets dimension line angle.
     *   @return
     *    Angle.
     */
     virtual double GetFShortAngle() const = 0;

    /**
     * Gets symbol scale.
     *   @return
     *    Scale.
     */
     virtual double GetSymbolScale() const = 0;

    /**
     * Gets segment ratio.
     *   @return
     *    Ratio between first and second segment.
     */
     virtual double GetSegmentRatio() const = 0;

    /**
     * Sets dimension value location mode.
     *   @param iValueLocationMode
     *    Location mode (see define definition file).
     */
     virtual void SetValueLocationMode( const int iValueLocationMode ) = 0;

    /**
     * Sets segment orientation mode.
     *   @param iSegmentOrientationMode
     *    Orientation mode (see define definition file).
     */
     virtual void SetSegmentOrientationMode( const int iSegmentOrientationMode ) = 0;

    /**
     * Sets dimension line angle.
     *   @param iFShortAngle
     *    Angle.
     */
     virtual void SetFShortAngle( const double iFShortAngle ) = 0;

    /**
     * Sets symbol scale.
     *   @param iSymbolScale
     *    Scale.
     */
     virtual void SetSymbolScale( const double iSymbolScale ) = 0;

    /**
     * Sets segment ratio.
     *   @param iSegmentRatio
     *    Ratio between first and second segment.
     */
     virtual void SetSegmentRatio( const double iSegmentRatio ) = 0;

#ifdef FshAuto
#undef FshAuto
#undef FshFix
#undef FshMove
#endif

#define FshAuto  1
#define FshFix   2
#define FshMove  3
    /**
     * Gets the starting point of the forshorten line.
     *   @param oForshortenCenter
     *    Starting point.
     */
     virtual HRESULT GetBeginingPoint ( double oForshortenCenter [2] ) = 0;

     /**
     * Sets the starting point of the forshorten line.
     *   This point can move if the dimension moves. To prevent this
     *   use the SetMoveBehavior method.
     *   @param iForshortenCenter
     *    Starting point.
     *   @return E_FAIL if impossible geometry (no change occurs).
     */
     virtual HRESULT SetBeginingPoint ( const double iForshortenCenter [2] ) = 0;

     /**
     * Sets the behavior of starting point of the forshorten line when the dimension moves.
     *   @param iBehavior 
     *    FshAuto  (value 1 default) the starting point is computed when dimension moves.<BR>
     *    FshFix   (value 2) the starting point doesn't move when dimension moves.<BR>
     *    FshMove  (Value 3) the starting point is computed moves when dimension moves.
     */
     virtual HRESULT SetMoveBehavior ( const int iBehavior ) = 0;

    /**
     * Sets the behavior of starting point of the forshorten line when the dimension moves.
     *   @param oBehavior 
     *    FshStartPointMove  (value 1) the starting point can move when dimension moves.<BR>
     *    FshStartPointStill (value 2) the starting point moves when dimension moves.
     *   @return E_FAIL if impossible geometry.
     */
     virtual HRESULT GetMoveBehavior ( int *oBehavior ) = 0;
};
CATDeclareHandler(CATIDrwDimDimensionLineForshortened, CATIDrwDimDimensionLine);
#endif


