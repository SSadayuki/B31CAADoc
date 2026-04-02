//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
//=============================================================================
// SRU(mar02) migration  get_AllObjectCount & get_AllObject vers get_AllObjects
#ifndef ENOVIAHistory_H
#define ENOVIAHistory_H

// =================================================================
// Includes
// =================================================================
// System
#include "GUIDVPMInterfaces.h"
#include "CATTypUtilit.h"
#include "CATLISTV_CATBaseUnknown.h"

// =================================================================
// Forward classes declaration
// =================================================================

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_ENOVIAHistory;
#else
extern "C" const IID IID_ENOVIAHistory;
#endif

//------------------------------------------------------------------
class ExportedByGUIDVPMInterfaces ENOVIAHistory : public CATBaseUnknown
{
    CATDeclareInterface;

    public:
    // =======================================================
    // Method(s) 
    // =======================================================
    virtual HRESULT __stdcall get_AllObjects(CATLISTV(CATBaseUnknown_var)& oHistoryList)=0;
    virtual HRESULT  __stdcall add_NextObject(ENOVIAHistory *NextObject)=0;
    virtual HRESULT  __stdcall get_NextObjectCount(long & NbItems)=0;
    virtual HRESULT  __stdcall get_NextObject(long index,ENOVIAHistory *& Next)=0;
    virtual HRESULT  __stdcall get_PreviousObject(ENOVIAHistory *& Previous)=0;
    virtual HRESULT  __stdcall get_LastObject(ENOVIAHistory *& Last)=0;
    virtual HRESULT  __stdcall get_OriginUuid(SEQUENCE_octet & Uuid)=0;
    virtual HRESULT  __stdcall get_OriginObject(ENOVIAHistory *& Origin)=0;
    
//-- SRU(mar02) je n'utilise plus le cache et je pense que cela va etre au moins aussi rapide
    // =======================================================
    // Private(s) Method(s) 
    // =======================================================
    //ATTENTION: na pas detruire ou releaser oList
    //mais releaser Origin
//    virtual HRESULT __stdcall get_AllObjectList(CATLISTV(CATBaseUnknown_var)* &oList, ENOVIAHistory *& Origin)=0;
};
//-----------------------------------------------------------------
// Handler definition
//-----------------------------------------------------------------
CATDeclareHandler(ENOVIAHistory, CATBaseUnknown);

#endif

