/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES 2002
//=============================================================================

#ifndef CATIMfgMacroMotionsGeomMapping_H
#define CATIMfgMacroMotionsGeomMapping_H

/**
* @CAA2Level L1
* @CAA2Usage U5
*/

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgMacroMotionsGeomMapping;
#else
extern "C" const IID IID_CATIMfgMacroMotionsGeomMapping;
#endif

class CATUnicodeString;

/**
* Interface to manage the geometrical macro motions from a Design Feature and for a given Machining Operation type
* in the Machining Process instantiation context.
* <br><b>Role</b>: CATIMfgMacroMotionsGeomMapping has two methods to set macro motions geometry from the Design Feature geometry (or not).
* called for each operation of the machining process containing macro motions using geometrical references
* (as planes or points).
*/

class ExportedByMfgItfEnv CATIMfgMacroMotionsGeomMapping : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:  

/**
* Manage the Geometrical Mapping of geometrical macro motions with the design feature geometry in approach phase. 
* @param iActivityType
*   The Activity Type (Pocketing, Drilling,...)
* @param iMacroMotionType
*   The Macro Motion Type (1: Approach, 3:ReturnOneLevel, 4:ReturnTwoLevels, 5:Linking, 6:ReturnFinihPath)
* @param iElementaryMotionTypeList
*   The List of Elementary Motion Types (6: Go to a plane, 7: Goto a point,...)
* @param oGeometryList
*   The List of Geometries to be affected to each elementary Motion (A plane for "6" Elementary Motion Type)
*/
    virtual HRESULT MapGeomOnApproachMacroMotion (CATUnicodeString iActivityType, int iMacroMotionType,
      CATListOfInt iElementaryMotionTypeList, CATListValCATBaseUnknown_var &oGeometryList) = 0;

/**
* Manage the Geometrical Mapping of geometrical macro motions with the design feature geometry in retract phase. 
* @param iActivityType
*   The Activity Type (Pocketing, Drilling,...)
* @param iMacroMotionType
*   The Macro Motion Type (2:Retract, 3:ReturnOneLevel, 4:ReturnTwoLevels, 5:Linking, 6:ReturnFinihPath)
* @param iElementaryMotionTypeList
*   The List of Elementary Motion Types (6: Go to a plane, 7: Goto a point,...)
* @param oGeometryList
*   The List of Geometries to be affected to each elementary Motion (A plane for "6" Elementary Motion Type)
*/
    virtual HRESULT MapGeomOnRetractMacroMotion (CATUnicodeString iActivityType, int iMacroMotionType,
      CATListOfInt iElementaryMotionTypeList, CATListValCATBaseUnknown_var &oGeometryList) = 0;

};

CATDeclareHandler(CATIMfgMacroMotionsGeomMapping, CATBaseUnknown);

#endif


