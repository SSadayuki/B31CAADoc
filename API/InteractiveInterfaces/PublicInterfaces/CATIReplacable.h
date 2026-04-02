/* -*-c++-*- */
#ifndef CATIReplacable_H
#define CATIReplacable_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/** 
  * @CAA2Level L1
  * @CAA2Usage U5
  */ 


#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATInteractiveInterfaces.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATInteractiveInterfaces IID IID_CATIReplacable;
#else
extern "C" const IID IID_CATIReplacable;
#endif

/**
  * Replace authorization.
  * <b>Role</b>:  Implement this interface to authorize the replace operation.
  * Called by replace command. 
  */
class ExportedByCATInteractiveInterfaces CATIReplacable: public CATBaseUnknown
{
   CATDeclareInterface;
public:
   
  /**
    * Replace authorization.
    *   @param iRole 
    *      The name of the attribute which references the element to be replaced.
    *   @param iToReplace 
    *      The element to be replaced. 
    *   @param oAnswer 
    *      The answer
    *      <br><b>Legal values</b>: 1 if replace operation is allowed, 0 if replace operation is not allowed
    *   @return 
    *      S_OK if OK, E_FAIL if failed.
    */	
   virtual HRESULT AllowReplace(const CATUnicodeString& iRole, 
                                const CATBaseUnknown_var& iToReplace,
                                int& oAnswer) = 0;
                                         
};

CATDeclareHandler (CATIReplacable, CATBaseUnknown);

#endif

