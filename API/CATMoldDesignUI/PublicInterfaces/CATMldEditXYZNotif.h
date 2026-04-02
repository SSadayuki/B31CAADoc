// COPYRIGHT DASSAULT SYSTEMES 2000
/**
  * @CAA2Level L0
  * @CAA2Usage U1
  */
//===================================================================
//
// CATMldEditXYZNotif.h
// Header definition of CATMldEditXYZNotif
//
//===================================================================
//
// Usage notes:
//
//===================================================================
//  

#ifndef CATMldEditXYZNotif_H
#define CATMldEditXYZNotif_H

#include "CATMldNotif.h"
#include "CATMldNotification.h"

//-----------------------------------------------------------------------

/**
 * Describe your class here.
 * <p>
 * Using this prefered syntax will enable mkdoc to document your class.
 */
class ExportedByCATMldNotif CATMldEditXYZNotif: public CATMldNotification
{
  CATDeclareKindOf;

  public:

  // Standard constructors and destructors
  // -------------------------------------
     CATMldEditXYZNotif ();
     virtual ~CATMldEditXYZNotif ();

};

//-----------------------------------------------------------------------

#endif
