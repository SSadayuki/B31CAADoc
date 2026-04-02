/* -*-c++-*- */
#ifndef CATIGSMUseFillet_H
#define CATIGSMUseFillet_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGSMUseItfExportedBy.h"
#include "CATIMmiMechanicalFeature.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID  IID_CATIGSMUseFillet;
#else
extern "C" const IID IID_CATIGSMUseFillet;
#endif
/**
 * Interface to fillet type definition.
 * <b>Role</b>: Allows you to set/change the type of the fillet.
 * <tt>  FilletBiTangent = 0</tt>    
 * <tt>  FilletTriTangent = 1</tt>    
 */
#define CATGSMWFFilletBiTangent			0
#define CATGSMWFFilletTriTangent		1

class ExportedByCATGSMUseItf CATIGSMUseFillet : public CATBaseUnknown
{
   CATDeclareInterface;
public: 

 /**
 * Gets fillet type. 
 *   @param oT 
 *      Type of fillet 
 */
 virtual HRESULT GetFilletType(int & oT) = 0;

 /**
  * Sets fillet type.
  *   @param iT 
  *      Type of fillet 
 * @see CATIGSMUseFactory#CreateFilletType
  */
 virtual HRESULT SetFilletType(int  iT) = 0;
};
CATDeclareHandler (CATIGSMUseFillet, CATBaseUnknown);
#endif // CATGSMFillet_H
