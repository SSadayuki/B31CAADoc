#ifndef CATSamAnalysisModelNotification_h
#define CATSamAnalysisModelNotification_h
/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

// COPYRIGHT DASSAULT SYSTEMES 2002
//   
//===========================================================================
//  Abstract of the class:
//  ----------------------
// 
//===========================================================================
//  Inheritance:
//  ------------
//            CATNotification  ( System Framework)
//               CATBaseUnknown (System Framework).
//
//===========================================================================

// System Framework
#include "CATNotification.h"    // Needed to derive from CATNotification
#include "CATAnalysisToolkit.h"

/**
 * Identifies events for analysis case management.
 * <p>
 * These kind of events are:
 * <ul>
 * <li><b>SamRemoveActive</b>   : A case will no more be active.</li> 
 * <li><b>SamNewActive</b>      : A case becomes active.</li> 
 * <li><b>SamRemoveCase</b>     : A case is removed.</li> 
 * </ul>
 */

enum CATSamModelNotifType 
{
  SamRemoveActive,
  SamNewActive,
  SamRemoveCase
};    

/**
 * Identifies action on events for analysis case management.
 * <p>
 * These kind of events are:
 * <ul>
 * <li><b>SamAction</b>     : The action is performed.</li> 
 * <li><b>SamUndoAction</b> : The undo action is performed.</li> 
 * <li><b>SamRedoAction</b> : the redo action is performed.</li> 
 * </ul>
 */

enum CATSamModelNotifAction
{
  SamAction,
  SamUndoAction,
  SamRedoAction
};     
 
/**
  * Class representing a notification send when the status of an analysis case
  * is changed. This notification is send by the Analysis Model of the document.
  * The Notification type is identified by the @href  CATSamModelNotifType
  * and for each action sub categories are defined with @href  CATSamModelNotifAction
  * <br><b>Note:</b> Everybody is allowed to subscribe to those events,
  * but it is prohibited to re-emit them.
  */

class ExportedByCATAnalysisToolkit CATSamAnalysisModelNotification : public CATNotification
{
  CATDeclareClass;
  
  public:
/*
 * Constructs a CATSamAnalysisModelNotification.
 * You should never create this notification
 */
     CATSamAnalysisModelNotification(CATSamModelNotifType iNotifType, 
                                    CATSamModelNotifAction iAction,
                                    CATBaseUnknown_var iCase);

/*
 * Destructor.
 */
    virtual ~CATSamAnalysisModelNotification();

/**
  * Returns the notification type.
  * @return notification type.
  */
    CATSamModelNotifType    GetNotifType();

/**
  * Returns the state of the notification.
  * @return state of the notification.
  */
    CATSamModelNotifAction  GetActionType();

/**
  * Returns the concerned case.
  * @return the concerned case.
  */
    CATBaseUnknown_var      GetCase();

  private:
    
    CATSamAnalysisModelNotification(const CATSamAnalysisModelNotification &iObjectToCopy);
    CATSamAnalysisModelNotification & operator = (const CATSamAnalysisModelNotification &iObjectToCopy);

    CATSamModelNotifType  _NotifType;
    CATSamModelNotifAction _Undo;
    CATBaseUnknown_var    _Case;
};

#endif
