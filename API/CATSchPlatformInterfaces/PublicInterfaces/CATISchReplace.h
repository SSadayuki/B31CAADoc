#ifndef CATISchReplace_H
#define CATISchReplace_H

//	COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"
#include "CATBoolean.h"

class CATISchComponent;
class CATISchGRRComp;

extern "C" const IID IID_CATISchReplace ;

/**
 * Interface to manage replacing existing Schematic object with another. 
 * <b>Role</b>: replace Schematic object with another
 */
class CATISchReplace : public IUnknown
{

  public: 
    
  /**
  * Replace an existing component with this component.
  * @param iGRRToBePlaced
  *   Pointer to the component graphical representation of this component to be placed.
  *   if NULL the first representation found will be used.
  * @param iSchCompToBeRemoved
  *   Pointer to the existing component to be replaced by this component.
  * @param oNewComponent
  *   Interface pointer to the new component instance placed.
  */
  virtual HRESULT Replace (const CATISchGRRComp *iGRRToBePlaced, 
    const CATISchComponent *iSchCompToBeRemoved, CATISchComponent **oNewComponent) = 0;          

};
#endif
