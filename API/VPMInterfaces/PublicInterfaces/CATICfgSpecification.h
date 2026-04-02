#ifndef CATICfgSpecification_H
#define CATICfgSpecification_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "sequence_octet.h"
#include "CATBaseUnknown.h"
#include "GUIDVPMInterfaces.h"

class CATUnicodeString;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATICfgSpecification ;
#else
extern "C" const IID IID_CATICfgSpecification ;
#endif

//-----------------------------------------------------------------------------

class ExportedByGUIDVPMInterfaces CATICfgSpecification: public CATBaseUnknown
{
    CATDeclareInterface;
  
    public:

//        virtual HRESULT  GetName(CATUnicodeString &oName) const = 0 ;
//        virtual HRESULT  GetDescription(CATUnicodeString &oDescription) const =0;
};
//-----------------------------------------------------------------
// Handler definition 
//-----------------------------------------------------------------
CATDeclareHandler(CATICfgSpecification, CATBaseUnknown);
//
#endif
