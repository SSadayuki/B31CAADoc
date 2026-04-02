#ifndef CATCmdContainer_H
#define CATCmdContainer_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CD0FRAME.h"
#include "CATCmdAccess.h"
#include "CATBoolean.h"

class CATPalette;
class CATDialog;
class CATVisDialog;

#ifdef AfrCAA2
class CATAfrGen;
#endif


/**
 * Class to create the container's access.
 * <b>Role</b>: A container can be :
 * <ul>
 * <li>a menubar, a menu, a submenu, a toolbar or an icon box. Use the @href NewAccess macro
 *  with <tt>CATCmdContainer</tt> as 
 * <tt>classname</tt> parameter to create an instance. </li>
 * <li>a workshop. Use the @href NewAccess macro
 *  with <tt>CATCmdWorkshop</tt> as 
 * <tt>classname</tt> parameter to create an instance.</li>
 * <li>a workbench. Use the @href NewAccess macro
 *  with <tt>CATCmdWorkbench</tt> as 
 * <tt>classname</tt> parameter to create an instance.</li> 
 * </ul>
 * @see CATCmdWorkshop, CATCmdWorkbench , CATIWorkshop, CATIWorkbench, CATIWorkbenchAddin
 */
class ExportedByCD0FRAME CATCmdContainer: public CATCmdAccess
{
  /** @nodoc */
  friend class CATMarshallableCmdContainer;
  
  /** @nodoc */
  CATDeclareKindOf;
  
public:
  /** @nodoc */
  CATDeclareCBEvent(SetChildEvent);
    /** @nodoc */
  CATDeclareCBEvent(HideEvent);
    /** @nodoc */
  CATDeclareCBEvent(ShowEvent);
    /** @nodoc */
  CATDeclareCBEvent(StartTransaction);
    /** @nodoc */
  CATDeclareCBEvent(StopTransaction);

  /** 
  * @nodoc 
  */  
  CATCmdContainer (const CATString & name, Persistence = Code);
  /** 
  * @nodoc 
  */
  CATCmdContainer (CATCmdContainer &);
  /** 
  * @nodoc 
  */  
  virtual ~CATCmdContainer();
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
  virtual CATCmdRep * CreateToolbarRep (CATDialog *);
  /** 
  * @nodoc 
  */
  virtual void        DestroyToolbarRep();
  /** 
  * @nodoc 
  */

  /** 
  * @nodoc 
  */
  virtual void CreateToolbarVisRep (CATVisDialog*);
  /** 
  * @nodoc 
  */
  virtual void DestroyToolbarVisRep();
  /** 
  * @nodoc 
  */

  virtual CATCmdRep * CreateCtxMenuRep (CATDialog *);
  /** 
  * @nodoc 
  */
  virtual void        DestroyCtxMenuRep();
  
    /*-----------------------------------------*/
    //     CONTENT'S MANAGMENT OF THE CONTAINER
    /*-----------------------------------------*/

  /** 
  * @nodoc 
  */  
  CATCmdAccess * GetChild() const;
  /** 
  * @nodoc 
  */
  CATCmdAccess * GetChild(const CATString & childName) const;
  /** 
  * @nodoc 
  */
  CATCmdAccess * GetChild(const CATUnicodeString & childTitle) const;
  
  /** 
  * @nodoc 
  */
  int GetNumberOfChildren() const;
  /** 
  * @nodoc 
  */
  CATCmdContainer * GetBranch(CATCmdAccess * item, CATCmdContainer ** parent);
  
  /** 
  * @nodoc 
  */
  void SetChild (CATCmdAccess *);
  
  /**
  * Declares an access to add in a container.
  * <b>Role</b>: Container's accesses are chained. The access 
  * is attached to its container at the end 
  * of the container's children list.
  */  
  void AddChild (CATCmdAccess * newItem, const CATString * beforeItem = NULL);

  /** 
  * @nodoc 
  */
  void RemoveChild (const CATString & itemName,
		    const CATString * fromContainer = NULL);

  /** 
  * @nodoc 
  */
  void RemoveChild (CATCmdAccess * item,
		    const CATString * fromContainer = NULL);
  

  /** 
  * @nodoc 
  */
  void SetSelect(int position, int notify = 1);

  /** 
  * @nodoc 
  */
  const int GetSelect() const;

  /**
  * @nodoc
  */
  virtual CATString * GetIconName();
  

    /*---------------------------------*/
    //  FOR INTERNAL USE
    /*---------------------------------*/

  /** 
  * @nodoc 
  */
  virtual CATCmdContainer * GetMenu() const;
  /** 
  * @nodoc 
  */
  virtual void SetMenu (CATCmdContainer *);

  /** 
  * @nodoc 
  */
  virtual void FilterPersistence(Persistence, int keep, int inDepth = 1);

  /** 
  * @nodoc 
  */
  void Merge (CATCmdContainer * toMerge, int replace = 0);

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
  CATPalette * GetPalette();
  
  /** 
  * @nodoc 
  */
  void  BeginTransaction();

  /** 
  * @nodoc 
  */
  void  EndTransaction();

  /** 
  * @nodoc 
  */
  void SetImmersiveState(int state);

  /** 
  * @nodoc 
  */
  int GetImmersiveState();

  /** 
  * @nodoc 
  */
  void SetScale(float scale);

  /** 
  * @nodoc 
  */
  float GetScale() { return _scale; }
  
    /*---------------------------------*/
    //  DISPLAY MANAGMENT
    /*---------------------------------*/
  
  /** 
  * Position of the toolbar in the application window.
  * @param UnDock 
  *   The toolbar is undocked. 
  * @param Bottom  
  *   The toolbar is docked at the bottom of the application window 
  * @param Top 
  *   The toolbar is docked at the top of the application window
  * @param Left 
  *   The toolbar is docked at the left of the application window
  * @param Right 
  *   The toolbar is docked at the right of the application window
  * @see AddToolbarView
  */
  enum ComponentPosition { Top, Bottom, Left, Right, UnDock };

  /** 
  * @nodoc 
  */
  virtual void AddView   (CATPalette * iPalette);
  /** 
  * @nodoc 
  */
  virtual void AddView(int iVisibility, ComponentPosition iPosition);


  //virtual void CreateVisReps(int isAnIconBox=0);
  //virtual void DestroyVisReps(int deleteRep=0,int isAnIconBox=0);

  /** 
  * @nodoc 
  */
  virtual int  FillViews (CATDialog * parent);
  /** 
  * @nodoc 
  */
  virtual void ClearViews(int deleteTlb = 0);

  /** 
  * @nodoc 
  */
  virtual void  FillVisViews ();
  /** 
  * @nodoc 
  */
  virtual void ClearVisViews();


  /** 
  * @nodoc 
  */
  virtual int  Show(CATDialog * parent);
  /** 
  * @nodoc 
  */
  virtual void Hide(int vis=1);
  /** 
  * @nodoc 
  */
  virtual int  IsDisplayed();
  /** 
  * @nodoc 
  * Sets a toolbar as not customizable
  */
  void NoCusto();
  /** 
  * @nodoc 
  */
  int IsNoCusto();
  
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


	/** @nodoc */
	virtual void ParentChanged ();
  
	/** @nodoc */
	virtual void EditingContextChanged ();
	
protected:
	
	/** 
  * @nodoc 
  */
  CATCmdContainer (Persistence = Code);
  CATCmdAccess * _child;
  CATCmdContainer * _menu;
  CATPalette * _view;
    
private:

  void OnDialogDestroyed (CATCallbackEvent iPublishedEvent, void* iPublishingObject, CATNotification* iNotification, CATSubscriberData iClientData, CATCallback iCallback);

  int _immersiveState;
 
  int _currentChildNumber;
  int _currentNumberOfViewsForMarshalling;
  int _numberOfDisplayedViews;
  char * _descriptor;

  float _scale;
  int   _noCusto;
  CATBoolean _iconResources;
  
};

#endif
