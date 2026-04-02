// -*-C++-*-
#ifndef _CATIAVPMObject_H
#define _CATIAVPMObject_H

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

#include "CATTypUtilit.h"
#include "CATSafeArray.h"

// =================================================================
// Forward classes declaration
// =================================================================
class CATIAVPMObjectVersion;
class CATICfgFilter;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIAVPMObject;
#else
extern "C" const IID IID_CATIAVPMObject;
#endif

//------------------------------------------------------------------
/**
 * Interface to create and manage CATIAVPM Object.
 */
class ExportedByGUIDVPMInterfaces CATIAVPMObject : public CATBaseUnknown
{
    /** @nodoc */
    CATDeclareInterface;

    public:
    //
    // =======================================================
    // Method(s) 
    // =======================================================
/**
 * Retrieves the Name of an Object.
 * @param NickName
 *   The Object Name.
 */
    virtual HRESULT   get_Name(CATBSTR & NickName)=0;

/**
 * @nodoc
 */
    virtual HRESULT   put_IND(const CATBSTR & Id,
			      const CATBSTR & Name,
			      const CATBSTR & Description)=0;

/**
 * @nodoc
 */
    virtual HRESULT   Remove()=0;

/**
 * @deprecated V5R12 use CATILinkableObject directly instead.
 * @nodoc
 */
    virtual HRESULT   get_HexaUuid(CATBSTR & Uuid)=0;

/**
 * @deprecated V5R12 use CATILinkableObject directly instead.
 * @nodoc
 */
    virtual HRESULT   get_Uuid(SEQUENCE_octet & Uuid)=0;

/**
 * @nodoc
 */
    virtual HRESULT   Print(long mode)=0;
};
//-----------------------------------------------------------------
// Handler definition
//-----------------------------------------------------------------
/** @nodoc */
CATDeclareHandler(CATIAVPMObject, CATBaseUnknown);

#endif
