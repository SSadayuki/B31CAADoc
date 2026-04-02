#ifndef CATIDrwDimFakeComponent_H
#define CATIDrwDimFakeComponent_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
class CATUnicodeString;

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwDimFakeComponent;
#else
extern "C" const IID IID_CATIDrwDimFakeComponent;
#endif

/**
 * Manages the dimension fake value.
 */

class ExportedByDraftingItfCPP CATIDrwDimFakeComponent : public CATBaseUnknown
{
	CATDeclareInterface;
	public:
    /**
     * Gets the fake mode.
     *   @return
     *    fake mode.
     *    <br>Legal values are: (see define definition file)
     *    <dl>
     *    <dt><tt>CATDrwDimFakeNone</tt> <dd>None fake value.</dd>
     *    <dt><tt>CATDrwDimFakeNumValue</tt> <dd>Numeric fake value.</dd>
     *    <dt><tt>CATDrwDimFakeText</tt> <dd>Text fake value.</dd>
     *    </dl>
     */
  	 virtual int GetFakeMode() const = 0;

    /**
     * Gets the main fake value.
     *   @return
     *    fake value.
     */
		 virtual CATUnicodeString GetMainFakeValue() const = 0;

    /**
     * Gets the dual fake value.
     *   @return
     *    fake value.
     */
		 virtual CATUnicodeString GetDualFakeValue() const = 0;

    /**
     * Sets the fake mode.
     *   @param iFakeMode
     *    fake mode.
     *    <br>Legal values are: (see define definition file)
     *    <dl>
     *    <dt><tt>CATDrwDimFakeNone</tt> <dd>None fake value.</dd>
     *    <dt><tt>CATDrwDimFakeNumValue</tt> <dd>Numeric fake value.</dd>
     *    <dt><tt>CATDrwDimFakeText</tt> <dd>Text fake value.</dd>
     *    </dl>
     */
		 virtual void SetFakeMode( const int iFakeMode ) = 0;

    /**
     * Sets the main fake value.
     *   @param iMainFakeValue
     *    fake value.
     */
		 virtual void SetMainFakeValue( const CATUnicodeString iMainFakeValue ) = 0;

    /**
     * Sets the dual fake value.
     *   @param iDualFakeValue
     *    fake value.
     */
		 virtual void SetDualFakeValue( const CATUnicodeString iDualFakeValue ) = 0;
};

CATDeclareHandler( CATIDrwDimFakeComponent, CATBaseUnknown );

#endif


