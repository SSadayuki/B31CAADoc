/* -*-c++-*- */
#ifndef CATIReplaceUI_H
#define CATIReplaceUI_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/** 
  * @CAA2Level L1
  * @CAA2Usage U5
  */ 

#include "CATBaseUnknown.h"
#include "CATInteractiveInterfaces.h"

class CATUnicodeString;
class CATPathElement;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATInteractiveInterfaces IID IID_CATIReplaceUI;
#else
extern "C" const IID IID_CATIReplaceUI;
#endif

/**
  * Replace.
  * <b>Role</b>: Implement this interface for replace operation.
  * Retrieve in a CATPathElement a valid element for replace.
  * Called by replace command. 
  * @see CATPathElement
  */

class ExportedByCATInteractiveInterfaces CATIReplaceUI: public CATBaseUnknown
{
   CATDeclareInterface;
public:
 
  /**
    * Find the replacing element. 
    * <br><b>Postcondition</b>: The caller has to release oFoundElement.
    *   @param iRole 
    *      The name of the attribute which references the element to be replaced.
    *   @param iSelection 
    *      The path element selection.
    *   @param iOldValue 
    *      The element to be replaced. In case of iRole is a tk_list attribute, 
    *      use iSelection with iRole to locate which element of the list is being replaced. 
    *   @param oFoundElement 
    *      The element extracted from iSelection which grants the replace operation.
    *   @return 
    *      S_OK if OK, E_FAIL if failed.
    */	
   virtual HRESULT FindValidElementForReplace(const CATUnicodeString& iRole,
                                              const CATPathElement* iSelection,
                                              const CATBaseUnknown* iOldValue, 
                                              CATBaseUnknown*& oFoundElement)=0;
   
};

CATDeclareHandler (CATIReplaceUI, CATBaseUnknown);

#endif

