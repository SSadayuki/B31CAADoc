/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES 2002
//=============================================================================

#ifndef CATIMfgPocketingStartingPoint_H
#define CATIMfgPocketingStartingPoint_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATListOfCATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgPocketingStartingPoint;
#else
extern "C" const IID IID_CATIMfgPocketingStartingPoint;
#endif

/**
* Interface to manage a user rework feature.
* <br><b>Role</b>: CATIMfgPocketingStartingPoint has methods 
* to manage start and end element of a pocketing feature.
*/

class ExportedByMfgItfEnv CATIMfgPocketingStartingPoint : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:  

/**
* Initializes the start point of a pocketing feature.
*/

    virtual HRESULT SetStartPointGeometry (CATUnicodeString& iGeometryPosition,
		CATBaseUnknown_var& iReference,
		CATBaseUnknown_var& iProduct,
		double& iOffset) = 0; 

/**
* Retrieves the start point of a pocketing feature.
*/

    virtual HRESULT GetStartPointGeometry (CATUnicodeString& oGeometryPosition,
		CATBaseUnknown_var& oReference,
		CATBaseUnknown_var& oProduct,
		double& oOffset) = 0; 

/**
* Removes the start point of a pocketing feature.
*/

    virtual HRESULT RemoveStartPointGeometry () = 0; 

};

CATDeclareHandler(CATIMfgPocketingStartingPoint, CATBaseUnknown);

#endif


