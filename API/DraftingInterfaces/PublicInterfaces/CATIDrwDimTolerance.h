#ifndef CATIDrwDimTolerance_H
#define CATIDrwDimTolerance_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATIDrwDimFormat.h"

class CATUnicodeString;


#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwDimTolerance ;
#else
extern "C" const IID IID_CATIDrwDimTolerance ;
#endif

/**
 * Manages the dimension tolerance.
 */

class ExportedByDraftingItfCPP CATIDrwDimTolerance : public CATBaseUnknown
{
  CATDeclareInterface;

   public:

    /**
     * Gets the tolerance name.
     */
     virtual int GetLabel (CATUnicodeString &oDescr) = 0;

    /**
     * Gets the tolerance type.
     *   @return
     *    Tolerance type (see define definition file).
     *    <br>Legal values are:
     *    <dl>
     *    <dt><tt>CATDrwDimTolNone</tt> <dd>No tolerance.</dd>
     *    <dt><tt>CATDrwDimTolNumerical</tt> <dd>Numerical tolerance.</dd>
     *    <dt><tt>CATDrwDimTolAlphaNumerical</tt> <dd>AlphaNumerical tolerance.</dd>
     *    <dt><tt>CATDrwDimTolISOComb</tt> <dd>Multi-tolerance.</dd>
     *    </dl>
     */
     virtual int GetToleranceType() = 0;

    /**
     * Gets the tolerance upper value.
     *   @return
     *    Upper value.
     */
     virtual double GetUpperValue() = 0;

    /**
     * Gets the tolerance lower value.
     *   @return
     *    Lower value.
     */
     virtual double GetLowerValue() = 0;

    /**
     * Gets the tolerance display mode.
     *   @return
     *    Display mode.
     *    <br>Legal values are: (see define definition file)
     *    <ol>
     *    <li><u><i>Alphanumerical:</i></u>:
     *    <dl>
     *    <dt><tt>CATDrwDimTolFractional</tt> <dd>Fractional.</dd>
     *    <dt><tt>CATDrwDimTolSideBySide</tt> <dd>Side by side.</dd>
     *    </dl>
     *    <li><u><i>Numerical:</i></u>:
     *    <dl>
     *    <dt><tt>CATDrwDimTolUnresolved</tt> <dd>Unresolved (ex: 10 +/-0.25).</dd>
     *    <dt><tt>CATDrwDimTolResolved</tt> <dd>Resolved (ex: 9.75 , 10.25).</dd>
     *    </dl>
     *    </ol>
     */
     virtual int GetDisplayMode() = 0;

    /**
     * Gets the tolerance format.
     *   @return
     *    Format.
     */
     virtual CATIDrwDimFormat_var GetFormat() = 0;
     
     /**
     * Sets the tolerance name.
     */
     virtual void SetLabel ( CATUnicodeString name ) = 0;

    /**
     * Sets the tolerance type.
     *   @param ToleranceType
     *    Tolerance type (see define definition file).
     *    <br>Legal values are:
     *    <dl>
     *    <dt><tt>CATDrwDimTolNone</tt> <dd>No tolerance.</dd>
     *    <dt><tt>CATDrwDimTolNumerical</tt> <dd>Numerical tolerance.</dd>
     *    <dt><tt>CATDrwDimTolAlphaNumerical</tt> <dd>AlphaNumerical tolerance.</dd>
     *    <dt><tt>CATDrwDimTolISOComb</tt> <dd>Multi-tolerance.</dd>
     *    </dl>
     */
     virtual void SetToleranceType(int ToleranceType) = 0;

    /**
     * Sets the tolerance upper value.
     *   @param iUpperValue
     *    Upper value.
     */
     virtual void SetUpperValue( const double iUpperValue ) = 0;

    /**
     * Sets the tolerance lower value.
     *   @param iLowerValue
     *    Lower value.
     */
     virtual void SetLowerValue( const double iLowerValue ) = 0;

    /**
     * Sets the tolerance display mode.
     *   @param displayMode
     *    Display mode.
     *    <br>Legal values are: (see define definition file)
     *    <ol>
     *    <li><u><i>Alphanumerical:</i></u>:
     *    <dl>
     *    <dt><tt>CATDrwDimTolFractional</tt> <dd>Fractional.</dd>
     *    <dt><tt>CATDrwDimTolSideBySide</tt> <dd>Side by side.</dd>
     *    </dl>
     *    <li><u><i>Numerical:</i></u>:
     *    <dl>
     *    <dt><tt>CATDrwDimTolUnresolved</tt> <dd>Unresolved (ex: 10 +/-0.25).</dd>
     *    <dt><tt>CATDrwDimTolResolved</tt> <dd>Resolved (ex: 9.75 , 10.25).</dd>
     *    </dl>
     *    </ol>
     * Notes: Numeric tolerance values can not be different on main value and dual value. Only
     *        tolerance name may be changed.             
     */
     virtual void SetDisplayMode(const int displayMode) = 0;

};
CATDeclareHandler(CATIDrwDimTolerance, CATBaseUnknown);
#endif

