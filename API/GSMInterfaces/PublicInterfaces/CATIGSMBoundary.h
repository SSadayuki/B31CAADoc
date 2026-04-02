/* -*-c++-*- */
#ifndef CATIGSMBoundary_H
#define CATIGSMBoundary_H
// 
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGitInterfacesExportedBy.h"
#include "CATISpecObject.h"
#include "CATIGSMBoundaryDefs.h"
#include "CATGSMOrientation.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMBoundary;
#else
extern "C" const IID IID_CATIGSMBoundary;
#endif
/**
 * Interface to boundary surfacic features.
 * <b>Role</b>: Allows you to set/get boundary of an element 
 * @see CATIGSMFactory#CreateBoundary
 */

class ExportedByCATGitInterfaces CATIGSMBoundary : public CATBaseUnknown
{
   CATDeclareInterface;

public: 
 /**
 * Gets reference element.
 *   @return
 *      surfacic feature 
 */
 virtual CATISpecObject_var       GetElem              () = 0;

 /**
 * Gets support. 
 *   @return
 *      surfacic feature 
 */
 virtual CATISpecObject_var       GetSupport           () = 0;

 /**
 * Gets to. 
 *   @return
 *      surfacic feature 
 */
 virtual CATISpecObject_var       GetTo                () = 0;

 /**
 * Gets from. 
 *   @return
 *      surfacic feature 
 */
 virtual CATISpecObject_var       GetFrom              () = 0;

 /**
 * Gets type of boundary.  
² *   @return
 *     bboundary propagation type 
 */
 virtual CATIGSMBoundaryPropag    GetType              () = 0;

 /**
 * Gets from orientation.
 *   @return
 *      orientation 
 */
 virtual CATGSMOrientation        GetFromOrientation   () = 0;

 /**
 * Gets reference element. 
 *   @return
 *      orientation 
 */
 virtual CATGSMOrientation        GetToOrientation     () = 0;

 /**
 * Sets reference feature. 
        *   @param iElem 
 *      reference feature 
 */
 virtual HRESULT SetElem            (const CATISpecObject_var      iElem) = 0;

 /**
 * Sets support. 
        *   @param iElem 
 *      support 
 */
 virtual HRESULT SetSupport         (const CATISpecObject_var      iElem) = 0;

 /**
 * Sets to. 
        *   @param iElem 
 *      reference feature 
 */
 virtual HRESULT SetTo              (const CATISpecObject_var      iElem) = 0;

 /**
 * Sets from.
        *   @param iElem 
 *      reference feature 
 */
 virtual HRESULT SetFrom            (const CATISpecObject_var      iElem) = 0;

 /**
 * Sets type. 
        *   @param iType 
 *      type boundary 
 */
 virtual HRESULT SetType            (CATIGSMBoundaryPropag   iType) = 0;

 /**
 * Sets from  orientation.
        *   @param iType
 *      orientation
 */
 virtual HRESULT SetFromOrientation (CATGSMOrientation       iType ) = 0;

 /**
 * Sets to orientation.
        *   @param iType
 *      orientation
 */
 virtual HRESULT SetToOrientation   (CATGSMOrientation       iType) = 0;
};

CATDeclareHandler (CATIGSMBoundary, CATBaseUnknown);
#endif // CATIGSMBoundary_H
