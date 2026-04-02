#ifndef CATIStEditableFeature_H
#define CATIStEditableFeature_H

//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2005
//==============================================================================
//
// CATIStEditableFeature:
//   Class defining features editable in a running command.
//
//==============================================================================
// Usage Notes :
//  --------------------------------------------------
//   IMPORTANT : DASSAULT SYSTEMES INTERNAL USE ONLY.
//  --------------------------------------------------
//
//------------------------------------------------------------------------------
//  Inheritance : CATIStEditableFeature       (CAAFreeStyleItf FW)
//                  CATBaseUnknown            (System FW)
//==============================================================================
// Nov. 05   Creation                                    Thomas ECKERT
//==============================================================================

/**
 * @CAA2Level L0
 * @CAA2Usage U2
 */

#include "CAAFreeStyleItf.h"

#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCAAFreeStyleItf IID IID_CATIStEditableFeature;
#else
extern "C" const IID IID_CATIStEditableFeature ;
#endif

/**
 * Class defining features editable in a running command.
 * <br><b>Role</b>:  Identifies the features editable in a running command.
 * <li> Enables edited feature to not authorize its edition
 * <li> in order it not to be edited several times.
 */

class ExportedByCAAFreeStyleItf CATIStEditableFeature : public CATBaseUnknown
{
    CATDeclareInterface;

public :

    /**
    * Sets the edition authorization status of the feature.
    * @param iEditionStatus
    *   The edition authorization status :
    * <li> CATFalse : edition isn't authorized.
    * <li> CATTrue  : edition is authorized.
    */
    virtual HRESULT SetEditionAuthorized(const CATBoolean iEditionStatus) = 0;

    /**
    * Gets the edition authorization status of the feature.
    * @param oEditionStatus
    *   The edition authorization status :
    * <li> CATFalse : edition isn't authorized.
    * <li> CATTrue  : edition is authorized.
    */
    virtual HRESULT GetEditionAuthorized(CATBoolean& oEditionStatus) const = 0;
};

CATDeclareHandler(CATIStEditableFeature, CATBaseUnknown);

#endif
