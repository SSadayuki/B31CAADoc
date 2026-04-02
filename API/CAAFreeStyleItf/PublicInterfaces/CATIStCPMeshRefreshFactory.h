#ifndef CATIStCPMeshRefreshFactory_H
#define CATIStCPMeshRefreshFactory_H

/**
  * @CAA2Level L0
  * @CAA2Usage U3
  */

//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2019
//==============================================================================
//
// CATIStCPMeshRefreshFactory :
//   Class defining the factory for control point mesh refresh
//
//==============================================================================
// Usage Notes :
//
//------------------------------------------------------------------------------
//  Inheritance : CATIStCPMeshRefreshFactory (CAAFreeStyleItf FW)
//                  CATBaseUnknown   (System FW)
//==============================================================================
// Nov. 2019   Creation                                                 PDT1
//==============================================================================

#include "CAAFreeStyleItf.h"

#include "CATBaseUnknown.h"
#include "CATISpecObject.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern  ExportedByCAAFreeStyleItf IID IID_CATIStCPMeshRefreshFactory;
#else
extern "C" const IID IID_CATIStCPMeshRefreshFactory;
#endif

/**
 * @nodoc
 * Class defining the factory for  control point mesh refresh
 * <ul>
 * <li> Create the factory with the global function <tt>CATCreateStCPMeshRefreshFactory</tt>
 * <li> Use it to create a dedicated <tt>CATIStCPMeshRefreshFactory</tt>
 * <li> Release this interface when it is not needed anymore.
 */ 

class ExportedByCAAFreeStyleItf CATIStCPMeshRefreshFactory : public CATBaseUnknown
{
   CATDeclareInterface;

public :

   /** 
   * Method called to refresh the control point mesh of surface
   * @param iSpec
   *   A CATISpecObject_var object that is to be refresh.
   *   Call this function to refresh control point mesh
   */
   virtual HRESULT RefreshVisu(const CATISpecObject_var & iSpec = NULL_var) = 0;
};

CATDeclareHandler(CATIStCPMeshRefreshFactory, CATBaseUnknown);

#endif
