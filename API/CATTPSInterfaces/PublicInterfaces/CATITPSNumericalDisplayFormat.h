#ifndef CATITPSNumericalDisplayFormat_H
#define CATITPSNumericalDisplayFormat_H

// COPYRIGHT DASSAULT SYSTEMES 2018

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATBaseUnknown.h"
#include "CATTPSItfCPP.h"
#include "CATUnicodeString.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATTPSItfCPP IID IID_CATITPSNumericalDisplayFormat;
#else
extern "C" const IID IID_CATITPSNumericalDisplayFormat;
#endif

/**
* Interface to manage numerical format properties.
* <br><b>Role</b>: This interface is available for GDT, Datum Target and Datum system.It gives the ability to retrieve or edit the numerical format properties.
*/

class ExportedByCATTPSItfCPP CATITPSNumericalDisplayFormat : public CATBaseUnknown
{
  CATDeclareInterface;

public:

  /**
  * Retrieves the precision of Annotation.
  * @param onPrecision
  *    precision of Annotation.
  * @return
  *    S_OK     precision is successfully retrieved.
  *    E_FAIL   failed to retrieve precision.
  */
  virtual HRESULT GetPrecision(int * onPrecision) const = 0;

  /**
  * Sets the precision of Annotation.
  * @param inPrecision
  *    Precision to be set on Annotation.
  * @return
  *    S_OK     precision is set successfully.
  *    E_FAIL   failed to set precision.
  */
  virtual HRESULT SetPrecision(int inPrecision) = 0;

  /**
  * Retrieves the Annotation separator.
  * @param onSeparator
  *     Annotation separator.
  *     all possible returns values with symbols corresponding are describe in the comment
  *     of the method SetSeparator.
  * @return
  *    S_OK     seperator is successfully retrieved.
  *    E_FAIL   failed to retrieve seperator.
  */
  virtual HRESULT GetSeparator(int * onSeparator) const = 0;

  /**
  * Sets the Annotation separator.
  * @param inSeparator
  *     Annotation separator.
  *     integer value of inSeparator corresponding to:
  *<br />	0 	""
  *<br />	1	  "/"
  *<br />	2	  ":"
  *<br />	3	  "("
  *<br />	4	  ")"
  *<br />	5	  "\\"
  *<br />	6	  ","
  *<br />	7	  "<"
  *<br />	8	  ">"
  *<br />	9	  "X"
  *<br />	10	"*"
  *<br />	11	"."
  *<br />	12	";"
  *<br />	13	"+"
  *<br />	14	"["
  *<br />	15	"]"
  *<br />	16	"-"
  *<br />	17	"_"
  *<br />	18	" "
  * @return
  *    S_OK     seperator is set successfully.
  *    E_FAIL   failed to set seperator.
  */
  virtual HRESULT SetSeparator(int inSeparator) = 0;

  /**
  * Retrieves the Annotation DisplayTrailingZero.
  * @param onDisplayTrailingZero
  *     Annotation DisplayTrailingZero.
  *	0 : the TrailingZero is not displayed.
  *	1 : the TrailingZero is displayed.
  * @return
  *    S_OK     DisplayTrailingZero is successfully retrieved.
  *    E_FAIL   failed to retrieve DisplayTrailingZero.
  */
  virtual HRESULT GetDisplayTrailingZero(int * onDisplayTrailingZero) const  = 0;

  /**
  * Sets the sannotation DisplayTrailingZero.
  * @param inDisplayTrailingZero
  *     Annotation DisplayTrailingZero.
  *	0 : to not display the TrailingZero.
  *	1 : to display the TrailingZero.
  * @return
  *    S_OK     DisplayTrailingZero is set successfully.
  *    E_FAIL   failed to set DisplayTrailingZero.
  */
  virtual HRESULT SetDisplayTrailingZero(int inDisplayTrailingZero) = 0;

  /**
  * Retrieves the Annotation DisplayLeadingZero.
  * @param onDisplayLeadingZero
  *     Annotation LeadingZero.
  *	0 : the LeadingZero is not displayed.
  *	1 : the LeadingZero is displayed.
  * @return
  *    S_OK     DisplayLeadingZero is successfully retrieved.
  *    E_FAIL   failed to retrieve DisplayLeadingZero.
  */
  virtual HRESULT GetDisplayLeadingZero(int * onDisplayLeadingZero) const = 0;

  /**
  * Sets the Annotation DisplayLeadingZero.
  * @param inDisplayLeadingZero
  *     Annotation LeadingZero.
  *	0 : to not display the LeadingZero.
  *	1 : to display the LeadingZero.
  * @return
  *    S_OK     DisplayLeadingZero is set successfully.
  *    E_FAIL   failed to set DisplayLeadingZero.
  */
  virtual HRESULT SetDisplayLeadingZero(int inDisplayLeadingZero) = 0;

  /**
  * Retrieves the level of factor to be displayed.
  * @param onDisplayFactor
  *      display factor.
  * @return
  *    S_OK     display factor is successfully retrieved.
  *    E_FAIL   failed to retrieve display factor.
  */
  virtual  HRESULT GetDisplayFactor(int &onDisplayFactor) const = 0;

  /**
  * Sets the level of factor to be displayed.
  * @param inFact
  *      display factor.
  * @return
  *    S_OK           display factor is set successfully.
  *    E_INVALIDARG   if the property couldn't be set for compatibilty reasons.
  *    E_FAIL         failed to set display factor.
  */
  virtual HRESULT SetDisplayFactor(const int &inFact) = 0;

  /**
  * Retrieves the maximun level of factor available to be displayed.
  * It may vary according to the name of the format.
  * @param onMaxDisplayFactor
  *      maximum level of display factor.
  * @return
  *    S_OK     maximum display factor is successfully retrieved.
  *    E_FAIL   failed to retrieve maximum display factor.
  */
  virtual HRESULT GetAvailableDisplayFactor(int &onMaxDisplayFactor) const = 0;

  /**
  * Retrieves the format name.
  * @param ostrDescr
  *      name of the format.
  * @return
  *    S_OK     name of the format is successfully retrieved.
  *    E_FAIL   failed to retrieve name of the format.
  */
  virtual HRESULT GetFormatName(CATUnicodeString &ostrDescr) const = 0;

  /**
  * Sets the format name.
  * @param istrName
  *     name of the format.
  * @return
  *    S_OK     format name is set successfully.
  *    E_FAIL   failed to set format name.
  */
  virtual HRESULT SetFormatName(const CATUnicodeString &istrName) = 0;

};
CATDeclareHandler(CATITPSNumericalDisplayFormat, CATBaseUnknown);
#endif
