#ifndef CATIAVPMUEVersionning_h
#define CATIAVPMUEVersionning_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */
 
#ifdef   _WINDOWS_SOURCE
#ifdef   __VPMProIDL
#define  ExportedByVPMProIDL   __declspec(dllexport)
#else
#define  ExportedByVPMProIDL   __declspec(dllimport)
#endif
#else
#define  ExportedByVPMProIDL
#endif

#include "CATBSTR.h"
#include "CATIABase.h"
#include "CATUnicodeString.h"

class CATIAVPMObjectVersion;
class CATIAVPMObjectMaster;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByVPMProIDL IID IID_CATIAVPMUEVersionning;
#else
extern "C" const IID IID_CATIAVPMUEVersionning;
#endif

    /**
     * Represents the Versionning possibilities User Exit.
     * There is a User Exit for each case :
     * - GetNewVersion
     * - GetPreferedVersion
     */

class ExportedByVPMProIDL CATIAVPMUEVersionning : public CATBaseUnknown
{
    CATDeclareInterface;

public:

    // --- GetNewVersion case
    /**
     * User Exit called when an ObjectVersion is created from a CATIAVPMObjectMaster.
     * @param in long iPrevVersionNumber
     *   The number of the previous version
     * @param in CATBSTR iPrevVersionValue
     *   The string value of the previous version
     * @param out CATBSTR oVersionValue
     *   The string value of the new version.
     *   This must be newly allocated, and will be freed by the caller using CATFreeString from FW System.
     */
    virtual HRESULT GetNewVersion(long iPrevVersionNumber, const CATBSTR & iPrevVersionValue, CATBSTR & oVersionValue)=0;


    /**
     * User Exit called when an ObjectVersion is created from a CATIAVPMObjectMaster.
     * @param in long iPrevVersionNumber
     *   The number of the previous version
     * @param in CATUnicodeString iPrevVersionValue
     *   The string value of the previous version
     * @param out CATUnicodeString oVersionValue
     *   The string value of the new version.
     */
    virtual HRESULT GetNewVersion(long iPrevVersionNumber, const CATUnicodeString & iPrevVersionValue, CATUnicodeString & oVersionValue)=0;



    // --- GetPreferedVersion case
    /**
     * User Exit called when an ObjectVersion is queried from a CATIAVPMObjectMaster.
     * @param out CATIAVPMObjectVersion oVersion
     *   The required object version
     */
    virtual HRESULT GetPreferedVersion(CATIAVPMObjectVersion *& oVersion)=0;


};
//-----------------------------------------------------------------
// Handler definition
//-----------------------------------------------------------------
/** @nodoc */
CATDeclareHandler(CATIAVPMUEVersionning, CATBaseUnknown);
#endif
