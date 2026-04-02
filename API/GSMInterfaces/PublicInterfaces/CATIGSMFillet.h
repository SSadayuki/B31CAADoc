/* -*-c++-*- */
#ifndef CATIGSMFillet_H
#define CATIGSMFillet_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGitInterfacesExportedBy.h"
#include "CATISpecObject.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMFillet;
#else
extern "C" const IID IID_CATIGSMFillet;
#endif
/**
 * Interface to fillet type definition.
 * <b>Role</b>: Allows you to set/change the type of the fillet.
 * <tt>  FilletBiTangent = 0</tt>    
 * <tt>  FilletTriTangent = 1</tt>    
 */
#define CATGSMWFFilletBiTangent			0
#define CATGSMWFFilletTriTangent		1

class ExportedByCATGitInterfaces CATIGSMFillet : public CATBaseUnknown
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
 * @see CATIGSMFactory#CreateFilletType
  */
 virtual HRESULT SetFilletType(int  iT) = 0;
};
CATDeclareHandler (CATIGSMFillet, CATBaseUnknown);
#endif // CATGSMFillet_H
