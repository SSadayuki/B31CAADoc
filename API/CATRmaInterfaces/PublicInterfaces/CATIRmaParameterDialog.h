#ifndef CATIRmaParameterDialog_h
#define CATIRmaParameterDialog_h

// COPYRIGHT DASSAULT SYSTEMES 2007

/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */

#include "CATRmaItfCPP.h"
#include "CATBaseUnknown.h"


class CATDialog;
class CATUnicodeString;
class CATString;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATRmaItfCPP IID IID_CATIRmaParameterDialog;
#else
extern "C" const IID IID_CATIRmaParameterDialog;
#endif

/** 
 * Interface for shader parameter dialog.
 * <b>Role</b>:
 * This is the base interface for shader parameter dialog.
 * It is used to build the dialog needed for parameters.
 */

class ExportedByCATRmaItfCPP CATIRmaParameterDialog : public CATBaseUnknown
{
/** @nodoc */
  CATDeclareInterface;

  public:

/**
 * Creates the dialog associated to the parameter.
 * @param iParent
 *   The parent dialog.
 * @param oDialog
 *   The parameter dialog.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT BuildDialog(CATDialog *iParent, CATDialog **oDialog) = 0;

/**
 * Returns the parameter NLS label.
 * @param oLabel
 *   The parameter label.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetLabel(CATUnicodeString &oLabel) = 0;

/**
 * Returns the parameter helper description.
 * @param oDescription
 *   The parameter helper description.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetDescription(CATUnicodeString &oDescription) = 0;

/**
 * Returns the group, if any, where the parameter belongs.
 * Groups can be used to gather parameters.
 * @param oGroupLabel
 *   The group label.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetGroup(CATUnicodeString &oGroup) = 0;

/**
 * Returns the default value.
 * @param oDefaultValue
 *   The default value.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetDefaultValue(void *oValue) = 0;

/**
 * Returns the parameter range.
 * @param oMinValue
 *   The minimum value.
 * @param oMaxValue
 *   The maximum value.
 * @param oStepValue
 *   The step value.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetRange(void *oMinValue, void *oMaxValue, void *oStepValue) = 0;

/**
 * Returns the label of an enum value.
 * @param iValue
 *   The enum value.
 * @param oLabel
 *   The corresponding label.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetEnumLabel(int &iValue, CATUnicodeString &oLabel) = 0;

/**
 * Returns the parameter widget that overrides the default widget.
 * @param oWidget
 *   The widget.
 *   <ul> Parameter widgets.
 *   <li> "none" </li>
 *   <li> "slider" </li>
 *   <li> "spinner" </li>
 *   <li> "combo" </li>
 *   <li> "color" </li>
 *   <li> "texture" </li>
 *   </ul>
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetWidget(CATString &oWidget) = 0;

/**
 * Returns the optional parameter unit.
 * @param oUnit
 *   The unit.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetUnit(CATString &oUnit) = 0;
};

/** @nodoc */
CATDeclareHandler(CATIRmaParameterDialog,CATBaseUnknown);

#endif
