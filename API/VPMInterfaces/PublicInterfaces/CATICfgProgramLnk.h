//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
//=============================================================================
#ifndef CATICfgProgramLnk_h
#define CATICfgProgramLnk_h

// =================================================================   
// Includes
// =================================================================   
#include "CATUnicodeString.h"
// System
#include "CATBaseUnknown.h"
// Interface ID
#include "GUIDVPMInterfaces.h"


// =================================================================   
// Classes
// =================================================================   
    
class CATICfgProgramLnk_var;
class CATICfgProgram_var;
class CATIConfigurable_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATICfgProgramLnk ;
#else
extern "C" const IID IID_CATICfgProgramLnk ;
#endif

//-----------------------------------------------------------------------------
class ExportedByGUIDVPMInterfaces CATICfgProgramLnk : public CATBaseUnknown {

    CATDeclareInterface;
 public:
    
    virtual HRESULT SetProgram(const CATICfgProgram_var& inProgram) = 0;
    virtual HRESULT GetProgram(CATICfgProgram_var& outProgram) = 0;
    
    virtual HRESULT GetCO(CATIConfigurable_var& outCO) = 0;

    virtual HRESULT Delete() = 0;
    
    virtual HRESULT Dump() = 0;
    
};
//-----------------------------------------------------------------
// Handler definition 
//-----------------------------------------------------------------
CATDeclareHandler(CATICfgProgramLnk, CATBaseUnknown);

#endif 
