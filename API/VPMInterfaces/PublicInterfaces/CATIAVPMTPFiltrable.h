//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
//=============================================================================
// -*-C++-*-
#ifndef CATIAVPMTPFiltrable_H
#define CATIAVPMTPFiltrable_H

// =================================================================
// Includes
// =================================================================
// System
#include "GUIDVPMInterfaces.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h" // from ObjectModelerBase
#include "CATTime.h" 

// =================================================================
// Forward classes declaration
// =================================================================
class CATIAVPMTPConfigurable;
class CATICfgModification;
class CATICfgFilter;
//class CATICfgEffectivity;
class CATIConfigurableObject;
class CATIVpmPredicate_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIAVPMTPFiltrable;
#else
extern "C" const IID IID_CATIAVPMTPFiltrable;
#endif

//------------------------------------------------------------------
class ExportedByGUIDVPMInterfaces CATIAVPMTPFiltrable : public CATBaseUnknown
{
    CATDeclareInterface;

    public:
    // =======================================================
    // Method(s) 
    // =======================================================
    virtual HRESULT  __stdcall put_CurrentModificationForSuppress()=0;
    virtual HRESULT  __stdcall put_CurrentModificationForAdd()=0;

    virtual HRESULT  __stdcall get_ConfigurableObject(CATIAVPMTPConfigurable *& Configurable)=0;

    enum ModifType{MOVE, REPLACE, ADDCUT};
    virtual HRESULT __stdcall get_ModifiableObject(CATIAVPMTPFiltrable *& ModifiableObject,
						   CATIAVPMTPFiltrable::ModifType iModifType=CATIAVPMTPFiltrable::ADDCUT,
						   const CATTime & iApplicabilityForNewVersion=(const CATTime &)CATTime(0) )=0;

    virtual HRESULT  __stdcall get_ValidObjectList(CATLISTV(CATBaseUnknown_var) & oList)=0;
    virtual HRESULT  __stdcall get_ValidObjectList(
			CATLISTV(CATBaseUnknown_var) & oList,
			const CATIVpmPredicate_var & iCfgFilter)=0;
};
//-----------------------------------------------------------------
// Handler definition
//-----------------------------------------------------------------
CATDeclareHandler(CATIAVPMTPFiltrable, CATBaseUnknown);

#endif

