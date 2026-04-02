#ifndef CATIDrwDimToleranceAlphaNum_H
#define CATIDrwDimToleranceAlphaNum_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwDimToleranceAlphaNum ;
#else
extern "C" const IID IID_CATIDrwDimToleranceAlphaNum ;
#endif

/**
 * Manages the dimension alphanumerical tolerance.
 */

class ExportedByDraftingItfCPP CATIDrwDimToleranceAlphaNum : public CATBaseUnknown
{
  CATDeclareInterface;

   public:

    /**
     * Gets the tolerance first value.
     *   @return
     *    Value.
     */
     virtual CATUnicodeString GetFirstTolerance() const = 0;

    /**
     * Gets the tolerance second value.
     *   @return
     *    Value.
     */
     virtual CATUnicodeString GetSecondTolerance() const = 0;

    /**
     * @nodoc
     * Gets the tolerance conversion mode.
     *   @return
     *    Mode.
     */
     virtual int GetConvertMode() const = 0;

    /**
     * Sets the tolerance first value.
     *   @param iFirstTolerance
     *    Value.
     */
     virtual void SetFirstTolerance( const CATUnicodeString & iFirstTolerance ) = 0;

    /**
     * Sets the tolerance second value.
     *   @param iSecondTolerance
     *    Value.
     */
     virtual void SetSecondTolerance( const CATUnicodeString & iSecondTolerance ) = 0;

    /**
     * @nodoc
     * Sets the tolerance conversion mode.
     *   @param iConvertMode
     *    Mode.
     */
     virtual void SetConvertMode( const int iConvertMode ) = 0;

};
CATDeclareHandler(CATIDrwDimToleranceAlphaNum, CATBaseUnknown);
#endif

