//-----------------------------------------------------------------------------
// COPYRIGHT DASSAULT SYSTEMES 2001  

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */
//-----------------------------------------------------------------------------
#ifndef CATMfViewDefs_H
#define CATMfViewDefs_H

#include "MecModItfCPP.h" 
#include "CATUnicodeString.h"
#include "IUnknown.h"

/*
*  The possible values are:
*     MfDefault3DView : For the 3D view
*     MfUnfoldedView  : For an unfolded view
*/

/** @nodoc */
ExportedByMecModItfCPP extern const CATUnicodeString MfDefault3DView;
/** @nodoc */
ExportedByMecModItfCPP extern const CATUnicodeString MfUnfoldedView;
/** @nodoc */
ExportedByMecModItfCPP extern const CATUnicodeString MfViewForSimulation;
/** @nodoc */
ExportedByMecModItfCPP extern const CATUnicodeString MfUnsetView;
/** @nodoc */
ExportedByMecModItfCPP extern const CATUnicodeString Mf3DDisplayName;
/** @nodoc */
ExportedByMecModItfCPP extern const CATUnicodeString MfUnfoldedDisplayName;

/** @nodoc */ 
ExportedByMecModItfCPP extern const CATUnicodeString MfOldSheetMetalFP;
/** @nodoc */
ExportedByMecModItfCPP extern const CATUnicodeString MfSheetMetalFP;

/** @nodoc */
class ExportedByMecModItfCPP CATMfViewDefs
{
public :

  static HRESULT GetViewNumber(const CATUnicodeString& iViewName, int& oViewNumber);
  static HRESULT GetViewName(int iViewNumber ,CATUnicodeString& oViewName);


  static HRESULT ConvertOldViewName(const CATUnicodeString& oOldViewName ,CATUnicodeString& oNewViewName);

};

#endif

