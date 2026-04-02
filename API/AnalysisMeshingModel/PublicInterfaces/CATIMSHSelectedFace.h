#ifndef  CATIMSHSelectedFace_h 
#define  CATIMSHSelectedFace_h

// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1 
 * @CAA2Usage U3 
 */

#include "MSHModel.h"
#include "CATIMSHSelectedElement.h"

class CATMSHElement;

extern ExportedByMSHModel IID IID_CATIMSHSelectedFace;

/**
 * Interface used to select a finite element face.
 * @see CATMSHElement.
 */

class ExportedByMSHModel CATIMSHSelectedFace : public CATIMSHSelectedElement 
{     
  CATDeclareInterface;      

public: 

  /**
   * Returns the selected finite element face. 
   * <br>Faces are numbered between 0 and NbFaces - 1. 
   * @see CATIMSHConnectivity.
   */
  virtual int GetFace () const =0;
};

CATDeclareHandler ( CATIMSHSelectedFace , CATIMSHSelectedElement );

#endif
