/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES 2002
//=============================================================================

#ifndef CATIMfgUserDataFeature_H
#define CATIMfgUserDataFeature_H

/**
* @CAA2Level L1
* @CAA2Usage U5
*/

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"

class CATDialog;
class CATDlgFrame;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgUserDataFeature;
#else
extern "C" const IID IID_CATIMfgUserDataFeature;
#endif

/**
* Interface to manage a user data feature.
* <br><b>Role</b>: CATIMfgUserDataFeature has methods to manage a user data feature.
*/

class ExportedByMfgItfEnv CATIMfgUserDataFeature : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:  

/**
* Retrieves the editor of the user data feature.
* @param iFather
*   The father of the editor  
* @param oEditor
*   The editor of the user data feature  
*/

    virtual HRESULT GetEditor (CATDialog* iFather, CATDlgFrame*& oEditor) = 0; 

/**
* Retrieves the NLS description of the user data feature.
* @param oNLS
*   The NLS description of the user data feature  
*/

    virtual HRESULT GetNLSDescription (CATUnicodeString &oNLSDescription) = 0; 
};

CATDeclareHandler(CATIMfgUserDataFeature, CATBaseUnknown);

#endif


