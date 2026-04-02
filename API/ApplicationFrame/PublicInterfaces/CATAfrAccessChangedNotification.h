#ifndef CATAfrAccessChangedNotification_h
#define CATAfrAccessChangedNotification_h

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

// COPYRIGHT DASSAULT SYSTEMES 2013

#include "CATNotification.h"
#include "CD0FRAME.h"

class CATCmdWorkshop;
class CATCmdWorkbench;


/**
 * Class representing a notification whose instance is sent when
 * the current workshop or the current workbench is changed.
 * <br>How to subscribe to the notification: 
 * <br>CATBaseUnknown * pHeaderSensitivityMngt = NULL;
 * <br>CATCmdHeaderSensitivityMngt::GetSensitivityManager (pHeaderSensitivityMngt);
 * <br>if (NULL != pHeaderSensitivityMngt)
 * <br>{
 * <br>  AddCallback(pHeaderSensitivityMngt,
 * <br>    CATAfrAccessChangedNotification::ClassName(),
 * <br>    (CATSubscriberMethod) & YourClass::YourCB,NULL);
 * <br>}
*/
class ExportedByCD0FRAME CATAfrAccessChangedNotification : public CATNotification
{
  CATDeclareClass;
  
  public:
    
  /**
    * Get the changed workbench.
    * <br><b>Role</b>: Returns the new current workbench if the current workbench was changed. 
    * @return
    * <ul>
    * <li>NULL: The current workbench was not changed; in this case the current workshop was changed. </li>
    * <li>Otherwise: The new current workbench.</li>
    * </ul>
    */  
    CATCmdWorkbench* GetWorkbench ();

  /**
    * Get the changed workshop.
    * <br><b>Role</b>: Returns the new current workshop if the current workshop was changed. 
    * @return
    * <ul>
    * <li>NULL: The current workshop was not changed; in this case the current workbench was changed. </li>
    * <li>Otherwise: The new current workshop.</li>
    * </ul>
    */  
    CATCmdWorkshop* GetWorkshop ();

  /** @nodoc */
    CATAfrAccessChangedNotification();
    virtual ~CATAfrAccessChangedNotification();
  /** @nodoc */
    void SetWorkbench ( CATCmdWorkbench* workbench );
  /** @nodoc */
    void SetWorkshop ( CATCmdWorkshop* workshop );

  private:
  // NOT implemented, only declared to prevent unexpected call to default ctors created by the compiler
    CATAfrAccessChangedNotification (const CATAfrAccessChangedNotification &);
    CATAfrAccessChangedNotification & operator= (const CATAfrAccessChangedNotification &);

    CATCmdWorkbench* _workbench;
    CATCmdWorkshop* _workshop;
};

#endif
