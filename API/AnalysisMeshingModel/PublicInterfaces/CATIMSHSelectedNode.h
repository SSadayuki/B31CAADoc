#ifndef  CATIMSHSelectedNode_h 
#define  CATIMSHSelectedNode_h

// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1 
 * @CAA2Usage U3 
 */

#include "MSHModel.h"
#include "CATBaseUnknown.h"

class CATMSHNode;

extern ExportedByMSHModel IID IID_CATIMSHSelectedNode;

/**
 * Interface used to select a finite element node.
 * @see CATMSHNode.
 */

class ExportedByMSHModel CATIMSHSelectedNode : public CATBaseUnknown 
{     
  CATDeclareInterface;      

public: 

  /**
   * Returns the selected finite element node. 
   */
  virtual CATMSHNode * GetNode () const =0;
};

CATDeclareHandler ( CATIMSHSelectedNode , CATBaseUnknown );

#endif
