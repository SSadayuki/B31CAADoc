// COPYRIGHT DASSAULT SYSTEMES 1999
#ifndef CATIDRWFACTORY_H
#define CATIDRWFACTORY_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATLISTV_CATISpecObject.h"
#include "CATMathVector2D.h"

class CATIView;
class CATISketch;
class CATICkeParm;
class CATISpecObject;
class CATMathVector2D;

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwFactory ;
#else
extern "C" const IID IID_CATIDrwFactory ;
#endif
/**
 * Interface implemented by the drafting container  used to create basic drawing features.
 * <b>Role</b>: This interface allows feature creation into a drafing structure. 
 * 
 */

class ExportedByDraftingItfCPP CATIDrwFactory : public CATBaseUnknown
{
  CATDeclareInterface;
	
public:	

/**
 * To create the primitve object of drawing.
 * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
 * @param oObj
 *   The drawing
 * @see CATIDrawing
 */	
	virtual HRESULT CreateDrawing( const IID &iid,void ** oObj, wchar_t * iStandardName=NULL ) =0;


/**
 * To create a sheet.
 * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
 * @param oObj
 *   The sheet
 * @see CATISheet
 */	
	virtual HRESULT CreateSheet(const IID &iid,void ** oObj) =0;


 /**
 * @nodoc
 * This method is now replaced by  CATIDrwFactory#CreateViewWithMakeUp
 * To create a view.
 * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
 * @param oObj
 *   The view
 * @see CATIView
 */	
	virtual HRESULT CreateView(const IID &iid,void ** oObj) =0;

/**
 * @nodoc 
 * This method is now replaced by CATIDrwFactory#CreateViewWithMakeUp
 * To create a generative view name from a Cke calcul.
 * @param oObj
 *   The viewname
*/			
	virtual HRESULT CreateViewName(const IID &iid,void ** oObj) =0;

/**
 * @nodoc
 * To create a dressup basic object.
 * @param oObj
 *   The dressup
 * @see CATIDrwDressUp
 */	
	virtual HRESULT CreateDressup(const IID &iid,void ** oObj) =0;

/**
 * @nodoc
 * To create an object which contains the relation between mother and daughter views.
 * <br>  (iXin, iYin) : mother's position.
 * <br>  (iXout, iYout) : daughter's position.
 * <br>  iAnglein : mother's angle.
 * <br>  iAngleout : daughter's angle.
 * <br>  iRelationDirection : angle of the folding line or callout direction
 * <br>  igap : space which separates a mother's view and daughter's one.
 * <br>  iangle : angle between mother's view and daughter's one. 
 *                (can be different of iRelationDirection when relation mode is perpendicular)
 * <br>  iOffset : distance from mother's view origin to origin of the relation. 
 *                 Usefull for view from plane, when projection of origin of the plane (ie origin of the relation) does not coincide with mother's view origin.
 * <br>  iRelationMode : relation should be aligned or perpendicular to relation axis
 * @param oObj
 *   The relation
 * @see CATICkeRelation
 */	
	virtual HRESULT CreateDrwRelation(CATICkeParm* iXin,CATICkeParm* iYin,
                                    CATICkeParm* iXout,CATICkeParm* iYout,
                                    CATICkeParm* iAnglein,CATICkeParm* iAngleout,
                                    double iRelationDirection, double igap, double iangle,CATMathVector2D iOffset,int iRelationMode, const IID &iid,void ** oObj) =0;

/**
 * @nodoc
 * To create an element which assigns the new parameter of a daughter view.
 * <br> When the daughter view is moving, the precedent relation became false.
 * <br> This object is going to refresh it.
 * @param oObj
 *   The controlrelation.
 */	
	virtual HRESULT CreateControlRelation(CATICkeParm*  iXout,CATICkeParm* iYout,
		                                    CATICkeParm* igap,CATICkeParm* iangle,const IID &iid,void ** oObj) =0;

/**
 * @nodoc
 * This method is now replaced by:
 * Use @href CATIDftDrawingFormats#AddCustomFormat to create a customized format.
 * Use @href CATIDftSheetFormat#SetFormat to set a standard or custom format on a sheet.
 *
 * To create a format used by a sheet.
 * @param oObj
 *   The format
 * @see CATIDftFormatable
 */	
	virtual HRESULT CreateFormat(const IID &iid,void ** oObj) =0; 
	
/**
 * @nodoc
 * To create a bag which contains generated elements.
 * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
 * @param oObj
 *   The hlrview
 */	
	virtual HRESULT CreateHlrView(const IID &iid,void ** oObj) =0;

/**
 * To create a generic object which contains the profile,texts and arrows  of a section,or cut view.
 * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
 * @param oObj
 *   The callout
 *   The callout implements CATIDrwCallOut
 */		
	virtual HRESULT CreateCallout(CATISpecObject* iopera, int iVisibilityMode,const IID &iid,void ** oObj) =0;

/**
 * To create a subobject from Callout specific for Detail.
 * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
 * <br> oObj is returned when the operator (iopera) is a detail.
 * The callout implements CATIDrwDetailCallOut
 */	
	virtual HRESULT CreateDetailCallout(CATISpecObject* iopera, int iVisibilityMode,const IID &iid,void ** oObj) =0;

/**
 * To create a subobject from Callout specific for Projection.
 * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
 * <br> oObj is returned when the operator (iopera) is a projection.
 * The callout implements CATIDrwProjectionCallOut
 */	
	virtual HRESULT CreateProjectionCallout(CATISpecObject* iopera, int iVisibilityMode,const IID &iid,void ** oObj) =0;

/**
 * To create a subobject from Callout specific for Section.
 * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
 * <br> oObj is returned when the operator (iopera) is a section.
 * The callout implements CATIDrwSectionCallOut
 */	
	virtual HRESULT CreateSectionCallout(CATISpecObject* iopera, int iVisibilityMode,const IID &iid,void ** oObj) =0;

/**
 * To create a new projection operator.
 * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
 * <br> mother_view : input parameter of operator
 * @param oObj
 *   The operator
 */		
	virtual HRESULT CreateProjection( CATIView* mother_view,const IID &iid,void ** oObj) =0;

/**
 * To create a new section operator.
 * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
 * <br> mother_view : input parameter of operator
 * @param oObj
 *   The operator
 */	
	virtual HRESULT CreateSection( CATIView* mother_view,const IID &iid,void ** oObj) =0;

/**
 * To create a new detail operator based on the profil in input argument(isketch) .
 * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
 * <br> mother_view : input parameter of operator
 * @param oObj
 *   The operator
 */	
	virtual HRESULT CreateDetail( CATISpecObject* isketch, CATIView* mother_view,const IID &iid,void ** oObj) =0;

/**
 * To create a new detail operator based on the profil in input argument(isketch) .
 * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
 * <br> mother_view : input parameter of operator
 * @param oObj
 *   The operator
 */	
	virtual HRESULT CreateQuickDetail( CATISpecObject* isketch, CATIView* mother_view,const IID &iid,void ** oObj) =0;	
	

/**
 * @nodoc
 * To create a projected axis.
 * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
 * @param oObj
 *   The axis
 */	
	virtual HRESULT CreateProjectedAxis(const IID &iid,void ** oObj) =0;

/**
 * @nodoc
 * To create a projected plane.
 * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
 * @param oObj
 *   The plane
 */	
	virtual HRESULT CreateProjectedPlane(const IID &iid,void ** oObj) =0;

/**
 * @nodoc
 * To create a table which contains patterns associated to a Body and a Product.
 * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
 * @param oObj
 *   The mappingtable
 */	
	virtual HRESULT CreatePatternMappingTable(const IID &iid,void ** oObj) =0;

/**
 * To create a generic pattern object.
 * @param oObj
 *   The pattern
 * @see CATIDftPattern
 */	
	virtual HRESULT CreatePattern(const IID &iid,void ** oObj) =0;

/**
 * To create a subobject from pattern with many lines.
 * @param oObj
 *   The hatchingpattern
 * @see CATIDftHatchingPattern
 */	
	virtual HRESULT CreateHatchingPattern(const IID &iid,void ** oObj) =0;

/**
 * To create a subobject of pattern with many points.
 * @param oObj
 *   The pattern
 * @see CATIDftDottingPattern
 */	
	virtual HRESULT CreateDottingPattern(const IID &iid,void ** oObj) =0;

/**
 * To create a subobject of pattern with a specific color.
 * @param oObj
 *   The pattern
 * @see CATIDftColoringPattern
 */	
	virtual HRESULT CreateColoringPattern(const IID &iid,void ** oObj) =0;

/**
 * To create a subobject of pattern with a specific motif.
 * @param oObj
 *   The pattern
 * @see CATIDftMotifPattern
 */	
	virtual HRESULT CreateMotifPattern(const IID &iid,void ** oObj) =0;

/**
 * To create a Detail object ready to use in Drawing.
 * @param oObj
 *   The ViewMakeUp associated to the detail
 * @see CATI2DDetail, CATIDftViewMakeUp  
 */	

 virtual HRESULT  CreateDetailWithMakeUp(const IID &iid,void** oObj,int Usertype = 0)=0;

/**
 * To create a view associated to a ViewMakeUp.
 * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
 * @param oObj
 *   The ViewMakeUp associated to the view
 * @see CATIView, CATIDftViewMakeUp  
 */	

 virtual HRESULT CreateViewWithMakeUp(const IID &iid,void** oObj)=0;


/**
 * To create a Detail Object.
 * @param oObj
 *   The TheDetail
 * @see CATI2DDetail
 */	
  
	virtual HRESULT CreateDftDetail(const IID &iid,void** oObj,int Usertype = 0)=0;

/**
 * @nodoc
 * To create a ViewMakeUp.
 * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
 * @param oObj
 *   The ViewMakup
 * @see CATIDftViewMakeUp  
 */	
  virtual HRESULT CreateViewMakeUp(const IID &iid,void** oObj)=0;

/**
 * To create a new BreakView operator based on the profil in input argument(isketch) .
 * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
 * @param oObj
 *   The operator
 */	
  virtual HRESULT CreateBreakView ( CATISpecObject* isketch, const IID &iid,void ** oObj)=0;	

/**
 * To create a new BrokenLines operator, unitary operator defined by the both profil in input argument(liste_1 and liste_2) .
 * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
 * @param oObj
 *   The operator
 */	
  virtual HRESULT CreateBrokenLines ( CATLISTV(CATISpecObject_var) liste_1, CATLISTV(CATISpecObject_var) liste_2, const IID &iid,void ** oObj)=0;	

/**
 * To create a subobject from Callout specific for Section.
 * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
 * <br> oObj is returned when the operator (iopera) is a BreakView
 * The callout implements CATIDrwBreakViewCallOut
 */	
  virtual HRESULT CreateBreakViewCallout (CATISpecObject* iopera, int iVisibilityMode,const IID &iid,void ** oObj)=0;

/**
 * To create a new BreakOut operator based on the profil in input argument(isketch) .
 * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
 * @param oObj
 *   The operator
 */	
  virtual HRESULT CreateBreakOut ( CATISpecObject* isketch, const IID &iid,void ** oObj)=0;

/**
  * @nodoc
  * To create a GenViewLinks objects.
  * This object manages the links of the generative view to the 3D document
  * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
  */
  virtual HRESULT CreateGenViewLinks(const IID & iIID, void ** oObj) = 0;

/**
 * @nodoc
 * To create a Box3D operator.
 * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
 * @param oObj
 *   The operator
 */	
  virtual HRESULT CreateBox3DOperator ( const IID & iIID, void** oObj) = 0;

/**
  * To create an DrwAxisSysteme objects.
  * This object manages the links of the generative view to a 3D axis systeme
  * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
  */
  virtual HRESULT CreateDrwAxisSysteme(const IID & iIID, void ** oObj) = 0;

/**
  * @nodoc
  * To create an GenDimInfo objects.
  * This object manages some informations for the Generative Dimension
  * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
  */
  virtual HRESULT CreateGenDimInfo(const IID & iIID, void ** oObj) = 0;

 /**
  * @nodoc
  * To create a TechnoLink dedicated to Drafting Needs .
  * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
  */
  virtual HRESULT CreateTechnoCtor(const IID & iIID, void ** oObj) = 0;
		
  /**
  * @nodoc
  * To create an DrwGenRep objects.
  * This object manages the Generative Representation
  * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
  */
  virtual HRESULT CreateGenerativeRep(const IID & iIID, void ** oObj) = 0;

};
CATDeclareHandler(CATIDrwFactory, CATBaseUnknown);
#endif
