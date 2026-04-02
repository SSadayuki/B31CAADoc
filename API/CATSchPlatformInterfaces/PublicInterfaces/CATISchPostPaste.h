#ifndef CATISchPostPaste_H
#define CATISchPostPaste_H

//	COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"
#include "CATBoolean.h"

extern "C" const IID IID_CATISchPostPaste ;

class CATIUnknownList;

/**
 * Interface to manage Schematic platform copy-paste behavior after paste. 
 * <b>Role</b>: To get and set information for paste-processing
 */
class CATISchPostPaste : public IUnknown
{
  public:   
  
  /**
  * Get a list of source object to copied and a list of
  * corresponding copied object.
  * @param oListSourceObject  [out, IUnknown#Release]
  *   A list of interface pointers to source objects.
  * @param oListCopiedObject  [out, IUnknown#Release]
  *   A list of interface pointers to copied objects.
  */
  virtual HRESULT GetCCPObjectList (
  	CATIUnknownList **oListSourceObject, 
    CATIUnknownList **oListCopiedObject)=0;

  /**
  * Get a list of copied drafting objects.
  * @param oListCopiedDrwObject  [out, IUnknown#Release]
  *   A list of interface pointers to copied drafting objects.
  */
  virtual HRESULT GetPastedDrwObjectList (
    CATIUnknownList **oListCopiedDrwObject)=0;

  /**
  * Set a list of copied drafting objects.
  * @param iListCopiedDrwObject 
  *   A list of interface pointers to copied drafting objects.
  */
  virtual HRESULT SetPastedDrwObjectList (
    const CATIUnknownList *iListCopiedDrwObject)=0;

  /**
  * Move all pasted objects to input position.
  * @param iDb2Position  
  *   2 double words for the x-y coordinates. 
  */
  virtual HRESULT MoveTo (const double iDb2Position[2]) = 0;

};
#endif
