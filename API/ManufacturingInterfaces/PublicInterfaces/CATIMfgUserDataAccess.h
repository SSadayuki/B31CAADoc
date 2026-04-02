/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES 2002
//=============================================================================

#ifndef CATIMfgUserDataAccess_H
#define CATIMfgUserDataAccess_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATILinkableObject.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgUserDataAccess;
#else
extern "C" const IID IID_CATIMfgUserDataAccess;
#endif

/**
* Interface to add a user data feature to a manufacturing setup or a manufacturing program.
* <br><b>Role</b>: CATIMfgUserDataAccess has methods to set and retrieve a user data feature
* to a manufacturing setup or a manufacturing program.
*/

class ExportedByMfgItfEnv CATIMfgUserDataAccess : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:  

/**
* Sets a user data feature to the manufacturing setup or the manufacturing program.. 
* @param iDataFeature
*   The user data  feature to set 
*/

    virtual HRESULT SetUserDataFeature (const CATILinkableObject_var &iDataFeature) = 0; 

/**
* Retrieves the user data feature linked to the manufacturing setup or the manufacturing program.. 
* @param oDataFeature
*   The retrieved user data feature  
*/

    virtual HRESULT GetUserDataFeature (CATILinkableObject_var &oDataFeature) = 0; 

/**
* Removes the user data feature linked to the manufacturing setup or the manufacturing program.. 
*/

    virtual HRESULT RemoveUserDataFeature () = 0; 
};

CATDeclareHandler(CATIMfgUserDataAccess, CATBaseUnknown);

#endif


