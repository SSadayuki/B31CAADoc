/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES 2002#include "CATUnicodeString.h"

//=============================================================================

#ifndef CATIMfgProfileContouringRelimitingElement_H
#define CATIMfgProfileContouringRelimitingElement_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATListOfCATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgProfileContouringRelimitingElement;
#else
extern "C" const IID IID_CATIMfgProfileContouringRelimitingElement;
#endif

/**
* Interface to manage a user rework feature.
* <br><b>Role</b>: CATIMfgProfileContouringRelimitingElement has methods 
* to manage start and end element of a profile contouring feature.
*/

class ExportedByMfgItfEnv CATIMfgProfileContouringRelimitingElement : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:  

/**
* Initializes the start element or the end element of a Profile Contouring feature.
*/

    virtual HRESULT SetRelimitingGeometry (CATUnicodeString& iGeometryType,
		CATLISTP(CATBaseUnknown) &iReference,
		CATBaseUnknown_var& iProduct,
		double& iOffset,
		CATUnicodeString& iPosition) = 0; 

/**
* Retrieves the start element or the end element of a Profile Contouring feature.
*/

    virtual HRESULT GetRelimitingGeometry (CATUnicodeString& iGeometryType,
		CATLISTP(CATBaseUnknown) &oReference,
		CATBaseUnknown_var& oProduct,
		double& oOffset,
		CATUnicodeString& oPosition) = 0; 

/**
* Removes the start element or the end element of a Profile Contouring feature.
*/

    virtual HRESULT RemoveRelimitingGeometry (CATUnicodeString& iGeometryType) = 0; 

};

CATDeclareHandler(CATIMfgProfileContouringRelimitingElement, CATBaseUnknown);

#endif


