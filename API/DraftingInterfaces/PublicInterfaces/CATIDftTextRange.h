#ifndef CATIDftTextRange_H
#define CATIDftTextRange_H
//==============================================================================
//                                   CATIA - Version 5
//	COPYRIGHT DASSAULT SYSTEMES 2002
//
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
//==============================================================================

#include "CATBaseUnknown.h"
#include "CATBooleanDef.h"
#include "CATUnicodeString.h"

class CATIDftTextProperties;

//#include "CATDraftingInterfaces.h"
#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDftTextRange ;
#else
extern "C" const IID IID_CATIDftTextRange ;
#endif


/**
* Manage texts by selection in this text.
*/
class ExportedByDraftingItfCPP CATIDftTextRange : public CATBaseUnknown
{
  CATDeclareInterface;

public:

  /**
  * Get the start index of the text range.
  * @param oStart 
  *   the start index of the text range.
  */
  virtual HRESULT GetStart (int *oStart)=0;

  /**
  * Get the number of character of the text range.
  * @param oLength 
  *   the text range length.
  */
  virtual HRESULT GetLength (int *oLength)=0;

  /**
  * Modify the current text range with a new string.
  * @param iStg 
  *   Text to insert/replace.<BR>
  *   If the selection is a cursor, the text will be inserted.<BR>
  *   If not the slection will be replaced.
  */
  virtual HRESULT SetString(const wchar_t *iStg) = 0;
  
  /**
  * Get the text of the current selection.
  * @param ostg
  *   The returned text
  */
  virtual HRESULT GetString(wchar_t **oStg) = 0;

  /**
  * @nodoc
  * Used to insert a string at the begining of the text range.
  * @param iStg
  *   The string to ba added
  * @param oTextRange
  *   the new text range
  */
  virtual HRESULT InsertBefore(const wchar_t *iStg) = 0;


  /**
  * @nodoc
  * Used to insert a string at the end of the text range.
  * @param iStg
  *   The string to ba added
  * @param oTextRange
  *   the new text range
  */
  virtual HRESULT InsertAfter(const wchar_t *iStg) = 0;


  /**
  * @nodoc
  * Used to find a string in the text range.
  * @param iStg
  *   The string to be found
  * @param oTextRange
  *   the text range if founded
  * @param iAfter
  *   The first index
  * @param iMatchCase
  *   Match case 
  * @param iWholeWords
  *   Whole words
  */
  virtual HRESULT Find(const wchar_t *iStg, CATIDftTextRange **oTextRange,
                        int iAfter = 0, const CATBoolean iMatchCase  = FALSE,
                        const CATBoolean iWholeWords = FALSE) = 0;

  /**
  * Returns a Properties interface on the text range.
  * <BR>Equivalent to <i> a standard QueryInterface on the text range </i> 
  * @param oTextProperties
  * The pointer on the asked interface. Can be NULL if the adhesion doesn't exists.
  */
  virtual HRESULT GetTextProperties (CATIDftTextProperties **TextProperties) = 0;

  /**
  * @nodoc
  * Returns a text range from the actual range.
  * @param iStart,iEnd  
  *   
  * @param TextRange
  *   The pointer on the new range
  */
  virtual HRESULT GetTextRange (CATIDftTextRange **TextRange, int iStart, int iEnd ) = 0;

  /**
  * @nodoc
  * Manage semantic link
  * @param iStart  
  *   first impacted character
  * @param iObj  
  *   linked obj
  */
  virtual HRESULT InsertVariable (IUnknown *Variable) = 0;

  /**
  * @nodoc
  * Manage semantic link
  * @param iObj
  *   Variable to find, if NULL find all variable
  * @param oNbVariable
  *   Number of positions
  * @param oVariableList
  *   List of positions
  */
  virtual HRESULT GetVariablePositions(IUnknown *iObj, int *oNbVariable, 
                                       int **oVariableList) = 0;

  /**
  * @deprecated V5R17 use CATIDftTextRange::InsertSymbol
  * Manage symbol.
  * @param iSymbol  
  *   symbol 
  * @param iStart
  *   location 
  * @param iEnd
  *   location
  * @param iFont  
  *   Font name to use for this symbol. Default CATIASymbols.
  */
  virtual HRESULT InsertSymbol(const wchar_t *iSymbol, int iStart, int iEnd, 
                               wchar_t *iFont=NULL) = 0;

  /**
  * Manage symbol.
  * @param iSymbolName
  *   symbol name as described in Standard
  * @param iStart
  *   location 
  * @param iEnd
  *   location
  */
  virtual HRESULT InsertSymbol(const CATUnicodeString & iSymbolName, int iStart) = 0;
};
CATDeclareHandler(CATIDftTextRange, CATBaseUnknown);
#endif
