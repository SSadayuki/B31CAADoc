// COPYRIGHT Dassault Systemes 2006

/**
* @CAA2Level L0
* @CAA2Usage U1
*/

#ifndef CATDftImportToolbox_H
#define CATDftImportToolbox_H

#include "DraftingItfCPP.h"
#include "CATBaseUnknown.h"

//-----------------------------------------------------------------------

/**
* Class that represents a toolbox providing a set of services to be used to
* transfer data from a drawing to another one.
*/
class ExportedByDraftingItfCPP CATDftImportToolbox
{
    public:

      /** 
      * Imports a drawing view from another document in a specified sheet.
      *
      * <br><b>Role</b>: This service allows creating a new drawing view or 2D Layout view in a 
      * specified sheet and creating geometry, dimensions, annotations, 2D Component instances
      * and dress-up elements in this new view by copy/pasting the elements from the original 
      * view to the new one.
      *
      * <br><b>Important</b>: As a current limitation, this service only supports the import of 
      * a drawing view (that comes from a CATDrawing document), into a 2D Layout for 3D Design 
      * view (in a CATPart document). In addition, this service is only available if a license 
      * for LO1 product is granteed.
      *
      * <br><b>Important</b>: Only pure interactive views can be taken into account. It means 
      * that this service does not take into account 2D component views and drawing generative 
      * views, except if this view has been isolated before.
      *
      * <br><b>Important</b>: As this service creates data in the document containg the target 
      * sheet, if it has to be called in the scope of an interactive command, this command has
      * to be instanciated in the target document editor in order to inherit from the Undo/Redo
      * mechanism to let the user cancel the import operation.
      *
      * Notice that the resulting view and its sub-elements do not keep any link to the original
      * document: in particular, if the original view contains some 2D component instances, the 
      * whole 2D component structure will also be imported in the target drawing or 2D Layout. 
      * In this case, the service searches for all the required 2D components recursively, by
      * identifying if they have to be imported at the same time. The algorithm to identify if 
      * a 2D component has to be imported is based on an identification by its name: if a 2D 
      * component with the same name and sheet name is found in the target document, this 2D 
      * component will not be imported and all the 2D component instances of this 2D component 
      * will become instances of found 2D component, no matter what its content or synchronization 
      * status is. If there is no 2D component with the same name and sheet name is found, it will
      * be imported in the target document. 
      * As a consequence some detail sheets may be created during the import. It is also important 
      * to notice that if a required 2D component is not located in the original document (for 
      * example a 2D component instance coming from a catalog), the import process will fail if the
      * other document is not accessible. If the other document is accessible, the copy of 2D component will be 
      * synchronized.
      *
      * In addition, if the original view contains texts with attribute links, those texts 
      * are isolated (it includes the view name text). Please, notice also that if some annotations
      * or dimensions are associated to any 2D component instance (in the view or any 2D component
      * that will be imported), for example a leader with positional link to a 2D component instance
      * sub-element or a dimension on a 2D component instance sub-element, this association will be 
      * lost in the target document. That's an actual limitation.
      *
      * The resulting view type does not depend on the the original view type: it is always
      * created as an auxiliary view (see CATIDftView#GetViewType and CATDftViewType). However,
      * if the specified view is a 2D component view, the resulting view may be a 2D component
      * view, as soon as the target sheet is a detail sheet. If not, the 2D component view is
      * imported as an auxiliary view in a design sheet.
      *
      * In addition, the view axis (see CATISketch#GetAxisData) is the same as the original view.
      *
      * <br><b>Important</b>: As the target drawing or 2D Layout may use a different standard,
      * the graphical result of some annotations or dimensions may differ between the original
      * document and the resulting view, with respect to the target document standard.
      *
      * <br><b>Important</b>: The import process is based on a copy/paste operation between two
      * documents that are opened in session: it implies that a large amount of data may be loaded
      * at the same time, and in addition, a lot of new data are created, leading to an important
      * memory consumption.
      *
      * @param ipViewToImport [in]
      *   The view to be imported.
      *   @precondition ipViewToImport must be a drawing view (located in a CATDrawing document).
      *                 This is an actual limiation.
      *   @precondition The view must be a pure interactive one or a 2D component view.
      * @param ipTargetSheet [in]
      *   The sheet where the view has to be imported.
      *   @precondition ipTargetSheet must be a 2D Layout sheet. Current limitation.
      *   @precondition ipTargetSheet must be located in a different document than ipViewToImport.
      *   @precondition if ipViewToImport is a design view (by opposition to 2D component views),
      *                 ipTargetSheet must be a design sheet (by opposition to detail sheet).
      *
      * @return
      *   <code>S_OK</code> if everything ran ok
      *   <code>E_INVALIDARG</code> Check the precondition are all fullfilled
      *   <code>E_UNEXPECTED</code> An unexpected error occured
      *
      * @see CATIDftView#GetViewType, CATDftViewType, CATISketch#GetAxisData
      */
      static HRESULT ImportView(CATBaseUnknown *ipViewToImport, CATBaseUnknown *ipTargetSheet);

    private:
      CATDftImportToolbox();
      ~CATDftImportToolbox();
      CATDftImportToolbox(CATDftImportToolbox &);
      CATDftImportToolbox& operator=(CATDftImportToolbox&);
};

//-----------------------------------------------------------------------

#endif
