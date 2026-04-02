// COPYRIGHT DASSAULT SYSTEMES PROVENCE 2000

/**
  * @CAA2Level L0
  * @CAA2Usage U2
  */

//=============================================================================
//
// CATMldCreateComponentCom.h
// The state chart based command: CATMldCreateComponentCom
//
//=============================================================================
//
// Usage notes:
//
///================================================================================

#ifndef CATMldCreateComponentCom_H
#define CATMldCreateComponentCom_H

#include "CATMldComponentUI.h"
#include "CATStateCommand.h"


#include "CATIProduct.h"
#include "CATISpecObject.h"
#include "CATISketch.h"
#include "CATI2DPoint.h"
#include "CATPlane.h"
#include "CATLine.h"
#include "CATPoint.h"
#include "CATIMldComponent.h"
#include "CATMldAssociateType.h"

// System
#include "CATBoolean.h"

#include "CATIDesignTable.h"
#include "CATMathDirection.h"
#include "CATMathPlane.h" //pour le pointe dans le vide
#include "CATMathAxis.h"
#include "CATILinkableObject.h"

#include "CATDialog.h"

class CATMldLocateOnSupport;
class CATMldComponentDlg;
class CATIndicationAgent;
class CATPathElementAgent;
class CATSelectPathAgent;
class CATMmuPartAgent;
class CATMathPoint;
class CATPathElement;
class CATDocument;
class CATAsmModeFilter;
class CATMldConstraintsWithCom;
class CATIProgressTaskUI;

//----------------------------------------------------------------------

/**
  * Base class to create a typed command used for MoldDesign or an other application.
  * <b>Role</b>: This base class is used to create a specific typed component command. 
  * This command manages a specific Dialog derived from CATMldComponentDlg.
  * <br>
  * To create a specific command, derive the <tt>CATMldCreateComponentCom</tt> class:
  * @see CATStateCommand, CATMldComponentDlg
  */
class ExportedByCATMldComponentUI CATMldCreateComponentCom: public CATStateCommand
{
  // Allows customization/internationalization of command's messages
  // ---------------------------------------------------------------
  DeclareResource( CATMldCreateComponentCom, CATStateCommand )


  public:

	/**
	  * Used to create a new component (Useful for the Kinematics).
	  * <br><b>Role</b>: Override this method to manage the creation of a new component 
	  * in the work Product. The component is added in this component.
	  * @param hReferenceProduct
	  *   The reference product of the component
	  * @param iPtSel
	  *   The indice of the selection. Use to create the name of the created component
	  * @param iAsmComponent
	  * 
	  */
	virtual void CreateAsmComponent(const CATIProduct_var hReferenceProduct,
				const int iPtSel, CATPathElement &iAsmComponent);

	/**
	  * Used to create the feature component
	  * <br><b>Role</b>: Override this method to define a new factory to create 
	  * the feature component
	  * @param hiComponent
	  *   the instance product of the component
	  * @param hiFromPlate
	  *   the instance product of the From plate
	  * @param hiToPlate
	  *   the instance product of the To plate
	  * @param iStrIcon
	  *   The name of the icon that is associated to the mold component.
	  * @param hoFeatComponent
	  *   the created feature component 
	  * @return
      *   An HRESULT value. 
	  *   <br><b>Legal values</b>:
	  *   <dl>
	  *     <dt>S_OK</dt>
	  *     <dd>The feature component is successfully created
	  *         and the interface pointer is successfully returned</dd>
	  *     <dt>E_FAIL </dt>
	  *     <dd>The component was not successfully created,
	  *         and the interface query failed</dd>
	  *   </dl>	  
	  */
	virtual HRESULT CreateFComponent(
					const CATISpecObject_var hiComponent, 
					const CATISpecObject_var hiFromPlate,
					const CATISpecObject_var hiToPlate,
					const CATUnicodeString iStrIcon,
					const CATListValCATISpecObject_var iDrilledList,
					CATIMldComponent_var &hoFeatComponent);

  	// Implementation de l'interface CATIProgressTask (pour la barre de progression generique)
	virtual HRESULT PerformTask(CATIProgressTaskUI* pProgressTask, void* iUserData);
	virtual HRESULT GetCatalogName(CATString* oCatalogName);
	virtual HRESULT GetIcon(CATString* oIcon);

protected:

	  /**
	 * Constructs a Command instance from a type and a Dialog.
	 * @param iarg
	 *   The arg of the command
	 * @param iType
	 *   <br><b>Legal values</b>: a feature string (@see CATMldString)
	 * @param ipDialog
	 *   a pointer of an instance of a CATMldComponentDlg derived class
	 * @param iMode
	 *   the CommandMode of the command
	 *   Be carefull on the use of the CATCommandModeShared because the 
	 *   generic dialog can t support many dialog displayed at the same time.
	 *   This option is only use to allow the call in another dialog.
	 */
	CATMldCreateComponentCom(CATUnicodeString *iarg,CATUnicodeString iType,
							 CATMldComponentDlg *ipDialog,
							 CATCommandMode iMode=CATCommandModeExclusive);

	virtual ~CATMldCreateComponentCom();


	/**
	  * Used to add some option operation in the Tab container
	  * Executed after the creation or new component 
	  * <br><b>Role</b>: Override this method to define the post-treatement 
	  * after the creation / new instance component
	  */
	virtual HRESULT AddOkTabPageOption();

	/**
	  * Used to add some option operation in the Tab container
	  * Executed after the edit component 
	  * <br><b>Role</b>: Override this method to define the post-treatement 
	  * after the edition component
	  */
	virtual HRESULT AddEditTabPageOption();

	/**
	  * Used to add some option operation in the Tab container
	  * <br><b>Role</b>: Return the PartInstComponent
	  */
	CATISpecObject_var GetPartInstComponent() const;


	/**
	  * Specific use/ Used to manage events for the ejector
	  */
	/** @nodoc */   
	virtual void AddSpecificAgent();      // Agents specifiques (Ejecteur)
	/** @nodoc */   
	virtual void AddSpecificTransition(); // Transitions specifiques (Ejecteur)
	/** @nodoc */   
	virtual CATISpecObject_var GetSplitSurface(); // Splitting surface (Ejecteur)
	/** @nodoc */   
	virtual CATBoolean GetSplitActive(); // Split activation (Ejecteur)
	/** @nodoc */   
	virtual CATBoolean IsDefaultIntrusive(); // choix non intrusif par def (Ejecteur, EjecteurPin)
	
	// Entree/Sortie des etats 
	/** @nodoc */   
	virtual boolean	EnterStateComponent	 (void * data = NULL);
	/** @nodoc */   
	virtual boolean	LeaveStateComponent	 (void * data = NULL);

	/** @nodoc */   
	virtual boolean	EnterStateSupport	 (void * data = NULL);
	/** @nodoc */   
	virtual boolean	LeaveStateSupport	 (void * data = NULL);

	/** @nodoc */   
	virtual CATBoolean AddSpecificBehaviors( int iBehaviour,
											CATListOfInt				 &ListInt1,
											CATListOfDouble				 &ListDouble1,
											CATLISTV(CATBaseUnknown_var) &ListU1,
											CATListOfInt				 &ListInt2,
											CATLISTV(CATBaseUnknown_var) &ListU2,
											CATListOfDouble				 &ListDouble2);


	// Functions to access private attributes
	/** @nodoc */   
	CATMldComponentDlg * GetSettingWnd();

	/** @nodoc */   
	CATDialogAgent * GetLocateOnSupport();
	/** @nodoc */   
	CATDialogAgent * GetMoveOnSupport();
	/** @nodoc */   
	CATDialogAgent * GetFromPlate();
	/** @nodoc */   
	CATDialogAgent * GetToPlate();

	/** @nodoc */   
	CATDialogState * GetCreateComponent();
	/** @nodoc */   
	CATDialogState * GetSupportState();

	/** @nodoc */   
	CATSelectPathAgent * GetDirAcq();

	/** @nodoc */   
	CATPathElementAgent * GetOriginPointAcq();
	/** @nodoc */   
	CATPathElementAgent * GetFromToPlateAcq();
	/** @nodoc */   
	CATPathElementAgent * GetSliderAcq();
	/** @nodoc */   
	CATPathElementAgent * GetSysAxisAcq();
	/** @nodoc */   
	CATPathElementAgent * GetSketchAcq();
	/** @nodoc */   
	CATPathElementAgent * GetLocate();
	
	/** @nodoc */   
	CATIndicationAgent * GetAnywhere();


 private:

	// Infos dialog
	CATMldComponentDlg		
		*	_pSettingWnd;			// The Dialog box
	// DialogAgent
	CATDialogAgent			
		*	_daOKWebBrowser,
		*	_daOKFileOpen,
		*	_daPBUseCatalog,
		*	_daSelectInCatalog,
		*	_daCancelCatalog,
		*	_daOKCatalog,
		*	_daPBUseRuleCat,
		*	_daSelectInRuleCat,
		*	_daCancelRuleCat,
		*	_daOKRuleCat,
		*	_daOKComponent,
		*	_daCancelComponent,
		*	_daApplyComponent,
		*	_daLocateOnSupport,
		*	_daMoveOnSupport,
		*	_daPositionInTree,
		*	_daFromPlate,
		*	_daToPlate,
		*	_daEditXYZ,
		*	_daUseConstraintsWith,
		*	_daSetDirection,
		*	_daSetUVOrigin;

    // DialogState
	CATDialogState 
		*	_stDefFirstOrigine,
		*	_stCreateComponent,
		*   _stSupportState,
		*	_stGuidedState,
		*	_stGuidedStateQueryAxis,
		*	_stGuidedStateQuery2ndAxis,
		*	_stSetDirectionFromFirstOrigin,
		*	_stSetDirectionFromCreate,
		*	_stSetDirectionFromSupport,
		*	_stSetDirectionFromGuided,
		*	_stSetUVOriginFromFirstOrigin,
		*	_stSetUVOriginFromCreate,
		*	_stSetUVOriginFromSupport,
		*	_stSetUVOriginFromGuided,
		*	_stSmartLocateFromFirstOrigin;

	CATAcquisitionAgent		
		*	_daExitError; 
	
	CATSelectPathAgent		
		*	_daDirAcq,				// pour direction de l'axe designe
		*	_daSurf;				// pour plan ou face plane designe
	
	CATMmuPartAgent	
		*	_daSurfAcq;

	CATPathElementAgent		
		*	_daOriginPointAcq,		// pour point 3d
		*	_daPositionInTreeAcq,    
		*	_daFromToPlateAcq,
		*	_daSliderAcq,
		*	_daSysAxisAcq,
		*	_daSketchAcq,
		*	_daLocate;
	
	CATIndicationAgent
		*	_daAnywhere;			// pour pointer dans le vide
	
 	CATSelectPathAgent        *_AcqPrd;       // pour passage en design mode
	CATAsmModeFilter          *_DModeFilter;  // passage Visu->design

	CATMldConstraintsWithCom  *_ConstraintsWithCom; // constraints management

	/** @nodoc */   
	void BuildGraph();

	CATStatusChangeRC Activate (CATCommand*, CATNotification*);
	CATStatusChangeRC Cancel (CATCommand*, CATNotification*);
	CATStatusChangeRC Desactivate (CATCommand*, CATNotification*);

	// The methodes
	CATBoolean	OpenSupport();
	CATBoolean 	CreateInstanceComponent(const CATBoolean iFisrt,const int iComponentPointSel);
	CATBoolean 	EditInstanceComponent(const int iComponentPointSel);
	CATBoolean	ManageSpecialBodies();
	CATBoolean	GetSelectAxis();
	void		DeleteDoublons();
	HRESULT		DeActivateAcqs ();
	HRESULT SelectedComponent(CATISpecObject_var &oInstComponent, int &oSizeList);
	HRESULT FillTheBetweenList(const CATISpecObject_var &ihMyPartInstComponent);
	//Les mini-constructeurs
	void ConstructorEdit(const int iSizeList);
	void ConstructorCreate(const int iSizeList);
	void ConstructorAddNew(const int iSizeList);
	void ConstructorIsolate(const int iSizeList);
	void ConstructorReplace(const int iSizeList);

	// Les conditions
	boolean CheckModeEdit(void * data = NULL);			// validite du mode edition
	boolean CheckModeNewInstance(void * data = NULL);	// validite du mode Add New Instance
	boolean CheckModeCreate(void * data = NULL);		// validite du mode creation
	boolean CheckPosition(void * data);
	boolean CheckTestValue(void * data = NULL);
	boolean CheckSupportPlateFromTo(void * data);	// validite de la plate designee
	boolean CheckSupportWorkOnPlane(void * data);	// validite du support designe
	boolean CheckSupportFacePlane(void * data);		// validite du support designe (quand on est en mode point)
	boolean CheckXYZ(void * data);  				// validite des coordonnees sur le support
	boolean CheckParallelAxis(void * data = NULL);	// parallelisme entre axe designe et axe composant
	boolean CheckSlider(void * data = NULL);
	boolean CheckSliderAxis(void * data = NULL);
	boolean CheckSketch( void *data = NULL);
	boolean CheckAnywhere(void * data);				//pour le pointe dans le vide en mode support
	boolean CheckAnywhereOutside(void * data);		//pour le pointe dans le vide autour de la Moldbase
	CATBoolean CheckGuidedBASInPart(void * data = NULL);	//to know if guiding BaseAxisSystem are available in Component CATPart
	CATBoolean CheckGuidedAxisDef(void * data = NULL);	//to know if guiding axes are already defined (selected or deduced)
	CATBoolean CheckGuidedQueryNoAxis(void * data = NULL); // to know if no guiding axis are demanded
	CATBoolean CheckGuidedQueryOneAxis(void * data = NULL);// to know if only one guiding axis is demanded
	CATBoolean CheckGuidedQueryTwoAxis(void * data = NULL);// to know if two guiding axes are demanded
	CATBoolean CheckGuidedSecondAxisDir(void * data = NULL); // to know if the second guiding axis is not parallel to the first one
	CATBoolean CheckWDirection(void * data = NULL); // to know if it is a valid direction to set W component axis.
	CATBoolean CheckSmartLocate(void * data = NULL); // to know if the Part has info to be located on ... something.
	CATBoolean CheckShiftLine(void * data = NULL); // if Shift+CATLine is selected (= Shift+Edge, etc...)
	CATBoolean CheckShiftLinesDef(void * data = NULL); // to know if the 2 Lines are already defined

	// Les actions
	boolean ActSelectPoint(void * data);
	boolean ActSelectMorePoint();
	boolean ActFromToDirection(void * data);
	boolean ActSetPositionInTree( void *data ); // acquisition du produit selectionne pour position in tree
	boolean CheckPositionInTree(void *data) ;  // checks that the input of position in in tree is a product
    boolean ActPositionInTree(void * data);  //le champ position in tree est selectionne
	boolean ActAlignmentAxis(void * data);
	boolean ActAdjustementAxis(void * data);
	boolean ActAdjustementPlane(void * data);
	boolean ActSelectOnSupport(void * data);
	boolean ActProjectPoint(void * data);
	boolean ActProjectDirection(void * data);

	boolean ActOpenComponentDlg(void * data = NULL);
	boolean ActCancelComponent(void * data = NULL);
	boolean ActOKComponent(void * data = NULL);

    boolean ActOpenCatalog(void * data = NULL);
    boolean ActSelectInCatalog(void * data = NULL);
	boolean ActCancelCatalog(void * data = NULL);
	boolean ActOkCatalog(void * data = NULL);
	boolean ActOkFileOpen(void * data = NULL);
	boolean ActOkWebBrowser(void * data = NULL);

    boolean ActOpenRuleCat(void * data = NULL);
    boolean ActSelectInRuleCat(void * data = NULL);
	boolean ActCancelRuleCat(void * data = NULL);
	boolean ActOkRuleCat(void * data = NULL);

	boolean ActOpenSupport(void * data = NULL);			// passage en mode support
	boolean ActCloseSupport(void * data = NULL);		// retour en mode normal (avec animation)
	boolean ActAnywhereOnSupport(void * data = NULL);	// gestion du pointe dans le vide
	boolean ActAnywhereOutside(void * data = NULL);		// gestion du pointe dans le vide hors mode support

    boolean ActFromPlate(void * data = NULL);
	boolean ActToPlate(void * data = NULL);
	
	boolean ActEditXYZ(void * data = NULL);
	boolean ActXYZMove(void * data = NULL); 			// coordonnees du deplacement souris

	boolean ActSelectPt2d(void * data = NULL);
	boolean ActProjectPt2d(void * data = NULL);

	CATBoolean ActSelectAS(void * data = NULL); // to locate a preview, picking an Axis System.

	boolean ActSettings();	

	// actions creees pour le Guided Mode (= indications de dialogue dans la Part)
	CATBoolean ActGuidedDataReadInPart(void * data = NULL); // lecture dans la Part des valeurs du Guided Mode
	CATBoolean ActGuidedDefaultAxis(void * data = NULL); // init with default axis (already set OR inside material OR Z+)
	CATBoolean ActGuidedQueryFirstAxis(void * data = NULL); // first axis given memorized
	CATBoolean ActGuidedDeducedFromOneAxis(void * data = NULL); // only one axis given => axis system deduced
	CATBoolean ActGuidedQuerySecondAxis(void * data = NULL); // second axis given memorized
	CATBoolean ActGuidedDeducedFromTwoAxis(void * data = NULL); // the two axes are given => axis system computed
	CATBoolean ActGuidedPointCursor(void * data = NULL); // on fait les init du Guided Mode 
	CATBoolean ActGuidedResetCursor(void * data = NULL); // on ferme le Guided Mode 
	CATBoolean ActGuidedFirstAxisCursor(void * data = NULL); // first axis to deduce the helping cursor
	CATBoolean ActGuidedSecondAxisCursor(void * data = NULL); // second axis to deduce the helping cursor

	// Actions et methodes crees pour le Smart Locate (= indications de locate dans la Part)
	CATBoolean ActSmartLocate(void * data = NULL); // to manage the automatic locate asked in the part.
	CATBoolean ActSmartLocateRaz(void * data = NULL); // to disable the automatic locate asked in the part.
	CATBoolean SetSmartLocateOnPoint(CATUnicodeString istring); // the Part has to be located on dedicated point
	CATBoolean SetSmartLocateOnAS(CATUnicodeString istring); // the Part has to be located on dedicated AxisSystem
	CATBoolean SetSmartLocateOnUndefined(CATUnicodeString istring); // the Part has to be located on something dedicated 

	CATBoolean ActUseConstraintsWith( void *data = NULL); // constraints management
	void OnOKConstraintsWithNotif(CATCommand* cmd, CATNotification* evt, CATCommandClientData data);
	void OnCancelConstraintsWithNotif(CATCommand* cmd, CATNotification* evt, CATCommandClientData data);

	// actions creees pour le "Set Direction"
	CATBoolean ActSetWDirection(void * data = NULL); // to set the absolute chosen direction to each preview.
	CATBoolean ActEnableSetWDirection(void * data = NULL); // to enable the field
	CATBoolean ActDisableSetWDirection(void * data = NULL); // to grey the field

	// actions et methodes creees pour le "Set UV Origin"
	CATBoolean ActSetUVOriginFromPoint(void * data = NULL); // to set the UV Origin of each preview.
	//// OldCode CATBoolean ActSetUVOriginFrom2DPoint(void * data = NULL); // to set the UV Origin of each preview.
	CATBoolean ActSetUVOriginFromDir(void * data = NULL); // to set the UV Origin of each preview.
	boolean CheckSelectUVOrigin(void * data); // if the field is reset from element value to default: we don't enter acquisition state
	CATBoolean ActResetUVOrigin( void * iDialogAgent ); //remise a la valeur par defaut de UV Origin
	CATBoolean ActUnselectUVOrigin(void * data);
	CATBoolean ActSetUVOriginFromShift(void * data); // sette en origine locale l'intersection de 2 lines

	CATBoolean ActInitDAandHSO( void * iDialogAgent );// "Brique de Base" to reset and dishighlight the wanted event.

	// actions briques de base : a utiliser si possible pour compacter le code
	CATBoolean ActSelectOneGSMPoint(void * data = NULL); // only get a GSM point
	CATBoolean ActPreviewSelectedPoint(void * data = NULL); // displays the preview(s).
	CATBoolean ActDisableOK(void * data = NULL); // on n'autorise pas le OK
	CATBoolean ActEnableOK(void * data = NULL); // on (re)active le OK

	CATBoolean GuidedDataRaz(); // RAZ des valeurs du Guided Mode
	CATBoolean SetGuidedAxisCursor(CATUnicodeString istr_XYZ_Select);
	CATBoolean InitDefaultAxis(); // init with Z+
	CATBoolean SetPreselectionCursor(CATDialog::CATDlgHCursor iCursor);
	CATBoolean ResetPreselectionCursor();
	CATBoolean HighlightSelectedAxis();

	// Les methodes
	void AddTranslator(const int iComponent,
					   const CATMathPoint &iMathPt,
					   const boolean iCreateTransl = FALSE);

    void SelectionPointTranslatorCB(CATCommand *from,CATNotification *notif,CATCommandClientData data);
    void BeginModifyPointTranslatorCB(CATCommand *from,CATNotification *notif,CATCommandClientData data);
    void EndModifyPointTranslatorCB(CATCommand *from,CATNotification *notif,CATCommandClientData data);
    void PreactivaPointTranslatorCB(CATCommand *from,CATNotification *notif,CATCommandClientData data);
    void WhileModifyPointTranslatorCB(CATCommand *from,CATNotification *notif,CATCommandClientData data);

	// maj translators et coordonnees pour le mouvement ensembliste
	void SetDeltaMoving(const int iCurrentComponent, const double deltaX, const double deltaY, const double deltaZ);

	void InvertContextManipulator(CATMathPoint &MathPt,CATMathDirection Dir1 = CATMathDirection() , CATMathDirection Dir2 = CATMathDirection());
	void ComputeContextManipulator(CATMathPoint &MathPt);
	//void CreateSplitParameters(const int iComponent);

	// maj d'un offset par defaut eventuel sur les coordonnees du composant (ex: TabPageSpecifics)
	void AddDefaultOffset(const int iComponent) const;

	// 
	// methodes "smart"
	//
	// pour positionner tout type de composant sur point dedie de meme racine ou de racine=iname
	CATBoolean ComputeSmartDedicatedPoint(CATISpecObject_var selPoint,
										  CATUnicodeString iname = " ");
	// pour positionner tout type de composant sur un AxisSystem dedie de meme racine ou de racine=iname
	CATBoolean ComputeSmartDedicatedAS(CATISpecObject_var selAS,
									   CATUnicodeString iname = " ");

	// methodes briques de base
	CATBoolean GetSelectComponents(	CATSelectPathAgent	*ipcurrentAgent,
									CATPathElement		*&opPath,
									CATBaseUnknown_var	 &ohGeom,
									CATILinkableObject_var   &ohLinkable); 
	CATBoolean GetSelectedAxis(CATLine_var				&ohSelectAxis,
							   CATILinkableObject_var	&ohLinkableAxis,
							   CATMathDirection			&oDirAbsolueAxe,
							   CATMathPoint				&oOrigAbsolueAxe,
							   CATISpecObject_var		&ohSelectAxisProdActif);// read the event



	CATBoolean GetDataToConstraintsWith(const int ipt,
										CATLISTV(CATBaseUnknown_var) &oConstraintsList, // geometric objects 
										CATListOfInt	&oConstraintsGeomTypeList);		// which geom type
	CATBoolean ModifyDataToConstraintsWith(const int ipt,
										CATLISTV(CATBaseUnknown_var) &oConstraintsList,				// geometric objects 
										CATListOfInt				 &oConstraintsGeomTypeList,	    // which geom type
										CATLISTV(CATBaseUnknown_var) &oConstraintsMovableList);		// which movable

    int  i_ReorderAction(const int iPosition , 
                            const CATIProduct_var iProdPere)  ; // set position in structure of replacing component
    int  i_ReorderGetFatherAndPosition(CATIProduct_var &oProdPere )  ; // get position in structure of replaced component
    int  i_NbInstances()  ;

	// methodes creees pour le "Set Direction"
	CATBoolean GetDirection(void * data = NULL); // to get and check the direction from a line
	////CATBoolean GetNormalDirection(void * data = NULL); // to get and check the normal direction from a plane or a face 
	HRESULT GetMathAxisFromSurf(CATPathElement *iElem, CATMathAxis &oSurfMathAxis, CATBoolean iaskForIntrusive); // to get the normal (intrusive) math axis from a plane or a face 
	CATBoolean SetWDirection (const CATMathDirection &iAxeW, int ipt=0);
	CATBoolean ActResetWDirection(void * data);
	CATBoolean CheckSelectWDirection(void * data); // TRUE if the selection was (re)set to "automatic"
	CATBoolean ActUnselectWDirection(void * data);
	CATBoolean ActAlignmentPlane(void * data = NULL); // to align components to the intrusive normal (and the 2 orthogonal axis)

	// Data
	CATIProduct_var			_hDocRootProd;			// the root product from root document
    CATIProduct_var          _ProdPere; // the father of part component to delete
	CATIProduct_var			_hReferenceProduct;		// the reference product of the component
	CATISpecObject_var  	_hMyPlatePart;			// the instance part plate support
	CATISpecObject_var		_hMyPartInstComponent;	// the instance part component
	CATISpecObject_var		_hMyRecopyToDelete;		// the instance part component to delete
	CATUnicodeString		_PathInstComponent;		// the instance path component
	CATUnicodeString		_PathRefComponent;		// the reference path component
	CATUnicodeString		_PathInstNewInstance;	// idem pour la nouvelle instance, cas 1 refernce par instance
	CATUnicodeString		_PathRefNewInstance;	//  "
	CATDocument			   *_pDocComponent;			// the document component
	CATUnicodeString		_ReferenceComponent;	// the catalog reference component 

	CATDocument			   *_pDocRule;				// the document rule

	CATUnicodeString		 _typeComponent;		// the component type (feature string)
	CATMathDirection 		 _DirAbsolueAxe;		// direction absolue de l'axe designe 
	CATMathPoint 			 _OrigAbsolueAxe;		// origine absolue de l'axe designe
	CATMathPlane			 _ProjectionPlane;  	// pour le pointe dans le vide 
	CATPlane_var			 _hMySupportWorkOnPlane;// plan support WorkOnPlane
	CATBoolean				 _isSupportFacePlane;	// On a selectionne explicitement le SupportFacePlane en mode point. 
													// Attention hMySupportFacePlane peut etre initialise meme si le flag est FAUX !
	CATPlane_var			 _hMySupportFacePlane;	// plan support selection Face pour les contraintes
	CATLine_var				 _hMySelectAxis;		// l'axe designe pour les contraintes
	CATISpecObject_var		 _hMyPositionSketch;	// Sketch en cours
	CATISketch_var			 _hMySketch;			// Sketch en cours
	CATMathPoint			 _MySupportOrigin;		// origine avec contexte d'assemblage
	CATMathDirection		 _MySupportDirU;		// directions avec contexte d'assemblage
	CATMathDirection		 _MySupportDirV;
	CATMathDirection		 _MySupportDirW;	
	CATLine_var				 _hLine1FromShift;		// line/edge/axe designe par Shif+CATLine
	CATLine_var				 _hLine2FromShift;		// line/edge/axe designe par Shif+CATLine

	CATMathPoint			 _deltaOrigPoint;		// pour le calcul du "Manage All"

	CATMldLocateOnSupport	*_pSupportMode; 		// support pour positionner

	// Infos dialog
	CATBoolean				 _IsCatalogDlg;			// Gestion affichage BrowserCatalog	
	CATBoolean				 _IsRuleCatDlg;			// Gestion affichage Browser du Catalog	de Regles
	CATBoolean				 _IsModeCreate;			// Mode creation	
	CATBoolean				 _IsModeEdit;			// Mode edition
	CATBoolean				 _IsModeNewInstance;	// Mode Add New Instance
	CATBoolean				 _IsModeRecopy;			// Mode Copy Reference
	CATBoolean				 _IsModeReplace;		// Mode Replace Component
	CATBoolean				 _IsEditFocusFrom;		// Mode definition du From graphique
	CATBoolean				 _IsEditFocusTo;		// Mode definition du To graphique
	CATBoolean				 _IsEditFocusFromTo;	// Flag pour la gestion conflit avec surface
	CATBoolean				 _IsSketchSelect;		// Flag pour la gestion conflit avec sketch de point
	CATBoolean				 _IsModeIsolateComponent;			// Isolate Component	
  CATBoolean				 _IsIsolateFileOpen;			// Isolate Component LA Behavior
    CATBoolean				 _isPerformable ; //
    CATBoolean				 _IsToCopyRef ; //
	CATBoolean				 _IsBaseAxis ;			//BaseAxis in the component
	CATDialog::CATDlgHCursor _currentHCursor;		// curseur user courant



	CATLISTV(CATBaseUnknown_var) _ListPt;

	// management DesignTable
	CATIDesignTable_var		_hTheDesignTable;
	int						_OldConfiguration;

	void  MethodToCallBack(                   
          CATCommand* ExpectedSendingCommand,
          CATNotification * ExpectedNotification,
          CATCommandClientData PointerToUsefulData) ;

    HRESULT GetAbsNormal(const CATPlane_var &iPlane, CATMathPoint &ioOrigin,CATMathVector &ioNormal);

	//management instance contextuelle
	HRESULT DefineAsContextualInstance(CATIProduct_var &iospInstance);

	//  ProductFilter  ()  filtre d'acquisition pour ne garder que les "vrai" produits
	CATBoolean  ProductFilter(CATDialogAgent  *  ipAgent,  void  *  ipData)  ;
	// Aligne le composant sur l'axe _DirAbsolueAxe
	CATBoolean  AlignOnAxis();
	// Comportement LA du Copy Reference (Isolate Component)
	CATBoolean IsIsolateFileOpenAuthorized();
	//Remove solid impact in from the replacin component
	HRESULT RemoveSolidImpacts(const CATIProduct_var &ispProduct);
	HRESULT CreateComponents(CATIProgressTaskUI* iProgressTask = NULL);

	CATBoolean IsCopyRef();
	void SetCopyRef(const CATBoolean iFlag);
	void SetSensitivityCopyRef(const CATBoolean iFlag);
	void UpdateIconInTree(const CATISpecObject_var &ispComponent);

};

//----------------------------------------------------------------------

#endif
