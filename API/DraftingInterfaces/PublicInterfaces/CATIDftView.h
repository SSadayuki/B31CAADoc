#ifndef CATIDftView_H
#define CATIDftView_H
// COPYRIGHT DASSAULT SYSTEMES 1999
//===================================================================
//
// CATIDftView.h
// Sheet feature type interface.
//
//===================================================================

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
// Inheritance
#include "IUnknown.h"
#include "CATBaseUnknown.h"
#include "CATMacForIUnknown.h"

// System
#include "CATBooleanDef.h"

// Drafting
#include "CATDftViewType.h"
#include "CATDftViewLinkType.h"

// Forward declarations
class CATISketch;
class CATIDftSheet;
// class CATIDftPosRelation;
class CATIUnknownList;
class CATIGenerSpec;

#include "CATDraftingInterfaces.h"
#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDftView ;
#else
extern "C" const IID IID_CATIDftView ;
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

class ExportedByDraftingItfCPP CATIDftView : public CATBaseUnknown
{
  CATDeclareInterface;
public:

   /**
   * Gets the view type.
   * @param oType
   *   The view type
   * @return 
    * <tt>HRESULT</tt>
    * <dl>
    * <dt> <tt>S_OK</tt>     <dd> View type has been found
    * <dt> <tt>E_FAIL</tt>   <dd> No view type found.
    * </dl>
    */
   virtual HRESULT GetViewType(CATDftViewType *oType) const = 0;

   /**
   * Gets the view name as a string.
   * @param oName
   *   The view name
   * @return 
   * <tt>HRESULT</tt>
   * <dl>
   * <dt> <tt>S_OK</tt>     <dd> View name has been found
   * <dt> <tt>E_FAIL</tt>   <dd> No view name found.
   * </dl>
   */
   virtual HRESULT GetViewName(wchar_t **oName) const = 0;

   /**
   * Sets the view name as a string. This name can override an existing formula.
   * @param iName
   *   The view name
   * @return 
   * <tt>HRESULT</tt>
   * <dl>
   * <dt> <tt>S_OK</tt>     <dd> View name has been modified
   * <dt> <tt>E_FAIL</tt>   <dd> No modification applied.
   * </dl>
   */
   virtual HRESULT SetViewName(const wchar_t *iName) = 0;

   /**
   * Gets the view name formula. This object is a CKE formula computing the view name.
   * from different inputs.
   * @param oVNameFormula
   *   The view name formula
   * @return 
   * <tt>HRESULT</tt>
   * <dl>
   * <dt> <tt>S_OK</tt>     <dd> View name formula has been modified
   * <dt> <tt>E_FAIL</tt>   <dd> No view name formula found.
   * </dl>
   */
   virtual HRESULT GetViewNameFormula(IUnknown **oVNameFormula) const = 0;
   

   /**
   * Used to get the view components (annotations, geometry, callout, ...).
   * @param IID
   *   The interface filter.
   * @param oElems
   * List of elements found.
   * @return 
   * <tt>HRESULT</tt>
   * <dl>
   * <dt> <tt>S_OK</tt>     <dd> Elements found
   * <dt> <tt>E_FAIL</tt>   <dd> Execution failed.
   * </dl>
   */
   virtual HRESULT GetComponents(const IID interfaceID, CATIUnknownList **oElems) const = 0;


   /**
   * Used to Activate the view.
   *   The active view is the view in edition. 
   *   There is only one active view per sheet in a Drawing.
   * @return 
   * <tt>HRESULT</tt>
   * <dl>
   * <dt> <tt>S_OK</tt>     <dd> View is activated.
   * <dt> <tt>E_FAIL</tt>   <dd> View isn't activated.
   * </dl>
   */
   virtual HRESULT Activate() const = 0;

   /**
   * Used to know if this view is active.
   *   The active view is the view in edition. 
   *   There is only one active view int the drawing.
   * @param oActive
   *   TRUE if the view is active.
   * @return 
   * <tt>HRESULT</tt>
   * <dl>
   * <dt> <tt>S_OK</tt>     <dd> Execution successfully.
   * <dt> <tt>E_FAIL</tt>   <dd> Execution failed.
   * </dl>
   */
   virtual HRESULT IsActive(boolean *oActive) const = 0;

   /**
   * Gets the generative specifications of the view.
   * <br><b>Postcondition</b>:	Don't forget to RELEASE the resulting oProduct after use.
   * @param oGenerSpec
   *   The generative specification interface.
   * @return 
   * <tt>HRESULT</tt>
   * <dl>
   * <dt> <tt>S_OK</tt>     <dd> Execution successfully.
   * <dt> <tt>E_FAIL</tt>   <dd> Execution failed.
   * </dl>
   */
   virtual HRESULT GetGenerSpec(CATIGenerSpec **oGenerSpec) const = 0;

   /** 
   * Returns the extension of the view which deals with a specific applicative behavior.
   * @param interfaceID
   *    The interface which describes the extension.
   * @param oExtension
   *    The result of the query
   * @return
   * <tt>HRESULT</tt>
   * <dl>
   * <dt> <tt>S_OK</tt>     <dd> Execution successfully.
   * <dt> <tt>E_UNEXPECTED</tt>     <dd> f internal problem.
   * <dt> <tt>E_INVALIDARG</tt>     <dd> if not recognize interfaceID.
   * <dt> <tt>E_FAIL</tt>   <dd> Execution failed.
   * </dl>
   */
   virtual HRESULT GetApplicativeExtension(const IID & interfaceID, IUnknown ** oExtension) = 0;

   /**
   * Adds an extension to the view to deal with a specific applicative behavior.
   * @param interfaceID
   *    The interface which describe the extension to be added
   * @param oExtension
   *    The added extension. If the extension already exists, it is returned also
   * @return
   * <tt>HRESULT</tt>
   * <dl>
   * <dt> <tt>S_OK</tt>     <dd> Execution successfully.
   * <dt> <tt>E_UNEXPECTED</tt>     <dd> f internal problem.
   * <dt> <tt>E_INVALIDARG</tt>     <dd> if not recognize interfaceID.
   * <dt> <tt>E_FAIL</tt>   <dd> Execution failed.
   * </dl>
   */
   virtual HRESULT AddApplicativeExtension(const IID & interfaceID, IUnknown ** oExtension) = 0;
};
CATDeclareHandler(CATIDftView, CATBaseUnknown);
#endif








