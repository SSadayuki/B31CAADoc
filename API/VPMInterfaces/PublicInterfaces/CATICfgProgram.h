//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================
#ifndef CATICfgProgram_h
#define CATICfgProgram_h

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// =================================================================   
// Includes
// =================================================================   
#include "CATUnicodeString.h"
// System
#include "CATBaseUnknown.h"
// Interface ID
#include "GUIDVPMInterfaces.h"
#include "CATIConfigurableObject.h"
#include "CATListOfCATIConfigurableObject.h"
#include "CATListOfCATICfgMileStone.h"
#include "CATListOfCATIConfigurable.h"
// =================================================================   
// Classes
// =================================================================   
    
class CATICfgProgram_var;
class CATICfgMileStone_var;
class CATListValCATICfgMileStone_var;
class CATListValCATIConfigurable_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATICfgProgram ;
#else
extern "C" const IID IID_CATICfgProgram ;
#endif

//-----------------------------------------------------------------------------
class ExportedByGUIDVPMInterfaces CATICfgProgram : public CATBaseUnknown {

    CATDeclareInterface;
 public:
    
/**
 * Create a milestone.
 *  @param inShortName
 *    The name of the milestone.
 *
 *  @param outMileStone
 *    The created milestone.
 */
    virtual HRESULT CreateMileStone(const CATUnicodeString& inShortName, CATICfgMileStone_var& outMileStone) = 0;

/** @nodoc */
    virtual HRESULT IsAttachedToCO(const CATIConfigurable_var& inCO, int& TrueFalse) = 0;

/** @nodoc */
    virtual HRESULT GetListOfMileStones(CATListValCATICfgMileStone_var& outMileStoneList) = 0;

/** @nodoc */
    virtual HRESULT AddMileStone(const CATICfgMileStone_var& inMileStone) = 0;

/** @nodoc */
    virtual HRESULT RemoveAllMileStones() = 0;

/** @nodoc */
    virtual HRESULT GetListOfCO(CATListValCATIConfigurable_var& outCOList) = 0;

/** @nodoc */
    virtual HRESULT GetName(CATUnicodeString& outName) = 0;

/** @nodoc */
    virtual HRESULT SetName(const CATUnicodeString& inName) = 0;

/** @nodoc */
    virtual HRESULT Delete() = 0;
    
/** @nodoc */
    virtual HRESULT Dump() = 0;
    
};
//-----------------------------------------------------------------
// Handler definition 
//-----------------------------------------------------------------
CATDeclareHandler(CATICfgProgram, CATBaseUnknown);

#endif 
