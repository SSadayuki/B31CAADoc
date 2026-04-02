#ifndef CATIDrwDimText_H
#define CATIDrwDimText_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "DraftingItfCPP.h"

class CATIDrwDimDressUp_var;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwDimText ;
#else
extern "C" const IID IID_CATIDrwDimText ;
#endif

/**
 * Manages the dimension texts.
 */

class ExportedByDraftingItfCPP CATIDrwDimText : public CATBaseUnknown
{
  CATDeclareInterface;

   public:

    /**
     * Gets style.
     *   @return
     *    Style.
     */
     virtual CATIDrwDimDressUp_var GetStyle() const = 0;

    /**
     * Gets before, after, upper and lower texts.
     *   @param before
     *    Before text.
     *   @param after
     *    After text.
     *   @param upper
     *    Upper text.
     *   @param lower
     *    Lower text.
     */
     virtual void GetBAULText(CATUnicodeString& before, CATUnicodeString& after, CATUnicodeString& upper, CATUnicodeString& lower) const = 0;

    /**
     * @deprecated V5R18 use #GetPSText
     * Gets prefix and suffix texts.
     *   @param prefix
     *    Prefix text.
     *   @param suffix
     *    Suffix text.
     */
     virtual void GetPSText(CATUnicodeString& prefix, CATUnicodeString& suffix) const = 0;


     /**
     * Gets prefix or suffix text
     *   @param oPSText
     *    Prefix or suffix text.
     *   @param iIndex
     *    1: gets prefix text 
     *    2: gets suffix text 
     *   @return 
     * <tt>HRESULT</tt>
     * <dl>
     * <dt> <tt>S_OK</tt>       <dd> Method correctly executed
     * <dt> <tt>S_READONLY</tt> <dd> Method correctly executed.Returned value cannot be modified, it's read-only
     * <dt> <tt>E_FAIL</tt>     <dd> Method execution failed
     * </dl>
     */

     virtual HRESULT GetPSText(CATUnicodeString& oPSText, int iIndex) const = 0;



     
    /**
     * Sets before, after, upper and lower texts.
     *   @param before
     *    Before text.
     *   @param after
     *    After text.
     *   @param upper
     *    Upper text.
     *   @param lower
     *    Lower text.
     */
     virtual void SetBAULText(const CATUnicodeString before, const CATUnicodeString after, const CATUnicodeString upper, const CATUnicodeString lower) = 0;

    /**
     * @deprecated V5R18 use #SetPSText
     * Sets prefix and suffix texts.
     *   @param prefix
     *    Prefix text.
     *   @param suffix
     *    Suffix text.
     */
     virtual void SetPSText(const CATUnicodeString prefix, const CATUnicodeString suffix) = 0;

     
     /**
     * Sets prefix or suffix text (both prefix and suffix cannot be set)
     *   @param iPSText
     *    Prefix or suffix text.
     *   @param iIndex
     *    1: sets prefix text (the suffix text is deleted)
     *    2: sets suffix text (the prefix text is deleted)
     *   @return 
     * <tt>HRESULT</tt>
     * <dl>
     * <dt> <tt>S_OK</tt>     <dd> Method correctly executed
     * <dt> <tt>E_FAIL</tt>   <dd> Method execution failed : make sure that the value is not read-only (The prefix cannot be set is a string is defined as dimension value)
     * </dl>
     */

     virtual HRESULT SetPSText(const CATUnicodeString& iPSText, int iIndex) = 0;

};
CATDeclareHandler(CATIDrwDimText, CATBaseUnknown);
#endif

