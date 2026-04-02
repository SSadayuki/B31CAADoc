#ifndef CATITPSAssociatedTextVisu_H
#define CATITPSAssociatedTextVisu_H

// COPYRIGHT DASSAULT SYSTEMES 2012

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATTPSItfCPP.h"

class CATITPSText;
class CATUnicodeString;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATTPSItfCPP IID IID_CATITPSAssociatedTextVisu;
#else
extern "C" const IID IID_CATITPSAssociatedTextVisu ;
#endif

/**
 * Interface dedicated to manage the association of a visualization text feature with
 * another TPS. This interface manages the associativity between an annotation(A 
 * semantic datum or a semantic dimension) and a visualization text.
 */
class ExportedByCATTPSItfCPP CATITPSAssociatedTextVisu : public CATBaseUnknown
{
  CATDeclareInterface;
  public:

    /**
     * Sets the Visualization Text associated to a TPS.
     */
    virtual HRESULT SetTextVisu ( CATUnicodeString istrVisuText,
                                  CATITPSText * ipiTextVisu = NULL) = 0;

    /**
     * Retrieves the Visualization Text associated to a TPS.
     */
    virtual HRESULT GetTextVisu ( CATITPSText ** opiTextVisu,
                                  CATUnicodeString *ostrVisuText) const = 0;

    /**
     * Sets the Visualization Text associated to a TPS for Datum Target and Pattern.
     *  @param ipiTextVisu
     *   Text to be set
     *  returns S_OK when the text has been correctly set, 
     *  returns E_FAIL otherwise.
     */
    virtual HRESULT SetVisuTextTargetAndPattern (CATITPSText *ipiTextVisu)  = 0;

    /**
     * Retrieves the Visualization Text associated to a TPS for Datum Target adn Pattern.
     *  @param opiTextVisu
     *   Text to be retrieved.
     *  returns S_OK when the Text has been correctly retrieved, 
     *  returns E_FAIL otherwise.
     */
    virtual HRESULT GetVisuTextTargetAndPattern (CATITPSText ** opiTextVisu) const = 0;
};

CATDeclareHandler (CATITPSAssociatedTextVisu, CATBaseUnknown);

#endif
