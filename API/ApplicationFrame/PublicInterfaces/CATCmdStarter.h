#ifndef CATCmdStarter_H
#define CATCmdStarter_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CD0FRAME.h"
#include "CATCmdAccess.h"
#include "CATCommand.h"
#include "CATBoolean.h"

class CATCommandHeader;
class CATCmdWorkshop;
class CATSysWeakRef;

/**
 * Class to create a starter's access.
 * <b>Role</b>: A starter is a leaf of the workshop's accesses tree. At each starter 
 * you attach a @href CATCommandHeader to launch the associated command.<br>
 * Use the @href NewAccess macro with <tt>CATCmdStarter</tt> as 
 * <tt>classname</tt> parameter to create an instance. 
 * @see CATCommandHeader, CATIWorkshop, CATIWorkbench, CATIWorkbenchAddin 
 */
class ExportedByCD0FRAME CATCmdStarter: public CATCmdAccess
{
  friend class CATMarshallableCmdStarter;
  
  CATDeclareKindOf;
  
public:
	/*---------------------------------*/
    //     CONSTRUCTORS
    /*---------------------------------*/
  /** 
  * @nodoc 
  */
  CATCmdStarter (const CATString & name, Persistence = Code);
  /** 
  * @nodoc 
  */
  CATCmdStarter (CATCmdStarter &);
  
  virtual ~CATCmdStarter();

  /** 
  * @nodoc 
  */
  virtual CATCmdAccess * Clone(int noNext = 0,CATCmdAccess * toBeCompleted = NULL);
			       
  
    /*---------------------------------*/
    //     REPRESENTATION  
    /*---------------------------------*/

  /** 
  * @nodoc 
  */
  virtual CATCmdRep * CreateMenuRep (CATDialog *);
  /** 
  * @nodoc 
  */
  virtual void        DestroyMenuRep();

  /** 
  * @nodoc 
  */
  virtual void CreateToolbarVisRep(CATVisDialog* parentVisRep);

  /** 
  * @nodoc 
  */
  virtual void DestroyToolbarVisRep();

  /** 
  * @nodoc 
  */
  virtual CATCmdRep * CreateToolbarRep (CATDialog *);
  /** 
  * @nodoc 
  */
  virtual void        DestroyToolbarRep();
  
  /** 
  * @nodoc 
  */
  virtual CATCmdRep * CreateCtxMenuRep (CATDialog *);
  /** 
  * @nodoc 
  */
  virtual void        DestroyCtxMenuRep();

    /*---------------------------------*/
    //     NLS' QUERIES  
    /*---------------------------------*/

  /** 
  * @nodoc 
  */
  CATString              * GetIconName();

  /** 
  * @nodoc 
  */
  const CATUnicodeString & GetTitle();

    /*---------------------------------*/
    //     COMMAND HEADER MANAGMENT  
    /*---------------------------------*/

  /** 
  * @nodoc 
  */
  int                HasCommand() const;

  /** 
  * @nodoc 
  */
  const CATString  & GetCommand() const;

  /** 
  * @nodoc 
  */
  CATCommandHeader * GetHeader (CATBoolean forceWorkbenchesLoad = TRUE)  const;

  /** 
  * @nodoc 
  */
  void SetCommand(const CATString &name, int unset = 0);

  /** 
  * @nodoc 
  */
  virtual void CreateHeaders();
  
  /** 
  * @nodoc 
  * forget command header, no future use.
  */
  void ForgetHeader();

  /** 
  * @nodoc 
  */
  const CATString & GetHeaderOrigin() const;
  /** 
  * @nodoc 
  */
  void SetHeaderOrigin(const CATString &);
  
    
    /*---------------------------------*/
    //  SAVE
    /*---------------------------------*/

  /** 
  * @nodoc 
  */
  virtual void SaveAsSource (FILE *fd, char **variableName, int noNext=0);

#ifdef AfrCAA2
  /** 
  * @nodoc 
  */
  virtual void SaveAsXml (CATAfrGen * Gen, int depth);
#endif
  
   /*---------------------------------*/
   //  FOR INTERNAL USAGE 
   /*---------------------------------*/

  /** @nodoc */
  virtual char *GenerateVariableName(const char *);

  /** @nodoc */
	void OnHeaderBisDeleted  (
 	  CATCallbackEvent   iPublishedEvent,
    void             * iPublishingObject,
    CATNotification  * iNotification,
    CATSubscriberData  iClientData,
    CATCallback        iCallback
    );
  
  /** @nodoc */
  void SetHeaderBis        (CATCommandHeader *);

    /*---------------------------------*/
    //  EVENT
    /*---------------------------------*/
  
  /** 
  * @nodoc 
  */
  CATDeclareCBEvent(SetCommandEvent);
  /** 
  * @nodoc 
  */
  CATDeclareCBEvent(SetSelectEvent);

	
	/** @nodoc */
	virtual void ParentChanged ();

	/** @nodoc */
	virtual void EditingContextChanged ();

private:
	
  void OnDialogDestroyed (CATCallback, void *v,
                          CATNotification *, CATCallbackEvent,
                          CATSubscriberData);
  void OnRepDestroyed (CATCallback, void *v,
                       CATNotification *, CATCallbackEvent,
                       CATSubscriberData);
	
	/** @nodoc */
	CATCmdWorkshop * GetWorkshop ();

  /** @nodoc */
  CATCmdStarter (Persistence = Code);

  /** @nodoc */  
  CATCommandHeader * GetHeaderBis();
   
  /** @nodoc */
  CATString        * _commandName;

  /** @nodoc */
  CATString  _headerOrigin;
  
 
  /** @nodoc */
  CATSysWeakRef * _headerBisWeakRef;

	/** @nodoc */
	CATCmdWorkshop   * _workshop;
};

#endif
