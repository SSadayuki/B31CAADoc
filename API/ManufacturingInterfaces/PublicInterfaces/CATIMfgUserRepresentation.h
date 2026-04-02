#ifndef CATIMfgUserRepresentation_H
#define CATIMfgUserRepresentation_H
//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES  1998
//=============================================================================
/**
* @CAA2Level L1
* @CAA2Usage U3
*/

// module
#include "MfgItfEnv.h"

// inheritance
#include "CATBaseUnknown.h"


#include "CATUnicodeString.h"
#include "CATIDocId.h"

// OLE iid
#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByMfgItfEnv IID_CATIMfgUserRepresentation ;
#else
extern "C" const IID IID_CATIMfgUserRepresentation ;
#endif

/**   
 * Interface dedicated to objects representation management.
 * <b>Role</b>: This interface offers services to manage mainly the user representation.<br>
 */

class ExportedByMfgItfEnv CATIMfgUserRepresentation : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:
/**
 *	Sets the User Representation Associated to the Object.
 *	@param iPathName The complete absolute path name to the External Object
 */
	  virtual HRESULT SetRepresentation (const CATUnicodeString &iPathName)=0;
/**
 *	Sets the User Representation Associated to the Object.
 *	@param iDoc The CATIDocId of the External Document
 */
	  virtual HRESULT SetRepresentation (CATIDocId *iDoc)=0;
/**
 *	Retrieves the User Representation Associated to the Object.
 *	@param oPathName The complete absolute path name to the External Object
 */
	  virtual HRESULT GetRepresentation (CATUnicodeString &oPathName)=0;
/**
 *	Retrieves the User Representation Associated to the Object.
 *	@param iDoc The CATIDocId of the External Object
 */
	  virtual HRESULT GetRepresentation (CATIDocId *&iDoc)=0;
/**
 *	Removes the User Representation Associated to the Object.
 */
	  virtual HRESULT UnsetRepresentation ()=0;

};

CATDeclareHandler(CATIMfgUserRepresentation, CATBaseUnknown) ;

#endif







