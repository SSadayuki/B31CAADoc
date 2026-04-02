#ifndef CATIMfgToolEditor_H
#define CATIMfgToolEditor_H

//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2000
//=============================================================================

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

// module
#include "MfgItfEnv.h"

// inheritance
#include "CATBaseUnknown.h"
#include "CATISpecObject.h"

// Forwards 
class CATDlgFrame;
class CATDialog;

#include "CATDlgInclude.h"

// OLE iid
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgToolEditor;
#else
extern "C" const IID IID_CATIMfgToolEditor;
#endif

/**   
 * Interface dedicated to tool object editor management.
 * <b>Role</b>: This interface offers services to edit the tool object.<br>
 * 
 * @see CATIMfgTool
 * @see CATDlgFrame
 */
class ExportedByMfgItfEnv CATIMfgToolEditor : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:

/**
 * Returns the panel editor on the tool object.<br> 
 * Builds a frame with simple presentation : basic parameters and graphic view.<br>
 * @param iFather
 *     The dialog father for presentation 
 * @param iStyle
 *     The frame style option 
 * @param iModeEdit
 *     Edition mode flag
 *   <br><b>Legal values</b>:
 *   <ul>
 *   <li>TRUE: edition mode</li>
 *   <li>FALSE: browse mode</li>
 *   </ul>
 * @see CATDlgFrame
 */
   virtual CATDlgFrame* GetPanelEditor  (CATDialog          *iFather, 
									     CATDlgStyle        iStyle=CATDlgFraNoFrame,
										 const CATBoolean   iModeEdit=TRUE)=0;
  
/**
 * Returns the panel editor on the tool object.<br> 
 * Builds a frame with "more" presentation (tab pages) : geometry, technology, compensation parameters.<br>
 * @param iFather
 *     The dialog father for presentation 
 * @param iStyle
 *     The frame style option 
 * @param iModeEdit
 *   Edition mode flag
 *   <br><b>Legal values</b>:
 *   <ul>
 *   <li>TRUE: edition mode</li>
 *   <li>FALSE: browse mode</li>
 *   </ul>
 * @see CATDlgFrame
 */
   virtual CATDlgFrame* GetMorePanelEditor  (CATDialog         *iFather, 
											 CATDlgStyle       iStyle=CATDlgFraNoFrame,
									   	     const CATBoolean  iModeEdit=TRUE)=0;
 
/**
 * Returns the panel editor on the tool object.<br> 
 * Builds a frame for activity simple presentation.<br>
 * @param iFather
 *     The dialog father for presentation 
 * @param iStyle
 *     The frame style option 
 * @param iModeEdit
 *   Edition mode flag
 *   <br><b>Legal values</b>:
 *   <ul>
 *   <li>TRUE: edition mode</li>
 *   <li>FALSE: browse mode</li>
 *   </ul>
 * @see CATDlgFrame
 * @param ihSpecAct
 * nodoc
 */
   virtual CATDlgFrame* GetActivityEditor  (CATDialog           *iFather, 
									        CATDlgStyle         iStyle=CATDlgFraNoFrame,
											const CATBoolean    iModeEdit=FALSE,
										    const CATISpecObject_var &ihSpecAct=NULL_var)=0;

/**
 * Returns the panel editor on the tool object.<br> 
 * Builds a frame with graphic editor only.<br>
 * @param iFather
 *     The dialog father for presentation 
 * @param iStyle
 *     The frame style option 
 * @param iModeEdit
 *   Edition mode flag
 *   <br><b>Legal values</b>:
 *   <ul>
 *   <li>TRUE: edition mode</li>
 *   <li>FALSE: browse mode</li>
 *   </ul>
 * @see CATDlgFrame
 */
   virtual CATDlgFrame* GetGraphicEditor  (CATDialog           *iFather, 
										   CATDlgStyle         iStyle=CATDlgFraNoFrame,
										   const CATBoolean    iModeEdit=FALSE)=0;

 /**
 * @nodoc
 */
   virtual void GenerateJPEGImageFromGraphicEditor (CATDialog             *iFather,
													const CATUnicodeString &iImagePathName="")=0;
};

CATDeclareHandler(CATIMfgToolEditor, CATBaseUnknown);
#endif
