/* -*-c++-*- */
#ifndef CATIGSMNear_H
#define CATIGSMNear_H
// 
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGitInterfacesExportedBy.h"
#include "CATISpecObject.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMNear;
#else
extern "C" const IID IID_CATIGSMNear;
#endif
/**
 * Interface to near feature.
 * <b>Role</b>: Allows you to choose a connexe feature from a none connexe feature result.
 * A reference element is given, the nearest criterium to the reference 
 * is used 
 * @see CATIGSMFactory#CreateNear
 */

class ExportedByCATGitInterfaces CATIGSMNear : public CATBaseUnknown
{
   CATDeclareInterface;

public: 

       /**
            * Gets multiple element.  
        *   @param oElem1
           *      feature 
 */
 virtual    HRESULT GetMultiElem     (CATISpecObject_var & oElem1) = 0;

      /**
 * Gets reference element.  
        *   @param oElem2
 *      feature 
 */
 virtual    HRESULT GetReferenceElem (CATISpecObject_var & oElem2) = 0;

      /**
 * Sets multiple elements.  
        *   @param iElem1
 *      feature 
 */
 virtual    HRESULT SetMultiElem   (const CATISpecObject_var iElem1) = 0;

      /**
 * Sets reference element.  
        *   @param iElem2
 *      feature 
 */
 virtual    HRESULT SetReferenceElem (const CATISpecObject_var iElem2) = 0;
      /**
 * Gets type 0:Near 1:Far.  
        *   @param oType
 *      feature 
 */
 virtual    HRESULT GetType (int & oType) = 0;
      /**
 * Sets type 0:Near 1:Far.
        *   @param iType
 *      feature 
 */
 virtual    HRESULT SetType (const int & iType) = 0;

};

CATDeclareHandler (CATIGSMNear, CATBaseUnknown);
#endif // CATIGSMNear_H
