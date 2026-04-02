
#ifndef __CATSpecReplaceExt_h__
#define __CATSpecReplaceExt_h__


/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */
// COPYRIGHT DASSAULT SYSTEMES  1999

#include "AC0SPBAS.h"
class CATListPtrIID;

#include "CATIReplace.h"
class CATUnicodeString;

/**
 * Base class to give implementation for CATIReplace.
 * <b>usage:</b> Only IsElementValidForReplace method needs to be overloaded.
 * To subscribe to replace, this object also has to implement CATIAttrBehavior.
 *
 * @see CATIReplace, CATIAttrBehavior
 */
class ExportedByAC0SPBAS CATSpecReplaceExt : public CATIReplace
{
  CATDeclareClass;

public:
  
  /**
   * Constructs a CATSpecReplaceExt.	
   */
  CATSpecReplaceExt();
  virtual ~CATSpecReplaceExt();
  
  /**
   * Determine wether the candidate element is allowed to replace the existing one.
   * @param iAttributeName
   *        name of attribute which value has to be replace.
   * @param iElement
   *        candidate element for replace.
   * @param oMessage
   *        explains returned HRESULT.
   *        <br><b>Legal values</b>: 
   *         <br><tt>"No adhesion to CATIAttrBehavior"</tt> if this doesn't implement CATIAttrBehavior.
   *         then rc is <tt> E_NOTIMPL </tt>.
   *        <br><tt> "Element is invalid "</tt> if element is invalid for replace, 
   *         then rc is <tt> E_FAILED </tt>.
   * @param oElementValidity
   * <br><b>Legal values </b>: 
   *     <tt> 0 if element is not valid </tt>,
   *     <br><tt> 1 if element is valid </tt>.
   * @param iOldValue
   *        position of the feature to replace if the attribute is a list.
   * @return HRESULT
   * <br><b>Legal values </b>: 
   *     <tt>  S_OK   </tt>,
   *     <tt>  E_FAIL  </tt>,
   *     <tt>  E_NOTIMPL </tt>
   */
  virtual HRESULT IsElementValidForReplace(const CATUnicodeString & iAttributeName, const CATBaseUnknown_var& iElement,CATUnicodeString& oMessage, int& oElementValidity, const CATBaseUnknown_var& iOldValue=NULL_var);

  
  /**
   * Valuates a given attribute with an other object.
   * @param iAttributeName
   *        name of the attribute which value has to be replace.
   * @param iElement
   *        candidate element for replace.
   * @param iOldValue
   *        position of the feature to replace if the attribute is a list.
   * @return HRESULT
   * <br><b>Legal values </b>: 
   *     <tt>  S_OK   </tt>,
   *     <tt>  E_FAIL  </tt>,
   *     <tt>  E_NOTIMPL </tt>
   */
  virtual HRESULT Replace(const CATUnicodeString & iAttributeName, CATBaseUnknown_var& new_element, const CATBaseUnknown_var& old_value=NULL_var );

protected:

 /**
  * Method to describe expected behavior on object valuating an attribute.
  * Returns, for a given attribute, the expected behavior of its valuating objects.
  * <b> Usage: </b> 
  * <pre>Output values must be valuated as follows :
  *   oBehaviorArray = new CATListPtrIID[2];
  *   oBehaviorArraySize = 2;
  *   // Way #1.
  *   CATListPtrIID subList (3);
  *   subList[1] = &IID_CATIHello;
  *   subList[2] = &IID_CATIBonjour;
  *   subList[3] = &IID_CATIBuenosDias;
  *   oBehaviorArray[0] = subList;
  *   // Way #2.
  *   oBehaviorArray[1].Append(&IID_CATIAufwiedersehen);
  *   oBehaviorArray[1].Append(&IID_CATIArrivederci);
  * </pre>
  * <pre>To sum up: result = [ { CATIHello, CATIBonjour, CATIBuenosDias },
  *                       { CATIAufwiedersehen, CATIArrivederci } ]
  * </pre>
  * <p>The result will be translated as 
  * ( CATIHello AND CATIBonjour AND CATIBuenosDias ) OR ( CATIAufwiedersehen AND CATIArrivederci ).</p>
  * @param iAttrName
  *   name of the concerned attribute.
  * @param oBehaviorArray
  *   Array of lists of interfaces in the CATListPtrIID[] format.
  *   <br>This list is a combination of interfaces that must be implemented by any object valuating the attribute.
  * @param oBehaviorSize
  *   The size of the array of lists of interfaces in the CATListPtrIID[] format.
  */
  virtual HRESULT GetRequestedBehavior(const CATUnicodeString & iAttributeName, CATListPtrIID ** oBehaviorArray, int * oBehaviorSize);

private:
  CATSpecReplaceExt(const CATSpecReplaceExt &); // Not implemented.
  CATSpecReplaceExt & operator=(const CATSpecReplaceExt &); // Not implemented.
};
 

#endif // __CATSpecReplaceExt.h__

