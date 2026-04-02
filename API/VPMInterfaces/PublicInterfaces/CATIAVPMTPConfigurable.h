// -*-C++-*-
#ifndef CATIAVPMTPConfigurable_H
#define CATIAVPMTPConfigurable_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
 
// =================================================================
// Includes
// =================================================================
// System
#include "GUIDVPMInterfaces.h"
#include "CATBaseUnknown.h"
#include "CATBSTR.h"

// =================================================================
// Forward classes declaration
// =================================================================
class CATIAVPMObject;
class CATIConfigurableObject;
class CATICfgModification;
class CATICfgFilter;

class CATIConfigurableObject_var;
class CATUnicodeString;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIAVPMTPConfigurable;
#else
extern "C" const IID IID_CATIAVPMTPConfigurable;
#endif

//------------------------------------------------------------------
/**
 * Interface to manage Configurable Object.
 */
class ExportedByGUIDVPMInterfaces CATIAVPMTPConfigurable : public CATBaseUnknown
{
    CATDeclareInterface;

    public:
    //
    // =======================================================
    // Method(s) 
    // =======================================================

/**
 * @nodoc
 */
    // Will disappear: use the one at the end.
    virtual HRESULT  __stdcall AggregateConfigurableObject
			    (const CATBSTR & name,
			     CATIConfigurableObject *& ConfigurableObject)=0;

/**
 * @nodoc
 */
    virtual HRESULT  __stdcall DeleteConfigurableObject(long index)=0;

/**
 * Retrieves the Configurable Object associated to the PRC correspondig to the index.
 * @param index
 *   The index.
 * @param ConfigurableObject
 *   The CATIAVPMConfigurableObject.
 */
    virtual HRESULT  __stdcall get_ConfigurableObject
			    (long index,
			     CATIConfigurableObject *& ConfigurableObject)=0;

/**
 * Retrieves Count of the Configurable Object associated to the PRC.
 * @param NbItems
 *   The number of Configurable Objects.
 */
    virtual HRESULT  __stdcall get_ConfigurableObjectCount(long & NbItems)=0;

/**
 * @nodoc
 */
    virtual HRESULT  __stdcall Is_Configurable()=0;


    /** @nodoc */
    
    virtual HRESULT  AggregateConfigurableObject(const CATUnicodeString & name,
						 CATIConfigurableObject_var & ohCV)=0;

};
//-----------------------------------------------------------------
// Handler definition
//-----------------------------------------------------------------
/** @nodoc */
CATDeclareHandler(CATIAVPMTPConfigurable, CATBaseUnknown);

#endif

