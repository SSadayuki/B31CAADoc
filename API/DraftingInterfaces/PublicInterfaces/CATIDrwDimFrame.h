#ifndef CATIDrwDimFrame_H
#define CATIDrwDimFrame_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
class CATGraphicAttributeSet;


#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwDimFrame ;
#else
extern "C" const IID IID_CATIDrwDimFrame ;
#endif

/**
 * Manages the dimension frame.
 */

class ExportedByDraftingItfCPP CATIDrwDimFrame : public CATBaseUnknown
{
  CATDeclareInterface;

   public:

    /**
     * @nodoc
     * Gets graphic properties.
     *   @return
     *    Attribute properties.
     */
     virtual CATGraphicAttributeSet * GetCATGAS() const = 0;

    /**
     * Gets frame type.
     *   @return
     *    Frame type.
     *    <br>Legal values are (see define definition file):
     *    <dl>
     *    <dt><tt>CATDrwDimFraNone</tt> <dd>None.</dd>
     *    <dt><tt>CATDrwDimFraCircle</tt> <dd>Circle.</dd>
     *    <dt><tt>CATDrwDimFraScoredCircle</tt> <dd>Scored circle.</dd>
     *    <dt><tt>CATDrwDimFraDiamondShaped</tt> <dd>Diamond shape.</dd>
     *    <dt><tt>CATDrwDimFraSquare</tt> <dd>Square.</dd>
     *    <dt><tt>CATDrwDimFraRectangle</tt> <dd>Rectangle.</dd>
     *    <dt><tt>CATDrwDimFraOblong</tt> <dd>Oblong.</dd>
     *    <dt><tt>CATDrwDimFraRightFlag</tt> <dd>Right flag.</dd>
     *    <dt><tt>CATDrwDimFraTriangle</tt> <dd>Triangle.</dd>
     *    </dl>
     */
     virtual int GetType() const = 0;

    /**
     * Gets the framed element for main value.
     *   @return
     *    Framed element for main value (see define definition file).
     *    <br>Framed element legal values are:
     *    <dl>
     *    <dt><tt>CATDrwDimFraValue</tt> <dd>the framing mode is applied to the value only.</dd>
     *    <dt><tt>CATDrwDimFraValTol</tt> <dd>the framing mode is applied to the value and the tolerance.</dd>
     *    <dt><tt>CATDrwDimFraValTolText</tt> <dd>the framing mode is applied to the value, the tolerance and the text.</dd>
     *    </dl>
     */
     virtual int GetFramedElement() const = 0;

       /**
     * Gets the framed Group.
     *   @return
     *    Framed group (see define definition file).
     *    <br>Framed group legal values are:
     *    <dl>
     *    <dt><tt>CATDrwDimFraMain</tt> <dd>The framing mode is applied to the main value only.</dd>
     *    <dt><tt>CATDrwDimFraDual</tt> <dd>The framing mode is applied to the dual value only.</dd>
     *    <dt><tt>CATDrwDimFraMainAndDual</tt> <dd>The framing mode is applied to the main and dual values (2 frames).</dd>
     *    <dt><tt>CATDrwDimFraBoth</tt> <dd>The framing mode is applied globally to the main and dual values (1 frames).</dd>
     *    </dl>
     */
     virtual int GetFramedGroup() const = 0;

    /**
     * Gets gap.
     *   @return
     *    Gap value.
     */
     virtual double GetGap() const = 0;
    
    /**
     * Sets frame type.
     *   @param iType
     *    Frame type.
     *    <br>Legal values are (see define definition file):
     *    <dl>
     *    <dt><tt>CATDrwDimFraNone</tt> <dd>None.</dd>
     *    <dt><tt>CATDrwDimFraCircle</tt> <dd>Circle.</dd>
     *    <dt><tt>CATDrwDimFraScoredCircle</tt> <dd>Scored circle.</dd>
     *    <dt><tt>CATDrwDimFraDiamondShaped</tt> <dd>Diamond shape.</dd>
     *    <dt><tt>CATDrwDimFraSquare</tt> <dd>Square.</dd>
     *    <dt><tt>CATDrwDimFraRectangle</tt> <dd>Rectangle.</dd>
     *    <dt><tt>CATDrwDimFraOblong</tt> <dd>Oblong.</dd>
     *    <dt><tt>CATDrwDimFraRightFlag</tt> <dd>Right flag.</dd>
     *    <dt><tt>CATDrwDimFraTriangle</tt> <dd>Triangle.</dd>
     *    </dl>
     */
     virtual void SetType( const int iType ) = 0;

    /**
     * Sets the framed element for main value.
     *   @param iFramedElement
     *    Framed element for main value (see define definition file).
     *    <br>Framed element legal values are:
     *    <dl>
     *    <dt><tt>CATDrwDimFraValue</tt> <dd>the framing mode is applied to the value only.</dd>
     *    <dt><tt>CATDrwDimFraValTol</tt> <dd>the framing mode is applied to the value and the tolerance.</dd>
     *    <dt><tt>CATDrwDimFraValTolText</tt> <dd>the framing mode is applied to the value, the tolerance and the text.</dd>
     *    </dl>
     */
     virtual void SetFramedElement( const int iFramedElement ) = 0;

    /**
     * Sets the framed group for dual value.
     *   @param iFramedGroup
     *    Framed group for dual value (see define definition file).
     *    <br>Framed group legal values are:
     *    <dl>
     *    <dt><tt>CATDrwDimFraMain</tt> <dd>the framing mode is applied to the main value only.</dd>
     *    <dt><tt>CATDrwDimFraDual</tt> <dd>the framing mode is applied to the dual value only.</dd>
     *    <dt><tt>CATDrwDimFraMainAndDual</tt> <dd>the framing mode is applied to the main and dual values.</dd>
     *    <dt><tt>CATDrwDimFraBoth</tt> <dd>the framing mode is applied globally to the main and dual values.</dd>
     *    </dl>
     */
     virtual void SetFramedGroup( const int iFramedGroup ) = 0;

    /**
     * Sets gap.
     *   @param gap
     *    Gap value.
     */
     virtual void SetGap(const double gap) = 0;

};
CATDeclareHandler(CATIDrwDimFrame, CATBaseUnknown);
#endif


