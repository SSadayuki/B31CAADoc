#ifndef CATGraphicElementNormale_h
#define CATGraphicElementNormale_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


#include "CATBaseUnknown.h"
#include "CATViz.h"

#include "CATMathDirection.h"

/**
* Class holding the normal coordinates of the intersection point.
* Used by @href CATGraphicPathElement to store information of the selection
* <br>normal point on a graphic element.
* <br>Uses the @href #direction variable to set/get normal values.
*
* @see CATGraphicPathElement
*/
class ExportedByCATViz CATGraphicElementNormale : public CATBaseUnknown
{
 
  // CATDeclareClass expanded
  
 private :
  /** @nodoc */
  static CATMetaClass *meta_object;
 
 public :
  /** @nodoc */
  virtual CATMetaClass *  __stdcall GetMetaObject() const; 
  /** @nodoc */
  virtual const char *              IsA() const;
  /** @nodoc */
  virtual int                       IsAKindOf(const char *) const;
  /** @nodoc */
  static CATMetaClass *   __stdcall MetaObject();

  /**  
   * Returns the class identifier for which the given object is an instance.
   */
  static const CLSID &    __stdcall ClassId();
 
  /** @nodoc */
  static const char *     __stdcall ClassName();
  /** @nodoc */
  static CATBaseUnknown *CreateItself();
 
  // end CATDeclareClass
  
public :
  ////////
  
  /**
  * Constructor. 
  *
  * @param iDirection
  *        The normal at the intersection with graphic element.
  */
  CATGraphicElementNormale (CATMathDirection iDirection);

  virtual ~CATGraphicElementNormale ();
  
  /**
  * The normal at the intersection with graphic element.
  */
  CATMathDirection  direction;

};

#endif
