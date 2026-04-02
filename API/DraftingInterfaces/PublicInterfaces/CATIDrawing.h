#ifndef CATIDRAWING_H
#define CATIDRAWING_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATBaseUnknown.h"
#include "CATLISTV_CATISpecObject.h"

class CATIView_var;
class CATISheet_var;

class CATISpecObject_var;
class CATICkeParm_var;

#include "CATUnicodeString.h"

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrawing ;
#else
extern "C" const IID IID_CATIDrawing ;
#endif

/**
 * Interface of the drawing object.
 * <b>Role</b>: The drawing is the root feature of a CATDrawing Document.
 * It manages the sheets.
 */
class ExportedByDraftingItfCPP CATIDrawing : public CATBaseUnknown
{
   CATDeclareInterface;
   
public:
   
   /** @nodoc */
   virtual CATUnicodeString GetComment() const = 0;
   /** @nodoc */
   virtual CATUnicodeString GetResponsible() const = 0;

 /** @nodoc 
   * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
   */
   virtual boolean GetDimAssociativity() const = 0;

 /** @nodoc 
   * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
   */
   virtual int GetDimUnicity() const = 0;
   
   /** @nodoc */
   virtual void SetComment	(const CATUnicodeString& a) = 0;
   /** @nodoc */
   virtual void SetResponsible (const CATUnicodeString& a) = 0;

 /** @nodoc 
   * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
   */
   virtual void SetDimAssociativity(const boolean iDimAssociativity) = 0;

 /** @nodoc 
   * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
   */
   virtual void SetDimUnicity(const int iDimAssociativity)  = 0;
   
   /**
   * @nodoc CATIDftDrawing#AddSheet
   * Please do not use any longer.
   * This method is used to add a sheet in the drawing.
   * The new sheet is created using CATIDrwFactory on the container.
   * <b>IMPORTANT 1</b>: This does not imply that the added sheet will be current. 
   * For this, you must explicitely call @href CATIDrawing#SetCurrentSheet.
   * <b>IMPORTANT 2</b>: In case you wish to make this sheet a detail one, please
   * call @href CATISheet#SetAsDetail right after having called this method.
   * <b>IMPORTANT 3</b>: This method will be deprecated in a later release.
   * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
   * @param iSheet
   *   The new sheet 
   * @see CATIDrwFactory
   */
   virtual void AddSheet    (CATISheet_var iSheet) = 0;
   /**
   * This method is used to remove a sheet from the drawing.
   * @param iSheet
   *   The sheet to be removed
   */
   virtual void RemoveSheet (CATISheet_var iSheet) = 0;

   /**
    * Validates that the given ordered list can be used as an input
    * for ReorderSheet.
    * i.e. validates that:
    * iOrderedSheets is the result of a permutation applied to 
    * the list of <b>all</b> the sheets of this drawing, with the following 
    * constraint: for every non-detail sheet, there isnt any detail sheet 
    * appearing before in iOrderedSheets.
    * @param iOrderedSheets
    * The list of sheets to validate.
    * @return
    * An <tt>HRESULT</tt> value.
    * <br><b>Legal values</b>:
    * <dl>
    * <dt> <tt>S_OK</tt>     <dd> iOrderedSheets is a valid input.
    * <dt> <tt>E_XXX</tt>   <dd> iOrderedSheet is not a valid input.
    * </dl>
    */
   virtual HRESULT ValidateSheetOrder(const CATLISTV(CATISpecObject_var) &iOrderedSheets)=0;

   
  /**
  * Change the positions of the sheets in a drawing according to the given 
  * ordered list.
  * @param <tt>const CATLISTV(CATISpecObject_var) &iOrderedSheets</tt>
  * [in] The ordered list of the sheets in this drawing.
  * <b>Preconditions<b>:
  * <dl>
  * <dt> ValidateSheetOrder(iOrderedSheets) must succeed. @see ValidateSheetOrder.
  * </dl>
  * @return
  * A <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>         <dd> Sheets were reordered.
  * <dt> <tt>E_UNEXPECTED</tt> <dd> Preconditions not met.
  * <dt> <tt>E_FAIL</tt>       <dd> Internal error.
  * </dl>
  */
  virtual HRESULT ReorderSheets(const CATLISTV(CATISpecObject_var) &iOrderedSheets)=0;

 /**
   * @nodoc
   * This method is now replaced by:
   * Use @href CATIDftDrawingFormats#GetAvailableFormats
   * Use @href CATIDftDrawingFormats#GetStandardFormats
   * Use @href CATIDftDrawingFormats#GetCustomFormats
   *
   * This method is used to get the list of formats.
   * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
   * @return
   *   List of formats.
   */
   virtual CATLISTV(CATISpecObject_var)  GetFormatList() const = 0;

   /**
   * Gets the current sheet.
   * The current sheet is the sheet containing the view in edition.
   * @return
   *   The current sheet.
   */
   virtual CATISheet_var GetCurrentSheet() const = 0;
   
 /**
   * Sets a sheet as the current sheet.
   * The sheet have to be added to the drawing before calling this method.
   * The current view of this sheet will become the view in edition..
   * @param iSheet
   *   The sheet to be current.
   */
   virtual void SetCurrentSheet(CATISheet_var iSheet) = 0;
   
 /**
   * Returns the sheets referenced by the drawing.
   * @return
   *   The drawing sheet list.
   */
   virtual CATLISTV(CATISpecObject_var) GetSheetList() const = 0;
   
 /** @nodoc
   * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
   */
   virtual void AddTechnoFeature(CATISpecObject_var iFeat) = 0;

 /** @nodoc
   * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
   */
   virtual void RemoveTechnoFeature(CATISpecObject_var iFeat) = 0;

 /** @nodoc
   * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
   */
   virtual void GetTechnoFeatures(const CATIdent interfaceID, CATLISTV(CATISpecObject_var)& oFeatList) = 0;
   
 /** @nodoc
   * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
   */
   virtual CATUnicodeString GetFirstFreeViewIdent() const = 0;

 /** @nodoc
   * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
   */
   virtual boolean ExistingViewName(const CATIView_var CurrentView, const CATUnicodeString ViewName) const = 0;
  
 /**
   * @nodoc
   * This method is now replaced by:
   * Use @href CATIDftDrawingFormats#GetAvailableFormats
   * Use @href CATIDftDrawingFormats#GetStandardFormats
   * Use @href CATIDftDrawingFormats#GetCustomFormats
   *
   * This method is used to get the list of available formats for a standard.
   * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
   * @param iStandard
   * The name of standard. 
   * @return
   *   List of formats.
   */
   virtual CATLISTV(CATISpecObject_var) GetAvalaibleFormatList(const CATUnicodeString iStandard ="ISO" ) const = 0;
   

   enum DfsSheetType { Design, Detail };
   enum DfsSheetParam{ Current, NoCurrent };

 /**
   * Add a sheet into the drawing. It will be placed at the end of the tab index
   * that corresponds to its type (Design or Detail)
   * @param <tt>const CATISheet_var & iSheet</tt>
   * [in] The sheet to add
   * @param <tt>CATDfsSheetType iType=Design</tt>
   * [in] Tells the type of the sheet : Design sheet or Detail Sheet
   * @param <tt>CATDfsSheetParam iParam=NoCurrent</tt>
   * [in] Tells whether or not the sheet must be current after having been added
   * @return
   * A <tt>HRESULT</tt>
   * <dl>
   * <dt> <tt>S_OK</tt>     <dd> Sheet was successfully added into drawing.
   * <dt> <tt>S_FALSE</tt>  <dd> Sheet was already in drawing, so nothing was executed.
   * <dt> <tt>E_FAIL</tt>   <dd> Any internal error, method failed.
   * </dl>
   */
   virtual HRESULT AppendSheet(const CATISheet_var & iSheet, DfsSheetType iType=Design, DfsSheetParam iParam=NoCurrent) = 0;





};
CATDeclareHandler(CATIDrawing, CATBaseUnknown);
#endif
