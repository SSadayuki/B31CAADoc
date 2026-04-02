#ifndef CATCmdAccess_H
#define CATCmdAccess_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CD0FRAME.h"

/** @nodoc */
#define NOMNEMONIC '\0'

#include "CATCallbackManager.h"
#include "CATString.h"
#include "CATUnicodeString.h"
#include "CATListOfInt.h"

class CATDialog;
class CATCmdRep;
class CATVisDialog;

#ifdef AfrCAA2
class CATAfrGen;
#endif

//class CATListOfInt;

/**
 * Base class to create an access.
 * <b>Role</b>: When you want to arrange commands to propose them appropriately to the end 
 * user, you need to either create a workshop or a workbench, or create an add-in to 
 * an existing workshop or workbench. When you create such objects, you create in fact 
 * a containment tree structure to access to the commands. A <b>node</b> of the tree is 
 * a @href CATCmdContainer, a @href CATCmdWorkbench for
 * the workbench or a @href CATCmdWorkshop for the workshop,  
 * and a <b>leaf</b> can be a @href CATCmdStarter or 
 * a @href CATCmdSeparator. All these objects are therefore 
 * called accesses and their base class is <tt>CATCmdAccess</tt>. <br>
 *
 * To create any access use the @href NewAccess macro. 
 * @see CATIWorkshop, CATIWorkbench, CATIWorkbenchAddin, CATCommandHeader
 */
class ExportedByCD0FRAME CATCmdAccess: public CATBaseUnknown
{
  friend class CATMarshallableCmdAccess;
  friend class CATCmdAccessEditor;
  
  CATDeclareKindOf;
  
public:
  
    /*---------------------------------*/
    //     CONSTRUCTORS  
    /*---------------------------------*/

  /**
  * @nodoc
  */
  enum Persistence { User, Default, Code };
  /**
  * @nodoc
  */
  enum LocalMode   { Workshop, Workbench };
  /**
  * @nodoc
  */
  CATCmdAccess (const CATString & name, Persistence = Code, int local = 0);
  /**
  * @nodoc
  */
  CATCmdAccess (CATCmdAccess &);
  /**
  * @nodoc
  */
  virtual ~CATCmdAccess();
  /**
  * @nodoc
  */  
  virtual CATCmdAccess * Clone(int noNext = 0,CATCmdAccess * toBeCompleted = NULL);
			       
  /**
  * @nodoc
  */
  virtual void SaveClone();
  
    /*---------------------------------*/
    //     REPRESENTATION  
    /*---------------------------------*/
  /**
  * @nodoc
  */  
  virtual CATCmdRep * CreateMenuRep    (CATDialog *);

  /**
  * @nodoc
  */
  virtual void        DestroyMenuRep   ();


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
  /**
  * @nodoc
  */
  virtual void SetRep(CATCmdRep *);
  /**
  * @nodoc
  */
  virtual CATCmdRep * GetRep();
  
    /*---------------------------------*/
    //     QUERIES  
    /*---------------------------------*/

  /**
  * @nodoc
  * Returns the access's name. 
  * <b>Role</b>: This name is used to define the NLS and RSC resources of the access 
  * and to anchored an access.
  */  
  const CATString      & GetName()        const;
  
  /**
  * @nodoc
  * Returns the next access.
  * <b>Role</b>: Accesses are chained. 
  */
  CATCmdAccess         * GetNext()        const;
  
  /**
  * @nodoc
  * Returns the next visible access.
  * <b>Role</b>: Accesses are chained. The next access of a give one could be invisible. 
  * Ivisible accesses are original accesses. 
  */
  CATCmdAccess         * GetNextVisible() const;
  
  /**
  * @nodoc
  * Returns the parent's access.
  * <b>Legal values</b>: a <tt>CATCmdContainer<</tt>. 
  */
  CATCmdAccess         * GetParent();
  
  /**
  * @nodoc
  */
  virtual CATCmdAccess * GetChild()       const;
  
  /**
  * @nodoc
  * default customer name is the label ??? .                                              
  */
  const CATString      & GetCustomerName();   


    /*---------------------------------*/
    //     NLS QUERIES 
    /*---------------------------------*/

  /**
  * @nodoc
  */
  virtual CATString * GetIconName();

  /**
  * @nodoc
  * Returns the access's title.
  * <b>Role</b>: It's the name which appears on the screen. It's the NLS title. If
  * the NLS values doen't exist, the totle is the name of the access. @href GetName
  */
  virtual const CATUnicodeString & GetTitle();   

  /**
  * @nodoc
  */
  CATUnicodeChar         GetMnemonic();
  

    /*---------------------------------*/
    //     EDITION 
    /*---------------------------------*/
  
  /**
  * Sets the access name.
  * <b>Role</b>: This name is used to define the NLS and RSC resources of the access 
  * and to anchor an access.
  */
  void         SetName         (const CATString &, int userRequest = 0);

  /**
  * @nodoc
  */
  void         SetNext         (CATCmdAccess * const);

  /**
  * @nodoc
  */
  void         SetCustomerName (const CATString &);
  
  /**
  * @nodoc
  */
  virtual void SetIconName     (const CATString &, int userRequest=0);

  /**
  * @nodoc
  */
  virtual void SetTitle        (const CATUnicodeString &, int userRequest = 0);

  /**
  * @nodoc
  */
  void         SetMnemonic     (CATUnicodeChar, int userRequest = 0);

  /**
  * @nodoc
  */
  void UnsetCustomerName(int notify = 1);
  /**
  * @nodoc
  */
  void UnsetIconName    (int notify = 1, int userRequest = 0);
  /**
  * @nodoc
  */
  void UnsetTitle       (int notify = 1, int userRequest = 0);
  /**
  * @nodoc
  */
  void UnsetMnemonic    (int notify = 1, int userRequest = 0);
  /**
  * @nodoc
  */
  void SetParent        (CATCmdAccess *);

	
    /*---------------------------------*/
    //  FOR INTERNAL USE
    /*---------------------------------*/
  
  /**
  * @nodoc
  */
  int  HasTitle()   const;
  /**
  * @nodoc
  */
  int  HasCommand() const;
  /**
  * @nodoc
  */
  int  IsLocal()    const;

  /**
  * @nodoc
  */
  void MakeLocal();
  /**
  * @nodoc
  */
  int  IsLocal(LocalMode)    const;
  /**
  * @nodoc
  */
  void MakeLocal(LocalMode);

  /**
  * @nodoc
  */
  Persistence  GetPersistence() const;

  /**
  * @nodoc
  * Retrieves the internal name of the access just before this.
  * If you want retrieve the argument name of the @href #SetAnchorName method, use
  * the @href #GetOriginalAnchorName method.
  */
  CATString  * GetAnchorName () const;

  /**
  * @nodoc
  */
  void SetPersistence(Persistence);

  /**
  * @nodoc
  * @param iAnchorName
  * Name of the access which is just after this. iAnchorName can be an alias name. 
  * To retrieve the argument, iAnchorName, use the @href #GetOriginalAnchorName method.
  */
  void SetAnchorName (const CATString & iAnchorName);

  /**
  * @nodoc
  */
  enum DumpMode { Simple, WithPersistence, Address, StdOut };
  /**
  * @nodoc
  */
  virtual void FlatDump(DumpMode = Simple, int noNext = 0) const;

  /**
  * @nodoc
  */
  virtual char *GenerateVariableName(const char *);
  
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
  virtual void ClearViews();

  /**
  * @nodoc
  * Add command headers.
  */
  virtual void CreateHeaders();

  /**
  * @nodoc
  */
  virtual void SetAddin (const CATString & Addin, int FirstAddin);
  /**
  * @nodoc
  */
  virtual int GetAddin (CATString & Addin);  
  /**
  * @nodoc
  */
  virtual int IsAddin ();   
  
    /*---------------------------------*/
    //  SAVE
    /*---------------------------------*/

  /**
  * @nodoc
  /* save a default configuration into a file.
  */
  virtual void SaveAsSource (FILE *fd, char **variableName,  int noNext=0);

  /**
  * @nodoc
  */
  virtual void FilterPersistence( Persistence, int keep,  int inDepth=1);

#ifdef AfrCAA2

  /**
  * @nodoc
  */
  virtual void SaveAsXml (CATAfrGen * Gen, int depth);
#endif


    /*---------------------------------*/
    //  EVENT 
    /*---------------------------------*/

  /**
  * @nodoc
  */
  void DispatchCallbacks(CATCallbackEvent  iPublishedEvent,
                         CATNotification  *iPublishedNotification=NULL,
                         void             *iEventPublisher=NULL);

  /**
  * @nodoc
  */
  CATDeclareCBEvent(DeleteEvent);
  /**
  * @nodoc
  */
  CATDeclareCBEvent(EditEvent);
  /**
  * @nodoc
  */
  CATDeclareCBEvent(SetIconEvent);
  /**
  * @nodoc
  */
  CATDeclareCBEvent(SetNextEvent);
  /**
  * @nodoc
  */
  CATDeclareCBEvent(SetMnemonicEvent);
  /**
  * @nodoc
  */
  CATDeclareCBEvent(SetTitleEvent);
  /**
  * @nodoc
  */
  CATDeclareCBEvent(UnsetChildEvent);
  /** 
  * @nodoc 
  */
  CATDeclareCBEvent(UnsetNextEvent);

   /*---------------------------------*/
   //  ALIAS 
   /*---------------------------------*/

  /**
  * Returns the alias's name of the access. 
  * @nodoc
  */
  const CATString     GetAliasName()           const;
  /**
  * @nodoc
  * Returns the original's name of the access. 
  * <br><b>Role</b>: The original name is the <tt>name</tt> parameter 
  * of the constructor.  
  */
  const CATString   & GetOriginalName()        const;
  /**
  * @nodoc
  * Returns the original anchor's name.
  * <br><b>Role</b>: The original name is the <tt>anchorName</tt> parameter 
  * of the @href SetAnchorName method.   
  */
  CATString         * GetOriginalAnchorName()  const;

	/**
	 * @nodoc
	 * Tells the access that a parent has changed
	 * in its parent hierarchy
	 */
	virtual void ParentChanged ();

	/**
	 * @nodoc
	 * Tells the access that a parent has changed
	 * in its parent hierarchy
	 */
	virtual void EditingContextChanged ();
	
protected:

	/**
  * @nodoc
  */ 
  CATCmdAccess (Persistence = Code);
  /**
  * @nodoc
  */ 
  void DumpName(DumpMode) const;
  
  CATCmdAccess * _next;
  CATCmdAccess * _father;
  CATString      _name;
  CATCmdRep    * _rep;         
  CATVisDialog * _visRep;
  CATString      _Type;
  CATString    * _icon;
  CATString    * _Addin;
  Persistence    _persistence;   /** @win64 fbq : 64-bit structure packing **/
  
  
private:
  
  int                _hasTitle;
  int                _local;  
  int                _local2Workshop;
  int                _local2Config;
  int                _FirstAddin;
  CATString        * _anchor;
  CATString        * _customerName;
  int                _titleResources;
  int                _mnemonicResources;
  CATUnicodeString   _title;
  CATUnicodeString   _unicodeName;
  char             * _titleForMarshalling;
  CATUnicodeChar     _mnemonic;
  char             * _mnemonicForMarshalling;

  // Alias managment 
  CATString           _OriginalName   ;
  CATString         * _OriginalAnchor ;

  void FindAlias(int iUpdateTable, const CATString & iName, CATString & oOriginName );

};

#endif
