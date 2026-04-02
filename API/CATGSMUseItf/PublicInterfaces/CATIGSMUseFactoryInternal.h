
/* -*-c++-*- */
#ifndef CATIGSMUseFactoryInternal_H
#define CATIGSMUseFactoryInternal_H
 
// COPYRIGHT DASSAULT SYSTEMES 2004

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGSMUseItfExportedBy.h"
#include "CATBaseUnknown.h"

// Enumerations 
#include "CATGSMBasicLawDef.h"

// Declarations
class CATIGSMUseIntegratedLaw_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID  IID_CATIGSMUseFactoryInternal;
#else
extern "C" const IID IID_CATIGSMUseFactoryInternal;
#endif

/**
 * Factory of internal elements of Generative Shape Design workshop.
 * <b>Role</b>: Creation of internal Shape Design feature.
 * <p> 
 * All methods described here work on CATIMmiMechanicalFeature (for geometrical elements)
 * and CATICkeParm (for data such as lengths, angles, ratios...).
 * <p>
 * Note: If the creation fails, the methods return NULL_var.
 * <p>
 * Internal feature needs to be aggregated in a GSMGeom and cannot be seen in 3D and Graph. 
 * <p>
 */
class ExportedByCATGSMUseItf CATIGSMUseFactoryInternal : public CATBaseUnknown
{
   CATDeclareInterface;
   
public: 
  
   /** 
    * Creates Integrated Law. 
    *   @param iType
    *       Type of law
    * @see CATIGSMUseIntegratedLaw, CATGSMBasicLawType
    */
   virtual CATIGSMUseIntegratedLaw_var CreateIntegratedLaw (CATGSMBasicLawType iType=CATGSMBasicLawType_None) = 0;
    

};
CATDeclareHandler (CATIGSMUseFactoryInternal, CATBaseUnknown);
#endif // CATGSMFactory_H


