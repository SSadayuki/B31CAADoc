#ifndef CATIAttributeAccess_h
#define CATIAttributeAccess_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/** 
* @CAA2Level L0
* @CAA2Usage U3
*/


// inherited class 
#include "CATBaseUnknown.h"

// load module
#include "CATLifSpecs.h"

#include "CATIValue.h"
#include "CATIInstance.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByCATLifSpecs IID_CATIAttributeAccess;
#else
extern "C" const IID IID_CATIAttributeAccess;
#endif


/**   
*  CATCkeBasicAdapter calls this interface for attributes that are not retrieved through
* CATIParmPublisher.
* @see CATIInstance
* @see CATIDynamicAttributes 
*/
class ExportedByCATLifSpecs CATIAttributeAccess : public CATBaseUnknown
{
public:
    /**
    * @nodoc
    * Gives the value of the iKey attribute on specified iObject.
    */
    virtual CATIValue* GetValue( CATIInstance* iObject,
        const CATUnicodeString& iKey) = 0;
    
    /**
    * @nodoc
    * Sets the value of the iKey attribute on specified iObject.
    */
    virtual HRESULT SetValue( CATIInstance* iObject,
        const CATUnicodeString& iKey,
        const CATIValue_var& iValue) = 0;
    
private:
    CATDeclareInterface;
}; 

CATDeclareHandler(CATIAttributeAccess, CATBaseUnknown);

#endif
