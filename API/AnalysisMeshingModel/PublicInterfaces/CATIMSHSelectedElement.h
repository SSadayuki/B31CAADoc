#ifndef  CATIMSHSelectedElement_h 
#define  CATIMSHSelectedElement_h

// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1 
 * @CAA2Usage U3 
 */

#include "MSHModel.h"
#include "CATBaseUnknown.h"

class CATMSHElement;

extern ExportedByMSHModel IID IID_CATIMSHSelectedElement;

/**
 * Interface used to select a finite element.
 * @see CATMSHElement.
 */

class ExportedByMSHModel CATIMSHSelectedElement : public CATBaseUnknown
{
  CATDeclareInterface;

public:

  /**
   * Returns the selected finite element. 
   */
  virtual CATMSHElement * GetElement () const = 0;
  /**
   * Retreives the picking point on the finite element. 
   * @param ioCoordinates
   *   Array containing the picking coordinates on the finite element in the following order: X, Y, Z.
   */
  virtual void GetPickPoint ( double Coors[3] ) const = 0;
};

CATDeclareHandler ( CATIMSHSelectedElement, CATBaseUnknown );

#endif
