#ifndef CATSchEventServices_H
#define CATSchEventServices_H

#ifdef _WINDOWS_SOURCE
#ifdef __CATSchUtilities
#define ExportedByCATSchUtilities  __declspec(dllexport)
#else
#define ExportedByCATSchUtilities __declspec(dllimport)
#endif
#else
#define ExportedByCATSchUtilities
#endif

// COPYRIGHT DASSAULT SYSTEMES  2000 

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATISpecObject.h"
#include "CATBooleanDef.h"

class CATISchAppConnector;
class CATISchComponentGroup;
class CATDocument;
class CATISpecObject;
class CATIContainer;
class CATIRedrawEvent;

/**
 * Tools to manage events in the schematic platform.
 * <b>Role</b>: Used for updating visualization after creation,
 * modification, deletion of an object.
 */
class ExportedByCATSchUtilities CATSchEventServices 
{
  public:

/** 
 * Event type.
 * <b>Role</b>: Types of events.
 * @param SchCreateEvent
 *   Event to be sent when a schematic object has been created.
 * @param SchModifyEvent
 *   Event to be sent when a schematic object has been modified.
 * @param SchDeleteEvent
 *   Event to be sent when a schematic object has been deleted.
 */
  enum CATSchEventType
  {
     SchCreateEvent  = 0,
     SchModifyEvent  = 1,
     SchDeleteEvent  = 2
  };

/**
 * Send a create event for an object that has been modified.
 * @param iObj
 *   Pointer to the object.
 * @param iAncestor
 *   Pointer to the ancestor of the object.
 */
  static void SendCreateEvent (const CATISpecObject *iObj,
                               const CATISpecObject *iAncestor=NULL);
/**
 * Send a modify event for an object that has been modified.
 * @param iObj
 *   Pointer to the object.
 */
  static void SendModifyEvent (const CATISpecObject *iObj);
  
/**
 * Send a delete event for an object that has been deleted.
 * @param iObj
 *   Pointer to the object.
 */
  static void SendDeleteEvent (const CATISpecObject *iObj); 

/**
 * Send a modify event for all the connectors in the current document.
 */
  static void SendModifyEventToAllCntrs();

/**
 * Refresh the specification tree from the input object.
 * @param iObj
 *   Pointer to the object.
 * @param iRootRedraw
 *   Pointer to root to start redrawing.
 */
  static void RedrawGraphViewerFromRoot (const CATISpecObject *iObj,
    CATIRedrawEvent *iRootRedraw = NULL); 

/**
 * Connect this object to its graphic representation for visualization events.
 * @param iObj
 *   Pointer to the object.
 * @param iBCreateEvent 
 *   If TRUE, a create event is also sent.
 */
  static void ConnectToGRR (const CATISpecObject *iObj, 
    CATBoolean iBCreateEvent=FALSE); 

/**
 * Connect this object to the graphic representations of all its connectors
 * for visualization events.
 * @param iObj
 *   Pointer to the object.
 * @param iBCreateEvent 
 *   If TRUE, a create event is also sent.
 */
  static void ConnectToCntr (const CATISpecObject *iObj, 
    CATBoolean iBCreateEvent=FALSE); 

/**
 * Send a modify event to the connectors of the input object. 
 * @param iObj
 *   Pointer to the object.
 */
  static void ModifyConnectToCntr (const CATISpecObject *iObj); 

/**
 * Given a document, reconnect all the schematic objects in the schematic extension container
 * and related drafting objects in the drafting container
 * to their graphical representations for visualization events.
 * @param iDoc
 *   Pointer to the document
 * @param iSchCont
 *   Pointer to the schematic extension container
 * @param iSchCont
 *   Pointer to the drafting container
 */
  static void RestoreAllEventConnections (CATDocument *iDoc,
    CATIContainer *iSchCont, CATIContainer *iDrwCont);   
  
/**
 * Send an event to a component group object.
 * @param iEventType
 *   Event type.
 * @param iCompGroup
 *   Pointer to the component group object.
 */
  static void SendEventByComponentGroup (
    CATSchEventType iEventType, CATISchComponentGroup *iCompGroup);

/**
 * @deprecated V5R15
 * <br> This interface will be deleted in V5R17 and it will not been implemented.
 */
  static CATBoolean RunningODT();
                           
};
#endif
