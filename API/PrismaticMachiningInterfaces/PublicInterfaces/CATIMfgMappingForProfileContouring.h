/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================

#ifndef CATIMfgMappingForProfileContouring_H
#define CATIMfgMappingForProfileContouring_H

/**
* @CAA2Level L1
* @CAA2Usage U5
*/

#include "PmgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATPoint.h"
#include "CATLISTV_CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPmgItfEnv IID IID_CATIMfgMappingForProfileContouring;
#else
extern "C" const IID IID_CATIMfgMappingForProfileContouring;
#endif

/**
* Interface to retrieve profile contouring geometry from a design feature in 
* "between 2 planes" mode.
* <br><b>Role</b>: CATIMfgMappingForProfileContouring has methods to retrieve geometry
* from a design feature.
*/

class ExportedByPmgItfEnv CATIMfgMappingForProfileContouring : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:  

/**
* Retrieves the part element of the design feature. 
* @param oPart
*   The part element which has to be planed
*/
    virtual HRESULT GetPart (CATBaseUnknown_var & oPartElement) = 0;

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
* @param oSide
*   The side to be machined
*   In case of closed contour, = 0 if the inner profile is machined, = 1 otherwise
*   In case of open contour, = 0 if the right side is machined, = 1 otherwise
* @param oExtremity
*   One of the contour extremities which enables to define the left and right sides
*   according to the tool axis
*/
    virtual HRESULT GetGuidingCurves (CATListValCATBaseUnknown_var & oGuidingElements, int & oSide, CATPoint* oExtremity = NULL) = 0;

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

CATDeclareHandler(CATIMfgMappingForProfileContouring, CATBaseUnknown);

#endif


