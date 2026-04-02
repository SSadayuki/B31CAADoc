#ifndef CATIPspKweUserAttr_H
#define CATIPspKweUserAttr_H

//	COPYRIGHT DASSAULT SYSTEMES 2004
/**
  * @CAA2Level L1
  * @CAA2Usage U4 CATPspKweUserAttrAdapter
  */

// Knowledgware
#include "CATListValCATAttributeInfos.h"


// System
#include "IUnknown.h"
#include "CATIValue.h"
#include "CATString.h"
#include "CATUnicodeString.h"


class CATIInstance;

extern "C" const IID IID_CATIPspKweUserAttr;

/**
 * Interface to allow User defined computed attributes.
 * <b>Role</b>: To allow user to define computed attributes on exposed types 
 * for the in the plant ship applications.  Implementations of this interface 
 * should derive from CATPspKweUserAttrAdapter.
 * In order to define user computed attributes this interface  should be implemented
 * on the late type corresponding to Knowledgeware package name like PipingLayout, HVACLayout etc.
 * @see CATPspKweUserAttrAdapter
 * <p><b>BOA  information</b>:  this  interface  can  be  implemented 
 *  using  the  BOA  (Basic  Object  Adapter). 
 *  To  know  more  about  the  BOA,  refer  to  the  CAA  Encyclopedia  home  page.   
 *  Click  Middleware  at  the  bottom  left,  then  click  the  Object  Modeler  tab  page. 
 *  Several  articles  deal  with  the  BOA.</p>
 */

class CATIPspKweUserAttr : public IUnknown
{
public:
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
                                    CATListValCATAttributeInfos &olAttrInfos) = 0; 


  
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
                         const CATUnicodeString& iKey) = 0;

  
};

#endif

