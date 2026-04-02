#ifndef CATNavigBox_H_
#define CATNavigBox_H_

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "ON0FRAME.h"

#include "CATDlgFrame.h"
#include "CATINavigContainer.h"

#include "CATNavigDeclarations.h"

class CATNavigController;
class CATFrmEditor;
class CATBaseUnknown_var;
class CATListValCATBaseUnknown_var;


class CATDlgCheckButton;
class CATFrmEditor;
class CATViewer;
class CATNavigViewer;
class CAT2DViewpoint;

/** @nodoc */
typedef const char* CATClassId;

/**
  * Classe to create a windows owning a graph.
  */

class ExportedByON0FRAME CATNavigBox: public CATCommand
{
public:
/**
  * Constructs a CATNavigBox.
  * @param iFather
  *        father dialog for navigation window.
  * @param iName
  *        name to give to the CATNavigBox.
  * @param iEditor
  *        editor of the window where is the graph.
  * @param iStyle
  *        Indented ( usual foe CATIA )
  * @param id
  *         very important. Specifies which extension of CATINavigateObject has to be used.
  *        <br> if we need CATINavigateObject_ForCAA2, id has to be ForCAA2
  */
  CATNavigBox (CATDialog* iFather, const CATString& iName,CATFrmEditor* iEditor=NULL,CATGraphStyle iStyle=Indented,CATClassId id="ObjNavDefault",int width=500,int height=300,CATViewer* associated_viewer=0,CAT2DViewpoint* assoc_vp=NULL);
  
  virtual ~CATNavigBox();
  
/**
  * Adds root node to the graphe.
  * @param iRoot
  *        root to add.
  */
  void AddRoot (const CATBaseUnknown_var& iRoot);
  
/**
  * Removes root node.
  * @param iRoot
  *        root to remove.
  */
  void RemoveRoot (const CATBaseUnknown_var& iRoot);
  
  /**
  * @nodoc
  */
  void RemoveRootCB(CATBaseUnknown* obj);

  /**
  * @nodoc
  */
  void AddRootCB(CATBaseUnknown* obj);

/**
  * Removes all roots.
  */
  void RemoveAllRoots();
  
/**
  * Returns list of all roots.
  * After use, the returned list must be destroyed.
  */
  CATListValCATBaseUnknown_var* GetAllRoots() const;
  
/** @nodoc  	  */
  CATDlgFrame* GetBoxFrame();
  
/**
  * Sets overview visibility.
  * @param iEtat
  *        if 1 then true
  *      <br> else false.
  */
  void SetOverviewVisibility(int iEtat);

/**
  * Returns overview visibility.
  */
  int GetOverviewVisibility();
  
/** 
  * Returns controller.
  */
  CATNavigController*    GetController() const;

/** @nodoc  */
  CATINavigContainer_var GetContainer() const;
  
/** @nodoc  */
  CATNavigViewer*        GetGraphViewer() const {return _navig_viewer;};

/** @nodoc  */
  CATFrmEditor*        GetEditor() const {return _editor;};
  
private:
  // NOT implemented, to prevent default
  CATNavigBox(const CATNavigBox&);
  CATNavigBox& operator=(const CATNavigBox&);

  CATFrmEditor          * _editor;
  CATNavigViewer        * _navig_viewer;
  CATINavigContainer_var  _Ctrlr;
  char                    _flag;
};

#endif 
