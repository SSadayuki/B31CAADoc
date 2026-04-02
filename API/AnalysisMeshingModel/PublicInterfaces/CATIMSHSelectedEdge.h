#ifndef  CATIMSHSelectedEdge_h 
#define  CATIMSHSelectedEdge_h

// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1 
 * @CAA2Usage U3 
 */

#include "MSHModel.h"
#include "CATIMSHSelectedElement.h"

class CATMSHElement;

extern ExportedByMSHModel IID IID_CATIMSHSelectedEdge;

/**
 * Interface used to select a finite element edge.
 * @see CATMSHElement.
 */

class ExportedByMSHModel CATIMSHSelectedEdge : public CATIMSHSelectedElement 
{     
  CATDeclareInterface;      

public: 

  /**
   * Returns the selected finite element edge. 
   * <br>Edges are numbered between 0 and NbEdges - 1. 
   * @see CATIMSHConnectivity.
   */
  virtual int GetEdge () const =0;
};

CATDeclareHandler ( CATIMSHSelectedEdge , CATIMSHSelectedElement );

#endif
