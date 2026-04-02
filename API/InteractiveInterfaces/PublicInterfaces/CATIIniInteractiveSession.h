/* -*-c++-*- */
#ifndef CATIIniInteractiveSession_h
#define CATIIniInteractiveSession_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include <CATInteractiveInterfaces.h>

#include <CATBaseUnknown.h>
#include <CATString.h>
#include <CATUnicodeString.h>
#include <CATBoolean.h>

class CATIEditor;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATInteractiveInterfaces IID IID_CATIIniInteractiveSession;
#else
extern "C" const IID IID_CATIIniInteractiveSession;
#endif

/**
* Interface to handle documents or to exit during an interactive session.
* <b>Role</b>:This interface contains main methods of the File/Menu of the menubar. 
* You can create,open,save,close documents or exit of the session.
* <br>This interface must be used during an interactive session because each method
* impacts the windows which visualize documents or closes the frame of the session.
* <br>In a batch, or if you want handle documents without window, you must use methods
* included in @href CATDocumentServices .
* <br>This interface is implemented by the session, to retrieve a pointer, use the
* @href GetPtrSession method.
*/
class ExportedByCATInteractiveInterfaces CATIIniInteractiveSession : public CATBaseUnknown
{
  CATDeclareInterface;
  
public:

  /**
  * Creates a document of a given type and opens a window to visualize it.
  * @param iDocumentType
  *   String to define kind of document to create. 
  *   <br>The string is the one which appears in the panel File/New.
  * @param oIEditorDocument
  *   @href CATIEditor interface pointer. 
  * @return
  *   S_OK if a new window with an empty document is opened otherwise E_FAIL.
  */
  virtual HRESULT  New (const CATUnicodeString & iDocumentType,
                        CATIEditor ** oIEditorDocument ) = 0;

  /**
  * Opens a document and opens a window to visualize it.
  * @param iCompleteName
  *  Complete access name to the document to open ( path + name of the document ).
  * @param iFlagRead
  * <dl>
  * <dd><dt>TRUE</dt>: The document is opened in read only 
  * <dd><dt>FALSE</dt>: The document is opened in readwrite 
  *</dl>
  * @param oIEditorDocument
  *   @href CATIEditor interface pointer. 
  * @return
  *   S_OK if the document is opened in a window otherwise E_FAIL.
  */
  virtual HRESULT  Open(const CATUnicodeString & iCompleteName,
                        const CATBoolean iFlagRead,
	                    CATIEditor ** oIEditorDocument ) = 0;

  /**
  * Creates a new document from one and opens window to visualize it.  
  * <br><b>Role</b>:The 
  * @param iNewCompleteName
  *  New Complete access name to the document to open ( path + name of the document ). The new 
  * document is created from this document.
  * @param oIEditorDocument
  *   @href CATIEditor interface pointer. 
  * @return
  *   S_OK if a new document (not empty) is opened in a window otherwise E_FAIL.
  */
  virtual HRESULT  NewFrom (const CATUnicodeString & iNewCompleteName,
	                        CATIEditor ** oIEditorDocument ) = 0;

  /**
  * Saves an opened document under an another name.
  *<br><b>Note</b>:All windows of the concerned document have the new 
  * name of the document. 
  * @param iCompleteName
  * Complete access name of the document ( path + name of the document ).
  * @param iDocumentToSave
  * If <tt>iDocumentToSave</tt> is NULL, the default value, the current 
  * document is saved otherwise the given document is saved. 
  * @param iFormat
  * To save the document with a specific format.(recognized by iDoc).
  * @return
  *   S_OK if the document opened in a window is saved otherwise E_FAIL.
  */
  virtual HRESULT  SaveAs (const CATUnicodeString & iCompleteName,
                           CATIEditor * iDocumentToSave = NULL ,
						   const CATUnicodeString& iFormat="") = 0;
                          
  /**
  * Saves a given document.
  * <br><b>Note</b>This is the unic method of this interface without impact on the frame.
  * @param iDocumentToSave
  * If <tt>iDocumentToSave</tt> is NULL, the default value, the current 
  * document is saved, otherwise the given document is saved. 
  * @return
  *   S_OK if the document opened in a window is saved otherwise E_FAIL.
  */
  virtual HRESULT  Save  (CATIEditor * iDocumentToSave = NULL) = 0;


  /**
  * Closes a given document and closes all theirs windows. 
  * @param iDocumentToClose
  * If <tt>iDocumentToClose</tt> is NULL, the default value, the current 
  * document is closed, otherwise the given document is closed. 
  * @return
  *   S_OK if the document opened in a window is closed otherwise E_FAIL.
  */
  virtual HRESULT  Close (CATIEditor * iDocumentToClose = NULL) = 0;


  /**
  * Exits from the session.
  * @return
  *  E_FAIL if the session is not interactive otherwise S_OK.
  */
  virtual HRESULT  Exit  () = 0;

};

#endif
