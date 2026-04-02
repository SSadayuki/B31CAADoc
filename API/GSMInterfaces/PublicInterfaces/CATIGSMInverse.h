/* -*-c++-*- */
#ifndef CATIGSMInverse_H
#define CATIGSMInverse_H
 
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGitInterfacesExportedBy.h"
#include "CATISpecObject.h"
#include "CATGSMOrientation.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMInverse;
#else
extern "C" const IID IID_CATIGSMInverse;
#endif

/**
 * Inverse.
 * <b>Role</b>: To inverse the sense of a GSD feature element. 
 * @see CATIGSMFactory#CreateInverse
 */
class ExportedByCATGitInterfaces CATIGSMInverse : public CATBaseUnknown
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
 virtual CATISpecObject_var       GetElem              () = 0;

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
 virtual HRESULT SetElem       (const CATISpecObject_var iElem) = 0;

 /**
 * Sets orientation.
    *   @param iOrient
 *      CATGSMSameOrientation   if the object will not be inverted, 
    *      CATGSMInvertOrientation if the object will be inverted,
 *    
 */
 virtual HRESULT SetOrientation(const CATGSMOrientation iOrient) = 0;

};

CATDeclareHandler (CATIGSMInverse, CATBaseUnknown);
#endif // CATIGSMInverse_H
