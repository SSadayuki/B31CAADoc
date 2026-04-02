/* -*-c++-*- */
#ifndef CATIGSMUseNear_H
#define CATIGSMUseNear_H
// 
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGSMUseItfExportedBy.h"
#include "CATIMmiMechanicalFeature.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID  IID_CATIGSMUseNear;
#else
extern "C" const IID IID_CATIGSMUseNear;
#endif
/**
 * Interface to near feature.
 * <b>Role</b>: Allows you to choose a connexe feature from a none connexe feature result.
 * A reference element is given, the nearest criterium to the reference 
 * is used 
 * @see CATIGSMUseFactory#CreateNear
 */

class ExportedByCATGSMUseItf CATIGSMUseNear : public CATBaseUnknown
{
   CATDeclareInterface;

public: 

       /**
            * Gets multiple element.  
        *   @param oElem1
           *      feature 
 */
 virtual    HRESULT GetMultiElem     (CATIMmiMechanicalFeature_var & oElem1) = 0;

      /**
 * Gets reference element.  
        *   @param oElem2
 *      feature 
 */
 virtual    HRESULT GetReferenceElem (CATIMmiMechanicalFeature_var & oElem2) = 0;

      /**
 * Sets multiple elements.  
        *   @param iElem1
 *      feature 
 */
 virtual    HRESULT SetMultiElem   (const CATIMmiMechanicalFeature_var iElem1) = 0;

      /**
 * Sets reference element.  
        *   @param iElem2
 *      feature 
 */
 virtual    HRESULT SetReferenceElem (const CATIMmiMechanicalFeature_var iElem2) = 0;

};

CATDeclareHandler (CATIGSMUseNear, CATBaseUnknown);
#endif // CATIGSMUseNear_H
