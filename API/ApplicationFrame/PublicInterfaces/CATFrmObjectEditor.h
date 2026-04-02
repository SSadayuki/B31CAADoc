#ifndef CATFrmObjectEditor_H_
#define CATFrmObjectEditor_H_

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATFrmEditor.h"
#include "CD0WIN.h"

class CATPathElement;
class CATCmdContainer;
class CATDocument;

/**
 * Class for a document editor.
 * <b>Role</b>: The document editor is an instance of the <tt>CATFrmObjectEditor</tt>
 * class associated with the document instance. It is returned by 
 * the <tt>GetEditor</tt> method of the @href CATIEditor document implementation.
 * @see CATFrmEditor
 */
class ExportedByCD0WIN CATFrmObjectEditor: public CATFrmEditor
{
public:

  /**
   * Constructs a document editor.
   * @param iDocument
   *   The document.
   *   <br><b>Legal values</b>: A non null pointer to the document
   *   implementation.
   * @see CATIEditor, CATDocument
   */
  CATFrmObjectEditor (CATDocument * iDocument);
  ~CATFrmObjectEditor ();

  /** @nodoc */
  virtual void Activate ();
  /** @nodoc */
  virtual void Deactivate ();
  /** @nodoc */
  virtual CATFrmWindow * CreateDefaultWindow ();

#ifdef _WINDOWS_SOURCE
  /** 
   * @nodoc
   * For OLE Document Server.
   */
  virtual HANDLE MemoryDraw(CLIPFORMAT Format, int width, int height);
#endif

  /** @nodoc */
  virtual CATCmdContainer * GetContextualMenu ();
  /** @nodoc */
  virtual CATCmdContainer * GetDefaultContextualMenu ();
};

#endif
