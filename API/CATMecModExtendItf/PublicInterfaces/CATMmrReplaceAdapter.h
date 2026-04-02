 /* -*-c++-*- */
#ifndef CATMmrReplaceAdapter_H_
#define CATMmrReplaceAdapter_H_
// COPYRIGHT DASSAULT SYSTEMES  2010


/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

#include "CATMecModExtendItf.h"
#include "CATIReplace.h"

class CATListPtrIID;
class CATUnicodeString;

/**
* Adapter class for the CATIReplace interface.
* <b>usage:</b> The implementation should include the additional method GetRequestedBehavior.
*
* @see CATIReplace
*/

class ExportedByCATMecModExtendItf CATMmrReplaceAdapter : public CATIReplace
{
 CATDeclareClass;

 public:
  
  /**
   * Constructs a CATMmrReplaceAdapter.	
   */
  CATMmrReplaceAdapter();
  virtual ~CATMmrReplaceAdapter();
    
  /**
   * Determine wether the candidate element is allowed to replace the existing one.
   * @param iName
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
  virtual HRESULT IsElementValidForReplace(const CATUnicodeString& iName,const CATBaseUnknown_var& iElement,CATUnicodeString& oMessage, int& oElementValidity, const CATBaseUnknown_var& iOldValue=NULL_var);

  
  /**
   * Valuates a given attribute with an other object.
   * @param iName
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
  virtual HRESULT Replace(const CATUnicodeString& name_of_role,CATBaseUnknown_var& new_element, const CATBaseUnknown_var& old_value=NULL_var );

protected:

 /**
  * Method to describe expected behavior on object valuating an attribute.
  * Returns for a given attribute the expected behavior of its valuating objects.
  * <b> Usage: </b> 
  * <br>Elements must be created as follows :
  * <br>
  * <br> CATListPtrIID * value = new CATListPtrIID[2];
  * <br> // Way #1.
  * <br> CATListPtrIID subList (3);
  * <br> subList[1] = &IID_CATIHello;
  * <br> subList[2] = &IID_CATIBonjour;
  * <br> subList[3] = &IID_CATIBuenosDias;
  * <br> value[0] = subList;
  * <br> // Way #2.
  * <br> value[1].Append(&IID_CATIAufwiedersehen);
  * <br> value[1].Append(&IID_CATIArrivederci);
  * <br>
  * <br>To sum up: result = [ { CATIHello, CATIBonjour, CATIBuenosDias },
  * <br>                      { CATIAufwiedersehen, CATIArrivederci } ]
  * <br>
  * <br>The result will be translated as 
  * <br>( CATIHello AND CATIBonjour AND CATIBuenosDias ) OR ( CATIAufwiedersehen AND CATIArrivederci )
  * @param iAttrName
  *   name of the concerned attribute.
  * @param oBehaviorArray
  *   Array of lists of interfaces in the CATListPtrIID[] format.
  *   <br>This list is a combination of interfaces that must be implemented by any object valuating the attribute.
  * @param oBehaviorSize
  *   The size of the array of lists of interfaces in the CATListPtrIID[] format.
  */
  virtual HRESULT GetRequestedBehavior(const CATUnicodeString & iAttributeName, CATListPtrIID ** oBehaviorArray, int * oBehaviorSize);

private :
  CATMmrReplaceAdapter( const CATMmrReplaceAdapter &);
  CATMmrReplaceAdapter& operator = (const CATMmrReplaceAdapter &);

};
 
#endif




