#ifndef CATIDrwDimFunnel_H
#define CATIDrwDimFunnel_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwDimFunnel ;
#else
extern "C" const IID IID_CATIDrwDimFunnel ;
#endif

/**
 * Manages the dimension funnel extension line.
 */

class ExportedByDraftingItfCPP CATIDrwDimFunnel : public CATBaseUnknown
{
  CATDeclareInterface;

   public:

    /**
     * Gets funnel angle.
     *   @return
     *    Angle.
     */
     virtual double GetAngle() const = 0;

    /**
     * Gets funnel height.
     *   @return
     *    Height.
     */
     virtual double GetHeight() const = 0;

    /**
     * Gets funnel width.
     *   @return
     *    Width.
     */
     virtual double GetWidth() const = 0;

    /**
     * Gets funnel mode.
     *   @return
     *    Funnel mode.
     *    <br>Legal values are: (see define definition file)
     *    <dl>
     *    <dt><tt>CATDrwDimFunExt</tt> <dd>External.</dd>
     *    <dt><tt>CATDrwDimFunInt</tt> <dd>Internal.</dd>
     *    </dl>
     */
     virtual int GetFunnelMode() const = 0;

    /**
     * Gets funnel side.
     *   @return
     *    Funnel side.
     *    <br>Legal values are: (see define definition file)
     *    <dl>
     *    <dt><tt>CATDrwDimFunLeftOrBottom</tt> <dd>Left or Bottom.</dd>
     *    <dt><tt>CATDrwDimFunRightOrTop</tt> <dd>Right or Top.</dd>
     *    <dt><tt>CATDrwDimFunBoth</tt> <dd>Both sides.</dd>
     *    </dl>
     */
     virtual int GetFunnelSide() const = 0;

    /**
     * Sets funnel angle.
     *   @param an
     *    Angle.
     */
     virtual void SetAngle(const double an) = 0;

    /**
     * Sets funnel height.
     *   @param hei
     *    Height.
     */
     virtual void SetHeight(const double hei) = 0;

    /**
     * Sets funnel width.
     *   @param wid
     *    Width.
     */
     virtual void SetWidth(const double wid) = 0;

    /**
     * Sets funnel mode.
     *   @param iFunnelMode
     *    Funnel mode.
     *    <br>Legal values are: (see define definition file)
     *    <dl>
     *    <dt><tt>CATDrwDimFunExt</tt> <dd>External.</dd>
     *    <dt><tt>CATDrwDimFunInt</tt> <dd>Internal.</dd>
     *    </dl>
     */
     virtual void SetFunnelMode( const int iFunnelMode ) = 0;

    /**
     * Sets funnel side.
     *   @param iFunnelSide
     *    Funnel side.
     *    <br>Legal values are: (see define definition file)
     *    <dl>
     *    <dt><tt>CATDrwDimFunLeftOrBottom</tt> <dd>Left or Bottom.</dd>
     *    <dt><tt>CATDrwDimFunRightOrTop</tt> <dd>Right or Top.</dd>
     *    <dt><tt>CATDrwDimFunBoth</tt> <dd>Both sides.</dd>
     *    </dl>
     */
     virtual void SetFunnelSide( const int iFunnelSide ) = 0;
};
CATDeclareHandler(CATIDrwDimFunnel, CATBaseUnknown);
#endif


