#ifndef CATFRMEDITOR_H 
#define CATFRMEDITOR_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CD0WIN.h"
#include <CATCollec.h>
#include <CATCommand.h>
#include "CATFrmLayout.h"
#include "CATFrmWindow.h"
#include "CATPathElement.h"
#include "CATInPlaceSite.h"
#include <CATListOfCATString.h>
#include "CATMathTransformation.h"
#include "CATMathAxis.h"
#include "CATMathAxis2D.h"
#include "CATUnicodeString.h"
#include "CATIAlias.h"
#include "CATIAV5Level.h"

#ifdef _WINDOWS_SOURCE
class CATOleDocument;
#endif

class CATActiveObject;
class CATCmdContainer;
class CATCommandHeaderList;
class CATCommandSelector;
class CATCSO;
class CATCSOTypeDispatcher;
class CATDialog;
class CATDiaNoEngine;
class CATDocument;
class CATFrmDropSource;
class CATFrmDropTarget;
class CATIContainer;
class CATInPlace3DSite;
class CATISO;
class CATHSO;
class CATLISTP(CATCommandHeaderList);
class CATPSO;
class CATSDO;
class CATString;
class CATFrmCompassCommand;
class CATVisuHandle;
class CATEditingContext;
class CATCommandHeader;
class CATP3Editor;


/**
* Error Message.
* @see CATFrmEditor#SetActivePath
*/
#define SAP_INVALID_ARG        -1

/**
* Error Message.
* @see CATFrmEditor#SetActivePath
*/
#define SAP_REFUSED_BY_SITE    -2

/**
* Error Message.
* @see CATFrmEditor#SetActivePath
*/
#define SAP_OBJECT_IN_USE      -3

/**
* Error Message.
* @see CATFrmEditor#SetActivePath
*/
#define SAP_NO_LICENSE         -4


/**
 * Base class for a document editor.
 * <b>Role</b>: The document editor is a kind of controller that federates
 * all the objects that provide the interactive behavior to the document,
 * that knows all the windows in which the document is displayed, and 
 * that holds the current availability state of all the commands of the
 * document's workshop and current workbench using its own set of 
 * command headers.
 * <br> Multi-Document editing is managed by having several editors, that
 * will be switched when current window is changed.
 * @see CATFrmObjectEditor
 */
class ExportedByCD0WIN CATFrmEditor: public CATCommand
{
  CATDeclareClass;
  
public:

  /**
  * Event sent when the editor is closed.
	* <br><b>Role:</b><br>this event is sent by the CATFrmLayout.
	* <br>Sample of callback:
	* <pre>
  * ::AddCallback(this,
  *              CATFrmLayout::GetCurrentLayout(),
	*	           CATFrmEditor::EDITOR_CLOSE_ENDED(),
	*	           (CATSubscriberMethod)&MyClass::MyCBMethod,
	*	           NULL);
	* </pre>
	*/
  CATDeclareCBEvent (EDITOR_CLOSE_ENDED);
  /** @nodoc */
  CATDeclareCBEvent (EDITOR_ACTIVATED);
  /** @nodoc */
  CATDeclareCBEvent (EDITOR_DEACTIVATED);

  /**
  * Event sent when an ui-activable object is activated.
	* <br><b>Role:</b><br>this event is sent by the CATFrmLayout.
	* <br>Sample of callback:
	* <pre>
  * ::AddCallback(this,
  *              CATFrmLayout::GetCurrentLayout(),
	*	           CATFrmEditor::UIACTIVEOBJECT_CHANGED(),
	*	           (CATSubscriberMethod)&MyClass::MyCBMethod,
	*	           NULL);
	* </pre>
	*/
  CATDeclareCBEvent (UIACTIVEOBJECT_CHANGED);

  /**
  * Event sent after the ui-activable object has changed.
	* <br><b>Role:</b><br>this event is sent by the CATFrmEditor which owns the ui-activable object.
	* <br>The difference with UIACTIVEOBJECT_CHANGED is this one is sent
  * after all the notifications are sent after the ui-activable object has been changed.
	* <br>Sample of callback:
	* <pre>
  * ::AddCallback(this,
  *              <an_instance_of_CATFrmEditor_class>,
	*	           CATFrmEditor::UIACTIVEOBJECT_CHANGECOMPLETED(),
	*	           (CATSubscriberMethod)&MyClass::MyCBMethod,
	*	           NULL);
	* </pre>
	*/
  CATDeclareCBEvent (UIACTIVEOBJECT_CHANGECOMPLETED);

  /** @nodoc */
  CATDeclareCBEvent (UIACTIVEOBJECT_TOBECHANGED);
  /** @nodoc */
  CATDeclareCBEvent (CURRENTLOCALAXISSYSTEM_CHANGED);
  /** @nodoc */
  CATDeclareCBEvent (CURRENTLOCALAXISSYSTEM2D_CHANGED);
  /** @nodoc */
  CATDeclareCBEvent (SELECTIONSET_ACTIVATED);
  /** @nodoc */
  CATDeclareCBEvent (CATFRM_CURRENT_COMMAND_END);

  /** @nodoc */
  CATFrmEditor(CATDocument   * document = NULL);
  /** @nodoc */
  CATFrmEditor(CATIContainer * container);
  /** @nodoc */
  CATFrmEditor(CATDocument   * document, CATFrmEditor * parent);
  /** @nodoc */
  CATFrmEditor(CATIContainer * container, CATFrmEditor * parent);
  virtual ~CATFrmEditor();

  /** @nodoc */
  virtual HRESULT LogicalDeath();

  /**
   * @nodoc
   * intialize the editor.
   */
  virtual void Init();
  
  /**
   * @nodoc
   * Delete the editor.
   * @return 
   *   0 if OK, 1 if KO.
   */
  virtual int Close();

  /**
   * @nodoc
   * The editor becomes the current editor.
   */
  virtual void Activate();

  /**
   * @nodoc
   * Deactivates the editor.
   */
  virtual void Deactivate();

  /**
   * @nodoc
   * Creates a window belonging to the editor.
   * @see CATIDocumentEdit
   */
  virtual CATFrmWindow * CreateDefaultWindow();

  /**
   * @nodoc
   * Deletes the document.
   * @return 
   *   Returns 0 if OK, 1 if KO
   */
  virtual int CloseDocument();

  /**
   * Returns the current activated editor.
   * <br><b>Role</b>: This method must be carrefully used. 
   * <br>If your are in any method of a <tt>CATStateCommand</tt>, use the GetEditor() method
   * of <tt>CATStateCommand</tt> (inherited from <tt>CATDialogAgent</tt>), to have the 
   * current editor.
   * <br>If you a are in a CATCommand, use <tt>GetCurrentEditor</tt> <b>only</b> in the constructor. Keep
   * a pointer on it, and use this pointer in all methods of the command.
   * <br><b>Legal values</b>: The returned value may be null if
   * no editor is currently activated.
   * <br><b>Lifecycle rules deviation</b>: No AddRef is performed 
   * on the returned value. 
   */
  static CATFrmEditor * GetCurrentEditor();

  /**
   * @nodoc
   * Returns the P3 Editor manager
   */
  CATP3Editor * GetP3Editor();

  /**
   * @nodoc
   * Set the activated editor.
   */
  static void SetCurrentEditor(CATFrmEditor *); 
  /**
   * @nodoc
   * Set the activated editor.
   */
  static void SetCurrentEditorFromContext(CATFrmEditor *); 
  /**
   * @nodoc
   * Send events due to current editor change.
   */
  static void SendEditorChangeEvents(CATFrmEditor *oldEd, CATFrmEditor *newEd); 

   // virtual int GetId();

  /**
   * Returns the Current Selection of Objects.
   * <br><b>Lifecycle rules deviation</b>: No AddRef is performed 
   * on the returned value.
   * @see CATCSO
   */
  virtual CATCSO * GetCSO();

  /**
   * @nodoc
   * Changes the CSO.
   */
  virtual void SetCSO(CATCSO *);

  /**
   * Returns the Highlighted Set of Objects.
   * <br><b>Lifecycle rules deviation</b>: No AddRef is performed 
   * on the returned value.
   * @see CATHSO
   */
  virtual CATHSO * GetHSO();

  /**
   * @nodoc
   * Changes the HSO.
   */
  virtual void SetHSO(CATHSO *);

  /**
   * Returns the Preselected Set of Objets.
   * <br><b>Lifecycle rules deviation</b>: No AddRef is performed 
   * on the returned value.
   * @see CATPSO
   */
  virtual CATPSO * GetPSO();

  /**
   * @nodoc
   * Changes the PSO.
   */
  virtual void SetPSO(CATPSO *);

  /**
   * Returns the Interactive Set of Objects.
   * <br><b>Lifecycle rules deviation</b>: No AddRef is performed 
   * on the returned value.
   * @see CATISO
   */
  virtual CATISO * GetISO();

  /**
   * @nodoc
   * Changes the ISO.
   */
  virtual void SetISO(CATISO *);

  /**
   * Returns the Furtive Interactive Set of Objects.
   * <br><b>Role</b>: Objects added to the Furtive Interactive
   * Set of Objects are displayed in XOR mode.
   * <br><b>Lifecycle rules deviation</b>: No AddRef is performed 
   * on the returned value.
   * @see CATISO
   */
  virtual CATISO * GetFurtiveISO();

  /**
   * @nodoc
   * Changes the furtive ISO.
   */
  virtual void SetFurtiveISO(CATISO *);

  /**
   * @nodoc
   * Returns the background Interactive Set of Objects.
   */
  virtual CATISO * GetBackgrdISO();

  /**
   * @nodoc
   * Changes the backgroundISO.
   */
   virtual void SetBackgrdISO(CATISO *);

  /**
   * @nodoc
   * Returns the SDO (Set of Dialog Objects).
   */
  virtual CATSDO * GetSDO();

  /**
   * @nodoc
   * Changes the SDO.
   */
  virtual void SetSDO(CATSDO *);

  //to subscribe to CSO events according to the element type
  // virtual CATCSOTypeDispatcher * GetCSOTypeDispatcher();
     
  /**
   * Returns the command selector created by the editor.
   * <br><b>Role:</b>This command selector receives all the notifications
   * from the graphic representation. You use it in the <tt>AttachTo</tt> method
   * method of the @href CATVisManager . 
   */
  virtual CATCommandSelector  * GetCommandSelector();

  /**
   * @nodoc
   * Changes the CommandSelector.
   */
  virtual void SetCommandSelector(CATCommandSelector *);

  /**
   * @nodoc
   * Returns the parent CATFrmEditor.
   */
  virtual CATFrmEditor * GetParent();

  /**
   * Returns the document associated to the editor.
   * <br><b>Lifecycle rules deviation</b>: No AddRef is performed 
   * on the returned value.
   * @see CATDocument
   */
  virtual CATDocument * GetDocument();

  /**
   * @nodoc
   * Returns the container (owner of the editor).
   */
  virtual CATIContainer * GetContainer();

  /**
   * @nodoc
   * Returns the model of the contextual menu.
   */
  virtual CATCmdContainer * GetContextualMenu();

  /**
   * @nodoc
   * Returns the default command name.
   */
  CATString * GetDefaultCommand();

  /**
   * @nodoc
   * Sets the default command name.
   */
  void SetDefaultCommand(const CATString &);

  /**
   * @nodoc
   * Unsets the default command name.
   */
  void UnsetDefaultCommand();

  /**
   * @nodoc
   * Returns the repeated command name
   */
  CATString * GetRepeatedCommand();

  /**
   * @nodoc
   * Sets the repeated command name
   */
  void SetRepeatedCommand(const CATString &);

  /**
   * Unsets the repeated command .
   * <br><b>Role</b>:When the end user double clicks on an icon in a toolbar, 
   * the command is set in repeat mode. It means that when the command is canceled,
   * the command is relaunched by the editor. This method enables a command 
   * to unset this repeat mode. It can be useful when the end user clicks on a Close 
   * Button or a Cancel Button to unset the repeat mode.
   */
  void UnsetRepeatedCommand();

  /** @nodoc */
  virtual void SetDropSource (CATFrmDropSource *source );
  /** @nodoc */
  virtual CATFrmDropSource * GetDropSource ();
  /** @nodoc */
  virtual void SetDropTarget (CATFrmDropTarget *target );
  /** @nodoc */
  virtual CATFrmDropTarget* GetDropTarget ();

  /** @nodoc */
  virtual void SetUIActiveObject (CATPathElement&);

/*
*/

  /**
   * Activates an element of the given path.
   * <br><b>Role</b>: Actives the workshop of the first UI activable element
   * found from the leaf of the path <tt>iPathElement</tt>.
   * @see CATIUIActivate
	 * @param iPathElement
   * A pointer to the path to UI activate.
   * @param iObjectEdition
   *   <ul>
   *   <li>TRUE if the path change corresponds to an object edition.
   *       After the edition, all the actions done during this edition
   *       will be committed in one action. This is important for undo/redo.</li>
   *   <li>FALSE if the path change does not correspond to an object edition.
   *       The actions done after calling SetActivePath will be considered as separate undo/redo steps.</li></ul>
   * @return
   * Returns S_OK on success. On failure, it returns on of the following
   * error codes :
   * <ul>
   * <li>SAP_INVALID_ARG if the given argument is invalid (null)</li>
   * <li>SAP_REFUSED_BY_SITE if one of the @href CATInPlaceSite object of the
   * given path returned 0 on a call to its @href CATInPlaceSite#CanInPlaceActivate
   * method </li>
   * <li>SAP_OBJECT_IN_USE if one of the @href CATIUIActivate object of the 
   * given path is already ui-active in an other editor </li>
   * <li>SAP_NO_LICENSE if there is no license for one of the @href CATIUIActivate 
   * object's implementation of the given path</li>
   * </ul>
   *
   */
  virtual HRESULT SetActivePath (CATPathElement * iPathElement, CATBoolean iObjectEdition=TRUE);

  /** 
    * @nodoc 
    */
  virtual void SetActivePath (CATPathElement & iPathElement);

  /**
   * Returns the current UI-activated element.
   * <br><b>Lifecycle rules deviation</b>: No AddRef is performed 
   * on the returned value.
   * @see CATIUIActivate
   */
  virtual CATPathElement & GetUIActiveObject ();
  
  /** @nodoc */
  virtual CATPathElement & GetActivePath ();
  /** @nodoc */
  virtual CATInPlaceSite_var GetActivationSite ();
  /** @nodoc */
  virtual CATInPlaceSite_var GetDeactivationSite ();


  /** 
   * @nodoc 
   * Register a new window belonging to the editor.
   */
  virtual void AddWindow(const CATFrmWindow *);

  /**
   * @nodoc
   * Deletes a window.
   * @return
   *   0 if OK; 1 if window cannot be deleted.
   */
  virtual int RemoveWindow(const CATFrmWindow *);

  /**
   * Returns the number of window of the editor.
   */
  virtual int GetWindowCount();

  /** @nodoc */
  virtual void SetWindowName(const CATUnicodeString & WindowName);

  /** 
   * @nodoc
   * Activates select mode.
   */  
  virtual void InitSelect();
  
  /**
   * @nodoc
   * Sets selected group.
   */
  virtual void SetGroup();

  /** 
   * @nodoc
   * Resets selected group.
   */
   virtual void ResetGroup();

  /**
   * @nodoc
   * Ends select mode.
   */
   virtual void ResetSelect();
  
  /**
   * @nodoc
   * ApplicationFrame internal use.
   */
  void SetHeaderList(const CATString & name, CATCommandHeaderList *);

  /**
   * @nodoc
   * ApplicationFrame internal use.
   */
  CATCommandHeaderList * GetHeaderList(const CATString & name);

	/**
         * @nodoc 
	 * Returns a header from the editor's current workshop and workbench.
	 * @param iHeaderId
         *  the identifier of the desired CATCommandHeader
	 * @param iForceLoad
         * tells the editor to force the workbench loading
	 * on retrieval failure, so that if the searched header is in another 
	 * workbench that the current, it will be found anyway. Forcing Workbench 
	 * loading should be avoided as often as possible, for performence
	 * concerns.
	 * @return 
         * NULL on failure.
	 * @see CATCommandHeader
	 */
	CATCommandHeader * GetHeaderFromList (const CATString & iHeaderId, CATBoolean iForceLoad = FALSE);
	
  /**
   * @nodoc
   * ApplicationFrame internal use.
   */
  void SetPrompt(const CATUnicodeString &text);

  /**
   * @nodoc
   * ApplicationFrame internal use.
   */
  void DisplayPrompt();

  /**
   * @nodoc
   * ApplicationFrame internal use.
   */
  void SetStartDefaultCmd (int set);

  /**
   * @nodoc
   * ApplicationFrame internal use.
   */
  CATDiaNoEngine * GetNoEngine();

  /**
   * @nodoc
   * ApplicationFrame internal use.
   */
  CATDialog * GetDecorator();

  /**
   * @nodoc
   * ApplicationFrame internal use.
   */
   void NoMoreCommandsCB(CATCallbackEvent, void *, CATNotification *, 
                         CATSubscriberData, CATCallback);

  /**
   * @nodoc
   * ApplicationFrame internal use.
   */
   void KillKillerCB(CATCallbackEvent, void *, CATNotification *,
                     CATSubscriberData, CATCallback);

	/**
	 * @nodoc 
	 * Returns this editor's editing context.
	 * @see CATEditingContext
	 */
	 CATEditingContext * GetEditingContext ();

#ifdef _WINDOWS_SOURCE
  // STDMETHODIMP_(ULONG) AddRef2();
  // STDMETHODIMP_(ULONG) Release2();
  /** @nodoc */
  int OleActivate();
  /** @nodoc */
  CATOleDocument* GetOleDocument();
  /** @nodoc */
  void Show();
  /** @nodoc */
  virtual HANDLE MemoryDraw(CLIPFORMAT Format, int width, int height);
  /** @nodoc */
  int SaveToStorage (LPSTORAGE lpStg, BOOL fSameAsLoad);
  /** @nodoc */
  static void SetInitByOleDocument(int);
  /** @nodoc */
  void SetOleDocument(CATOleDocument* pOleDocument);
#endif
  /** @nodoc */
  CATBoolean IsOleEmbedded();

  /** 
   * @nodoc
   * Registration into the Windows Running Object Table.
   */
   void ROTRegister(char* FileName);

  /**
   * @nodoc
   * Notification to potential OLE Clients.
   */
  void NotifySave();

  /**
   * @nodoc
   * Notification to potential OLE Clients.
   */
  void NotifyDataChange();

  /** @nodoc */
  int GetClosingStatus();              

  /** @nodoc */
  virtual void SetModelMatrix (CATInPlace3DSite *);

  /** @nodoc */
  virtual const CATMathTransformation & GetModelMatrix () const;

  /** 
   * @nodoc
   * The editor becomes the current editor.
   */
   virtual void ActivateByWindow();

  /**
   * Returns the compass.
   * @param iCompassVersion
   * The compass version number.
   * <br><b>Legal values</b>: Parameter must be left to default value.
   * @return
   *   A pointer to an object that implements the CATI3DCompass interface.
   * <br><b>Lifecycle rules deviation:</b>This method does not AddRef the
   * returned pointer.
   * @see CATI3DCompass
   */
  virtual CATBaseUnknown * GetCompass(const int iCompassVersion = 0);

  /**
   * @nodoc
   * ApplicationFrame internal use
   */
  virtual void SetCompass(CATBaseUnknown * Compass, const int CompassVersion = 0);

  /** @nodoc */  
  CATBaseUnknown * GetGraphicPropertiesToolbarManager();
  /** @nodoc */
  void SetGraphicPropertiesToolbarManager(CATBaseUnknown *);

  /** @nodoc */
  const CATMathAxis & GetCurrentLocalAxisSystem();
  /** @nodoc */
  void SetCurrentLocalAxisSystem(const CATMathAxis & iCurrentAxis, CATUnicodeString * iAxisName=NULL, int iReferenceMode = 0);
  /** @nodoc */
  const CATMathAxis2D & GetCurrentLocalAxisSystem2D();
  /** @nodoc */
  void SetCurrentLocalAxisSystem2D(const CATMathAxis2D & iCurrentAxis);
  /** 
   * @nodoc
   * @param oAxisName
   *   Name of the current local axis system
   * @param oReferenceMode
   *   0 : (default) AxisSystem is relative to active object
   *   1 : AxisSystem is relative to absolute axis system
   */
  void GetCurrentLocalAxisSystemInfo(CATUnicodeString & oAxisName, int & oReferenceMode);
  

  /** @nodoc */
  CATActiveObject * InternalGetActiveObject ();  

  /** 
   * @nodoc 
   * ApplicationFrame internal use
   */
  CATCommandHeaderList * GetUnsubscribedHeaderList();
 
protected:

  /** @nodoc */
  CATDiaNoEngine * _NoEngine;
  
  static void __InternalSetCurrentEditor   (CATFrmEditor *);
  static void __InternalUnsetCurrentEditor ();
  static void __SetCurrentEditor_Idle      (CATCommand *, int, void *);


private:
   
   void Init(CATFrmEditor * parent);

	 /** @nodoc */
   void        OpenCBPSO();
   void        CloseCBPSO();
   void        PSOChanged(CATCallbackEvent,void*,CATNotification*,CATSubscriberData,CATCallback );
   CATCallback _PSOCB;
   CATP3Editor        * _P3Editor;
   
   CATFrmLayout       * _currentLayout; 
   int                  _windowCount;
//   int                  _editorID;
   CATCommandSelector * _commandSelector;
   CATCSO             * _CSO;
   CATHSO             * _HSO;
   CATPSO             * _PSO;
   CATISO             * _ISO, *_FurtiveISO, *_BackgrdISO;
   CATSDO             * _SDO;
//   CATCSOTypeDispatcher * _CSOTypeDispatcher;
   CATDocument        * _document;
   CATIContainer      * _container;
   CATString          * _defaultCommand;
   CATString          * _repeatedCommand;
   int                  _startDefaultCmd;
   CATCallback          _cmdSelectCB;
   int                  _closing;
   CATCmdContainer    * _ctxMenu;
   CATFrmEditor       * _parent;
   CATActiveObject    * _ActiveObject;
   static int           _nb;
   static CATUnicodeString _helpAboutTitle;
   static CATUnicodeString _helpAboutDefaultProduct;
   CATFrmDropSource     *  _DropSource;
   CATFrmDropTarget     *  _DropTarget;
   CATFrmCompassCommand * _CompassCommand;

#ifdef _WINDOWS_SOURCE
   static int           _sInitByOleDocument;
   CATOleDocument* _pOleDocument;
#endif

  CATMathTransformation     _modelMatrix;
  
  static CATFrmEditor * _CurrentEditor;
  static int            _Counter;
  static char           _CountStr[5];
  CATListOfCATString  * _WSList;
  CATLISTP(CATCommandHeaderList) * _HeaderListList;
  CATCommandHeaderList * _UnsubscribedHeaderList;
  
  CATUnicodeString      _Prompt;

  CATDialog * _decorator;
  CATBaseUnknown *_GPTBManager;

  CATMathAxis _CurrentLocalAxisSystem;
  CATMathAxis2D _CurrentLocalAxisSystem2D;
  CATUnicodeString _axisName;
  int _axisReferenceMode;
  CATEditingContext * _editingContext;
	
}; 
#endif
