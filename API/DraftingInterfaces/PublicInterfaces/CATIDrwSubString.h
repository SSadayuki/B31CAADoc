#ifndef CATIDrwSubString_h
#define CATIDrwSubString_h
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATDrwUtility.h"
#include "CATUnicodeString.h"
#include "CATListOfInt.h"

class CATIDrwText_var;
class CATISpecObject_var;
class CATListValCATISpecObject_var;
class CATListValCATBaseUnknown_var;

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwSubString;
#else
extern "C" const IID IID_CATIDrwSubString;
#endif
/**
* Interface to manage a text sub-string.
* @see CATIDrwText, CATIDrwTextProperties
*/
class ExportedByDraftingItfCPP CATIDrwSubString : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
    * Set the current selection on a text.
    * <br>When a selection is set, it has to be reset once texts edition is finished.
    * @href CATIDrwSubString#ResetSelection
    * @param iFirst
    *   First character to select.
    * @param iLast
    *   Last character to select.
    * @param iMode
    *   Cursor selection mode : define how iFirst and iLast parameters must be valuated. 
    *   <br>If mode equals 0 character position starts form 1 (1 is before first character)
    *   <br>If mode equals 1 character position starts form 0 (0 is before first character)
    *   <br>Examples :
    *   <br>On the ABCD string 
    *   <br>If iFirst and iLast equal zero, whole text will be selected.



 /                                              I----------------I  
//                                              I First |  Last  I
//     ----------------------------------------------------------I
//     I  ABCD : Cursor before A    : mode = 0  |   1   |    0   I
//     I                              mode = 1  |   0   |    0   I
//     I---------------------------------------------------------I
//     I  ABCD : Cursor between B C : mode = 0  |   2   |    0   I
//     I                              mode = 1  |   1   |    1   I
//     I---------------------------------------------------------I
//     I  ABCD : Selection of C     : mode = 0  |   3   |    3   I
//     I                              mode = 1  |   2   |    3   I 
//     I---------------------------------------------------------I




    */
    virtual HRESULT SetSelection  (const int & iFirst, const int & iLast, const int & iMode=0) = 0;

    /**
    * Get the current selection on a text.
    * @param oFirst
    *   First selected character.
    * @param oLast
    *   Last selected character.
    *   <br>If oFirst and oLast equal zero, whole text is selected.
    * @param iMode
    *   Cursor selection mode : define how iFirst and iLast parameters must be valuated. 
    *   <br>If mode equals 0 character position starts form 1 (1 is before first character)
    *   <br>If mode equals 1 character position starts form 0 (0 is before first character)
    *   <br>Examples :
    *   <br>On the ABCD string 
    *   <br>If iFirst and iLast equal zero, whole text will be selected.
    */
    virtual HRESULT GetSelection  (int & oFirst, int & oLast, const int & iMode=0) = 0;

    /**
    * Reset the selection to whole text.
    */
    virtual HRESULT ResetSelection() = 0;
   
    /**
    * Set parameter on the current text selection.
    * @param iParam
    *   Parameter type.
    * @see CATIDrwTextProperties
    * @param iValue
    *   Integer value.
    */
    virtual HRESULT SetParameter(const CATDrwTextProperty & iParam, const int & iValue) = 0;

    /**
    * Set parameter on the current text selection.
     * @param iParam
    *   Parameter type.
    * @see CATIDrwTextProperties
    * @param iValue
    *   Double value.
    */
    virtual HRESULT SetParameter(const CATDrwTextProperty & iParam, const double & iValue) = 0;

    /**
    * Set parameter on the current text selection.
    * @param iParam
    *   Parameter type.
    * @see CATIDrwTextProperties
    * @param iValue
    *   String value.
    */
    virtual HRESULT SetParameter(const CATDrwTextProperty & iParam, const CATUnicodeString & iValue) = 0;

    /**
    * Get parameter on the current text selection.
    * @param iParam
    *   Parameter type.
    * @see CATIDrwTextProperties
    * @param oValue
    *   Integer value.
    * @param oPure  
    *   Parameter constancy.
    *   <br>Equals 1 if parameter value is the same on whole sub-string.
    *   <br>Equals 0 if parameter value is not the same on whole sub-string.
    */
    virtual HRESULT GetParameter(const CATDrwTextProperty & iParam, int & oValue, int & oPure) = 0;

    /**
    * Get parameter on the current text selection.
    * @param iParam
    *   Parameter type.
    * @see CATIDrwTextProperties
    * @param oValue
    *   Double value.
    * @param oPure  
    *   Parameter constancy.
    *   <br>Equals 1 if parameter value is the same on whole sub-string.
    *   <br>Equals 0 if parameter value is not the same on whole sub-string.
    */
    virtual HRESULT GetParameter(const CATDrwTextProperty & iParam, double & oValue, int & oPure) = 0;

    /**
    * Get parameter on the current text selection.
    * @param iParam
    *   Parameter type.
    * @see CATIDrwTextProperties
    * @param oValue
    *   String value.
    * @param oPure  
    *   Parameter constancy.
    *   <br>Equals 1 if parameter value is the same on whole sub-string.
    *   <br>Equals 0 if parameter value is not the same on whole sub-string.
    */
    virtual HRESULT GetParameter(const CATDrwTextProperty & iParam, CATUnicodeString & oValue, int & oPure) = 0;

    /**
    * Set the string of the current selection.
    * @param iString
    *   String to set at the current selection.
    */
    virtual HRESULT SetString(const CATUnicodeString & iString) = 0;

    /**
    * Get the string of the current selection.
    * @param iString
    *   String of the current selection.
    */
    virtual HRESULT GetString(CATUnicodeString & oString) = 0;

    /**
    * @deprecated V5R17 use CATIDrwSubString#SetSymbol
    * Insert a symbol in the current selection. 
    * <br>This symbol will remain displayed even if font is changed on the current selection. 
    * @param iSymbol  
    *   Unicode symbol value. 
    * @param iFont  
    *   Font name to use for this symbol. 
    *   <br>If no font is given a default one is taken according to the current standard and the 
    *   unicode value.
    */
    virtual HRESULT InsertSymbol(const CATUnicodeString & iSymbol, 
                                 const CATUnicodeString & iFont="") = 0;

    /**
    * Get a symbol in the current selection. 
    * @param iSymbol  
    *   symbol name as defined in standard
    */
    virtual HRESULT SetSymbol(const CATUnicodeString & iSymbol) = 0;

    /**
    * Get a symbol in the current selection. 
    * @param oSymbol  
    *   symbol name as defined in standard
    */
    virtual HRESULT GetSymbol(CATUnicodeString & oSymbol) = 0;


    /**
    * Insert a text semantic link.
    * @param iObject  
    *   Object from which value will be extracted.
    * @param iAttName  
    *   Attribute name to extract value.
    */
    virtual HRESULT InsertVariable(CATBaseUnknown_var & iObject, const CATUnicodeString & iString = "") = 0;

    /**
    * @nodoc
    * Get list of linked objects.
    * @param oList
    *   Linked objects list.
    * Use method GetListOfVariables(CATListValCATBaseUnknown_var *&)
    *
    */
    virtual HRESULT GetListOfVariables(CATListValCATISpecObject_var *& oList) = 0;

    /**
    * Get list of linked objects.
    * @param oList
    *   Linked objects list.
    */
    virtual HRESULT GetListOfVariables(CATListValCATBaseUnknown_var *& oList) = 0;

    /**
    * Get position list of linked objects.
    * @param iObject  
    *   Linked object
    * @param oList
    *   List of position where object is referenced.
    */
    virtual HRESULT GetVariablePositions(CATBaseUnknown_var & iObject, CATListOfInt & oList) = 0;

};
CATDeclareHandler(CATIDrwSubString, CATBaseUnknown);
#endif
