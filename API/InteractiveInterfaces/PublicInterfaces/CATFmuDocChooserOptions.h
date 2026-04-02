/* -*-c++-*- */
#ifndef _CATFmuDocChooserOptions_h
#define _CATFmuDocChooserOptions_h

// COPYRIGHT DASSAULT SYSTEMES 2003
/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

#include "CATInteractiveInterfaces.h"
#include "CATBoolean.h"

/**
 * Options for document selection.
 */
class ExportedByCATInteractiveInterfaces CATFmuDocChooserOptions
{
public:
  CATFmuDocChooserOptions();
  CATFmuDocChooserOptions(const CATFmuDocChooserOptions &iOptions);
  virtual ~CATFmuDocChooserOptions();

  /**
   * @nodoc
   * Reinitializes the data members:<br>
   * - ReadOnlyState = FALSE<br>
   * - WithNonPersistentDoc = FALSE<br>
   */
  virtual void Reset();

  /**
   * @nodoc
   * Sets the options as the input ones.
   */
  CATFmuDocChooserOptions &operator=(const CATFmuDocChooserOptions &iOptions);

  /**
   * Sets the read-only state.<br>
   * @param iReadOnlyState
   *    TRUE if the document is opened with read-only state
   */
  virtual void SetReadOnlyState(CATBoolean iReadOnlyState);

  /**
   * @return
   *    TRUE if the document must not be modified.
   */
  virtual CATBoolean GetReadOnlyState() const;

  /**
   * @nodoc
   * Allows or refuses the user choose a document which is not persistent.<br>
   * Some products exist only during the session and they are not stored (example: VPM...).
   * @param iWithNonPersistentDoc
   *    TRUE if the document is opened with read-only state
   */
  virtual void SetWithNonPersistentDoc(CATBoolean iWithNonPersistentDoc);

  /**
   * @nodoc
   * @return
   *    TRUE if the document must be persistent or not.
   */
  virtual CATBoolean GetWithNonPersistentDoc() const;

private:
  CATBoolean _ReadOnlyState;
  CATBoolean _WithNonPersistentDoc;
};

#endif
