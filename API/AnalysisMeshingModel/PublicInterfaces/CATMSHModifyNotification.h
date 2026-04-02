#ifndef CATMSHModifyNotification_h
#define CATMSHModifyNotification_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1 
 * @CAA2Usage U1 
 */

#include "MSHModel.h"
#include "CATNotification.h"

/**
 * Class for notifications of a finite element mesh modification.
 * <b>Role</b>: This notification is sent each time the mesh visualization is updated
 * after a set of modifications (nodes & elements creation, modification or deletion). 
 * see @href CATIMSHMesh#UpdateVisualization method.
 */
class ExportedByMSHModel CATMSHModifyNotification : public CATNotification
{
/**
 * @nodoc
 */
  CATDeclareClass;

public:
/**
 * @nodoc
 */
  CATMSHModifyNotification ();
/**
 * @nodoc
 */
  virtual ~CATMSHModifyNotification ();
};
#endif
