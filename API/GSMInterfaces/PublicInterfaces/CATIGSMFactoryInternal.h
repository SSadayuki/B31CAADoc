
/* -*-c++-*- */
#ifndef CATIGSMFactoryInternal_H
#define CATIGSMFactoryInternal_H
 
// COPYRIGHT DASSAULT SYSTEMES 2004

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGitInterfacesExportedBy.h"
#include "CATBaseUnknown.h"

// Enumerations 
#include "CATGSMBasicLawDef.h"

// Declarations
class CATIGSMIntegratedLaw_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMFactoryInternal;
#else
extern "C" const IID IID_CATIGSMFactoryInternal;
#endif

/**
 * Factory of internal elements of Generative Shape Design workshop.
 * <b>Role</b>: Creation of internal Shape Design feature.
 * <p> 
 * All methods described here work on CATISpecObject (for geometrical elements)
 * and CATICkeParm (for data such as lengths, angles, ratios...).
 * <p>
 * Note: If the creation fails, the methods return NULL_var.
 * <p>
 * Internal feature needs to be aggregated in a GSMGeom and cannot be seen in 3D and Graph. 
 * <p>
 */
class ExportedByCATGitInterfaces CATIGSMFactoryInternal : public CATBaseUnknown
{
   CATDeclareInterface;
   
public: 
  
   /** 
    * Creates Integrated Law. 
    *   @param iType
    *       Type of law
    * @see CATIGSMIntegratedLaw, CATGSMBasicLawType
    */
   virtual CATIGSMIntegratedLaw_var CreateIntegratedLaw (CATGSMBasicLawType iType=CATGSMBasicLawType_None) = 0;
    

};
CATDeclareHandler (CATIGSMFactoryInternal, CATBaseUnknown);
#endif // CATGSMFactory_H


