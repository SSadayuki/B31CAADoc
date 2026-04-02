// -*-C++-*-
/** @CAA2Required */
/***********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS  */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPPEAR AT ANY TIME */
/***********************************************************************/

//=================================================================
// COPYRIGHT DASSAULT SYSTEMES 2003
//=================================================================
// VPM (c) Copyright Dassault Systemes 2003
//=================================================================
// Usage Notes:
//=================================================================
// History:
// January 2003 - NGS - Creation.
// July 2003 - RLX - Modification.
//=================================================================

#ifndef _CATIVpmPSExpandStruct_H
#define _CATIVpmPSExpandStruct_H

//=================================================================
// Includes
//=================================================================

// -- System
#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATCORBABoolean.h"

// --
#include "GUIDVPMInterfaces.h"

// -- Tech Pack
#include "CATListOfENOVITechPackVersion.h"
#include "ENOVITechPackVersion.h"

//=================================================================
// Forward declarations
//=================================================================

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIVpmPSExpandStruct;
#else
extern "C" const IID IID_CATIVpmPSExpandStruct;
#endif

class ExportedByGUIDVPMInterfaces CATIVpmPSExpandStruct : public CATBaseUnknown
{
    /** @nodoc */
    CATDeclareInterface;
    
public:

    /** @nodoc */
    virtual const CATBaseUnknown_var& GetObject() const = 0;

    /** @nodoc */
    virtual const CATBaseUnknown_var& GetReference() const = 0;

    /** @nodoc */
    virtual const CATUnicodeString&   GetObjectName() const = 0;
    
    /** @nodoc */
    virtual int     GetLevel() const = 0;

    /** @nodoc */
    virtual boolean GetUpToDate() const = 0;

    /** @nodoc */
    virtual HRESULT GetDocuments(CATLISTV(CATBaseUnknown_var)& oDocuments) const = 0;

    /** @nodoc */
    virtual HRESULT GetTechPacks(CATLISTV(ENOVITechPackVersion_var)& olTechPacks) const = 0;

};

/** @nodoc */
CATDeclareHandler(CATIVpmPSExpandStruct, CATBaseUnknown);

#endif    // _CATIVpmPSExpandStruct_H
