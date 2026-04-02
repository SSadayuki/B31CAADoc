// COPYRIGHT DASSAULT SYSTEMES 2000

/**
  * @CAA2Level L0
  * @CAA2Usage U2
  */

//=============================================================================
//
// CATMldComponentDlg.h
// The dialog : CATMldComponentDlg
//
//=============================================================================
//
// Usage notes:
//
//=============================================================================

#ifndef CATMldComponentDlg_H
#define CATMldComponentDlg_H


#include "CATMldComponentUI.h"

#include "CATDlgDialog.h"
#include "CATDlgInclude.h"

#include "CATMathDirection.h"
#include "CATMathDirectionf.h"
#include "CATMathVectorf.h"
#include "CATMathPointf.h"
#include "CAT4x4Matrix.h"
#include "CAT3DAnnotationTextGP.h"
#include "CAT3DMarkerGP.h"

#include "CATICatalogBrowser.h"
#include "CATICatalogChapter.h"

#include "CATBoolean.h"
#include "CATMldAssociateType.h"

#include "CATListOfInt.h"
#include "CATListValCATICatalogKeyword_var.h"
#include "CATListOfCATUnicodeString.h"
#include "CATListOfCATMldComponentData.h"

#include "CATISO.h"
#include "CAT3DCustomRep.h"
#include "CATIProduct.h"
#include "CATPoint.h"
#include "CATSurface.h"
#include "CATPlane.h"
#include "CATLine.h"


#include "CATIParmAsStored.h"

class CATIFmuDocChooser;
class CATIFmuDialogBox;
class CAT3DManipulator;

class CATIParmPublisher;
class CATModelForRep3D ;
class CAT3DBagRep;
class CAT3DFixedArrowGP;
class CATSt3DArcCircleGP;
class CATDlgSelectorList;

class CATMldAngleDialog;
class CATTlgServicesSelector;

class CATMldFromToExplComponentCom;
class CATMldWebBrowserComponentDlg;

//----------------------------------------------------------------------

/**
  * Base class to creating a typed dialog used for MoldDesign or an other application.
  * <b>Role</b>: This base class is used to create a specific typed component dialog. 
  * This dialog is managed by a specific command derived from CATMldCreateComponentCom.
  * <br>
  * To create a specific command, derive the <tt>CATMldComponentDlg</tt> class and 
  * override the methods:
  * <ul>
  * <li>@href CATMldComponentDlg#SetConfigSave </li>
  * </ul>
  * @see CATDlgDialog, CATMldCreateComponentCom
  */
class ExportedByCATMldComponentUI CATMldComponentDlg: public CATDlgDialog
{
	// Allows customization/internationalization of command's messages
	// ---------------------------------------------------------------
	DeclareResource( CATMldComponentDlg, CATDlgDialog )

/**
 * Constructs a Dialog instance from a type component
 * @param iType (feature string)
 *   <br><b>Legal values</b>: a CATUnicodeString 
 * @param iarg
 *   The arg of the command
 * @param iPathRefComponent
 *   The path of the reference component
 * @param iSupplierComponent
 *   The supplier catalog component
 * @param iReferenceComponent
 *   The reference catalog component
 * @param iptrCatalogChapter
 *   The list of chapter catalog
 * @param hlistKeyword
 *   The list of keywords
 */
	CATMldComponentDlg(const CATUnicodeString iType,CATUnicodeString * iarg,const CATUnicodeString iPathRefComponent,
	  const CATUnicodeString iSupplierComponent,const CATUnicodeString iReferenceComponent,
	  CATListOfCATUnicodeString *iptrCatalogChapter,
	  CATListValCATICatalogKeyword_var *hlistKeyword);

	virtual ~CATMldComponentDlg();

  public:

	// Call by CATMldCreateComponentCom Only +	
	// Used to build the box of the component creation
    /** @nodoc */   
	void Build (); 

	// 
	// Gestion direction
	//
    /** @nodoc */   
	CATBoolean IsSetComponentAxis() const; // Orientation definie (TRUE), ou par defaut (FALSE)
    /** @nodoc */   
	virtual void SetComponentAxis(const CATMathDirection &AxisSel);
    /** @nodoc */   
	virtual void SetAllComponentAxis(const CATMathDirection &Axe1Sel, const CATMathDirection &Axe2Sel, const CATMathDirection &Axe3Sel);
    /** @nodoc */   
	void GetComponentAxis(CATMathDirection &Axe1Sel, CATMathDirection &Axe2Sel, CATMathDirection &Axe3Sel) const;
	/**
	  * Used to read all the parameter of the component (only used for the Slider component).
	  * @param iElem
	  *   the path element of the system axis dialog agent
	 **/
	virtual CATBoolean SetFullComponentAxis(CATPathElement *iElem);

	// +++ (R18: Rotation On ManageAll) +++    
	// Set the  ipt preview Axis (if ipt=0 axis of all previews)
	/** @nodoc */   
	void SetComponentAxis(const int ipt, const CATMathDirectionf &iInstAxis);
	/** @nodoc */   
	void SetComponentAxPerp(const int ipt, const CATMathVectorf &iInstAxPerp);
	/** @nodoc */   
	void SetComponentAxe1 (const int ipt, const CATMathDirection &iInstAxe1);
	/** @nodoc */   
	void SetComponentAxe2 (const int ipt, const CATMathDirection &iInstAxe2);
	/** @nodoc */   
	void SetComponentAxe3 (const int ipt, const CATMathDirection &iInstAxe3);
	/** @nodoc */   
	void SetComponentRefAxe3 (const int ipt, const CATMathDirection &iInstRefAxe3);
	/** @nodoc */  
	// iptAxis = 1,2,3,4,5 according to Axe1,Axe2,Axe3,Axis,AxPerp or RefAxe3
	void SetWhichComponentAxis(const int ipt, const int iptAxis, const CATMathDirection &iInstAxis);
	/** @nodoc */   
	CATMathDirection	GetComponentAxe1(const int ipt);	// ipt = numero de previsu; >0
	/** @nodoc */   
	CATMathDirection	GetComponentAxe2(const int ipt);	// ipt = numero de previsu; >0
	/** @nodoc */   
	CATMathDirection	GetComponentAxe3(const int ipt);	// ipt = numero de previsu; >0
	// --- (R18: Rotation On ManageAll) ---

	// Gestion Edition
    /** @nodoc */   
	void DisplayEditParameter(const CATIProduct_var ihReferenceProduct,const CATISpecObject_var ihComponentInstPart);

	// Gestion component
    /** @nodoc */   
	void DisplayPreviewComponent();
    /** @nodoc */   
	void ErasePreviewComponent();
    /** @nodoc */   
	void DisplayParameter( const CATUnicodeString iPathInstComponent, const CATBoolean ibuild=TRUE);
    /** @nodoc */   
	int GetCurrentComponent() const;

	// Gestion des coordonnees locales
    /** @nodoc */   
	int SetOrigUVW(const  CATMathPoint &iOrigUVW);
    /** @nodoc */   
	void GetOrigUVW(const int ipt, CATMathPoint &oOrigUVW);
    /** @nodoc */   
	void ModifyOrigUVW(const int ipt, const  CATMathPoint &iOrigUVW);
    /** @nodoc */    
	void SetManageAll(const CATBoolean iFlag);

  // <Gestion des _ParmEditOrigineX ... _ParmEditOrigineW >
  /** @nodoc */ 
  void InitGetParmEditOrigine();//Init des _ParmEditOrigineX ...W , Prise en compte de l'echelle
	/** @nodoc */   
	void SetParmEditOrigineXYZ(const  CATMathPoint &iPtOrig);//Set _ParmEditOrigineX ...Y...Z from iPtOrig coordinates
     /** @nodoc */ 
  void GetParmEditOrigineXYZ(CATMathPoint &oPtOrig)const ;//Get _ParmEditOrigineX ...Y...Z to oPtOrig coordinates
  /** @nodoc */   
	void SetParmEditOrigineUVW(const  CATMathPoint &iPtOrig, const CATBoolean ibU=TRUE,const CATBoolean ibV=TRUE,const CATBoolean ibW=TRUE);//Set _ParmEditOrigineU ...V...W from iPtOrig coordinates
     /** @nodoc */ 
  void GetParmEditOrigineUVW(CATMathPoint &oPtOrig)const ;//Get _ParmEditOrigineU ...V...W to oPtOrig coordinates

	/** @nodoc */   
	CATBoolean  ResetDefaultOrigUVW(const int ipt);
	/** @nodoc */   
	CATBoolean SetNormalUVW(const CATMathDirection	&iDirW);
    /** @nodoc */   
	CATBoolean SetAxisUVW(const CATMathDirection	&iDirU,
						  const CATMathDirection	&iDirV,
						  const CATMathDirection	&iDirW );
	// Set des matrices et origine par defaut
    /** @nodoc */   
	CATBoolean SetDefaultUVW(const  CATMathPoint &iDefaultOrigUVW);
    /** @nodoc */   
	void GetDefaultUVW(CATMathPoint &oDefaultOrigUVW);
   	/** @nodoc */   
	void GetDefaultOffsetXYZ(double &oX, double &oY, double &oZ ) const; // from UVW

	// Set/Get des directions composants initialisees automatiquement (= sans designation explicite de direction)
    /** @nodoc */   
	void SetAutomaticAxis(const CATMathDirection &iDirW, const CATMathDirection &iDirV, const CATMathDirection &iDirU );
    /** @nodoc */   
	void GetAutomaticAxis(CATMathDirection &oDirW, CATMathDirection &oDirV, CATMathDirection &oDirU) const;
    /** @nodoc */   
	CATBoolean IsAutomaticWDirection();
    /** @nodoc */   
	void SetIsAutomaticWDirection (CATBoolean bIsAutomaticWDirection);

	// Gestion de l'affichage du deplacement souris dans les spinners
    /** @nodoc */   
	void DisplayUVwhileMoving(const CATMathPoint &newPoint);
    /** @nodoc */   
	HRESULT DisplayPreviewsWhileMoving(double ix, double iy, double iz, const CATBoolean IsEndMoving = FALSE);
   /** @nodoc */   
	CATBoolean SetCursor(CATDialog::CATDlgCursor icursor = NorthWestArrow);

	// Gestion liste de selection
    /** @nodoc */   
	CATBoolean IsCreated(const int ipt);
    /** @nodoc */   
	int  GetNbPointSel() const;
    /** @nodoc */   
	void SetPointActif(const int ipt);
    /** @nodoc */   
	CATBoolean SetDeletePointActif(const int ipt);
    /** @nodoc */   
	CATListOfInt DeleteDoublons();
    /** @nodoc */   
	CATBoolean CopyMldComponentDatas(const int fromIpt, const int toIpt);

	// Gestion du positionnement sur points geometriques 3d
    /** @nodoc */   
	int SetGeomPointSel(const CATISpecObject_var selpoint);// 3d
    /** @nodoc */   
	CATISpecObject_var GetGeomPointSel(const int ipt) const; 

	// Gestion du positionnement sur points geometriques 2d
    /** @nodoc */   
	int SetGeomPtSel(const CATPoint_var selpoint);
    /** @nodoc */   
	CATPoint_var GetGeomPtSel(const int ipt) const; 

	// Gestion du positionnement sur support = coordonnees mathematiques
    /** @nodoc */   
	int SetMathPointSel(const CATMathPoint &iselpoint, const CATMathDirection &iDirW);
    /** @nodoc */   
	void GetMathPointSel(const int ipt, CATMathPoint &PointSel);
    /** @nodoc */   
	void ModifyMathPointSel(const int ipt,const CATMathPoint &selpoint);
    /** @nodoc */   
	void ModifyMathPointSel(const CATMathPoint &selpoint);
    /** @nodoc */   
	CATBoolean GetUVWfromXYZ(const CATMathPoint &iPointXYZ,CATMathPoint &oPointUVW) const;
    /** @nodoc */   
	CATBoolean GetXYZfromUVW(const CATMathPoint &iPointUVW,CATMathPoint &oPointXYZ) const;
    /** @nodoc */   
	CATBoolean GetFreeWfromXYZ(const CATMathPoint &iPointXYZ,CATMathPoint &oPointFreeW) const;
    /** @nodoc */   
	CATBoolean GetUVWfromFreeW(const CATMathPoint &iPointFreeW,CATMathPoint &oPointUVW) const;

	// Gestion du positionnement dans l'espace
	/** @nodoc */   
	void SetBound(const CATMathPointf &Origin, const float rayon);
	/** @nodoc */   
	void SetStartingDisplay(const CATBoolean iStartingDisplay);

	// Display des coordonnees sous le curseur 
    /** @nodoc */   
	CATBoolean SetCursorText(double ix, double iy, double iz);

	// Gestion des trous associes aux composants
    /** @nodoc */   
	CATISpecObject_var GetFromPlate() const;
    /** @nodoc */   
	CATISpecObject_var GetToPlate() const;
    /** @nodoc */   
	void SetFromPlate(const CATISpecObject_var &fromPlate);
    /** @nodoc */   
	void SetToPlate(const CATISpecObject_var &toPlate);
	 /** @nodoc */   
	void SetSelectedFather(const CATISpecObject_var &spSelectedFather);
    /** @nodoc */   
	CATLISTV( CATISpecObject_var) *GetListBetween();
	 /** @nodoc */
	//BetweenList management
	void SetListBetween(CATLISTV( CATISpecObject_var ) &iList);
	/** @nodoc */
	void RazIsListBetween();
	/** @nodoc */
	CATBoolean IsListBetween();
    /** @nodoc */   
	void SetSelectorWDirection();
    /** @nodoc */   
	void ClearSelectorWDirection();
    /** @nodoc */
	CATBoolean ResetAutomaticWDirection();
	/** @nodoc */   
	void SetWDirection(const CATBaseUnknown_var ihSelectGeom);
    /** @nodoc */   
	void SetSelectedUVOrigin(const int ipt, const CATBaseUnknown_var &spSelectedUVOrigin);
	/** @nodoc */
 	CATBaseUnknown_var GetSelectedUVOrigin(const int ipt); 
	/** @nodoc */
	CATBoolean IsDefaultOriginUV(const int ipt);
	/** @nodoc */   
	void SetSelectorUVOrigin();
	/** @nodoc */
	void ClearSelectorUVOrigin();
    /** @nodoc */   
	void ClearFromPlate();
    /** @nodoc */   
	void ClearToPlate();
	 /** @nodoc */   
	void ClearPositionInTree();
    /** @nodoc */  
	void  ResetSelectedFather(); // resets the selected father to the default value

	// GetPositionInTree, renvoie la position dans l'arbre suivant l'algo:
	// - Si (fromPlate defini) => insertion dans le component du fromPlate
	// - Sinon on prend le component par defaut suivant le type du composant 
	//		defini dans CATMldTypeMgr.cpp (Anywhere/InjectionSide/EjectorSystem/EjectionSide)
	//	 - Si (InjectionSide || EjectorSystem || EjectionSide) => insertion dans le component
	//	 - Si (Anywhere) => insertion dans le Product actif 
	CATISpecObject_var GetPositionInTree();

	// Gestion de l'orientation du composant choisie par l'utilisateur
    /** @nodoc */   
	void SetSurf1ToComputeCompAxis(const CATSurface_var hSurf1ToComputeCompAxis);
   /** @nodoc */   
	void SetSurf2ToComputeCompAxis(const CATSurface_var hSurf2ToComputeCompAxis);
     /** @nodoc */   
	CATSurface_var GetSurf1ToComputeCompAxis() const;
   /** @nodoc */   
	CATSurface_var GetSurf2ToComputeCompAxis() const;


	// Gestion des contraintes
    /** @nodoc */   
	CATMldAssociateType GetAssociate(const int ipt) const; // type de contrainte voulue  ou pas du tout selon le bouton general.
    /** @nodoc */   
	void SetAssociate(const int ipt, CATBoolean isAssoc, CATMldAssociateType iaxisAssoc );
    /** @nodoc */   
	void SetSupportCst(const int ipt, const CATPlane_var &spSupport); // si preview contrainte avec une face
    /** @nodoc */   
	CATPlane_var GetSupportCst(const int ipt) const;
    /** @nodoc */   
	void SetFatherSupportCst(const int ipt, const CATISpecObject_var &spfatherSupport); // si preview contrainte avec une face
    /** @nodoc */   
	CATISpecObject_var GetFatherSupportCst(const int ipt) const;
    /** @nodoc */   
	void SetPointCst(const int ipt, const CATPoint_var &spPoint); // si preview contrainte avec un point
    /** @nodoc */   
	CATPoint_var GetPointCst(const int ipt) const;
    /** @nodoc */   
	void SetFatherPointCst(const int ipt, const CATISpecObject_var &spfatherPoint); // si preview contrainte avec un point
    /** @nodoc */   
	CATISpecObject_var GetFatherPointCst(const int ipt) const;
    /** @nodoc */   
	void SetAxisCst(const int ipt, const CATLine_var &spAxis, int iNumAxis=1); // si preview contrainte avec un axe (ou systeme)
    /** @nodoc */   
	CATLine_var GetAxisCst(const int ipt, int iNumAxis=1) const;
    /** @nodoc */   
	void SetFatherAxisCst(const int ipt, const CATISpecObject_var &spfatherAxis, int iNumAxis=1); // si preview contrainte avec un axe (ou systeme)
    /** @nodoc */   
	CATISpecObject_var GetFatherAxisCst(const int ipt, int iNumAxis=1) const;

	// Gestion du catalog
    /** @nodoc */   
	CATBoolean OpenCatalog();
    /** @nodoc */   
	void CloseCatalog();
    /** @nodoc */   
	void GetSelectedCatalog( CATUnicodeString &oPathComponentName, CATUnicodeString &oSupplierComponent, CATUnicodeString &oReferenceComponent) const;
    /** @nodoc */   
	CATBoolean IsSelectedCatalog() const;
	/** @nodoc */
 	void SetSelectedCatalog(CATBoolean flag) ;

	// Gestion du catalogue de Regles 
    /** @nodoc */   
	CATBoolean OpenRuleCat();
    /** @nodoc */   
	void CloseRuleCat();
    /** @nodoc */   
	void GetSelectedRuleCat( CATUnicodeString &oPathRuleName, CATUnicodeString &oReferenceRule) const;
    /** @nodoc */   
	CATBoolean IsSelectedRuleCat() const;
    /** @nodoc */   
	void GetRuleObj(CATISpecObject_var &oruleObj);
    /** @nodoc */   
	void ClearRuleCat();
   /** @nodoc */   
	CATBoolean IsRuleActive() const;

	// Gestion des save
    /** @nodoc */   
	void SetConfigState(const CATBoolean iState);

    // Gestion manipulateur cercle
    /** @nodoc */   
    CATBoolean	IsActivateCercle () const;

	// Gestion  du "preview all"(devenu "Manage All") ("creation multiple")
    /** @nodoc */   
	CATBoolean IsAutoPreviews() const;

	/**
	  * Init some specific parameters (only used for the Retainers component).
	  * @param iElem
	  *   the path element of the slider dialog agent
	 **/
	virtual CATBoolean GetParamSupp(CATPathElement *iElem);

	/**
	  * Set specific parameters for Position of the component
	 **/
	//CATBoolean SetSplitPosition(const int ipt);

	/**
	  * Set specific parameters for Direction of the component
	 **/
	//CATBoolean SetSplitDirection();

	// Call by CATMldCreatecomponentCom Only -

	// Gestion  WebBrowser FullPath
    /** @nodoc */   
	void SetFullPathWebBrowser(const CATUnicodeString &theFullPath );
	
    /** @nodoc */   
	virtual boolean EnterStateComponent();
    /** @nodoc */   
	virtual boolean LeaveStateComponent();

    /** @nodoc */   
	virtual boolean EnterStateSupport();
    /** @nodoc */   
	virtual boolean LeaveStateSupport();

    /** @nodoc */   
	virtual CATBoolean GetSplitActive();
    /** @nodoc */   
    virtual void    SetSplittingSurface (CATISpecObject_var iSplitSurface);

	/**
	  * Used to Manages "Several Instances Per Reference" ("one instance by reference")
	  * Get the current value of the dialog box field  "Several Instances Per Reference"
	  * @return
	  *		the value of the check button
	 **/	    
	CATBoolean IsSeveralInstPerRef() const;


    /**
	  * Used to Manages "Keep Part Number" ("TG1 automatic nomination")
	  * Get the current value of the dialog box field  "Keep Part Number"
	  * @return
	  *		the value of the check button
	 **/	    
	CATBoolean IsKeepPartNumber() const;

  	// 
	// Gestion Constraints With
	//
    /** @nodoc */   
 	virtual void SetConstraintsWithInit( CATLISTV(CATBaseUnknown_var)	&iObjectList,
										 CATListOfInt			&iGeomTypeList);
     /** @nodoc */   
 	virtual void GetConstraintsWithLists( CATLISTV(CATISpecObject_var)	&oConstraintsList,
								  CATListOfInt					&oConstraintsGeomTypeList);


	// Manage immediately the sensitivity of the field "SetUVOrigin"
	// iFlag = TRUE  => Enable
	// iFlag = FALSE => Disable
   	/** @nodoc */   
	void SetSensitivityUVOrigin(const CATBoolean iFlag);
	
	//Manage immediately the sensitivity of the field "SetWDircetion"
	// iFlag = TRUE => Enable
	// iFlag = FALSE => Disable
	/** @nodoc */
	void SetSensitivityWDirection(const CATBoolean iFlag);


  protected:

	/**
	  * Used to read all the parameter of the component (Used by the PreviewComponent)
	  * @param hDocRootProd
	  *   the root product from component document
	 **/
	virtual void ReadParameter(const CATIProduct_var hDocRootProd);

	/**
	  * Define the use of the preview component (defined by the PreviewComponent() method)
	  * @return
      *   An CATBoolean value. 
	  *   <br><b>Legal values</b>:
	  *   <dl>
	  *   <dt>TRUE</dt>
	  *   <dd>Use the PreviewComponent() method to display the preview component </dd>
	  *   <dt>FALSE</dt>
	  *   <dd>Use the default preview defined in the CATPart to display the preview component (default value) </dd>
	  *   </dl>
	 **/

	virtual CATBoolean UsePreviewComponent();

	/**
	  * Define the preview of the component (Require the ReadParameter() definition)
	  * @param iactif
	  *   <br><b>Legal values</b>:
	  *   <dl>
	  *   <dt>0</dt>
	  *   <dd>The component is not the current component </dd>
	  *   <dt>1</dt>
	  *   <dd>The component is the current component </dd>
	  *   </dl>
	 **/	  
	virtual void PreviewComponent(const int iactif);

	/**
	  * Save the current value of the selected component
	  * @param iPathRefComponent
	  *   The path of the reference component
	  * @param iSupplierComponent
	  *   The supplier catalog component
	  * @param iReferenceComponent
	  *   The reference catalog component
	  * @param iptrCatalogChapter
	  *   The list of chapter catalog
	  * @param ihlistKeyword
	  *   The list of keywords
	 **/
	virtual void SetConfigSave(CATUnicodeString iPathRefComponent,
		CATUnicodeString iSupplierComponent,
		CATUnicodeString iReferenceComponent,
		CATListOfCATUnicodeString *iptrCatalogChapter,
		CATListValCATICatalogKeyword_var *ihlistKeyword) = 0;

	/**
	  * Init all the keywords name parameters.
	  * @param iconName
	  *   The iconName for the definition of the figure in the dialog.
	  * @return
      *   An HRESULT value. 
	  *   <br><b>Legal values</b>:
	  *   <dl>
	  *     <dt>S_OK</dt>
	  *     <dd>The iconName is valid</dd>
	  *     <dt>E_FAIL </dt>
	  *     <dd>The iconName is not valid</dd>
	  *   </dl>	  
	 **/
	virtual HRESULT GetParameterIconName (CATString& iconName) const;

	/**
	  * Get the title of the dialog box
	  * @param title
	  *   The title of the dialog box
	 **/
	virtual void GetTitre (CATUnicodeString& title) const;

	/**
	  * Add some specific preview to the component
	 **/
	virtual void PreviewComponentSupp();

	/**
	  * Allow the change of catalog in the Catalog Browser
	 **/
	virtual CATBoolean AuthorizeChangeCatalog() const;

	/**
	  * Returns the name of the catalog. 
	  *	Used if the catalog name is different from the feature. 
	 **/
	virtual CATUnicodeString GetCatalogName () const;

	/** Filter management */
	virtual void QueryCatalog(CATICatalogChapter *catalogChapter, CATUnicodeString & oQuery);


	// Management of the additional Tab Page Option container

	/**
	  * Return a new Tab Page Option container with the specified title
	  * @param title
	  *   The title of the tab container
	 **/
	CATDlgTabPage* GetNewTabPageOption(CATString title);

	/**
	  * Build the Tab Page Option container
	  */ 
	virtual void BuildTabPageOption ();

	/**
	  * Destroy the resources of the Tab Page Option container
	  */ 
	virtual void DestroyTabPageOption();

	/**
	  * Management of the additional Tab Page Option container
	  * Sets the selected <tt>CATDlgTabPage</tt>.
	  * @param iIndex
	  *  the index of the <tt>CATDlgTabPage</tt> to select.
	  * <br><b>Legal values:</b> The first <tt>CATDlgTabPage</tt> has index 0.
	 **/	  
	void SetDefaultTabPageOption(const int iIndex);

	/**
	  * Management of the additional Tab Page Option container
	  * Sets the selected <tt>CATDlgTabPage</tt>.
	  * @param iPage
	  *  the <tt>CATDlgTabPage</tt> to select.
	 **/	  
	void SetDefaultTabPageOption(const CATDlgTabPage *iPage);


	/*
	 ** Returns Mode Edition Y/N
	 */   
	CATBoolean			IsModeEdit() const;
    /*
	 ** Returns Mode Creation Y/N
	 */   
    CATBoolean			IsModeCreate() const;
    /*
	 ** Mode NewInstance Y/N
	 */
    CATBoolean			IsModeNewInstance() const;
	/*
	 ** Mode Recopy Y/N
	 */   
    CATBoolean			IsModeRecopy() const;
    /*
	 **  Mode Replace Y/N
	 */
    CATBoolean			IsModeReplace() const;


	/**
	  * Used to Manages "Several Instances Per Reference" ("one instance by reference")
	  * Set the current value of the dialog box field  "Several Instances Per Reference" 
	  * @param iFlag
	  *		the value of the check button
	 **/	  
	void SetSeveralInstPerRef(const CATBoolean iFlag);


    /**
	  * Used to Manages "Keep Part Number" ("TG1 automatic nomination")
	  * Set the current value of the dialog box field  "Keep Part Number" 
	  * @param iFlag
	  *		the value of the check button
	 **/	  
	void SetKeepPartNumber(const CATBoolean iFlag);

	/**
	  * Used to Manages "Several Instances Per Reference" ("one instance by reference")
	  * Modify the sensitivity of the check button "Several Instances Per Reference" 
	  * @param iFlag
	  *		the sensitivity of the check button
	 **/	  
	void SetSensitivitySeveralInstPerRef(const CATBoolean iFlag);

	/**
  * Used to Manages "Keep Part Number" ("TG1 automatic nomination")
	  * Modify the sensitivity of the check button  "Keep Part Number" 
	  * @param iFlag
	  *		the sensitivity of the check button
	 **/	  
	void SetSensitivityKeepPartNumber(const CATBoolean iFlag);


	/**
	  * Used to Manages "Associated" 
	  * Get the current value of the dialog box field  "Associated"
	  * @return
	  *		the value of the check button
	 **/	    
	CATBoolean IsAssociated() const;

	/**
	  * Used to Manages "Associated" )
	  * Set the current value of the dialog box field  "Associated"
	  * @param iFlag
	  *		the value of the check button
	 **/	  
	void SetAssociated(const CATBoolean iFlag);

	/**
	  * Used to Manages "Associated" 
	  * Modify the sensitivity of the check button "Associated"
	  * @param iFlag
	  *		the sensitivity of the check button
	 **/	  
	void SetSensitivityAssociated(const CATBoolean iFlag);

	/**
	  * Used to Manages "ManageAll" 
	  * Get the current value of the dialog box field  "ManageAll"
	  * @return
	  *		the value of the check button
	 **/	    
	CATBoolean IsManageAll() const;

	/**
	  * Used to Manages "ManageAll" 
	  * Set the current value of the dialog box field  "ManageAll" 
	  * @param iFlag
	  *		the value of the check button
	 **/	  
	/* void SetManageAll(const CATBoolean iFlag); up to public methods

	/**
	  * Used to Manages "ManageAll" 
	  * Modify the sensitivity of the check button "ManageAll" 
	  * @param iFlag
	  *		the sensitivity of the check button
	 **/	  
	void SetSensitivityManageAll(const CATBoolean iFlag);

	// 
	// Management of the additional Tab Page Specifics container
	//
   	/** @nodoc */   
	// Build the Tab Page Specifics container
	virtual void BuildTabPageSpecifics();
    /** @nodoc */   
	// Destroy the resources of the Tab Page Specifics container
	virtual void DestroyTabPageSpecifics();

	// lecture des valeurs specifiques
    /** @nodoc */   
	virtual void GetDefaultOffsetUVW(double &oOffsetU,
									 double &oOffsetV,
									 double &oOffsetW) const;
   	/** @nodoc */   
	// Coverage; A garder SVP. merci.
	/* CATBoolean AddToFieldsUVW(const double iDeltaToAddU, 
							  const double iDeltaToAddV,
							  const double iWDeltaToAddW); */


   	/** @nodoc */   
	void AddCallbackSpinner();
   	/** @nodoc */   
	void RemoveCallbackSpinner();

	/**
	  * Add a specific frame (Ejector)
	  */ 
	virtual int     AddSpecificFrame(const int iLigne, CATDlgTabPage * iTabPage);

	// Functions to access private attributes
    /** @nodoc */   
	CATIProduct_var	GetDocRootProdComponent();

	// Display
	/** @nodoc */   
	CATMathPointf		GetRealPos();
	/** @nodoc */   
	CATMathDirectionf	GetComponentAxis();
	/** @nodoc */   
	CATMathVectorf		GetComponentAxPerp();
	/** @nodoc */   
	CATMathDirection	GetComponentAxe1();
	/** @nodoc */   
	CATMathDirection	GetComponentAxe2();
	/** @nodoc */   
	CATMathDirection	GetComponentAxe3();
	/** @nodoc */   
	CATMathDirection	GetComponentRefAxe3();
	// +++ (R18: Rotation On ManageAll) +++    
	/** @nodoc */   
	CATMathDirectionf	GetComponentAxis(const int ipt);	// ipt = numero de previsu; >0
	/** @nodoc */   
	CATMathVectorf		GetComponentAxPerp(const int ipt);	// ipt = numero de previsu; >0
	/** @nodoc */   
	CATMathDirection	GetComponentRefAxe3(const int ipt);	// ipt = numero de previsu; >0
	// --- (R18: Rotation On ManageAll) ---   

	
	// Dialog
	/** @nodoc */   
	CATDlgEditor	*	GetEditorReference();

	// Rep
	/** @nodoc */   
	CAT3DCustomRep	*	GetCustoRep();

	/** The Reference component catalog */
	CATUnicodeString	GetReferenceComponent();
	void SetReferenceComponent (CATUnicodeString refComp);

	// Orientation definie (TRUE), ou par defaut (FALSE)
	/** @nodoc */   
	void SetIsSetComponentAxis (boolean bIsSetComponentAxis);
	
	// Dimensions of the parameter window
    /** @nodoc */   
	void SetRectDim (int iHRectDim, int iWRectDim);

    /** @nodoc */   
	CATDlgTabContainer	*	GetTabCInst();

    // constraint management per preview
	/** @nodoc */  


  protected:
	  CATBoolean _PositionInTreeInactive; //pour permettre aux composants tels que le slider de verrouiller la position dans l'arbre
	  CATBoolean _IsSensitivityAssociated;	// associated check (remonte ici pour permettre aux composants tels que le slider de verrouiller l'associativite).
	  CATBoolean _IsAssociate;	// Associated for the instance group (remonte ici pour permettre aux composants tels que le slider de verrouiller l'associativite).

 private:

	// Gestion du positionnement dans l'espace
	CATBoolean ApplyBound();
	void ByForceBound(const CATMathPoint &Origin);
    // solution aux problemes de visu
    HRESULT SwitchVisuCellTo3DWindow();
    
	//
	// Les callbacks
	//
	void OnComponentDlgDiaCANCELNotification (CATCommand *, CATNotification* , CATCommandClientData data);
	void OnComponentDlgDiaAPPLYNotification (CATCommand *, CATNotification* , CATCommandClientData data);
	void OnComponentDlgDiaOKNotification (CATCommand *, CATNotification* , CATCommandClientData data);

	void OnBetweenListOKNotification (CATCommand *, CATNotification* , CATCommandClientData data);

	void OnComponentDlgChkBAssociateNotification(CATCommand* cmd, CATNotification* evt, CATCommandClientData data);
	void OnComponentDlgRevDirNotification (CATCommand *, CATNotification* , CATCommandClientData data);
	void OnComponentDlgChkBAutoPreviewsNotification(CATCommand* cmd, CATNotification* evt, CATCommandClientData data);
	void OnComponentDlgChkBSeveralInstPerRefNotif(CATCommand* cmd, CATNotification* evt, CATCommandClientData data);
	void OnComponentDlgChkBCopyRefNotif(CATCommand* cmd, CATNotification* evt, CATCommandClientData data);
    void OnComponentDlgChkBKeepPartNumberNotif(CATCommand* cmd, CATNotification* evt, CATCommandClientData data);

	void OnComponentDlgRevDirBegAc (CATCommand *, CATNotification* , CATCommandClientData data);
	void OnComponentDlgRevDirEndAc (CATCommand *, CATNotification* , CATCommandClientData data);

	void OnComponentDlgAngleZManipulate (CATCommand *, CATNotification* , CATCommandClientData data);
	void OnComponentDlgAngleZBeginManipulate (CATCommand *, CATNotification* , CATCommandClientData data);
	void OnComponentDlgAngleZEndManipulate (CATCommand *, CATNotification* , CATCommandClientData data);
	void OnComponentDlgAngleZBeg (CATCommand *, CATNotification* , CATCommandClientData data);
	void OnComponentDlgAngleZEnd (CATCommand *, CATNotification* , CATCommandClientData data);
	void OnComponentDlgAngleZcontexte (CATCommand *, CATNotification* , CATCommandClientData data);

	void OpenAngleDialogBox(CATCommand *from,CATNotification *notif,CATCommandClientData data);
	void CancelAngleCB(CATCommand *from,CATNotification *notif,CATCommandClientData data);
	void ChangeAngleCB(CATCommand *from,CATNotification *notif,CATCommandClientData data);
	void ChangeAngleCBTempo(CATCommand *from,CATNotification *notif,CATCommandClientData data);

	void OnPushButtonUseCatalogNotification (CATCommand *, CATNotification* , CATCommandClientData data);
	void OnCancelCatalogNotification(CATCommand* cmd, CATNotification* evt, CATCommandClientData data);
	void OnOKCatalogNotification(CATCommand* cmd, CATNotification* evt, CATCommandClientData data);
	void OnSelectInCatalogNotification(CATCommand* cmd, CATNotification* evt, CATCommandClientData data);
	void OnChangeChapterNotification(CATCommand* cmd, CATNotification* evt, CATCommandClientData data);

	void OnPushButtonWebBrowserNotification (CATCommand *, CATNotification* , CATCommandClientData data);
	void OnCancelWebBrowserNotification(CATCommand* cmd, CATNotification* evt, CATCommandClientData data);
	void OnOKWebBrowserNotification(CATCommand* cmd, CATNotification* evt, CATCommandClientData data);

	void OnPushButtonUseRuleCatNotif (CATCommand *, CATNotification* , CATCommandClientData data);
	void OnCancelRuleCatNotif(CATCommand* cmd, CATNotification* evt, CATCommandClientData data);
	void OnOKRuleCatNotif(CATCommand* cmd, CATNotification* evt, CATCommandClientData data);
	void OnSelectInRuleCatNotif(CATCommand* cmd, CATNotification* evt, CATCommandClientData data);

	void OnPushButtonFileOpenNotification (CATCommand *, CATNotification* , CATCommandClientData data);
	void OnCancelFileOpenNotification(CATCommand* cmd, CATNotification* evt, CATCommandClientData data);
	void OnOKFileOpenNotification(CATCommand* cmd, CATNotification* evt, CATCommandClientData data);

	void OnListSelectFromPlate(CATCommand* cmd, CATNotification* evt, CATCommandClientData data);
	void OnListSelectToPlate(CATCommand* cmd, CATNotification* evt, CATCommandClientData data);
	void OnListSelectPositionInTree(CATCommand* cmd, CATNotification* evt, CATCommandClientData data);
	void OnListSelectUVOrigin(CATCommand* cmd, CATNotification* evt, CATCommandClientData data);
	void OnListSelectWDirection(CATCommand* cmd, CATNotification* evt, CATCommandClientData data);

	void OnParameterChangedCB(CATCallbackEvent, void*, CATNotification *, CATSubscriberData, CATCallback);

	void OnComponentDlgEditOrigineNotification(CATCallbackEvent parmEvent, void* publisherObject,
						  CATNotification* paramNotification, CATSubscriberData myData, CATCallback callBackId);
	void OnComponentDlgEditOrigineUVWNotification(CATCallbackEvent parmEvent, void* publisherObject,
						  CATNotification* paramNotification, CATSubscriberData myData, CATCallback callBackId);

	void OnComponentDlgListBetweenNotification(CATCommand* cmd, CATNotification* evt, CATCommandClientData data);

	void OnPushButtonConstraintsWithNotif(CATCommand* cmd, CATNotification* evt, CATCommandClientData data);

	// Callback
	CATCallback			_CBOk,_CBApply, _CBCancel, _CBClose, _CBBetweenListOk;
	CATCallback			_CBListBetween;
	CATCallback			_CBRevDir;
	CATCallback			_CBUseCat, _CBFileOpen, _CBWebBrowser;
	CATCallback			_CBEditOrigineX, _CBEditOrigineY, _CBEditOrigineZ;
	CATCallback			_CBEditOrigineU, _CBEditOrigineV, _CBEditOrigineW;
	CATCallback			_CBChkBAssociate;
	CATCallback			_CBChkBAutoPreviews;
	CATCallback			_CBChkBSeveralInstPerRef;
	CATCallback			_CBChkBCopyRef;
	CATCallback			_CBChkBKeepPartNumber;
	CATCallback			_CBListSelectFromPlate, _CBListSelectToPlate, _CBListSelectPositionInTree;
	CATCallback			_CBListSelectUVOrigin, _CBListSelectWDirection;
	CATCallback			_CBReverseDirection, _CBReverseDirectionBegPreAc,_CBReverseDirectionEndAc;
	CATCallback			_CBRotationZ, _CBRotationZDebut, _CBRotationZFin;
	CATCallback			_CBRotationZBegPreAc, _CBRotationZEndAc, _CBRotationZEdit;
	CATCallback			_CBChkBRuleActivate;
	CATCallback			_CBUseRuleCat;
	CATCallback			_CBUseConstraintsWith;

	// Methods
	void Destroy();

	void InitSupplierComponent(const CATIProduct_var hDocRootProd);

	void DisplayComponent();
	void EraseComponent();

	CATDlgFrame*  CreateControlInPanelEdition(const CATICkeParm_var ihParam, const CATIParmPublisher_var  iRoot, 
						CATDialog *iFather, const int iHPosition, const int iVPosition);

	void SetSensitivityDlg( const CATULong iState);
	// 
	// Rules Management
	//
    /** @nodoc */   
	// Returns the name of the catalog of rules
	// Used if the catalog name is different from the feature. 
	CATUnicodeString GetRuleCatName () const;

    /** @nodoc */  
	void SetRuleCatName (CATUnicodeString iname);

	// Gestion visu
	// Old Code : avant(R18: Rotation On ManageAll)  void DisplayBodyPart(const CATIProduct_var ihReferenceProduct,const int iactif, const CATMathTransformation &ModelMatrix);
	void DisplayBodyPart(const int ipt, const CATIProduct_var ihReferenceProduct,const int iactif, const CATMathTransformation &ModelMatrix);
	// Old Code : avant(R18: Rotation On ManageAll)  void DisplayBody(const int iactif);
	void DisplayBody(const int ipt, const int iactif);	// +++ (R18: Rotation On ManageAll) +++    
	void DisplayDir(const int ipt, const int iactif);
	void DisplayMaterials(const CATIProduct_var hReferenceProduct, const int iactif, const CATMathTransformation &ModelMatrix);

	// Gestion des coordonnees locales
	CATBoolean ComputeMatricesUVW(const int ipt); // matrices de gestion des coord. d'un composant
	CATBoolean ComputeAllMatricesUVW();// matrices de gestion des coord. du groupe

	// renvoie l'angle arrondi
	CATAngle SnapAngle( const CATAngle iAngle);
	// affiche sur le cercle le texte correspondant a la valeur de l'angle
	CATBoolean DisplayTextAngle(const CATAngle iAngle, const CATPredefinedColorName iColor=GREEN);
	// +++ (R18: Rotation On ManageAll) +++  
	// rend l'angle absolu de la preview numero ipt
	CATAngle GetAngle(const int ipt); // ipt>0
	// maj de l'angle => maj des axes de la previsu numero ipt (ou toutes si ipt=0)
	CATAngle SetAngleAndAxis(const int ipt,const CATAngle iAngle, const CATMathTransformation iTrf);
	// ajout d'un l'angle =>  maj des axes de la previsu numero ipt (ou toutes si ipt=0)
	CATAngle SetDeltaAngleAndAxis(const int ipt, const CATAngle iDeltaAngle, const CATMathTransformation iTrf);
	// rend le  centre de rotation et l'axe de LA previsu numero ipt // (en tenant compte du contexte d'assemblage)
	CATBoolean GetCenterAndAxis(const int ipt, CATMathPoint &oCenter, CATMathDirectionf &oAxis);
	// --- (R18: Rotation On ManageAll) ---

	//affiche un marker a l'origine UV
	CATBoolean DisplayUVOrigin();

	//
	// Les variables de classe
	//
	CATIProduct_var		_hDocRootProdComponent;	// the root product from component document
	CATIProduct_var		_hInstAssy;				// the instance of the assembled component
	CATIProduct_var		_hInstBasePart;			// the instance of the 1st available part of the assembled component

	// Positionnement sur support
	CATIParmAsStored_var	_ParmEditOrigineX, _ParmEditOrigineY, _ParmEditOrigineZ;
	CATIParmAsStored_var	_ParmEditOrigineU, _ParmEditOrigineV, _ParmEditOrigineW;
	
	// Display
	CATMathPointf		_RealPos;
	CATMathDirectionf	_ComponentAxis;
	CATMathVectorf		_ComponentAxPerp;
	CATMathDirection	_ComponentAxe1;
	CATMathDirection	_ComponentAxe2;
	CATMathDirection	_ComponentAxe3;
	CATMathDirection	_ComponentRefAxe3;
	
	// Dialog
	CATDlgEditor	*	_EditorReference;

	// Rep
	CAT3DCustomRep	*	_CustoRep;

	/** The Reference component catalog */
	CATUnicodeString		_ReferenceComponent;	

	// Orientation definie (TRUE), ou par defaut (FALSE)
	CATBoolean				_IsSetComponentAxis;			


	// Mode Creation  O/N
	CATBoolean				_IsModeCreate;
	
	// Mode Edition O/N
	CATBoolean				_IsModeEdit;			
	
	// Mode NewInstance O/N
	CATBoolean				_IsModeNewInstance;	
	
	// Mode Copy Reference O/N
	CATBoolean				_IsModeRecopy;	
	
	// Mode Replace Component O/N
	CATBoolean				_IsModeReplace;	
	
	// gestion du premier Display dans fenetre vide O/N
	CATBoolean	    _IsStartingDisplay;
	CATMathPointf   _OriginSphere;
	float		    _RayonSphere;

	// Dimensions of the parameter window
	int _iHRectDim, _iWRectDim;

	CATDlgTabContainer*		_TabCInst;


	// Rep
	CATISO					*_ptrISO;
	CATModelForRep3D		*_ptrPreview ;  

	//Data
	CATUnicodeString	_typeComponent;		// Component type (feature string)

	CATISpecObject_var	_hFromPlate;		// From for the instance group
	CATISpecObject_var	_hToPlate;			// To for the instance group
	CATISpecObject_var  _SelectedFatherProduct; // the father product selected by the user

	// Between List management
	CATLISTV(CATISpecObject_var ) *_ListBetween;	
    CATBoolean			_IsListBetween;

	CATSurface_var		_hSurf1ToComputeCompAxis; // surface selected to define the component axis orientation (today ="from") 
	CATSurface_var		_hSurf2ToComputeCompAxis; // surface selected to define the component axis orientation (today ="to") 

	// CATBoolean			_IsAssociate;		// Associated for the instance group
	CATBoolean			_IsQueryCatalog;
	CATBoolean			_IsDefReferenceProduct;
	CATBoolean			_IsOKCatalog;
	CATBoolean			_IsAutoPreviews;	// Previsu automatique voulue
	CATBoolean			_IsSeveralInstPerRef;		// several instances per reference voulue
	CATBoolean			_IsSensitivitySeveralInstPerRef; // several instances per reference voulue
	CATBoolean			_IsSensitivityCopyRef;		// copy reference voulue
	CATBoolean			_IsCopyRef; // copy reference voulue
	// CATBoolean			_IsSensitivityAssociated;	// associated check
	CATBoolean			_IsSensitivityManageAll;	// Manage all check
	CATBoolean			_IsKeepPartNumber;		// several instances per reference voulue
	CATBoolean			_IsSensitivityKeepPartNumber; // several instances per reference voulue


	// Infos Catalog
	CATUnicodeString		_PathInstComponent;		// Chemin de l'instance du component 
	CATBoolean				_initConfig;			// Flag sur la presence de la config precedente.
	CATICatalogBrowser_var	_hBrowserCatalog;		// CatalogBrowser for the component
	CATUnicodeString		_PathRefComponent;		// Chemin du component de reference
	CATUnicodeString		_SupplierComponent;		// Supplier du component catalog
	CATUnicodeString		_PrevCatalogPath;		// 

	// Infos Catalog of Rules
	CATBoolean				_initConfigRuleCat;		// Flag sur la presence de la config precedente.
	CATICatalogBrowser_var	_hBrowserRuleCat;		// CatalogBrowser for the rule
	CATUnicodeString		_BuildPathRuleCatName;  // nom complet pour ne pas avoir tout le temps le catalogue de composants
	CATListOfCATUnicodeString			*_ptrRuleCatChapter;	// Chapter Rule catalog
	CATListValCATICatalogKeyword_var	*_hlistRuleCatKeyword;	// Liste des keyword

	CATUnicodeString		_PathRefRule;		    // Chemin de la regle de reference
	CATUnicodeString		_ReferenceRule;			// The Reference Rule catalog
	CATISpecObject_var		_hRuleObj;				// the object linked (feature) to the rule

	// Rule Catalog

	// Message None
	CATUnicodeString		_MessageNone;

	int						_NbPointSel;
	int						_iCurrentComponent;

	// Dialog
	CATDlgFrame*			_FrmRoot;
	CATDlgPushButton*		_PushListBetween;
	CATDlgPushButton*		_PushDir;
	CATDlgEditor*			_EditorSupplier;
	CATDlgEditor*			_EditorRuleReference;
	CATDlgFrame*			_FrmOriginX;
	CATDlgFrame*			_FrmOriginY;
	CATDlgFrame*			_FrmOriginZ;
	CATDlgFrame*			_FrmOriginU;
	CATDlgFrame*			_FrmOriginV;
	CATDlgFrame*			_FrmOriginW;
	CATDlgCheckButton*		_ChkBAssociate;
	CATDlgCheckButton*		_ChkBAutoPreviews;
	CATDlgCheckButton*		_ChkBSeveralInstPerRef;
	CATDlgCheckButton*		_ChkBCopyRef;
	CATDlgCheckButton*		_ChkBRuleActivate;
	CATDlgCheckButton*		_ChkBKeepPartNumber;

	CATTlgServicesSelector*	_SelectorPositionInTree;
	CATTlgServicesSelector*	_SelectorFromPlate;
	CATTlgServicesSelector*	_SelectorToPlate;
	CATDlgSelectorList*		_EditorSelPositionInTree;
	CATDlgSelectorList*		_EditorSelFromPlate;
    CATDlgSelectorList*		_EditorSelToPlate;

	CATDlgPushButton*		_PushConstraintsWith;

	CATTlgServicesSelector*	_SelectorUVOrigin;
	CATTlgServicesSelector*	_SelectorWDirection;
	CATDlgSelectorList*		_EditorUVOrigin;
	CATDlgSelectorList*     _EditorWDirection;

	// Catalog
	CATListOfCATUnicodeString			*_ptrCatalogChapter;	// Chapter catalog
	CATListValCATICatalogKeyword_var	*_hlistKeyword;			// Liste des keyword

	CATIFmuDocChooser	*_pDocChooser;
	CATIFmuDialogBox	*_DlgFile;

	CATMldWebBrowserComponentDlg	*_pWebBrowser;

	// Angle
	CATMldAngleDialog	*_AngleDialog;
	double				_StepAngle;
	CATAngle			_currentAngle; // valeur de l'angle a chaque action
	CATAngle			_absoluteAngle; // valeur de l'angle par rapport a la premiere preview.

	// il y a une seule normale par groupe de composants 
	// ( => on ne met pas ces champs dans la liste de CATMldComponentData.h)
	CATMathDirection	_DirU; // horizontale (= X par defaut)
	CATMathDirection	_DirV; // verticale   (= Y par defaut)
	CATMathDirection	_DirW; // normale a la plate (= Z par defaut)
	CAT4x4Matrix		_defaultMatrixUVWtoXYZ;
	CAT4x4Matrix		_defaultMatrixXYZtoUVW;
	CATMathPoint		_defaultOrigUVW;
	CATBaseUnknown_var	_hSelectedUVOrigin; // objet selectionne comme nouvelle origine.(traitement ensembliste ou pas de preview)
	CATMathPoint		_selectedUVOrigin; // coordonnees associees a l'objet selectionne comme nouvelle origine ( idem )
	CATMathDirection	_AutomaticDirU, _AutomaticDirV, _AutomaticDirW;	
	CATBoolean			_IsAutomaticWDirection;// Orientation calculee  (TRUE), ou selectionnee (FALSE)

	// Rep pour la previsu de composant
	CAT3DBagRep				*_ptrPreview3DBagRep;
	CAT3DBagRep				*_ptrPreview3DBagRepArrow;
	CAT3DBagRep				*_ptrPreview3DBagRepCercleZ;
	CAT3DBagRep				*_ptrPreview3DBagRepUVOrigin;

   	CATModelForRep3D		*_ptrPreviewCercleZ;
   	CAT3DCustomRep			*_ptrCustoRepCercleZ;
   	CATSt3DArcCircleGP 		*_ptrFixedArcCircleGPZ;
    CAT3DAnnotationTextGP	*_ptrTextAngle;
  	CATModelForRep3D		*_ptrPreviewXFly;
	CAT3DBagRep				*_ptrPreview3DBagRepXFly;
    CAT3DCustomRep			*_ptrCustoRepXFly;
    CAT3DAnnotationTextGP	*_ptrTextXFly;
    CAT3DAnnotationTextGP	*_ptrTextYFly;
	CATModelForRep3D		*_ptrPreviewArrow ;  
	CAT3DCustomRep			*_ptrCustoRepArrow;
   	CAT3DFixedArrowGP 		*_ptrFixedArrowGP;
	CATModelForRep3D		*_ptrPreviewUVOrigin;
	CAT3DCustomRep			*_ptrCustoRepUVOrigin;
    CAT3DMarkerGP			*_ptrOriginMarker;

	// Management manipulateur
	CATBoolean				_IsActivateCercle;
	CAT3DManipulator		*_ptrArrowManipulator;
	CAT3DManipulator		*_ptrCercleManipulatorZ;

	// Infos pour le traitement des instances (temporaire en attendant les feat ext)
	CATListOfComponentData	_ListComponentData;
 
	// Display 
	CATMathPointf    		_Centre; // centre de rotation du manipulateur d'angle
 
	CATBoolean						_IsSupportWorkOnPlane;		// Creation WorkOnPlane mode	

	CATMldFromToExplComponentCom	*_ListBetweenCom;
	
	// Updates the position in tree editor
	void UpdatePositionInTree();
	// Updates the uv origin editor
	void UpdateUVOrigin();
	void UpdateUVOrigin(const int ipt); // bga+++
	//uniquement pour l'affichage dans le champ: ne remet pas a jour la position
	void SetOrigUVWObject(const int ipt, const  CATBaseUnknown_var spUVOriginFeature); 

     /** @nodoc */   
	void SetWDirectionObject(const CATBaseUnknown_var ihSelectGeom);



  // Creation des Frames de la Dialog Box
  /** @nodoc */
  void DlgFrameFrmInst() ;
    /** @nodoc */
  void DlgFrmInstOrigin( CATDlgFrame*& iFrame, const CATString& iDialogObjectName,  const short int iTopRow, 
      const short int iLeftColumn, const CATIParmAsStored_var& iParmEditOrigine , CATDlgFrame*& oFrmOrigin  , 
      const CATUnicodeString &iLabelName) ;
  /** @nodoc */  
    void DlgCheckButton( CATDlgCheckButton*& ipChkButton, CATBoolean& oIsState);
       /** @nodoc */  
  void CreatePreviewElem( CATModelForRep3D* &iptrPreview,
                                           	CAT3DBagRep* &optrPreview3DBagRep);
      /** @nodoc */ 
  void CreateSelector( 	CATTlgServicesSelector*	&opSelector,
                                        	CATDlgFrame* &iFrmEditorPositionInTree,
                                          const CATString iTitle,
                                          	CATDlgSelectorList* &opEditor);
/**
	  * Used to Manages "Copy Reference" ("create a copy of the reference")
	  * Get the current value of the dialog box field  "Copy Reference"
	  * @return
	  *		the value of the check button
	 **/	
	CATBoolean IsCopyRef() const;
	/**
	  * Used to Manages "Copy Reference" ("create a copy of the reference")
	  * Set the current value of the dialog box field  "Copy Reference" 
	  * @param iFlag
	  *		the value of the check button
	 **/	  
	void SetCopyRef(const CATBoolean iFlag);
	/**
	  * Used to Manages "Copy Reference" ("create a copy of the reference")
	  * Modify the sensitivity of the check button "Copy Reference" 
	  * @param iFlag
	  *		the sensitivity of the check button
	 **/

	void SetSensitivityCopyRef(const CATBoolean iFlag);
	// Gestion du positionnement dans l'espace


	// The copy constructor and the equal operator must not be implemented
	// -------------------------------------------------------------------
	CATMldComponentDlg (CATMldComponentDlg &);
	CATMldComponentDlg& operator=(CATMldComponentDlg&);

};

//----------------------------------------------------------------------

#endif
