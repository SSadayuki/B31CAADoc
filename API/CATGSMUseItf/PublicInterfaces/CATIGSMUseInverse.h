/* -*-c++-*- */
#ifndef CATIGSMUseInverse_H
#define CATIGSMUseInverse_H
 
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGSMUseItfExportedBy.h"
#include "CATIMmiMechanicalFeature.h"
#include "CATGSMOrientation.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID  IID_CATIGSMUseInverse;
#else
extern "C" const IID IID_CATIGSMUseInverse;
#endif

/**
 * Inverse.
 * <b>Role</b>: To inverse the sense of a GSD feature element. 
 * @see CATIGSMUseFactory#CreateInverse
 */
class ExportedByCATGSMUseItf CATIGSMUseInverse : public CATBaseUnknown
{
   CATDeclareInterface;

public: 

 /**
 * Inverts the element orientation.
 *   @return
 *      CATGSMSameOrientation   if the object is not inverted, 
    *      CATGSMInvertOrientation if the object is inverted,
    *      CATGSMKoOrientation     if the object can not be inverted.
 */
 virtual CATGSMOrientation        Invert               () = 0;

 /**
 * Gets element to invert. 
 *   @return
 *      the inverted element 
 */
 virtual CATIMmiMechanicalFeature_var       GetElem              () = 0;

 /**
 * Gets the element's orientation.
 *   @return
 *      CATGSMSameOrientation   if the object is not inverted, 
    *      CATGSMInvertOrientation if the object is inverted,
    *      CATGSMKoOrientation     if the object can not be inverted.
 */
 virtual CATGSMOrientation        GetOrientation       () = 0;

  /**
 * Sets element. 
    *   @param iElem 
 *          the element to be inverted
 */
 virtual HRESULT SetElem       (const CATIMmiMechanicalFeature_var iElem) = 0;

 /**
 * Sets orientation.
    *   @param iOrient
 *      CATGSMSameOrientation   if the object will not be inverted, 
    *      CATGSMInvertOrientation if the object will be inverted,
 *    
 */
 virtual HRESULT SetOrientation(const CATGSMOrientation iOrient) = 0;

};

CATDeclareHandler (CATIGSMUseInverse, CATBaseUnknown);
#endif // CATIGSMUseInverse_H
