// COPYRIGHT DASSAULT SYSTEMES PROVENCE 2000
/**
  * @CAA2Level L0
  * @CAA2Usage U1
  */
//===================================================================
//
// CATMldNotification.h
// Header definition of CATMldNotification
//
//===================================================================
//
// Usage notes:
//
//===================================================================
//
#ifndef CATMldNotification_H
#define CATMldNotification_H

#include "CATMldNotif.h"
#include "CATNotification.h"

//-----------------------------------------------------------------------

/**
 * Describe your class here.
 * <p>
 * Using this prefered syntax will enable mkdoc to document your class.
 */
class ExportedByCATMldNotif CATMldNotification: public CATNotification
{
  CATDeclareClass;

  public:

  // Standard constructors and destructors
  // -------------------------------------
     CATMldNotification ();
     virtual ~CATMldNotification ();

};

//-----------------------------------------------------------------------

#endif
