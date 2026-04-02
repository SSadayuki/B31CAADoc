#ifndef CATISchematicInit_H
#define CATISchematicInit_H


//	COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"
#include "CATBooleanDef.h"
#include "CATPathElement.h"
#include "CATString.h"

class CATFrmEditor;
class CATFrmWindow;
class CATDocument;

extern "C" const IID IID_CATISchematicInit ;

/**
 * Interface to manage a Schematic document initialization. 
 * <b>Role</b>: Defines Schematic document 2D behaviors
 */
class CATISchematicInit : public IUnknown
{

  public: 
    
  /**
  * Get the editor of the schematic document. 
  * @param iDocument
  *   Pointer to the schematic document.
  * @return
  *   Pointer to the editor.
  */
  virtual CATFrmEditor *GetEditor (CATDocument *iDocument) = 0 ;

  /**
  * Create the 2D window for the schematic document. 
  * @param iEditor
  *   Pointer to the editor of the schematic document.
  * @return
  *   Pointer to the 2D window.
  */
  virtual CATFrmWindow *CreateDefaultWindow (CATFrmEditor * iEditor) = 0;

  /**
  * Get the current UI-active object. 
  * @return
  *   Pointer to the current active object.
  */
  virtual CATPathElement GetActiveObject() = 0;

  /**
  * Get the current workshop name. 
  * @return
  *   Name of the current workshop.
  */
  virtual CATString GetWorkshop () = 0 ;

  /**
  * Get the default command of the current workbench or workshop. 
  * @return
  *   Name of the default command workshop.
  */
  virtual CATString GetDefaultCommand () = 0;
};
#endif

