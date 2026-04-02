#ifndef CATCmdWorkshop_H
#define CATCmdWorkshop_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "ApplicationFrame.h"
#include "CATCmdWorkbench.h"
#include "CATCommandHeader.h"
#include "CATBoolean.h"

class CATEditingContext;

/**
 * Class to create the workshop's access .
 * <b>Role</b>: The workshop's access is a @href CATCmdContainer which contains containers:
 * one for it's menubar, one for each toolbar and one for each workbench. <br>
 * To create an instance of <tt>CATCmdWorkshop</tt> use the macro @href NewAccess 
 * with <tt>CATCmdWorkshop</tt> as <tt>classname</tt> parameter. 
 * @see CATIWorkshop 
 */
class ExportedByApplicationFrame CATCmdWorkshop : public CATCmdWorkbench
{
  friend class CATMarshallableCmdWorkshop;
  
  CATDeclareClass;
  
public:

    /*---------------------------------*/
    //     CONSTRUCTORS  
    /*---------------------------------*/

  /** @nodoc */  
  CATCmdWorkshop (const CATString & name, Persistence = Code);

  virtual ~CATCmdWorkshop ();
  
  /** @nodoc */  
  CATCmdWorkshop (CATCmdWorkshop & toCopy);
  
  /** @nodoc */  
  virtual CATCmdAccess * Clone(int noNext = 0,CATCmdAccess * toBeCompleted = NULL);
			       

    /*---------------------------------*/
    //     APPLICATION FRAME WORKSHOP 
    /*---------------------------------*/

  /** @nodoc */  
  static CATCmdWorkshop     * GetGlobal();

  /** @nodoc */  
  static CATCmdContainer * GetGlobalMenu();

  /** @nodoc */  
  static CATCmdWorkshop * GetFatherWorkshop (CATCmdAccess *);

  
    /*---------------------------------*/
    //     WORKBENCH MANAGMENT
    /*---------------------------------*/

  /** @nodoc */  
  CATCmdWorkbench * GetWorkbench() const;

  /** @nodoc */  
  void SetWorkbench(CATCmdWorkbench *);
  
  /** @nodoc */  
  CATCmdWorkbench * GetCurrentWorkbench();

  /** @nodoc */  
  const CATString & GetCurrentWorkbenchName();

  /** @nodoc */  
  void SetCurrentWorkbench(const CATString & name);

  /** @nodoc */  
  void SetCurrentWorkbenchFromContext(const CATString & name);

  /** @nodoc */  
  void SetCurrentWorkbench(CATCmdWorkbench *);

  /** @nodoc */  
  CATBoolean SetCurrentWorkbenchFromContext(CATCmdWorkbench *);

  /** @nodoc */  
  void SetInitialWorkbench();


    /*---------------------------------*/
    //     SHOW-HIDE 
    /*---------------------------------*/
  
  /** @nodoc */  
  virtual int  FillViews (CATDialog * parent);

  /** @nodoc */  
  virtual void ClearViews(int deleteTlb = 0);

  /** @nodoc */  
  virtual void FillVisViews();

  /** @nodoc */  
  virtual void ClearVisViews();


    /*---------------------------------*/
    //     MENU'S MANAGMENT 
    /*---------------------------------*/

  /** @nodoc */  
  void ExtractMenus(CATCmdContainer * from, LocalMode mode = Workshop);

  /** @nodoc */  
  void InsertMenus (CATCmdContainer * into);

  /** @nodoc */  
  void Merge(CATCmdWorkshop * toMerge);

  
    /*---------------------------------*/
    //     SAVE 
    /*---------------------------------*/

  /** @nodoc */  
  virtual void SaveAsSource (FILE * fd, char ** variableName, int noNext = 0);  

#ifdef AfrCAA2

  /** @nodoc */  
  virtual void SaveAsXml (CATAfrGen * Gen, int depth);
#endif

  /** @nodoc */  
  virtual void FilterPersistence(Persistence, int keep, int inDepth = 1);

  /** @nodoc */  
  virtual void SaveClone();
  

    /*---------------------------------*/
    //     FOR INTERNAL USAGE 
    /*---------------------------------*/

  /** @nodoc */  
  virtual char * GenerateVariableName(const char * iClassName);

  /** @nodoc */  
  virtual void FlatDump(DumpMode = Simple, int noNext = 0) const;

  
  /** @nodoc */  
  virtual void SetType (const CATString & type);   

  /** @nodoc */  
  virtual void CreateHeaders();

  /** 
  * @nodoc 
  * Returns a palette from its name.
  */
  CATCmdContainer * GetContainer(const CATString & name);

  /** @nodoc */  
  CATBoolean WorkbenchesLoaded () const;

  /** @nodoc */  
  void SetWorkbenchesLoaded (CATBoolean);
  
  /** @nodoc */
  CATBoolean GetWorkbenchesHeadersToReload();
  
  /** @nodoc */
  void SetWorkbenchesHeadersToReload (CATBoolean);

  /** @nodoc */  
  void    LoadWorkbenches   ();

	/** @nodoc */
	void SetEditingContext (CATEditingContext *);

	/** @nodoc */
	CATEditingContext * GetEditingContext ();

	/** @nodoc */
  void SetAvailabilityStatus (CATAfrAvailabilityType type, CATBoolean status);
	/** @nodoc */
  CATBoolean GetAvailabilityStatus(CATAfrAvailabilityType type);
	/** @nodoc */
  unsigned int GetAvailabilitiesStatus();


protected:
    
  /** @nodoc */
  void InsertMenus(CATCmdContainer *toInsert, CATCmdContainer *into);
	
	
private:
  
	void OnEditingContextDeleted  (
 	  CATCallbackEvent   iPublishedEvent,
    void             * iPublishingObject,
    CATNotification  * iNotification,
    CATSubscriberData  iClientData,
    CATCallback        iCallback
    );
	
  CATCmdWorkshop (Persistence = Code);
 
  void InitSetting();
  
  CATCmdWorkbench    * _config;
  CATCmdWorkbench    * _currentConfig;
  CATString            _preferedConfig;
  CATListOfCATString * _workbenchClass;
  
  CATBoolean           _workbenchesLoaded;
  CATBoolean           _reloadWorkbenchesHeaders;
  unsigned int         _AvailabilitiesStatus;
	CATEditingContext  * _editingContext;

  //La notion workbench grise est a partager entre tous les workshops
  static int           _protectionMode;
};

#endif
