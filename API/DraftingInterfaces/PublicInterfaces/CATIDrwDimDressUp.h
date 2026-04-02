#ifndef CATIDrwDimDressUp_H
#define CATIDrwDimDressUp_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATBooleanDef.h"
class CATGraphicAttributeSet;
class CATUnicodeString;

#include "CATIDrwDimFrame.h"


#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwDimDressUp ;
#else
extern "C" const IID IID_CATIDrwDimDressUp ;
#endif

/**
 * Manages the dimension dressup.
 */

class ExportedByDraftingItfCPP CATIDrwDimDressUp : public CATBaseUnknown
{
  CATDeclareInterface;

   public:

    /**
     * Gets the dimension value scoring mode.
     *   @return
     *    Scoring mode (see define definition file).
     *    <br>Scoring mode legal values are:
     *    <dl>
     *    <dt><tt>CATDrwDimScoreNone</tt> <dd>None.</dd>
     *    <dt><tt>CATDrwDimUnderScored</tt> <dd>Underscored.</dd>
     *    <dt><tt>CATDrwDimScored</tt> <dd>Scored.</dd>
     *    <dt><tt>CATDrwDimOverScored</tt> <dd>Overscored.</dd>
     *    </dl>
     */
     virtual int GetScoringMode() const = 0;

    /**
     * Gets the scored element for main value.
     *   @return
     *    Scored element for main value (see define definition file).
     *    <br>Scored element legal values are:
     *    <dl>
     *    <dt><tt>CATDrwDimScoreValue</tt> <dd>the scoring mode is applied to the value text only.</dd>
     *    <dt><tt>CATDrwDimScoreAll</tt> <dd>the scoring mode is applied to the whole element.</dd>
     *    </dl>
     */
     virtual int GetScoredElement() const = 0;

    /**
     * Gets the scored element for dual value.
     *   @return
     *    Scored element for dual value (see define definition file).
     *    <br>Scored element legal values are:
     *    <dl>
     *    <dt><tt>CATDrwDimScoreValue</tt> <dd>the scoring mode is applied to the value text only.</dd>
     *    <dt><tt>CATDrwDimScoreAll</tt> <dd>the scoring mode is applied to the whole element.</dd>
     *    </dl>
     */
     virtual int GetScoredGroup() const = 0;

    /**
     * Gets slant.
     *   @return
     *    Slant value.
     */
     virtual double GetSlant() const = 0;

    /**
     * @nodoc
     * Gets size.
     *   @return
     *    Size value.
     */
     virtual double GetSize() const = 0;

    /**
     * Gets spacing.
     *   @return
     *    Spacing value.
     */
     virtual double GetSpacing() const = 0;

    /**
     * Gets ratio.
     *   @return
     *    Ratio value.
     */
     virtual double GetRatio() const = 0;

    /**
     * Gets frame type.
     *   @return
     *    Frame type.
     *    <br>Frame type legal values are (see define definition file):
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
     virtual int GetFrameType() const = 0;
    /**
     * Gets frame.
     *   @return
     *    Frame.
     */
     virtual CATIDrwDimFrame_var GetFrame() const = 0;

    /**
     * @nodoc
     * Gets text color.
     *   @return
     *    Color.
     */
	   virtual void GetTextColor(int &oColor) const = 0;

    /**
     * @nodoc
     * Gets text attributes.
     *   @return
     *    Text attributes.
     */
     virtual void GetTextAttributes(double * gtxtAttr) const = 0;

    /**
     * @nodoc
     * Gets police name.
     *   @return
     *    Police name.
     */
     virtual CATUnicodeString GetPoliceName() const = 0;
     
    /**
     * @nodoc
     * Gets Bold info.
     *   @return
     *    Police name.
     */
     virtual boolean GetBold() const = 0;
     
    /**
     * @nodoc
     * Gets Italic info.
     *   @return
     *    Police name.
     */
     virtual boolean GetItalic() const = 0;

    /**
     * Sets the dimension value scoring mode.
     *   @param scMode
     *    Scoring mode (see define definition file).
     *    <br>Scoring mode legal values are:
     *    <dl>
     *    <dt><tt>CATDrwDimScoreNone</tt> <dd>None.</dd>
     *    <dt><tt>CATDrwDimUnderScored</tt> <dd>Underscored.</dd>
     *    <dt><tt>CATDrwDimScored</tt> <dd>Scored.</dd>
     *    <dt><tt>CATDrwDimOverScored</tt> <dd>Overscored.</dd>
     *    </dl>
     */
     virtual void SetScoringMode(const int scMode) = 0;

    /**
     * Sets the scored element for main value.
     *   @param iScoredElement
     *    Scored element for main value (see define definition file).
     *    <br>Scored element legal values are:
     *    <dl>
     *    <dt><tt>CATDrwDimScoreValue</tt> <dd>the scoring mode is applied to the value text only.</dd>
     *    <dt><tt>CATDrwDimScoreAll</tt> <dd>the scoring mode is applied to the whole element.</dd>
     *    </dl>
     */
     virtual void SetScoredElement( const int iScoredElement ) = 0;

    /**
     * Sets the scored element for dual value.
     *   @param iScoredGroup
     *    Scored element for dual value (see define definition file).
     *    <br>Scored element legal values are:
     *    <dl>
     *    <dt><tt>CATDrwDimScoreValue</tt> <dd>the scoring mode is applied to the value text only.</dd>
     *    <dt><tt>CATDrwDimScoreAll</tt> <dd>the scoring mode is applied to the whole element.</dd>
     *    </dl>
     */
     virtual void SetScoredGroup( const int iScoredGroup ) = 0;

    /**
     * @nodoc
     * Sets slant.
     *   @param iSlant
     *    Slant value.
     */
     virtual void SetSlant( const double iSlant ) = 0;

    /**
     * @nodoc
     * Sets size.
     *   @param iSize
     *    Size value.
     */
     virtual void SetSize( const double iSize ) = 0;

    /**
     * Sets spacing.
     *   @param iSpacing
     *    Spacing value.
     */
     virtual void SetSpacing( const double iSpacing ) = 0;

    /**
     * Sets ratio.
     *   @param iRatio
     *    Ratio value.
     */
     virtual void SetRatio( const double iRatio ) = 0;

    /**
     * Sets frame type.
     *   @param frType
     *    Frame type.
     *    <br>Frame type legal values are (see define definition file):
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
     virtual void SetFrametype(const int frType) = 0;

    /**
     * @nodoc
     * Sets text color.
     *   @param iColor
     *    Color.
     */
  	 virtual void SetTextColor(const int iColor) = 0;

    /**
     * @nodoc
     * Sets text attributes.
     *   @param stxtAttr
     *    Text attributes.
     */
     virtual void SetTextAttributes(const double * stxtAttr) = 0;// slant, spacing et height

    /**
     * @nodoc
     * Sets police name.
     *   @param iPoliceName
     *    Police name.
     */
     virtual void SetPoliceName( const CATUnicodeString iPoliceName ) = 0;

    /**
     * @nodoc
     * Sets Bold info.
     */
     virtual void SetBold(boolean iBold) const = 0;

    /**
     * @nodoc
     * Sets Italic info.
     */
     virtual void SetItalic(boolean iItalic) const = 0;
};
CATDeclareHandler(CATIDrwDimDressUp, CATBaseUnknown);
#endif


