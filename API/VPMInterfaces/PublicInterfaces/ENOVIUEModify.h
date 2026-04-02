//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================
#ifndef ENOVIUEModify_H
#define ENOVIUEModify_H
/**
*  @CAA2Level L1
*  @CAA2Usage U5
*/

// =================================================================
// Includes
// =================================================================
#include "GUIDVPMInterfaces.h"
#include "CATBaseUnknown.h"

class CATTime;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_ENOVIUEModify;
#else
extern "C" const IID IID_ENOVIUEModify;
#endif
//------------------------------------------------------------------
/**
 * User Exit to implement in order to add specific treatment to identity changes on an object.
 */
 
class ExportedByGUIDVPMInterfaces ENOVIUEModify : public CATBaseUnknown
{
    CATDeclareInterface;

    public:

/** Indicates if the current object has been modified or not since the input date.
  * @param iRefDate The input date.
  * @return S_OK if the object is modified,
  *         S_FALSE if the object is not modified,
  *         E_FAIL in case of error.
 */
    virtual HRESULT IsModify(const CATTime & iRefDate)=0;
};
//-----------------------------------------------------------------
// Handler definition
//-----------------------------------------------------------------
CATDeclareHandler(ENOVIUEModify, CATBaseUnknown);

#endif

