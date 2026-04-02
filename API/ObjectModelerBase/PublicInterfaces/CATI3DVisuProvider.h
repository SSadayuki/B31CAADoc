#ifndef CATI3DVisuProvider_H
#define CATI3DVisuProvider_H
// COPYRIGHT DASSAULT SYSTEMES 2000
//===================================================================
//
/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

#include "AD0XXBAS.h"
#include "CATBaseUnknown.h"
#include "sequence_CATBaseUnknown_ptr.h"

extern ExportedByAD0XXBAS IID IID_CATI3DVisuProvider ;

/**
 * Interface used to retrieve the children of a base feature's extension(s). 
 * <b>Role:</b> the provider algorithm handles the extension's children in order to
 * include them in the visualization process. 
 * @see CATI3DGeoVisu
 */

class ExportedByAD0XXBAS CATI3DVisuProvider: public CATBaseUnknown
{
  CATDeclareInterface;

  public:
    
	/**
	  * Returns a list of the children of a base feature's extension(s).
	  * @param iObj
	  *    The base feature object.
	  * @param oListChildren
	  *    The list of the children of the base feature's extension(s).
	  */
    virtual HRESULT GetChildren(CATBaseUnknown * iObj, CATLISTP(CATBaseUnknown) ** oListChildren) = 0;
//    virtual HRESULT GetChildrenRep(CATBaseUnknown * iObj, CATLISTP(CATBaseUnknown) ** oListChildren) = 0;

};

//------------------------------------------------------------------

CATDeclareHandler( CATI3DVisuProvider, CATBaseUnknown );

#endif
