#ifndef CATSamDocNotification_h
#define CATSamDocNotification_h

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
/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

// System Framework
#include "CATNotification.h"    // Needed to derive from CATNotification
#include "CATAnalysisToolkit.h"
#include "CATUnicodeString.h"

class CATDocument;

/**
 * Identifies events on analysis document.
 * <p>
 * These kind of events are:
 * <ul>
 * <li><b>SamBeforeSave</b>      : Send before the document saving.</li> 
 * <li><b>SamAfterSave</b>       : Send after the document saving.</li> 
 * <li><b>SamBeforeUnload</b>    : Send before the document unloading.</li> 
 * <li><b>SamAfterReload</b>     : Send after the document reloading.</li>
 * <li><b>SamBeforChildRemove</b>: Send before an analysis document of the assembly is removed.</li>
 * <li><b>SamAssemblyRemove</b>  : Send when an Analysis is removed from Assembly definition.</li>
 * <li><b>SamRename</b>			 : Send when an Analysis is renamed.</li>
 * </ul>
 */

enum CATSamDocActionType 
{
    SamBeforeSave, 
    SamAfterSave,
	SamBeforeUnload,
	SamAfterReload,
	SamBeforChildRemove,
	SamAssemblyRemove,
	SamRename
};     

/**
  * Class representing a notification send when the analysis document is
  * loaded of saved.
  * <b>Role</b>: An instance of this class is sent by the CATAnalysis document 
  * when the load or save operation are performed.
  * @see CATSamDocActionType
  */

class ExportedByCATAnalysisToolkit CATSamDocNotification : public CATNotification
{
  CATDeclareClass;
  
  public:


    CATSamDocNotification(CATSamDocActionType iActionType,CATDocument *iDocument);
	CATSamDocNotification(CATSamDocActionType iActionType,CATDocument *iDocument, CATUnicodeString iOldName, CATUnicodeString iNewName);
 
    virtual ~CATSamDocNotification();

/**
  * Returns the action type.
  * @return action type.
  */
    CATSamDocActionType  GetActionType();
/**
  * Returns the document involved.
  * @return the analysis document.
  */
    CATDocument*         GetDocument();

/**
  * Returns the old name of the document before a renaming.
  */
	CATUnicodeString		GiveOldName();

/**
  * Returns the new name of the document after a renaming.
  */
    CATUnicodeString        GiveNewName();

  protected :
    friend class CATSamDocumentTools;

	void OnDocumentNameNotificationCB(CATCallbackEvent,void* idata,CATNotification *notif,
                                    CATSubscriberData,CATCallback);
  private:
    
    CATSamDocNotification(const CATSamDocNotification &iObjectToCopy);
    CATSamDocNotification & operator = (const CATSamDocNotification &iObjectToCopy);

    CATSamDocActionType		_ActionType;
    CATDocument*			_Document;
    CATUnicodeString        _OldName;
	CATUnicodeString        _NewName;
};

#endif
