//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================
#ifndef CATICfgMileStone_h
#define CATICfgMileStone_h

#define MILESTONENAMESIZE 40


/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// =================================================================   
// Includes
// =================================================================   
#include "CATUnicodeString.h"
#include "CATICfgNormalValue.h"
#include "CATIConfigurable.h"
#include "CATICfgInterval.h"
// System
#include "CATBaseUnknown.h"
// Interface ID
#include "GUIDVPMInterfaces.h"
// =================================================================   
// Classes
// =================================================================   
    
class CATICfgMileStone_var;
class CATICfgProgram_var;
class CATICfgMileStoneValue_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATICfgMileStone ;
#else
extern "C" const IID IID_CATICfgMileStone ;
#endif

//-----------------------------------------------------------------------------

class ExportedByGUIDVPMInterfaces CATICfgMileStone : public CATBaseUnknown {

    CATDeclareInterface;
    public:

    
/** @nodoc */
    virtual HRESULT GetName(CATUnicodeString& outName) = 0;
/** @nodoc */
    virtual HRESULT SetName(const CATUnicodeString& inName) = 0;

/** @nodoc */
    virtual HRESULT GetDefaultNV(CATICfgNormalValue_var& outNV) = 0;
/** @nodoc */
    virtual HRESULT SetDefaultNV(const CATICfgNormalValue_var& inNV) = 0;

/** @nodoc */
    virtual HRESULT GetProgram(CATICfgProgram_var& outProgram) = 0;
/** @nodoc */

/** @nodoc */
    virtual HRESULT Delete() = 0;
/** @nodoc */
    virtual HRESULT IsMileStoneUsed(int& outYesNo) = 0;    
/** @nodoc */
    virtual HRESULT Dump() = 0;

/**
 * Get the value of the milestone
 *  @param oVal
 *    value of the milestone.
 */
    virtual HRESULT GetValue(CATICfgValue_var& oVal) const = 0;
/**
 * Set the value of the milestone
 *  @param iVal
 *    Value of the milestone.
 */
    virtual HRESULT SetValue(const int iVal) = 0;

/**
 * Set the value of the milestone
 *  @param iVal
 *    Value of the milestone.
 */
    virtual HRESULT SetValue(const CATTime& iVal) = 0;

/** @nodoc */
    virtual HRESULT CreateMileStoneValue(const CATIConfigurable_var& inCO, CATICfgMileStoneValue_var& outMileStoneValue)=0;

/** @nodoc */
    virtual HRESULT CreateMileStoneValue(const CATIConfigurable_var& inCO,
					 const CATICfgNormalValue_var& inNV
					 ,CATICfgMileStoneValue_var& outMileStoneValue)=0;
	
};
//-----------------------------------------------------------------
// Handler definition 
//-----------------------------------------------------------------
CATDeclareHandler(CATICfgMileStone, CATBaseUnknown);

#endif 
