/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  2002
//=============================================================================
#ifndef CATIMfgTPRemoveCutterProfileData_H
#define CATIMfgTPRemoveCutterProfileData_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"

#include "CATBaseUnknown.h"

#include "CATBooleanDef.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgTPRemoveCutterProfileData;
#else
extern "C" const IID IID_CATIMfgTPRemoveCutterProfileData;
#endif

/**
* Interface to remove cutter profile data on a tool path (MfgCompoundTraject object).<br>
* Cutter profile data are modelized through @href CATIMfgTPMultipleMotionWithProfileData objects.
* Removing cutter profile data mean replacing @href CATIMfgTPMultipleMotionWithProfileData objects
* by @href CATIMfgTPMultipleMotion objects (that do not contain cutter profile data).
*/

class ExportedByMfgItfEnv CATIMfgTPRemoveCutterProfileData : public CATBaseUnknown
{
  CATDeclareInterface ;
  
  public :

/**
*   Indicates if the tool path owns cutter profile data.<br>
*   @param oHasCutterProfileData
*      The value of indicator
*      <br><b>Legal values</b>:
*      <ul>
*      <li>TRUE : At least @href CATIMfgTPMultipleMotionWithProfileData object in the tool path </li>
*      <li>FALSE : No @href CATIMfgTPMultipleMotionWithProfileData object in the tool path </li>
*      </ul>
**/
	  virtual CATBoolean HasCutterProfileData (CATBoolean& oHasCutterProfileData) = 0;

/**
*   Removes cutter profile data in the tool path.<br>
**/
	  virtual CATBoolean RemoveCutterProfileData() = 0;
};

CATDeclareHandler(CATIMfgTPRemoveCutterProfileData, CATBaseUnknown);

#endif







