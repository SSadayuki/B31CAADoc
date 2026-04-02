#ifndef CATIDrwCreateDraftingStructure_h
#define CATIDrwCreateDraftingStructure_h
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "DraftingItfCPP.h"
#include "CATIContainer.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwCreateDraftingStructure ;
#else
extern "C" const IID IID_CATIDrwCreateDraftingStructure ;
#endif

/**
 * @deprecated V5R18 This interface is useless, a drawing container is created when a drawing document is created. 
 * 
 * <br>Interface implemented by compound basic container.<br>
 * <b>Role</b>: This interface allows to create a ready to use  drafting structure
 * in any kind of document.
 */

class  ExportedByDraftingItfCPP CATIDrwCreateDraftingStructure : public CATBaseUnknown
{ 
public :

	CATDeclareInterface;
/**
  * @deprecated V5R18 
  * Gets new container of instances in a document.
  * @param iid
  *   The interface on the container.
  * @param oCont
  *   The container.
  * @see CATIContainer
  */ 
	virtual HRESULT GetNewInstanceContainer(CATIContainer** oCont)=0 ;
};

CATDeclareHandler(CATIDrwCreateDraftingStructure, CATBaseUnknown);

#endif
