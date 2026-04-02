#ifndef CATCmdWorkbench_H
#define CATCmdWorkbench_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include <CD0FRAME.h>
#include <CATCmdContainer.h>
#include <CATListPV.h>
#include <CATString.h>
#include <CATUnicodeString.h>
#include <CATBoolean.h>

class CATCmdWorkbenchLoader;
class CATCmdWorkshop;
class CATDialog;
#ifdef AfrCAA2
class CATAfrGen;
#endif

/**
 * Class to create the workbench's access .
 * <b>Role</b>: The workbench's access is a @href CATCmdContainer which contains containers:
 * one for it's menubar and one for each toolbar.<br>
 * To create an instance of <tt>CATCmdWorkbench</tt> use the macro @href NewAccess 
 * with <tt>CATCmdWorkbench</tt> as <tt>classname</tt> parameter. 
 * @see CATIWorkbench 
 */
class ExportedByCD0FRAME CATCmdWorkbench : public CATCmdContainer
{
  friend class CATMarshallableCmdWorkbench;
  
  CATDeclareKindOf;
  
public:

	/**
	* Defines the button representation in the toolbars.
	* @param Icons
	*  Each button in all toolbars of the workbench are represented by an icon.
	* <br>Icons are defined in the CATRsc file of the header.  
	* @param Text
	*  Each button in all toolbars of the workbench are represented by a text. 
	*  <br>The text is the title of the button. See the CATNls file of the header.
	*/
  enum CATAfrToolbarStyle {Icons, Text};

    /*---------------------------------*/
    //     CONSTRUCTORS  
    /*---------------------------------*/
  /** 
  * @nodoc 
  */
  CATCmdWorkbench (const CATString & name, Persistence = Code);


  /**
    * @nodoc
    */
  CATCmdWorkbench (const CATString & implClass, CATCmdWorkshop * father);

  virtual ~CATCmdWorkbench ();
  /** 
  * @nodoc 
  */  
  CATCmdWorkbench (CATCmdWorkbench & toCopy);
  /** 
  * @nodoc 
  */  
  virtual CATCmdAccess * Clone(int noNext = 0,CATCmdAccess * toBeCompleted = NULL);
			       

    /*---------------------------------*/
    //     PRIORITY'S MANAGMENT 
    /*---------------------------------*/
  /** 
  * @nodoc 
  */  
  int  GetPriority();
  /** 
  * @nodoc 
  */
  void SetPriority(int priority);


    /*---------------------------------*/
    //     MENU'S MANAGMENT 
    /*---------------------------------*/

  /** 
  * @nodoc 
  */
  CATCmdContainer * GetMenu() const;
  /** 
  * @nodoc 
  */
  virtual void SetMenu (CATCmdContainer *);
  /** 
  * @nodoc 
  */
  void ExtractMenus(CATCmdContainer * from, LocalMode mode = Workshop);
  /** 
  * @nodoc 
  */
  virtual void InsertMenus (CATCmdContainer * into);
  /** 
  * @nodoc 
  */  
  void Merge(CATCmdWorkbench * toMerge);

  
    /*---------------------------------*/
    //     SHOW-HIDE 
    /*---------------------------------*/


  /** 
  * @nodoc 
  */
  virtual int  FillViews(CATDialog * parent);
  /** 
  * @nodoc 
  */
  virtual void ClearViews(int deleteTlb = 0);

  /** 
  * @nodoc 
  */
  virtual void FillVisViews();
  /** 
  * @nodoc 
  */
  virtual void ClearVisViews();


    /*---------------------------------*/
    //     FOR INTERNAL USAGE 
    /*---------------------------------*/
  /** 
  * @nodoc 
  */
  virtual char * GenerateVariableName(const char *);
  /** 
  * @nodoc 
  */
  virtual void FlatDump(DumpMode = Simple, int noNext = 0) const;

  /**
  * @nodoc
  * Sets the access's type.
  * <b>Role</b>: The type is necessary for the <tt>CATCmdContainer</tt> access. 
  * <b>Legal values</b>: Menubar,Toolbar,Workshop,Workbench,Starter,
  * Separator,IconBox, Submenu and Menu.
  */
  virtual void SetType (const CATString & type);  
  
  /** 
  * @nodoc 
  */
  virtual void CreateHeaders();

  /** 
  * @nodoc 
  * Gets a palette from its name.
  */
  virtual CATCmdContainer * GetContainer(const CATString & name);


    /*---------------------------------*/
    //     NLS QUERIES
    /*---------------------------------*/
  /** 
  * @nodoc 
  */
  virtual const CATUnicodeString & GetTitle();


    /*---------------------------------*/
    //     CUSTOM IID 
    /*---------------------------------*/
  /** 
  * @nodoc 
  */
  void SetIIDList(CATListPV * DefaultIIDList, CATListPV * CustomIIDList);
  /** 
  * @nodoc 
  */
  IID * GetCustomIID(IID & DefaultIID) const;

    /*---------------------------------*/
    //     SAVE 
    /*---------------------------------*/
  /** 
  * @nodoc 
  */
  virtual void SaveAsSource (FILE * fd, char ** variableName, int noNext = 0);

#ifdef AfrCAA2
  /** 
  * @nodoc 
  */
  virtual void SaveAsXml (CATAfrGen * Gen, int depth);
#endif
  /** 
  * @nodoc 
  * used before saving preferences.
  */
  virtual void FilterPersistence(Persistence, int keep, int inDepth = 1);

  /**
    * @nodoc
    */
  CATCmdWorkbenchLoader * GetLoader ();

  /**
    * @nodoc
    */
  CATBoolean GetTransient () const;
  /**
    * @nodoc
    */
  void    SetTransient (CATBoolean);

  /**
    * @nodoc
    */
  CATAfrToolbarStyle GetToolbarStyle () const;
  /**
    * @nodoc
    */
  void    SetToolbarStyle (CATAfrToolbarStyle);

  /** 
  * @nodoc 
  */
  void    SetToolbarsExclusive();
  /** 
  * @nodoc 
  */
  int     GetToolbarsExclusivity() const;

  /**
    * @nodoc
    */
  void    RemoveToolbar (const CATString &);
  /**
    * @nodoc
    */
  const CATString & GetRemovedToolbar ();

  /**
    * @nodoc
    */
  void AlwaysReload ();


protected:
  /** @nodoc */
  CATCmdWorkbench (Persistence = Code);
  
  /** @nodoc */
  void InsertMenuContents(CATCmdContainer * fromMenu,
			  CATCmdAccess    * toCopy,
			  CATCmdContainer * intoMenuBar,
			  const CATString * beforeMenu,
			  const CATString * beforeItem);

  
private:

  // NOT implemented, only declared to prevent unexpected call to default ctors created by the compiler
  CATCmdWorkbench & operator= (const CATCmdWorkbench &);
  
  int                     _priority;
  int                     _titleResource;
  int                     _toolbarsExclusivity;

  CATBoolean              _isTransient;
  CATAfrToolbarStyle      _toolbarStyle;

  CATListPV             * _DefaultIIDList;
  CATListPV             * _CustomIIDList;
  
  CATCmdWorkbenchLoader * _loader;

  CATString               _RemovedToolbar;

};

#endif
