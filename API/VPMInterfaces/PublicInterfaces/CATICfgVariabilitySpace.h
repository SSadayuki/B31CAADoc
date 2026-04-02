#ifndef _CATICFGVARIABILITYSPACE_H_
#define _CATICFGVARIABILITYSPACE_H_

// COPYRIGHT DASSAULT SYSTEMES 2004

/**
 *   @CAA2Level L1
 *   @CAA2Usage U3
 */


#include "CATIAV5Level.h"
#include "CATBaseUnknown.h"
#include "GUIDVPMInterfaces.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATICfgVariabilitySpace ;
#else
extern "C" const IID IID_CATICfgVariabilitySpace ;
#endif

class CATUnicodeString ;
class CATIConfigurable_var;
class CATIConfigurableObject_var;

//=================================================================

/**
 * Interface to manage Variability Space object.
 * <b>Role</b>: A Variability Space Object is design to give direct access to 
 *        <ul>
 *        <li> Predifined Query </li>
 *        <li> Predifined Effectivity </li>
 *        <li> Categories and their associated specifications </li>
 *        </ul>
 */
class ExportedByGUIDVPMInterfaces CATICfgVariabilitySpace : public CATBaseUnknown {

     CATDeclareInterface;

public:

     /**
      * Get the Variability Space name. 
      *  @param out_Name
      *    Name of the Variability Space
      */
     virtual HRESULT  GetName( CATUnicodeString &out_Name ) const = 0 ;

     /**
      * Get the Variability Space Status. 
      *  @param out_Name
      *    Status of the Variability Space
      */
     virtual HRESULT  GetStatus( CATUnicodeString &out_Status ) const = 0 ;
     
     /**
      * Get the  Variability Space Configurable.
      *  @param out_Configurable
      *    Configurable associated to the Variability Space
      */
     virtual HRESULT  GetConfigurable(CATIConfigurable_var &out_Configurable) const = 0 ;
     
     /**
      * Get the  Variability Space Configurable.
      *  @param out_Configurable
      *    Configurable associated to the Variability Space
      */
     virtual HRESULT  GetConfigurableObject(CATIConfigurableObject_var &out_Status) const = 0 ;

};

// Handler definition
CATDeclareHandler(CATICfgVariabilitySpace, CATBaseUnknown);


#endif // _CATICFGVARIABILITYSPACE_H_
