/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================
#ifndef CATIMfgCustomizeRep_H
#define CATIMfgCustomizeRep_H

//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES  2001
//=============================================================================

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

// module
#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"

#include "CATBooleanDef.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgCustomizeRep ;
#else
extern "C" const IID IID_CATIMfgCustomizeRep;
#endif

/**
 * This interface is used in visu mechanism.<br>
 * It allows to know if the object has an associated 3D Rep and if
 * this one is permanent. It is used in highlight mechanism and
 * Rep tree definition.
 */

class ExportedByMfgItfEnv CATIMfgCustomizeRep: public CATBaseUnknown
{
    CATDeclareInterface;

public :

    /**
     * Method to know if the object has an associated 3D Rep.
     * @return TRUE if the associated Rep exists and is not a bag,
     *         FALSE otherwise (no Rep or a bag).
     */
    virtual CATBoolean HasRep() = 0;

    /**
     * Method to know if the associated 3D Rep is to be seen permanently.
     * @return TRUE if the associated Rep is permanent,
     *         FALSE if it is fugitive.
     */
    virtual CATBoolean HasPermanentRep() = 0;
};

CATDeclareHandler( CATIMfgCustomizeRep, CATBaseUnknown) ;

#endif

