/* -*-C++-*- */

#ifndef CATIEditProperties_H
#define CATIEditProperties_H

// COPYRIGHT DASSAULT SYSTEMES  1999

/**
  * @CAA2Level L1
  * @CAA2Usage U4 CATEditor
  */

class CATEditorPage; 
#include "OM0EDPRO.h"
#include "CATBaseUnknown.h"
#include "CATCommandGlobalUndo.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "PropertyMode.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByOM0EDPRO IID IID_CATIEditProperties;
#else
extern "C" const IID IID_CATIEditProperties;
#endif

/**
 * Interface to create an Edit Properties property page.
 * <b>Role</b>: Each property page of the Edit Properties
 * command corresponds to an implementation of the
 * <tt>CATIEditProperties</tt> interface. 
 * <p>
 * <b>Step by step:</b> CATEditorManager implements the <tt>IMyPropertyEdtFactory</tt> factory interface. 
 * This Factory creates a <tt>MyPropertyEdt</tt> instance class. This class implements the 
 * <tt>CATIEditProperties</tt> interface.
 * <ol>
 * <li> Create the factory <tt>IMyPropertyEdtFactory</tt> interface which 
 *      derives from @href CATIGenericFactory </li>
 * <li> Implement this factory interface using macros </li>
 * <br>
 *     This implementation, <tt>MyPropertyEdtFactory</tt>, is done in the module myModule 
 *     thanks to 2 macros: 
 *     @href CAT_EDITOR_DECLARE_FACTORY and @href CAT_EDITOR_DEFINE_FACTORY 
 * <ol> 
 * <li>The header file <tt>MyPropertyEdtFactory.h</tt> must contain these two lines: </li>
 * 
 * <pre> 
 *       #include "CATEditorFactory.h"
 *       #include "MyPropertyEdt.h"
 * 
 *       #define ExportedByNOTHING
 *
 *       CAT_EDITOR_DECLARE_FACTORY(NOTHING, MyPropertyEdt, MyPropertyEdt);
 * </pre>
 *
 * <li>The source file <tt>MyPropertyEdtFactory.cpp</tt> must contain these lines:</li>
 *
 * <pre> 
 *        #include "MyPropertyEdtFactory.h"
 *
 *        CAT_EDITOR_DEFINE_FACTORY(MyPropertyEdt, MyPropertyEdt);
 *
 *        #include "TIE_IMyPropertyEdtFactory.h"
 *        TIE_IMyPropertyEdtFactory(MyPropertyEdtFactory);
 *
 * </pre>
 * </ol>
 * <li>To declare that CATEditorManager implements IMyPropertyEdtFactory,  
 *       insert the following line in the <b>interface dictionary</b>: </li>
 * <pre> 
 *       <b>CATEditorManager</b>    IMyPropertyEdtFactory  myModule 
 * </pre>
 * <li>To declare that the factory creates an instance of the MyPropertyEdt class, 
 *       insert the following line in the <b>factory dictionary</b>: </li>
 * <pre> 
 *       MyPropertyEdt            IMyPropertyEdtFactory      
 * </pre>
 * <li> Implement the CATIEditProperties interface, describe here, with a class which 
 * derives from the adapter class @href CATEditor
 * </ol> 
 * <p><b>BOA information</b>: this interface CANNOT be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */
class  ExportedByOM0EDPRO CATIEditProperties :  public CATBaseUnknown

{
  CATDeclareInterface;
  
public:

	/**
	* Extracts from the selection the objects which can be managed.
    * @param oExtract
	*        list of objects which can be managed
	* @param iSelection
	*        list of objects of current CSO.
	*/
  virtual void ExtractFromSelection ( CATLISTV(CATBaseUnknown_var)& oExtract, 
				     const CATLISTV(CATBaseUnknown_var) * iSelection =NULL ) = 0;
  
	/**
	* Constructs the dialog objects of the editor.
	* @param iMyPage
	*        to specify a tab page.
    */
  virtual void BuildEditor( CATEditorPage * iMyPage ) = 0; 
  
	/**
	* Valuates the dialog objects.
	* @param iExtract
	*        list of objects supposed to be managed.
	* @param iMode 
	*        ReadOnly or Write mode
    */
  virtual void SetPropertyValue ( CATLISTV(CATBaseUnknown_var)& iExtract,
				 ModeReadWrite iMode ) = 0;

	/**
	* Validates modifications done on objects from iExtract.
	* @param iExtract
	*        list of objects supposed to be managed.
	*/
  virtual void CommitModification( CATLISTV(CATBaseUnknown_var)& iExtract ) = 0;

	/**
	* Cancels a modification when closing the panel.
	* @param iExtract
	*        list of objects supposed to be managed.
	*/
  virtual void CancelModification( CATLISTV(CATBaseUnknown_var)& iExtract ) = 0;

	/**
	* Sets the behaviour of the dialog objects during the update of tabpages when applying modifications.
  * Useful for tab pages depending on each other
	* @param oStatus
	* <br><b> Legal Values : </b>
	*     <tt> 0 if no repaint is required : for each tabpage, methods CommitModification and SetPropertyValue are called one after the other 
	*     <tt> 1 otherwise : default behaviour - for each tabpage method CommitModification is applied. Then, for each tabpage method SetPropertyValue is called. 
   * @return a HRESULT value
   * <br><b>Legal Values</b>:
   * <ol>
   * <li> S_OK if success</li>
   * <li> E_FAIL otherwise </li>
   * </ol>
	*/
  virtual HRESULT OKToRepaintOnCommit(int& oStatus) = 0;

	/**
	* Closes dialog object open by the editor.
    */
  virtual void CloseWindowFromEditor() = 0;

	/**
	* Returns the editor title.
	*/
  virtual CATUnicodeString  GetEditorTitle() = 0;

 	/**
	* Sets editor's size.
	* @param ioSize
	*         size of the editor
	* <br><b> Legal Values : </b>
	*     <tt> 1 (smallest)
	*     <tt> 2 
	*     <tt> 3 (largest)
	*/
  virtual void SetEditorSize(int & ioSize ) = 0; 
  
  /** 
  *  Records an undo action from the editor. 
  */
  
  virtual CATCommandGlobalUndo * GetUndoFromEditor() = 0;
 };


CATDeclareHandler(  CATIEditProperties, CATBaseUnknown ) ;

#endif
