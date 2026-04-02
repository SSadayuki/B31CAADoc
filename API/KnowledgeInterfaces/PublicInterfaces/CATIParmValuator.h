#ifndef CATIParmValuator_h
#define CATIParmValuator_h


// COPYRIGHT DASSAULT SYSTEMES 1999

/** 
 * @CAA2Level L1
 * @CAA2Usage U4 CATParmValuatorAdapter 
 */

// module declaration
#include "KnowledgeItf.h"

// inherited from
#include "CATBaseUnknown.h"
#include "CATICkeRelationForwards.h"

class CATICkeParm_var;

// OLE iid
#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByKnowledgeItf IID_CATIParmValuator;
#else
extern "C" const IID IID_CATIParmValuator;
#endif

/**   
 * Interface dedicated to declare objects that valuates parameters.
 * <b>Role</b>: Used to explain which element is Valuator a parameter.
 *
 * <p><b>BOA information</b>: this interface CAN be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 *
 */
//-----------------------------------------------------------------------------
class ExportedByKnowledgeItf CATIParmValuator: public CATBaseUnknown
{

public :

/**
* Returns the NLS view of this object.
* This method is used to show the user who is Valuator a parameter.<br>
* whatever it is (it can be the body of formula......for example)<br>
*/
virtual CATUnicodeString  Show    () const =0; 

/**
* Indicates if a link with a parameter is removable.
* @param the parameter with the link.
* @return S_OK if link with parameter is removable E_FAIL else.
*/
virtual HRESULT AllowLinkRemoval(const CATICkeParm_var &parm) = 0;

/**
* Indicates if the removal of a link has succeeded.
* @param the parameter with the link.
* @return S_OK if link removal succeeded, E_FAIL else
*/
virtual HRESULT RemoveLink(const CATICkeParm_var &parm) = 0;

private:

  // to define ClassName
  CATDeclareInterface;


}; 


CATDeclareHandler(CATIParmValuator,CATBaseUnknown);

#endif



