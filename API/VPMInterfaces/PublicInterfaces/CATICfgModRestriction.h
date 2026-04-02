//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
//=============================================================================
#ifndef CATICfgModRestriction_h
#define CATICfgModRestriction_h

// =================================================================   
// Includes
// =================================================================   
#include "CATUnicodeString.h"
#include "CATListOfCATUnicodeString.h"
// System
#include "CATBaseUnknown.h"
// Interface ID
#include "GUIDVPMInterfaces.h"
// =================================================================   
// Classes
// =================================================================   
    
class CATICfgModRestriction_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATICfgModRestriction ;
#else
extern "C" const IID IID_CATICfgModRestriction ;
#endif

//-----------------------------------------------------------------------------
class ExportedByGUIDVPMInterfaces CATICfgModRestriction : public CATBaseUnknown {

    CATDeclareInterface;
    public:

	virtual HRESULT CopyMeVolatile(CATICfgModRestriction_var & oModRestriction) = 0;
	virtual HRESULT GetDescription(CATUnicodeString &oDescription) = 0;
	virtual HRESULT SetDescription(const CATUnicodeString &iDescription) = 0;
	virtual HRESULT GetStatus(CATUnicodeString& oTheStatus) = 0;
	virtual HRESULT SetStatus(CATUnicodeString& iTheStatus) = 0 ;
	virtual HRESULT GetName(CATUnicodeString &oName) = 0;
	virtual HRESULT AddRestriction(const CATUnicodeString & iModRestriction) = 0;
	virtual HRESULT RemoveRestriction(CATUnicodeString iModRestriction) = 0;
	virtual HRESULT GetAllRestrictions(CATListOfCATUnicodeString & oModRestrictionList) = 0;
	virtual HRESULT RemoveAllRestrictions() = 0;
	virtual HRESULT Delete() = 0;

};
//-----------------------------------------------------------------
// Handler definition 
//-----------------------------------------------------------------
CATDeclareHandler(CATICfgModRestriction, CATBaseUnknown);

#endif 
