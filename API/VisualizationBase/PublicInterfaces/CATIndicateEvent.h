#ifndef CATIndicateEvent_H
#define CATIndicateEvent_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATViz.h"
#include "CATViewerEvent.h"
#include "CATMathPointf.h"

class CATViewpoint;

/**
* Event sent to the indicator.
* <b>Role</b>: do not use.
*/
class ExportedByCATViz CATIndicateEvent : public CATViewerEvent
{
  CATDeclareClass;

public:
  virtual ~CATIndicateEvent();

  /** @nodoc */
  CATIndicateEvent();

  /** @nodoc */
  CATIndicateEvent(const CATMathPointf  & iNearPoint,
                   const CATMathPointf  & iFarPoint, 
                   const CATViewpoint   * iViewpoint, 
                   const CATViewerEvent * iEvent = NULL);
  
  /** @nodoc */
  CATIndicateEvent & operator = (const CATIndicateEvent & iIndicateEvent);

  /** @nodoc */
  CATMathPointf GetNearPoint() const;
  
  /** @nodoc */
  CATMathPointf GetFarPoint() const;
  
    /** @nodoc */
  CATViewpoint * GetViewpoint() const;
  
protected:
  CATMathPointf	 _NearPoint;
  CATMathPointf	  _FarPoint;
  CATViewpoint	* _viewpoint;
};

#endif // CATIndicateEvent_H
