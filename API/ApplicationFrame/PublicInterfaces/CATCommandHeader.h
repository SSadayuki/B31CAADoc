#ifndef CATCommandHeader_H 
#define CATCommandHeader_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */
#include "CD0FRAME.h" 

#include "CATBoolean.h"
#include "CATCollec.h"
#include "CATCommand.h"
#include "CATEventSubscriber.h"
#include "CATListOfCATString.h"
#include "CATListOfInt.h"
#include "CATMsg.h"
#include "CATMsgCatalog.h"
#include "CATUnicodeString.h"
#include "CATMetaObject.h"
#include "CATString.h"
#include "CATIAV5Level.h"

class CATCmdAccess;
class CATCmdStarter;
class CATCommandHeaderList;
class CATDialog;
class CATNotification;
class l_CATCmdHeader;
class l_CATCommandHeader;
class CATCmdRep;
class CATFrmEditor;
#ifdef AfrCAA2
class CATAfrGen;
#endif

class CATLISTP(CATCommand);

/**
* Command Header Availability.
* @param CATFrmUnavailable
*    The command is not accessible: the starter is disabled and its icon is greyed.
* @param CATFrmAvailable
*    The command is  accessible: the starter is available and its icon is normal. 
*
*/
enum CATFrmState { CATFrmUnavailable = 0,
               CATFrmAvailable   = 1 };

/**
* @nodoc 
* Command Header Activity.
* <b>Role</b>: Internal usage. Used  in the Callback methods set on the CATCommand event.
* @param CATFrmCmdNo
*    The command is Canceled 
* @param CATFrmCmdAct
*    The command is Activated
* @param CATFrmCmdDeact
*    The command is Deactivated
*/
enum CATFrmCmdState { CATFrmCmdNo,
                  CATFrmCmdAct,
                  CATFrmCmdDeact };

/**
* @nodoc 
* Command Header Availabilities.
* <b>Role</b>: Command Header availability types.
*/
typedef unsigned int CATAfrAvailabilityType;

/** @nodoc */
#define CATAfrNormalAvailability       (1 << 0)
/** @nodoc */
#define CATAfrCommandSetAvailability   (1 << 1)
/** @nodoc */
#define CATAfrEditabilityAvailability  (1 << 2)
/** @nodoc */
#define CATAfrSmallScaleAvailability   (1 << 3)
/** @nodoc */
#define CATAfrLargeScaleAvailability   (1 << 4)

/** @nodoc */
typedef int (* CATCmdRepEnabler) (void);

/**
* Class to create a command header.
* <b>Role</b>: Each command you want to make available in your workshop or workbench 
* must have a command header. It holds the necessary information to load the command, 
* such as the name of the shared library in which the 
* command's executable code is located, the name of the command class, and the data to pass 
* to the command's code when this command becomes the current one. 
* <p>The command header has 
* resources for each command  to display, such as the command name shown to the end user, 
* its ToolTip displayed in a balloon, it help message, and its icon. This enables the 
* workshop or workbench to be  displayed, that is loaded in memory, without any of its 
* commands being itself loaded, except the default one, spares memory space, and improves 
* performance. The end user can  see the icons in the toolbars, the items in the menu bar, 
* can ask for help on a given command, without the command being loaded. It is only when 
* he/she clicks on the menu item or on the icon that the command code is actually loaded.</p>
* 
* <p>You cannot directly instanciate a <tt>CATCommandHeader</tt>, you must derive 
* this class. The easiest way is using the @href MacDeclareHeader macro such that:
* <pre>
*    #include "CATCommandHeader.h"
*    MacDeclareHeader(MyHeader);
* </pre>
* <tt>MyHeader</tt> is a command header class always available and with a
* default representation: a push button in a toolbar, and a push item is the menu bar or
* in a contextual menu. In most cases it is sufficient. However you can create a <b>customized 
* command header</b> for two reasons:
* <ul>
* <li>To manage the command availability with respect to what 
* the end user does, or what exists in the document.</li>
*  <br>The new class must at least derive from <tt>CATCommandHeader</tt>
* <li>To customize the command header representation.</li>
* <br>The new class must at least derive from @href CATAfrDialogCommandHeader 
* </ul>
* Creating a customized command header implies to have (or overwrite) at least
* the following methods:
* <ul>
*   <li>In public</li>
*    <ul>
*   <li>Constructor calling the base class constructor</li>
*   <li>Destructor</li>
*   <li>@href #Clone which calls the constructor class</li>
*   </ul>
*   <li>In private - to implement</li>
*    <ul>
*   <li>Constructor, with a <tt>CATCommandHeader</tt> pointer as argument, and 
*    calling the constructor with a <tt>CATCommandHeader</tt> of
*    the base class</li>
*    </ul>
*   <li>In private - not implemented</li>
*    <ul>
*   <li>Defauft constructor</li>
*   <li>Copy constructor</li>
*   <li>Assignment operator </li>
*    </ul>
* </ul>
* The customized command header (named <tt>MyHeader</tt>) must be a <b>component</b> to implement 
* any kind interfaces, so it must contain the following macros:
*   <ul>
*   <li>in header file: @href CATDeclareClass </li>
*   <li>in source file: @href CATImplementClass with the following arguments: 
*      <pre>(MyHeader, Implementation,CATBaseUnknown,CATNull)</pre</li>                
*   </ul>
* To assign <b>resources</b> to the command header,
* it must contain the following macros:
*   <ul>
*   <li>in header file: @href CATDeclareHeaderResources ;</li>
*   <li>in source file: @href CATImplementHeaderResources with the following arguments:
*                  <pre>(MyHeader, BaseClass,MyHeaderResourceFile)</pre> </li>               
*   </ul> 
* <b>Where</b> to create command header instances ? 
* Generaly, you create instances in the following methods: 
* <ul>
* <li>@href CATIWorkshop#CreateCommands </li>
* <li>@href CATIWorkbench#CreateCommands </li>
* <li>@href CATIWorkbenchAddin#CreateCommands </li>
* </ul>
* In this case, the command header instance, identified by the first argument of the constructor 
* class, is <b>associated with a starter</b> thanks to the 
* @href SetAccessCommand macro </p>
* You can also create command header instances to set in the "Tools Palette" toolbar. It is
* a specific toolbar which can be filled, for a specific workbench by implementing 
* @href CATIAfrPaletteOptions, or/and for a specific command thanks @href CATIAfrCmdPaletteOptions .
* In these two cases, before creating a command header instance, you must check that the
* instance does not already exist in the current editor. It is possible thanks to the
* @href CATAfrGetCommandHeader global function. 
* <p>Who <b>delete</b> command header instances ? 
* <br>Each command header instance is kept in a list by the @href CATFrmEditor associated 
*  with the document to edit. The editor manages the command header deletion. You must never 
* delete a command header instance.  </p>
*/

class ExportedByCD0FRAME CATCommandHeader: public CATEventSubscriber
{

public:

  
  /** @nodoc */
  CATDeclareCBEvent(CommandStarted);
      /** @nodoc */
  CATDeclareCBEvent(BecomeAvailableEvent);
    /** @nodoc */
  CATDeclareCBEvent(BecomeUnavailableEvent);
    /** @nodoc */
  CATDeclareCBEvent(Cancel);
    /** @nodoc */
  CATDeclareCBEvent(Delete);
    /** @nodoc */
  CATDeclareCBEvent(Activate);
    /** @nodoc */
  CATDeclareCBEvent(Deactivate);
    /** @nodoc */
  CATDeclareCBEvent(CommandFailed);
    /** @nodoc */
  CATDeclareCBEvent(SetIconEvent);
    /** @nodoc */
  CATDeclareCBEvent(SetTitleEvent);
    /** @nodoc */
  CATDeclareCBEvent(SetAcceleratorEvent);
    /** @nodoc */
  CATDeclareCBEvent(SetUserAliasEvent);
    /** @nodoc */
  CATDeclareCBEvent(HeaderDeleted);
    /** @nodoc */
  CATDeclareCBEvent(Generic);


  /** @nodoc */
  CATDeclareKindOf;
  
    /*---------------------------------*/
    //     CONSTRUCTORS  
    /*---------------------------------*/

  /** @nodoc */
  CATCommandHeader ();

  /** @nodoc */
  void Initialize(const CATString & HeaderID,
      const CATString & loadName,
      const CATString & className);
  /** @nodoc */
  void Initialize(const CATString & HeaderID,
      const CATString & ClsidName);

  /** @nodoc */
  CATCommandHeader (const CATString & HeaderID,
        int state = CATFrmAvailable);

  /** @nodoc */
  CATCommandHeader (const CATString & HeaderID,
        const CATString & loadName,
        int state = CATFrmAvailable);

  /** @nodoc */
  CATCommandHeader (const CATString & HeaderID,
        const CATString & loadName,
        const CATString & argument,
        int state = CATFrmAvailable);

  /** @nodoc */
  CATCommandHeader (const CATString & HeaderID,
        const CATString & loadName,
        const CATString & className,
        const CATString & argument,
        int state = CATFrmAvailable);
  

  /**
  * Constructs a command header. 
  * @param iHeaderID
  *     The identifier of the header. It iss the <tt>command</tt> argument of the <tt>
  *     SetAccessCommand </tt> macro.It iss used for NLS resources.
  * @param iLoadName
  *    The name of the shared library where <tt>iClassName</tt> is.
  * @param iClassName
  *    The name of the <tt> CATCommand </tt> class.
  * @param iArgument
  *    The argument of the <tt> CATCommand </tt> class.
  * @param iState
  *    The CATCommandHeader state.
  *    <br><b>Legal values</b>: 
  *       <li> CATFrmAvailable (The default value) </li>
  *       <li> CATFrmUnavailable </li>
  * 
  * @see CATCommand, SetAccessCommand, CATFrmState
  */
  CATCommandHeader (const CATString & iHeaderID,
                const CATString & iLoadName,
                const CATString & iClassName,
                           void * iArgument,
                              int iState = CATFrmAvailable);
  
  virtual ~CATCommandHeader ();
  
  /**   
  * Clones the command header.
  * <br<b>Role:</b>This method calls the constructor with a <tt>CATCommandHeader</tt> 
  *  pointer as argument. In your derived class overwrite this method such that:
  *  
  * <pre>
  * CATCommandHeader * MyHeader::Clone ()                                  
  * { 
  *   return new MyHeader(this); 
  * }   
  * </pre>
  * You must never call a <tt>Clone</tt> method. This method is called by the "frame".
  * Today, it is called for your CAA instances in only one case: when the command header 
  * instance is created in an Add-in of the General workshop, refer to the 
  * @href CATIAfrGeneralWksAddin interface for more details about these Add-ins. 
  * @return 
  *  The new command header instance.
  */
  virtual CATCommandHeader * Clone();
  
    /*---------------------------------*/
    //     STATISTIQUES
    /*---------------------------------*/
  /**
  * @nodoc
  * Returns the last statistique identifier .
  * <b>Role</b>: This id can be used by a undefined command to supend/resume
  * the header command statistique time.
  */
  int GetLastStatisticIdentifier();
  
    /*---------------------------------*/
    //     COMMAND HEADER MANAGMENT  
    /*---------------------------------*/
  
  /**
  * @nodoc
  * Returns the header identifier.
  * <b>Role</b>: 
  */
  const char * GetID ();

   /**
  * @nodoc
  * Returns the header Alias.
  * <b>Role</b>: The alias id of a header can be defined in a CATRsc file. The name
  * of this file depends on the workshop or workbench or addin origin of the header.
  */
  const char * GetAlias ();

  /**
  * Returns the header visibility in the Tools/Customize command.
  * <br><b>Role</b>: This method returns if the command header is visible or not
  * in the Tools/Customize command.
  * @return
  *  The header visibility in the Tools/Customize command.
  * <br><b>Legal values</b>: <tt>1</tt> Visible, <tt>0</tt> : invisible
  */
  virtual int GetVisibility      ();

  /**
  * Sets the header visibility in the Tools/Customize command.
  * <br><b>Role</b>: This method enables you to hide or show the 
  * command header instance in the Tools/Customize command. It can be interesting
  * to hide some command header instances, when you do not want that the end user 
  * drag and drop your command in a toolbar. 
  * @param iIsVisible
  * The header visibility in the Tools/Customize command.
  * <br><b>Legal values</b>: <tt>1</tt> Visible, <tt>0</tt> : invisible
  */
  void        SetVisibility(int iIsVisible);
  
    /*---------------------------------*/
    //     NLS-RSC
    /*---------------------------------*/
  
  /** @nodoc */
  enum CATIconState { NormalIcon = 0, GreyedIcon = 1,
                      PressedIcon = 2, GreyedPressedIcon = 3,
                      FocusedIcon = 4 };
  /**
  * @nodoc
  * @param iState
  *    use a combination of NormalIcon, GreyedIcon
  *    and PressedIcon with | for state
  */
  void         SetIconName (const CATString & iconName, int iState = 0);
                              
  /** @nodoc */
  void         SetAccelerator(const CATUnicodeString &accelerator);
  /** @nodoc */
  void         SetCategory2(const CATUnicodeString &category);

  /** @nodoc */
  virtual void SetUserAlias(const CATUnicodeString & userAlias);

  /** @nodoc */
  virtual void SetTitle    (const CATUnicodeString & nlsCommandName);
  /** @nodoc */
  void         SetHelp     (const CATUnicodeString & help);
  /** @nodoc */
  void         SetShortHelp(const CATUnicodeString & help);
  /** @nodoc */
  void         SetDialogLongHelp(const CATUnicodeString & help);

  /** @nodoc */
  CATUnicodeString         & GetAccelerator     ();

  /** @nodoc */
  CATUnicodeString         & GetDefaultAccelerator();

  /** @nodoc */
  CATUnicodeString         & GetUserAlias       ();

  /** @nodoc */
  CATUnicodeString         & GetDefaultUserAlias       ();

  /** @nodoc */
  CATUnicodeString         & GetCategory2       ();
  /** @nodoc */
  virtual CATUnicodeString & GetHelp            ();
  /**
  * @nodoc
  * Returns an icon's name .
  * @param iIconType
  * Type of the icon. Used a value defined in @href CATIconState
  */
  virtual CATString          GetIconName        (int iIconType = 0);

  /** @nodoc */
  CATString                  GetDefaultIconName (int iIconType = 0);

  /** @nodoc */
  virtual CATUnicodeString & GetShortHelp       ();
  /** @nodoc */
  virtual CATUnicodeString & GetTitle           ();

  /** @nodoc */
  CATUnicodeString & GetDefaultTitle            ();

  /** @nodoc */
  virtual void               ShowLongHelp       ();
  /** @nodoc */
  virtual CATUnicodeString & GetContextualHelp  ();
  /** @nodoc */
  virtual void               SetContextualHelp  (CATUnicodeString);
  /** @nodoc */
  virtual CATUnicodeString & GetDialogLongHelp  ();

  /** @nodoc */
  virtual CATString GetResourceFile(int depth);
  /** @nodoc */
  virtual int       GetResourceValue (const CATString  & key,
                              CATUnicodeString & resource);
  /** @nodoc */
  virtual int       GetResourceValue (const CATString & key,
                              CATString & resource);
  
    /*---------------------------------*/
    //     NLS-RSC
    /*---------------------------------*/
  /** @nodoc */
  virtual CATCmdRep * CreateMenuRep     (CATCmdStarter *, CATDialog *);
  /** @nodoc */
  virtual void        DestroyMenuRep    (CATCmdStarter *);
  /** @nodoc */
  virtual CATCmdRep * CreateToolbarRep  (CATCmdStarter *, CATDialog *);
  /** @nodoc */
  virtual void        DestroyToolbarRep (CATCmdStarter *);
  /** @nodoc */
  virtual void        SetDragDropModeForCommand(CATDialog *parent, CATCmdRep *rep);
  /** @nodoc */
  virtual void        UnsetDragDropModeForCommand(CATCmdRep *rep);
  /** @nodoc */
  virtual CATCmdRep * CreateCtxMenuRep  (CATCmdStarter *, CATDialog *);
  /** @nodoc */
  virtual void        DestroyCtxMenuRep (CATCmdStarter *);
  
  /** @nodoc */
  void AddRep();
  /** @nodoc */
  void ReleaseRep();

  /** @nodoc */
  int NbRep() const;

  /** @nodoc */
  int                 CanCreateRep      () const;
  
  /** @nodoc */
  void                SetRepEnabler     (CATCmdRepEnabler);

  /** @nodoc */
  static int          OleRepDisable     ();


    /*---------------------------------*/
    //     CATCOMMAND's PART 
    /*---------------------------------*/

  /** @nodoc */
  virtual void SetName     (const CATString & loadName);

  /** @nodoc */
  virtual CATString        & GetClass           ();
  /** @nodoc */
  virtual CATString        & GetClsidName       ();
  /** @nodoc */
  virtual CATString        & GetName            ();
  /** @nodoc */
  virtual CATString        & GetOptionPage      ();

  /** @nodoc */
  CATString GetArgument();

  /** @nodoc */
  void * GetPtrArgument();

  /** @nodoc */
  void         SetArgument (const CATString & argument);

  /** @nodoc */
  void         SetArgument (void * argument);
  /** @nodoc */
  void         SetCharArgument (const CATString & argument);
  /** @nodoc */
  CATString &  GetCharArgument ();

    /*---------------------------------*/
    //     COMMAND HEADER  ACTIVITY
    /*---------------------------------*/
  /** @nodoc */
  int            GetCmdState      ();

  /** @nodoc */
  int HasCommand();

  /**
  * @nodoc
  * Starts the command.
  * <br><b>Role</b>: The CATCommand associated to the header is created and launched. 
  * If you overwrite this method, think to do :
  * <ul>
  * <li></li> Tests if the command is available: @href IsAvailable, and returns NULL if it's not
  * the case.
  * <li></li> Sets the cursor Busy 
  * <li></li> Sets callbacks on the activate, delete, cancel and desactivate event of 
  * the CATCommand.
  * </ul>
  */
  virtual CATCommand * StartCommand       ();
  /** @nodoc */
  virtual CATCommand * ExecuteCommand     ();
  /** @nodoc */
  static  CATCommand * StartCommand       (const CATString & commandName);
  /** @nodoc */
  void                 StopCommand        ();
  /** @nodoc */
  static void          StopCommand        (const CATString & commandName);

  /**
  * Retrieves the argument of the header.
  */
  static CATString   & GetCurrentArgument ();
  
    /*---------------------------------*/
    //     COMMAND HEADER AVAILABILITY 
    /*---------------------------------*/
  /** @nodoc */
  int                IsAvailable ();
  
  /** 
  * Makes the command Available.
  * <br><b>Role</b>: The command of the header becomes available. The icon switches from
  * the grayed to the normal state.  
  */
  virtual void               BecomeAvailable   ();
  
  /** 
  * Makes the command Unavailable.
  * <br><b>Role</b>: The command of the header becomes unavailable. The icon switches from
  * the normal to the grayed state.  
  */
  virtual void               BecomeUnavailable ();
  
    /*---------------------------------*/
    //     COMMAND HEADER REPEATABILITY
    /*---------------------------------*/

  /** @nodoc */
  void SetRepeatability(int CanBeRepeated); // 1 for true, 0 for false
  /** 
  * @nodoc 
  * @return 
  * 1 for true, 0 for false
  */
  int  GetRepeatability();  
  /** @nodoc */
  virtual void Repeat();
  
    /*---------------------------------*/
    //     RESEARCH COMMAND HEADER BY ID
    /*---------------------------------*/

  /** @nodoc */
  static int                GetHeaderCount   (const CATBoolean forceWorkbenchesLoad = TRUE);

  /** @nodoc */
  static CATCommandHeader * GetHeaderFromList(const
                CATString & commandHeaderID, const CATBoolean forceWorkbenchesLoad = TRUE);

  /** @nodoc */
  static CATCommandHeader * GetHeaderFromList(int position);

  /**
  * @nodoc
  * Researchs an instance by its ID .
  * <b>Role<b>: Necessary when the current editor is not the editor of the
  * command to activate. Not used.
  */
  static CATCommandHeader * GetHeaderFromNoCurrentList(
    const CATString & iCommandHeaderID, CATFrmEditor    * iEditor, const CATBoolean forceWorkbenchesLoad = TRUE);
  
 
    /*---------------------------------*/
    //     Callbacks
    /*---------------------------------*/

  /** @nodoc */
  virtual void DeleteCB     (CATCallbackEvent, void *, CATNotification *,
           CATSubscriberData, CATCallback);
  /** @nodoc */
  virtual void CancelCB     (CATCallbackEvent, void *, CATNotification *,
           CATSubscriberData, CATCallback);
  /** @nodoc */
  virtual void ActivateCB   (CATCallbackEvent, void *, CATNotification *,
           CATSubscriberData, CATCallback);
  /** @nodoc */
  virtual void DeactivateCB (CATCallbackEvent, void *, CATNotification *,
           CATSubscriberData, CATCallback);

  /** @nodoc */
  void         lSetIconCB       (CATCallbackEvent, void *, CATNotification *,
         CATSubscriberData, CATCallback);
  /** @nodoc */
  void         lSetAcceleratorCB(CATCallbackEvent, void *, CATNotification *,
         CATSubscriberData, CATCallback);
  /** @nodoc */
  void         lSetUserAliasCB(CATCallbackEvent, void *, CATNotification *,
         CATSubscriberData, CATCallback);
  /** @nodoc */
  void         lSetTitleCB      (CATCallbackEvent, void *, CATNotification *,
         CATSubscriberData, CATCallback);
  
    /*---------------------------------*/
    //     LICENSING
    /*---------------------------------*/
  
  /** @nodoc */
  virtual const char * GetFW();
  
  /** @nodoc */
  void SetAuthorizationLevel(int level);
  /** @nodoc */
  int  GetAuthorizationLevel();
  

    /*---------------------------------*/
    //     FOR INTERNAL USAGE 
    /*---------------------------------*/
  /** @nodoc */
  l_CATCmdHeader     * GetCmdLetterObject();
  /** @nodoc */
  l_CATCommandHeader * GetLetterObject ();
  /** @nodoc */
  const CATString & GetOrigin() const;
  /** @nodoc */
  static CATString LastCommandName;
  /** @nodoc */
  static CATString LastCommandArgument;
  /** @nodoc */
 
    /*---------------------------------*/
    //     CREATION BY CLSID 
    /*---------------------------------*/
#ifdef AfrCAA2
  /** @nodoc */
  virtual void SaveAsXml (CATAfrGen * Gen, int depth);
  /** @nodoc */
  void SetWorkElement (const CATString & type);
  /** @nodoc */
  int  GetWorkElement (CATString & WorkElement);
  /** @nodoc */
  void SetHdrLib (const CATString & iLib);
  /** @nodoc */
  void SetHdrClass (const CATString & iClass);
  /** @nodoc */
  void SetHdrClsidName (const CATString & iClsid);
  /** @nodoc */
  void SetHdrCharArgument(const CATString& iArg);
  /** @nodoc */
  CATString & GetHdrCharArgument();
#endif

  /**
  * @nodoc
  * method  to override for first traitments
  */
  virtual HRESULT LogicalBirth();  
  /**
  * @nodoc
  * method  to override symetric as @href #LogicalBirth
  */
  virtual HRESULT LogicalDeath();     

  /** @nodoc */
  void SetAvailability (CATAfrAvailabilityType, CATFrmState);

  /** @nodoc */
  CATFrmState GetAvailability (CATAfrAvailabilityType);

  /**
    * @nodoc
    * This is an internal method. Do not use it. Only one special mechanism uses it.
    */
  void SetLockUnavailable (CATClassId classId, CATBoolean locked);

  /** @nodoc */
  void SetLockUnavailable (CATBoolean locked);

  /** @nodoc */
  void SetOption (const char * opt);
  /** @nodoc */
  const char * GetOption () const;
  
protected:
  /**
  * Constructs a command header instance.
  * <br<b>Role:</b>This method calls the copy constructor. 
  * In your derived class overwrite this method such that:
  * 
  * <pre>
  * MyHeader::MyHeader(CATCommandHeader * iHeaderToCopy):
  *                           CATCommandHeader(iHeaderToCopy)
  * {
  * }   
  * </pre>
  * This method is called by the @href #Clone method.
  * @param iHeaderToCopy
  * The header to copy. 
  */
  CATCommandHeader (CATCommandHeader * header);
  
  /** @nodoc */
  virtual void DoShow();
  /** @nodoc */
  virtual void DoHide();
  
  /** 
  * @nodoc 
  * Use ONLY inside StartCommand !
  * See SetArgument otherwise
  */
  void SetCurrentArgument ();   
    
  /** @nodoc */
  CATString _Argument;
  /** @nodoc */
  CATCommandMode           _Mode;
  /** @nodoc */
  CATLISTP(CATCommand)   * _CommandList;
  /** @nodoc */
  CATFrmEditor           * _Editor     ;   // Creation's editor 
  /** @nodoc */
  CATCmdRepEnabler         _cmdRepEnabler;
    
  /** @nodoc */
  virtual void Init      (const CATString & HeaderID,
      const CATString & LoadName,
      const CATString & ClassName);
private:

  // Copy constructor (not implemented)
  CATCommandHeader(const CATCommandHeader&);
  
  // Assignment operator (not implemented)
  CATCommandHeader& operator=(const CATCommandHeader&);

  
  void lGenericCB(CATCallbackEvent, void *, CATNotification *,
              CATSubscriberData, CATCallback);
  
  int          _State;
  unsigned int _Availability;
  CATListOfCATString _LockIds;
  CATListOfInt       _LockStates;

  int         _CommandState;
  void      * _pArgument;
  CATString * _charArg;

#ifdef AfrCAA2
  CATString _HdrCharArg;
#endif
  

  
  l_CATCmdHeader       * _CmdLetter;
  l_CATCommandHeader   * _Letter;
  CATCommandHeaderList * _List;
  
  int _level;
  int _nbRep;
  
  static CATString     _CurrentArgument;
  static CATCommand  * _NotifSender;

  CATString _originAccess;

#ifdef AfrCAA2
  CATString  _HdrLib;
  CATString  _HdrClass;
  CATString  _HdrClsid;
  //  CATString * _WorkElement;
#endif
  int _cmd;
  
  CATString  * _Option;

    // To manage statistic
  int                     _LastEventID ;
  static CATUnicodeString _CATCommandHeaderEmptyCUS;
  static CATString        _CATCommandHeaderEmptyCS;

  protected :
  /** @nodoc */
  CATBoolean  _repeatCmdAllowed;

  private:
  CATBoolean  _LockedUnavailable;

};

//-----------------------------------------------------------------------------
/**
* Defines a method to get the header's resource file.
* <b>Role</b>: Insert this macro in the header file (.h) of your header class 
* and Use it in conjunction with @href CATImplementHeaderResources in the .cpp file.
*/

#define CATDeclareHeaderResources         \
public:                 \
                    \
  virtual const char * GetFW();           \
  virtual CATString GetResourceFile(int depth)

/** @nodoc */
#define MkHeaderStr(x)  #x
/** @nodoc */
#define XMkHeaderStr(x) MkHeaderStr(x)

/**
*  Implements the methods to get the header's resource file.
*  @param DerivedHeader
*      Command header class name 
*  @param BaseHeader
*      Base class of your header class. 
*  @param Rsrc
*      Resource file name
*      There is a Nls resources file , where each part must be translated
*      and there is a Rsc file. <tt>HeaderID</tt> is the identifier of the
*      header, in other words the first argument of the command header constructor class.
*     <dl>
*     <dt>In the <tt>Rsrc.CATNls</tt> file you find:
*     <br>
*     <ul>
*     <li><tt>Rsrc.HeaderID.<b>Title</b></tt></li>
*     <dt>Text displayed in the menu bar for the command
*     <li><tt>Rsrc.HeaderID.<b>Help</b></tt></li>
*     <dt>Text displayed in the status bar as the command help 
*     message when the mouse moves over   the command 
*     <li><tt>Rsrc.HeaderID.<b>ShortHelp</b></tt></li> 
*     <dt>Text displayed in a balloon as the command short help message 
*      when the mouse moves over the command. 
*     <li><tt>Rsrc.HeaderID.<b>LongHelp</b></tt></li>
*     <dt>Text displayed in a balloon when the end user clicks on the help command, 
*     which turns the mouse cursor as a question mark, 
*     and then clicks on the icon representing the command.
*     <li><tt>Rsrc.HeaderID.<b>Category</b></tt></li>
*     <dt>In Tools/Customize/Command, its a means to sort commands. 
*     </ul>
*     <br>
*     <dt>In this <tt>Rsrc.CATRsc</tt> file you find:
*     <ul>
*     <li><tt>Rsrc.HeaderID.<b>Icon.Normal</b></tt></li>
*     <li><tt>Rsrc.HeaderID.<b>LongHelpId</b></tt></li> 
*     <dt>Identifier to associate a URL with the command. The URL is stored in a .map file 
*     <li><tt>Rsrc.HeaderID.<b>Accelerator</b></tt></li>
*     <dt>A combination of keys, such as "Ctrl+character", used to activate the command 
*     directly (known as shortcut in Microsoft publications.) 
*     </ul>
*     </dl>
*  @see CATDeclareHeaderResources
*/
#define CATImplementHeaderResources(DerivedHeader, BaseHeader, Rsrc)  \
                  \
const char * DerivedHeader::GetFW()         \
{                 \
  return XMkHeaderStr(_MK_FWNAME_);         \
}                 \
                  \
CATString DerivedHeader::GetResourceFile(int depth)                     \
{                 \
  static CATString rsrc(#Rsrc);           \
  return (depth <= 0) ? rsrc : BaseHeader::GetResourceFile(depth - 1);  \
}
// Attention! La mise de la variable static implique que tous les headers 
// doivent être dérivés.


/**
 * Defines a method to get the header's resource file, in a special way.
 * <b>Role</b>: When the role of the header is defined in its constructor, 
 * insert this macro in its header file (.h)
 * and use it in conjunction with @href CATImplementHeaderSpecialResources 
 * in the .cpp file.
 * <br><br>
 * The difference with CATDeclareHeaderResources is that the resources files 
 * for different instances of this header, have a different name.
 * <br>Thus, if the role of the header is defined in its constructor, one needs 
 * to define specialized resources attached to every instance of this header. 
 * This is all the more true, when the different instanciations are made from 
 * different frameworks.
 * <br><br>
 * <b>Important points</b>:
 * <ul>
 * <li>Once <tt>CATDeclareHeaderSpecialResources</tt> has been used in a class D1, 
 * all derived classes from D1 must exclusively use this macro, and not 
 * <strike>CATDeclareHeaderResources</strike>.</li>
 * <li>When using this macro, a <tt><b>_ResourceFileNamePrefix</b></tt> CATString data 
 * member is thus defined. It <b>must</b> be valuated through in the class 
 * constructor.</li>
 * </ul>
 * <br><br>
 * Refer to @href CATImplementHeaderSpecialResources for more details, 
 * and an implementation example.
 */

#define CATDeclareHeaderSpecialResources          \
public:                                           \
  virtual const char * GetFW();                   \
  virtual CATString GetResourceFile(int depth);   \
  virtual CATString GetSpecialResourcesFile(const CATString& iSuffix);\
protected:                                        \
  CATString _ResourcesFileNamePrefix


/**
 * Implements the methods to get the header's resource file. 
 * <br><br>
 * The difference with CATImplementHeaderResources is that the resources 
 * files have a different name, which is useful if your header or any directly 
 * derived class can be instanciated from different frameworks.
 * <br><br>
 * Indeed, there can be only one resources file of the same name, whereever in 
 * the code. A more detailed explanation follows in the parameters' descriptions.
 * <br><br>
 * <b>Let us imagine the following scenario:</b>
 * <ul>
 * <li> a BaseHeader using CATDeclareHeaderResources and 
 * CATImplementHeaderResources(BaseHeader, BaseBaseHeader, BaseRsc). <br><br></li>
 * <li> a DerivedHeader1 deriving from BaseHeader, and
 * <ol><li>which role is specific for every instanciation, and therefore is 
 * using CATDeclareHeaderSpecialResources and 
 * CATImplementHeaderSpecialResources(<b>DerivedHeader1</b>, BaseHeader, <b>DerivedRsc1</b>) 
 * macros. </li>
 * <li> which constructors is of the following kind:<br>
 * <tt>DerivedHeader1(const CATString& iHeaderId,</tt><i>arguments for role definition</i>, 
 * <tt><b>const CATString& iResourcesFileNamePrefix1</b>);</tt></li>
 * <li> where <tt><b>iResourcesFileNamePrefix1</b></tt> is stored in the 
 * <tt><b>_ResourcesFileNamePrefix</b></tt> 
 * data declared by the <tt>CATDeclareHeaderSpecialResources</tt> macro.
 * </li></ol><br><br></li>
 * <li> a DerivedHeader2 deriving from DerivedHeader1, and 
 * <ol><li>which role is specific for every instanciation, and therefore is 
 * using CATDeclareHeaderSpecialResources and 
 * CATImplementHeaderSpecialResources(<b>DerivedHeader2</b>, BaseHeader, <b>DerivedRsc2</b>) 
 * macros. </li>
 * <li> which constructors is of the following kind:<br>
 * <tt>DerivedHeader2(const CATString& iHeaderId2,</tt><i>arguments for role definition</i>, 
 * <tt><b>const CATString& iResourcesFileNamePrefix2</b>);</tt></li>
 * <li> where <tt><b>iResourcesFileNamePrefix2</b></tt> is stored in the 
 * <tt><b>_ResourcesFileNamePrefix</b></tt>
 * data declared by the <tt>CATDeclareHeaderSpecialResources</tt> macro.</li></ol></li>
 * </ul>
 * <br><br>
 * When an application is instanciating DerivedHeader2 classes, through:<br>
 * <tt>new DerivedHeader2("MyDerivedHeader2", ..., "MyFilePrefix_");</tt>
 * <br>the resources for this header will be looked for:
 * <ul><li>first in "MyFilePrefix_DerivedRsc2" .CATNls and .CATRsc files</li>
 * <li>then in "MyFilePrefix_DerivedRsc1" .CATNls and .CATRsc files.</li>
 * <li>and at last in "BaseHeader" .CATNls and .CATRsc files.</li>
 * </ul>
 * <br><br>
 *  @param DerivedHeader
 *      Command header class name. 
 *  @param BaseHeader
 *      Base class of your header class.
 *  @param Rsrc
 *      Resources file name
 * <br><br>
 * The keys to be filled are the same as for the @href CATImplementHeaderResources macro.
 * <br>
 * They are all starting this way: <tt>FilePrefix_BaseRsc.HeaderId</tt>
 * <br><br>
 * @see CATDeclareHeaderSpecialResources, CATImplementHeaderResources.
*/
#define CATImplementHeaderSpecialResources(DerivedHeader, BaseHeader, Rsrc) \
                                                                            \
const char * DerivedHeader::GetFW()                                         \
{                                                                           \
  return XMkHeaderStr(_MK_FWNAME_);                                         \
}                                                                           \
                                                                            \
CATString DerivedHeader::GetResourceFile(int depth)                         \
{                                                                           \
  CATString rsrc(DerivedHeader::GetSpecialResourcesFile(#Rsrc));      \
  return (depth <= 0) ? rsrc : BaseHeader::GetResourceFile(depth - 1);      \
}                                                                           \
                                                                            \
CATString DerivedHeader::GetSpecialResourcesFile(const CATString& iSuffix)   \
{                                                                           \
  return (_ResourcesFileNamePrefix+iSuffix);                                 \
}

//Ici pas de static, car les headers ne sont pas dérivés (but de la macro 
//HeaderSpecialResources).



/*
//-----------------------------------------------------------------------------
#define CATHeaderDeclareResources(DerivedHeader, BaseHeader, Rsrc)          \
int DerivedHeader::GetResourceValue (const CATString & key,                 \
                     CATUnicodeString & resource)           \
{                                                                           \
  return 1;                                                                 \
}                                                                           \
                                                                            \
int DerivedHeader::GetResourceForClass (const CATString & key,              \
                        CATUnicodeString & resource)        \
{                                                                           \
  return 1;                                                                 \
}                                                                           \
                                                                            \
CATMsgCatalog * DerivedHeader::_Resources = NULL;                           \
                                                                            \
int DerivedHeader::_hasResources = 1;

*/

//---------------------------------------------------------------------------

#ifndef HeaderExportedBy
/** @nodoc */
#define HeaderExportedBy
#endif

//---------------------------------------------------------------------------
/**
*  @nodoc 
*  Declares a header class.
*  @param DerivedHeader
*     Command header class name 
*     
*/
#define MacDefineHeader(DerivedHeader)                                      \
class HeaderExportedBy DerivedHeader : public CATCommandHeader              \
{                                                                           \
 public:                                                                    \
  DerivedHeader(const CATString & HeaderID,                                 \
                const CATString & LoadName,                                 \
    int state = CATFrmAvailable);                               \
  DerivedHeader(const CATString & HeaderID,                                 \
                const CATString & LoadName,                                 \
                const CATString & argument,                                 \
    int state = CATFrmAvailable);                               \
  DerivedHeader(const CATString & HeaderID,                                 \
                const CATString & LoadName,                                 \
                const CATString & ClassName,                                \
                void * Argument,                                            \
    int state = CATFrmAvailable);                               \
  virtual ~DerivedHeader();                                                 \
                                                                            \
  virtual CATCommandHeader * Clone();                                       \
                                                                            \
 protected:                                                                 \
                                                                            \
  DerivedHeader(CATCommandHeader * header);                                 \
                                                                            \
  CATDeclareKindOf;                                                         \
                                                                            \
  CATDeclareHeaderResources;                                                \
};

//---------------------------------------------------------------------------
/**
*  @nodoc 
*  Implement a header class.
*  @param DerivedHeader
*     Command header class name 
*     
*/
#define MacImplementHeader(DerivedHeader)                                   \
CATImplementKindOf(DerivedHeader, Implementation, CATCommandHeader,CATNull);\
                                                                            \
DerivedHeader::DerivedHeader (const CATString & HeaderID,                   \
            const CATString & LoadName,                   \
            int state):                                   \
  CATCommandHeader(HeaderID, LoadName, state)                               \
{}                                                                          \
                                                                            \
DerivedHeader::DerivedHeader (const CATString & HeaderID,                   \
            const CATString & LoadName,                   \
            const CATString & argument,                   \
            int state):                                   \
  CATCommandHeader(HeaderID, LoadName, argument, state)                     \
{}                                                                          \
                                                                            \
DerivedHeader::DerivedHeader (const CATString & HeaderID,                   \
            const CATString & LoadName,                   \
            const CATString & ClassName,                  \
            void * Argument,                              \
            int state):                                   \
  CATCommandHeader(HeaderID, LoadName, ClassName, Argument, state)          \
{}                                                                          \
                                                                            \
DerivedHeader::DerivedHeader (CATCommandHeader * header):                   \
  CATCommandHeader(header)                                                  \
{}                                                                          \
                                                                            \
DerivedHeader::~DerivedHeader ()                                            \
{}                                                                          \
                                                                            \
CATCommandHeader * DerivedHeader::Clone ()                                  \
{ return new DerivedHeader(this); }                                         \
                                                                            \
CATImplementHeaderResources(DerivedHeader, CATCommandHeader, DerivedHeader)

//---------------------------------------------------------------------------
/**
*  Declares and defines a header class.
*  @param DerivedHeader
*     Command header class name 
*     
*/
#define MacDeclareHeader(DerivedHeader)                                     \
MacDefineHeader(DerivedHeader);                                             \
MacImplementHeader(DerivedHeader);

//---------------------------------------------------------------------------
/** @nodoc */
#define MacDefineDerivedHeader(DerivedHeader, BaseHeader)                   \
class HeaderExportedBy DerivedHeader : public BaseHeader                    \
{                                                                           \
 public:                                                                    \
  DerivedHeader(const CATString & HeaderID,                                 \
                const CATString & LoadName,                                 \
    int state = CATFrmAvailable);                               \
  DerivedHeader(const CATString & HeaderID,                                 \
                const CATString & LoadName,                                 \
                const CATString & argument,                                 \
    int state = CATFrmAvailable);                               \
  DerivedHeader(const CATString & HeaderID,                                 \
                const CATString & LoadName,                                 \
                const CATString & ClassName,                                \
                void * Argument,                                            \
    int state = CATFrmAvailable);                               \
  virtual ~DerivedHeader();                                                 \
                                                                            \
  virtual CATCommandHeader * Clone();                                       \
                                                                            \
 protected:                                                                 \
                                                                            \
  DerivedHeader(CATCommandHeader * header);                                 \
                                                                            \
  CATDeclareKindOf;                                                         \
                                                                            \
  CATDeclareHeaderResources;                                                \
};

//---------------------------------------------------------------------------
/** @nodoc */
#define MacImplementDerivedHeader(DerivedHeader, BaseHeader)                \
CATImplementKindOf(DerivedHeader, Implementation, BaseHeader, CATNull);     \
                                                                            \
DerivedHeader::DerivedHeader (const CATString & HeaderID,                   \
            const CATString & LoadName,                   \
            int state):                                   \
  BaseHeader(HeaderID, LoadName, state)                                     \
{}                                                                          \
                                                                            \
DerivedHeader::DerivedHeader (const CATString & HeaderID,                   \
            const CATString & LoadName,                   \
            const CATString & argument,                   \
            int state):                                   \
  BaseHeader(HeaderID, LoadName, argument, state)                           \
{}                                                                          \
                                                                            \
DerivedHeader::DerivedHeader (const CATString & HeaderID,                   \
            const CATString & LoadName,                   \
            const CATString & ClassName,                  \
            void * Argument,                              \
            int state):                                   \
  BaseHeader(HeaderID, LoadName, ClassName, Argument, state)                \
{}                                                                          \
                                                                            \
                                                                            \
DerivedHeader::DerivedHeader (CATCommandHeader * header):                   \
  BaseHeader(header)                                                        \
{}                                                                          \
                                                                            \
DerivedHeader::~DerivedHeader ()                                            \
{}                                                                          \
                                                                            \
CATCommandHeader * DerivedHeader::Clone ()                                  \
{ return new DerivedHeader(this); }                                         \
                                                                            \
CATImplementHeaderResources(DerivedHeader, BaseHeader, DerivedHeader)

//---------------------------------------------------------------------------
/**
*  Declares and defines a header class.
*  @param DerivedHeader
*     Command header class name 
*  @param BaseHeader
*     Command header base class name 
*     
*/
#define MacDeclareDerivedHeader(DerivedHeader, BaseHeader)                  \
MacDefineDerivedHeader(DerivedHeader, BaseHeader);                          \
MacImplementDerivedHeader(DerivedHeader, BaseHeader);

/**
 * @nodoc
 */
#define MacSetHeaderOption(hdr, opt)\
  if (hdr)\
    hdr->SetOption (#opt)
//---------------------------------------------------------------------------

/*
#define MacCreateHeader(DerivedHeader, Load, Identifier)                    \
static DerivedHeader static_##DerivedHeader##_##Identifier(#Identifier,     \
                 #Load);

//---------------------------------------------------------------------------
#define MacCreateUnHeader(DerivedHeader, Load, Identifier)                  \
static DerivedHeader static_##DerivedHeader##_##Identifier(#Identifier,     \
                 #Load,           \
                 CATFrmUnavailable);

//---------------------------------------------------------------------------
#define MacCreateHeaderWithArg(DerivedHeader, Load, Identifier, Argument)   \
static DerivedHeader static_##DerivedHeader##_##Identifier(#Identifier,     \
                 #Load,           \
                                                           #Argument);

//---------------------------------------------------------------------------
#define MacCreateUnHeaderWithArg(DerivedHeader, Load, Identifier, Argument) \
static DerivedHeader static_##DerivedHeader##_##Identifier(#Identifier,     \
                 #Load,           \
                                                           #Argument,       \
                 CATFrmUnavailable);

//
// New macro : you can access multiple commands in one load
//---------------------------------------------------------------------------
#define CATCreateHeader(DerivedHeader, Load, Class, Identifier)             \
static DerivedHeader static_##DerivedHeader##_##Identifier(#Identifier,     \
                 #Load,           \
                 #Class,          \
                 (void *)NULL);

//---------------------------------------------------------------------------
#define CATCreateUnHeader(DerivedHeader, Load, Class, Identifier)           \
static DerivedHeader static_##DerivedHeader##_##Identifier(#Identifier,     \
                 #Load,           \
                 #Class,          \
                 (void *)NULL,    \
                 CATFrmUnavailable);

//---------------------------------------------------------------------------
#define CATCreateHeaderWithArg(DerivedHeader, Load, Class, Identifier, Arg) \
static CATString static_CATString_##Identifier(#Arg);                       \
static DerivedHeader static_##DerivedHeader##_##Identifier(#Identifier,     \
        #Load,                                      \
        #Class,                                     \
        (void *)&static_CATString_##Identifier);

//---------------------------------------------------------------------------
#define CATCreateUnHeaderWithArg(DerivedHeader, Load, Class, Identifier,Arg)\
static CATString static_CATString_##Identifier(#Arg);                       \
static DerivedHeader static_##DerivedHeader##_##Identifier(#Identifier,     \
        #Load,                                      \
        #Class,                                     \
        (void *)&static_CATString_##Identifier,     \
        CATFrmUnavailable);

*/

#endif
