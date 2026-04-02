#ifndef CATPspKweUserAttrAdapter_H
#define CATPspKweUserAttrAdapter_H

//	COPYRIGHT DASSAULT SYSTEMES 2004
/**
  * @CAA2Level L1
  * @CAA2Usage U2
  */

// This framework
#include "CATPspItfCPP.h"


// Knowledgeware 
#include "CATIValue.h"


// System
#include "CATBaseUnknown.h"
#include "CATString.h"
#include "CATUnicodeString.h"

class CATListValCATAttributeInfos;
class CATIInstance;

/**
 *  Base adaptor class for implemeting CATIPspKweUserAttr.
 * <b>Role</b>: Implementations of interface CATIPspKweUserAttr should derive from this class.
 * @see CATIPspKweUserAttr
 */

class ExportedByCATPspItfCPP   CATPspKweUserAttrAdapter : public CATBaseUnknown                           
{
  public:

    CATDeclareClass;

    CATPspKweUserAttrAdapter();
    virtual ~CATPspKweUserAttrAdapter();

   /**
    * Defines a list of computed attributes for the input exposed type isTypeName.
    * @param isTypeName
    *   Exposed type
    * @param olAttrInfos
    *   List of CATAttributeInfos
    * @return
    *   An HRESULT value.
    *   <br><b>Legal values</b>:
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>operation is successful</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>operation failed</dd>
    *   </dl>
    */
    virtual HRESULT DefineKweUserAttr(const CATString &isTypeName, 
                                      CATListValCATAttributeInfos &olAttrInfos) ; 


 /**
  * Returns the computed value of the iKey attribute on specified iObject.   
  * @param ipiObject
  *   Input object.
  * @param iKey
  *   Computed attribute name.
  * @return
  *   An CATIValue value. @see CATIValue
  *
  */
    virtual  CATIValue* GetValue (CATIInstance*  ipiObject, 
                           const CATUnicodeString& iKey) ;


 

  private:
    // do not implement
    CATPspKweUserAttrAdapter (CATPspKweUserAttrAdapter &);
    CATPspKweUserAttrAdapter& operator=(CATPspKweUserAttrAdapter&);

};

#endif

