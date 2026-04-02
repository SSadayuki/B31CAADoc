/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================

#ifndef CATIMfgMappingForFollowCurve_H
#define CATIMfgMappingForFollowCurve_H

/**
* @CAA2Level L1
* @CAA2Usage U5
*/

#include "PmgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPmgItfEnv IID IID_CATIMfgMappingForFollowCurve;
#else
extern "C" const IID IID_CATIMfgMappingForFollowCurve;
#endif

/**
 * Interface to retrieve follow curve geometry from a design feature.
 * <br><b>Role</b>: CATIMfgMappingForFollowCurve has methods to retrieve geometry
 * from a design feature.
 */

class ExportedByPmgItfEnv CATIMfgMappingForFollowCurve : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:  

/**
* Retrieves the guiding curves of the design feature. 
* @param oGuidingElements
*   The guiding curves list
*/
    virtual HRESULT GetGuidingCurves (CATListValCATBaseUnknown_var & oGuidingElements) = 0;

    /**
* Retrieves the auxiliary guiding curves of the design feature.
* @param oAuxGuidingElements
*   The auxiliary guiding curves list
*/
    virtual HRESULT GetAuxiliaryGuidingCurves (CATListValCATBaseUnknown_var & oAuxGuidingElements) = 0;

/**
* Retrieves the checks of the design feature. 
* @param oChecks
*   The guiding curves list
*/
    virtual HRESULT GetChecks (CATListValCATBaseUnknown_var & oChecks) = 0;

/**
* Retrieves the relimiting elements of the design feature. 
* @param oFirstRelimitingElements
*   The first relimiting elements list
* @param oSecondRelimitingElements
*   The second relimiting elements list
*/
    virtual HRESULT GetRelimitingElements (CATListValCATBaseUnknown_var & oFirstRelimitingElements,
      CATListValCATBaseUnknown_var & oSecondRelimitingElements) = 0;

};

CATDeclareHandler(CATIMfgMappingForFollowCurve, CATBaseUnknown);

#endif


