// COPYRIGHT DASSAULT SYSTEMES  1999
//=============================================================================
//
// ENOVIPlugin:
// <explain concisely class main purpose and nature>
//
//=============================================================================
// Usage Notes:
//
// <describe here how you intend this class to be used>
//=============================================================================
// Nov. 99   Creation                                   Bcc
//=============================================================================

#ifndef ENOVIPlugin_H
#define ENOVIPlugin_H
/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

/**
 * @deprecated V5R13
 * Use interface ENOVIEventPlugin instead to comply with the new rules for plug-in code.
 * @see ENOVIEventPlugin
 */

#ifdef _WINDOWS_SOURCE
#ifdef __GUIDVPMInterfaces
#define ExportedByGUIDVPMInterfaces __declspec(dllexport)
#else
#define ExportedByGUIDVPMInterfaces __declspec(dllimport)
#endif
#else
#define ExportedByGUIDVPMInterfaces
#endif

#include "IUnknown.h"

//-----------------------------------------------------------------------------
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_ENOVIPlugin ;
#else
extern "C" const IID IID_ENOVIPlugin ;
#endif

//-----------------------------------------------------------------------------
class ExportedByGUIDVPMInterfaces ENOVIPlugin : public IUnknown 
{
    CATDeclareInterface;
    
    public:

    /**
     * @deprecated V5R13
     * Use method Init of interface ENOVIEventPlugin instead.
     * @see ENOVIEventPlugin
     */
    virtual HRESULT Init () = 0;
};

#endif

