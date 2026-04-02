//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
//=============================================================================
#ifndef CATICfgMileStoneValue_h
#define CATICfgMileStoneValue_h

// =================================================================   
// Includes
// =================================================================   
#include "CATUnicodeString.h"
#include "CATICfgNormalValue.h"
#include "CATListOfCATICfgNormalValue.h"
#include "CATICfgInterval.h"

// System
#include "CATBaseUnknown.h"
#include "sequence_octet.h"

// Interface ID
#include "GUIDVPMInterfaces.h"
// =================================================================   
// Classes
// =================================================================   
    
class CATICfgMileStoneValue_var;
class CATICfgValue_var;
class CATIConfigurable_var;
class CATICfgMileStone_var;
class CATIVpmPEPerson_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATICfgMileStoneValue ;
#else
extern "C" const IID IID_CATICfgMileStoneValue ;
#endif

//-----------------------------------------------------------------------------
class ExportedByGUIDVPMInterfaces CATICfgMileStoneValue : public CATBaseUnknown {

    CATDeclareInterface;
    public:

/**
 * Get the MilestoneValue's owner.
 **/
	 virtual HRESULT GetUser(CATIVpmPEPerson_var &oPEPerson)const= 0;

/**
 * Set the MilestoneValue's owner.
 **/
	 virtual HRESULT SetUser(const CATIVpmPEPerson_var &iPEPerson) = 0;

/**
 * Get the MilestoneValue's Organization.
 **/
	 virtual HRESULT GetOrganization(CATUnicodeString &outOrganization) const= 0;

/**
 * Set the MilestoneValue's Organizationo.
 **/
	 virtual HRESULT SetOrganization(const CATUnicodeString &inOrganization) = 0;

/**
 * Get the current MileStoneValue's status in graph. 
 **/ 
	 virtual HRESULT GetStatus(CATUnicodeString &outStatus)  const = 0;
	 		 
	
    // Owner of the MS value
    virtual HRESULT GetCO(CATIConfigurable_var& outCV) =0 ;
    // Value. Better to use GetValue instead of GetNV
    virtual HRESULT GetValue(CATICfgValue_var& oValue) const =0;
    virtual HRESULT GetNV(CATICfgNormalValue_var& outNV) =0;

    // Set MileStoneValue
    // Better to use SetValue instead of SetNV
    virtual HRESULT SetValue(const CATICfgValue_var& iValue) =0;
    virtual HRESULT SetNV(const CATICfgNormalValue_var& inNV)=0;
    
    // Get/Set owning milestone
    virtual HRESULT GetMileStone(CATICfgMileStone_var &outMileStone) const = 0;
    virtual HRESULT SetMileStone(const CATICfgMileStone_var &inMileStone) = 0;
    
    // LifeCycle management
    virtual HRESULT Delete() = 0;
    
    // Debug purpose
    virtual HRESULT Dump() = 0;

    virtual HRESULT GetNlsRep(CATUnicodeString &oNlsRep) = 0;

};
//-----------------------------------------------------------------
// Handler definition 
//-----------------------------------------------------------------
CATDeclareHandler(CATICfgMileStoneValue, CATBaseUnknown);

#endif 
