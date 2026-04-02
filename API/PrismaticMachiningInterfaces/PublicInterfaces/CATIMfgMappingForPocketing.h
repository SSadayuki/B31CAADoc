/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================

#ifndef CATIMfgMappingForPocketing_H
#define CATIMfgMappingForPocketing_H

/**
* @CAA2Level L1
* @CAA2Usage U5
*/

#include "PmgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPmgItfEnv IID IID_CATIMfgMappingForPocketing;
#else
extern "C" const IID IID_CATIMfgMappingForPocketing;
#endif

/**
* Interface to retrieve profile contouring geometry from a design feature.
* <br><b>Role</b>: CATIMfgMappingForPocketing has methods to retrieve geometry
* from a design feature.
*/

class ExportedByPmgItfEnv CATIMfgMappingForPocketing : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:  

/**
* Retrieves the part element of the design feature. 
* @param oPart
*   The part element
*/
    virtual HRESULT GetPart (CATBaseUnknown_var& oPart) = 0;
/**
* Retrieves the relimiting element of the design feature. 
* @param oRelimitingPlane
*   The relimiting plane 
*/
    virtual HRESULT GetRelimitingPlane (CATBaseUnknown_var & oRelimitingPlane) = 0;

/**
* Retrieves the guiding curves of the design feature. 
* @param oGuidingElements
*   The guiding curves list
*/
    virtual HRESULT GetGuidingCurves (CATListValCATBaseUnknown_var & oGuidingElements) = 0;

/**
* Retrieves the islands of the design feature. 
* @param oListOfIslands
*   The islands elements list
* @param oNbOfCurvesByIsland
*   The list of elements numbers per island
*/
    virtual HRESULT GetIslands (CATListValCATBaseUnknown_var& oListOfIslands, CATListOfInt& oNbOfCurvesByIsland) = 0;

};

CATDeclareHandler(CATIMfgMappingForPocketing, CATBaseUnknown);

#endif


