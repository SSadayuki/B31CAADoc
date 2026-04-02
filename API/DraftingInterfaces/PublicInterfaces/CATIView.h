/**
* @quickReview YPR 02:01:29
*/
#ifndef CATIVIEW_H
#define CATIVIEW_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
#include "CATBaseUnknown.h"
#include "CATDrwDimEnum.h"
#include "CATLISTV_CATISpecObject.h"
#include "CATIDrwCallout.h"
#include "CATDrwViewType.h"
class CATISketch_var;
class CATISheet_var;
class CATIView_var;
class CATIGenerSpec_var;
class CATIViewName_var;
class CATIDrwDressUp_var;
class CATISpecObject_var;
class CATIContainer_var;
class CATILinkableObject_var;

#include "CATUnicodeString.h"

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIView ;
#else
extern "C" const IID IID_CATIView ;
#endif
/**
 * Interface of the drawing view object.
 * <b>Role</b>: The view is a workspace containing geometries and annotations.
 * The view may also contain the generative drafting results.
 * The view positionning in a sheet is managed using the view make-up object.
 * The generative drafting specifications are available using the CATIGenerSpec
 * interface.
 * @see CATIDftViewMakeUp
 * @see CATIGenerSpec
 */
class ExportedByDraftingItfCPP CATIView : public CATBaseUnknown
{
  CATDeclareInterface;

   public:
          
     /** @nodoc */
     virtual CATUnicodeString GetComment()  = 0;
    /**
     * Gets the sheet containing the view representation.
     * The returned sheet is the sheet containing the view make-up
     * of the view.
     * @return
     *   The sheet containing the view.
     */
     virtual CATISheet_var GetSheet()  = 0;
    /**
     * Gets the generative specifications of the view.
     * If the view is a detail, this method returns NULL_var.
     * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
     * @return
     *   The generative specification interface.
     */
     virtual CATIGenerSpec_var GetGenerSpec()  = 0;
    /**
     * Gets the view dressup manager.
     * The dressup manages annotations, area-fills, ....
     * @return
     *   The dress up manager interface.
     */
     virtual CATIDrwDressUp_var GetDressUp()  = 0;

   /** @nodoc 
     * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
     */
     virtual CATIContainer_var GetPart(int i=0)  = 0;
    /**
     * Gets the external document pointed by the view.
     * This method returns NULL_var if the view is not a generative one.
     * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
     * @return
     *   The pointed document.
     */ 
     virtual CATILinkableObject_var GetDoc()  = 0;
 
     /** @nodoc */
     virtual void SetComment(const CATUnicodeString& a) = 0;
     /** @nodoc */
     virtual void SetDressUp(CATIDrwDressUp_var dsg) = 0;
   
   /** @nodoc
     * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
     */
     virtual void SetPart (CATILinkableObject_var iPart) = 0;
    /**
     * Sets the external document pointed by the view.
     * The view becomes a generative one.
     * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
     * @param iDoc
     *   The external document.
     */ 
     virtual void SetDoc (CATILinkableObject_var iDoc) = 0;

    /**
     * Gets the view type.
     * @return
     *   The view type.
     * @see CATDrwViewType
     */
     virtual CATDrwViewType GetViewType()  = 0;

    /**
     * Sets the view type.
     * It is not enough to type the view as a section so that a cut is applied.
     * Use the section operators instead.
     * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
     * @see CATIGenerSpec
     * @param iType
     *   The new view type.
     */
     virtual void SetViewType(const CATDrwViewType &iType) = 0;

     /** @nodoc */    
     virtual CATIViewName_var GetViewName()  = 0;
    /**
     * Sets a smart name to the view based on the NLS resources.
     * This name is computed using the identificator, the prefix and suffix.
     * @Param iTxtCreate
     *   Creates a text in the view if > 0.
     */ 
     virtual void AddViewName(const int iTxtCreate) = 0;

     /** @nodoc */
     virtual CATISpecObject_var GetViewNameAsLiteral()  = 0;
   /**
 	  * Returns the callouts represented in the view.
     * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
     */ 
     virtual CATLISTV(CATISpecObject_var) GetListOfDrwCallout() = 0;
   /** @nodoc 
     * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
     */
     virtual void AddDrwCallout(CATISpecObject_var opera, int VisibilityMode) = 0;
   /** @nodoc 
     * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
     */
     virtual void RemoveDrwCallout(CATIView_var view) = 0;  

    /**
     * Updates the view.
     * All view components will be updated (Annotations, Generative result, ...)
     * @Param iDomain
     *   The domain (use NULL_var)
     */ 
     virtual int Update(CATIDomain_var iDomain) =0;

     /** @nodoc */
     virtual void AddDimension(CATISpecObject_var iDim) = 0;
     /** @nodoc */
     virtual void RemoveDimension(CATISpecObject_var iDim) = 0;
     /** @nodoc */
     virtual void ListDimensions(CATLISTV(CATISpecObject_var)& oDimGenStrongList, 
											CATLISTV(CATISpecObject_var)& oDimSketchStrongList, 
											CATLISTV(CATISpecObject_var)& oDimIntStrongList, 
											CATLISTV(CATISpecObject_var)& oDimIntWeakList) = 0;
     /** @nodoc */
     virtual void ListDimensions(CATLISTV(CATISpecObject_var)& oDimensionList) = 0; 

     /** @nodoc */
     virtual void AddText(CATISpecObject_var iTxt) = 0;
     /** @nodoc */
     virtual void RemoveText(CATISpecObject_var iDim) = 0;
     /** @nodoc */
     virtual CATLISTV(CATISpecObject_var) GetTextList() = 0;
     
    /**
     * Used to know if the view is current.
     * The current view of the current sheet is the active one.
     * @return
     *   The status
     *   <br><b>Legal values</b>: 
     *   <dl> 
     *     <dt>0</dt>    The view is not the current one
     *     <dt>1</dt>    The view is the current one 
     *   </dl>
     */
     virtual int IsCurrent() = 0;
     /** @nodoc */
     virtual int IsPureInteractive() = 0;
    /**
     * Gets the sketch interface of the view.
     * This method is usefull to create geometries in a view.
     * @return
     *   The view sketch interface.
     */
     virtual CATISketch_var GetSketch() = 0;
  
     /** @nodoc */
     // virtual long GetDocStamp() =0;
     /** @nodoc */
     // virtual void SetDocStamp(long iStamp) =0;

     /**
     * Gets the list of OLE sites of the views.
     * @return the list of OleSite features
     */
     virtual CATLISTV(CATISpecObject_var) GetOleSiteList() = 0 ;
  
   
};
CATDeclareHandler(CATIView, CATBaseUnknown);
#endif








