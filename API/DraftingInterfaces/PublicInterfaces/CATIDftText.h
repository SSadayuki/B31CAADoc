//	COPYRIGHT DASSAULT SYSTEMES 2002
#ifndef CATIDftText_H
#define CATIDftText_H
/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATIDftAnnotation.h"

//
#include "CATDftTextParameters.h"

#include "CATDraftingInterfaces.h"
#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDftText ;
#else
extern "C" const IID IID_CATIDftText ;
#endif

class CATIDftTextProperties;
class CATIDftProperties;
class CATIDftTextRange;
/**
* Manage texts by selection in this text.
*/
class ExportedByDraftingItfCPP CATIDftText : public CATIDftAnnotation
{
  
public:
  
  
  /**
  * Modify the current selection with a new string.
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
  * Set or Unset the Wrapping Mode.
  * @param imode 
  * wrapping calculation mode 
  *        = DftWrappingOn   : set the wrapping width to iWidth
  *        = DftWrappingOff  : unset the wrapping width
  *        = DftWrappingAuto : set the wrapping width to the longest text line (default)
  * @return HRESULT
  *    S_OK : the text can be wrapped.
  *    E_FAIL or E_NOIMPL : the text cannot be wrapped.
  */     	              
  virtual HRESULT SetWrappingMode(DftWrappingMode imode = DftWrappingAuto) = 0;
  
  /**
  * Read the text Wrapping Mode.
  * @param oMode 
  *     Wrapping Mode
  * @return HRESULT
  *     S_OK : Operation is successful.
  *     E_FAIL or E_NOIMPL : the text cannot be wrapped.
  */
  virtual HRESULT GetWrappingMode(DftWrappingMode *oMode) = 0;
  

  /**
  * Set the Wrapping Width.
  * @param iWidth 
  * @return HRESULT
  *    S_OK : the text can be wrapped.
  *    E_FAIL or E_NOIMPL : the text cannot be wrapped.
  */     
  virtual HRESULT SetTextWidth(double iWidth) = 0;

  /**
  * Read the text Wrapping width.
  * @param oWidth 
  *     Wrapping width
  * @return HRESULT
  *     S_OK : Operation is successful.
  *     E_FAIL or E_NOIMPL : the text cannot be wrapped.
  */
  virtual HRESULT GetTextWidth(double *oWidth) = 0;

  
  /**
  * @nodoc
  * Returns the global text range of the text.
  * @param TextRange
  *   The pointer on the new range
  */
  virtual HRESULT GetTextRange (CATIDftTextRange **TextRange,int iStart = 0,int iEnd = 0) = 0;


  /**
  * @nodoc
  *  This method is now replaced by @href IUnknown#QueryInterface
  *
  * Returns a Properties interface on the text.
  * <BR>Equivalent to <i>GetSubSet ("All",IID_CATIDftTextProperties,...)</i>  
  * or <i> a standard QueryInterface on the text object </i> 
  * @param oTextProperties
  * The pointer on the asked interface. Can be NULL if the adhesion doesn't exists.
  */
  virtual HRESULT GetTextProperties(CATIDftTextProperties **oTextProperties) = 0;

  /**
  * Returns an interface on a subset of the text.
  * @param iSubSetName
  * Can be for Texts :<BR>
  * "Global","Text","Selection","Leaders","WholeFrame"
  * @param iItfName
  * The interface id
  * @param oSubSet
  * The pointer on the asked interface. Can be NULL if the adhesion doesn't exists.
  */
  virtual HRESULT GetSubSet(const wchar_t *iSubSetName,const IID iItfName, IUnknown **oSubSet) = 0;
};
CATDeclareHandler(CATIDftText, CATBaseUnknown);
#endif
