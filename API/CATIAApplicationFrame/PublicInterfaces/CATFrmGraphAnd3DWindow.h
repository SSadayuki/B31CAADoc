#ifndef CATFrmGraphAnd3DWindow_H_
#define CATFrmGraphAnd3DWindow_H_

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
* @CAA2Level L1
* @CAA2Usage U1
*/

#include "CD0STWIN.h"
#include "CATFrmNavigGraphicWindow.h"
#include "CATBaseUnknown_var.h"
#include "list.h"
#include "CATString.h"

class  CATFrmEditor;
class  CATViewer;
class  CATNavigation3DViewer;
class  CATFrmWindow;
class  CATVisManager;
class  CATPathElement;

/**
* Class providing a standard window with a graph and a 3D viewer.
* <b>Role</b>: This standard window offers a graph and a 3D geometric viewer.
* It supplies standard functionnalities on these viewers.
* Instantiate this inside your editor's @href CATIDocumentEdit#CreateDefaultWindow method
*/
class ExportedByCD0STWIN CATFrmGraphAnd3DWindow: public CATFrmNavigGraphicWindow
{
   public:
   /**
   * Constructs a CATFrmGraphAnd3DWindow.
   * @param iWindowTag 
   *   The window name.
   *   This name is the base of displayed window title.
   * @param iModel 
   *   The root object of the model.
   *   If this object implements the @href CATINavigateObject then
   *   a specification graph of the model can be constructed automatically.
   * @param iEditor 
   *   The editor of the document.
   *   By default there is no editor.
   * @param iGraphDuplicate 
   *   The parameter of the graph navigator indicates if a node in the 
   *   graph will be duplicated when it is instanciated more than one time.
   *   <br><b> Legal values</b>:
   *   <li><tt>0</tt> the nodes are not duplicated (it's the default value)</li>
   *   <li><tt>1</tt> otherwise</li>.
   * @param iLodMode 
   *   The level of detail mode.
   *   The default value is set to 0 (LOD mode is set to off).
   * @param iNavigatorDepth 
   *   The parameter of the graph navigator indicates the maximum number of
   *   visible levels in the graph.
   *   This parameter can be set to any positive integer value.
   *   The default value is set to -1 (no limit for the visible graph level).
      */
      CATFrmGraphAnd3DWindow(const CATString        & iWindowTag,
                             CATBaseUnknown_var       iModel,
                             CATFrmEditor           * iEditor = 0,
                             int                      iGraphDuplicate = 0,
                             int                      iLodMode = 0,
                             int                      iNavigatorDepth = -1);
      virtual ~CATFrmGraphAnd3DWindow();
      
      /**
      * Deletes the window.
      * <br><b>Role</b>: Calls this method in place of the destructor.
      */
      virtual void  DeleteWindow();
      
      
      /**
      * Creates a clone window.
      * <br><b>Role</b>: This method creates a new instance of this class. It's called
      * to create a new window of the same document.
      */
      virtual CATFrmWindow* DuplicateWindow ();
      
      /**
      * Returns the 3D Navigation viewer. 
      */
      virtual CATViewer   * GetGraphicViewer ();
      
   protected:
      int _GraphDuplicate;
      int _LodMod;
      int _NavigatorDepth;
      
      virtual void  InitDuplicatedWindow(CATFrmWindow * ipDupWindow);

   private:
      CATNavigation3DViewer     *_3DViewer;
      CATBaseUnknown_var         _Part;
      static int                 duplicate;
      
      CATVisManager         *_visuManager;
      CATPathElement        *_path;
      list<IID>              _listIID ;
};

#endif
