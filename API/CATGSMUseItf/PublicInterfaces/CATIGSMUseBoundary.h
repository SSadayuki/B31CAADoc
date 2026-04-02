/* -*-c++-*- */
#ifndef CATIGSMUseBoundary_H
#define CATIGSMUseBoundary_H
// 
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGSMUseItfExportedBy.h"
#include "CATIMmiMechanicalFeature.h"
#include "CATIGSMBoundaryDefs.h"
#include "CATGSMOrientation.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID  IID_CATIGSMUseBoundary;
#else
extern "C" const IID IID_CATIGSMUseBoundary;
#endif
/**
 * Interface to boundary surfacic features.
 * <b>Role</b>: Allows you to set/get boundary of an element 
 * @see CATIGSMUseFactory#CreateBoundary
 */

class ExportedByCATGSMUseItf CATIGSMUseBoundary : public CATBaseUnknown
{
   CATDeclareInterface;

public: 
 /**
 * Gets reference element.
 *   @return
 *      surfacic feature 
 */
 virtual CATIMmiMechanicalFeature_var       GetElem              () = 0;

 /**
 * Gets support. 
 *   @return
 *      surfacic feature 
 */
 virtual CATIMmiMechanicalFeature_var       GetSupport           () = 0;

 /**
 * Gets to. 
 *   @return
 *      surfacic feature 
 */
 virtual CATIMmiMechanicalFeature_var       GetTo                () = 0;

 /**
 * Gets from. 
 *   @return
 *      surfacic feature 
 */
 virtual CATIMmiMechanicalFeature_var       GetFrom              () = 0;

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
 virtual HRESULT SetElem            (const CATIMmiMechanicalFeature_var      iElem) = 0;

 /**
 * Sets support. 
        *   @param iElem 
 *      support 
 */
 virtual HRESULT SetSupport         (const CATIMmiMechanicalFeature_var      iElem) = 0;

 /**
 * Sets to. 
        *   @param iElem 
 *      reference feature 
 */
 virtual HRESULT SetTo              (const CATIMmiMechanicalFeature_var      iElem) = 0;

 /**
 * Sets from.
        *   @param iElem 
 *      reference feature 
 */
 virtual HRESULT SetFrom            (const CATIMmiMechanicalFeature_var      iElem) = 0;

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

CATDeclareHandler (CATIGSMUseBoundary, CATBaseUnknown);
#endif // CATIGSMUseBoundary_H
