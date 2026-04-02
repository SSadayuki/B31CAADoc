// COPYRIGHT Dassault Systemes 2002

#ifndef CATFmuBasicDocChooser_H
#define CATFmuBasicDocChooser_H

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */
//**********************************************************************
//* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME *
//**********************************************************************

#include "CATInteractiveInterfaces.h"
#include "CATBaseUnknown.h"

class CATListPtrCATIDocId;
class CATFmuDocChooserOptions;
class CATUnicodeString;
class CATString;

/**
 * WARNING : this abstract super-class never is to be used as is, 
 * but refer to its derivation : @href CATIFmuDocChooser .
 */

///**
// * Class with the methods common to @href CATIFmuDocChooser and @href CATIFmuBlockedDocChooser.
// * <b>Role</b>: This class provides the methods common to @href CATIFmuDocChooser or a @href CATIFmuBlockedDocChooser.
// * NOTICE: it's not an interface, and it's not supposed to be used beyond FileMenu.
// */
class ExportedByCATInteractiveInterfaces CATFmuBasicDocChooser: public CATBaseUnknown
{
public:
  /**
   * Gets the count of the selected documents.
   * See @href CATIFmuDocChooser#GetSelectionCount
   */
  virtual HRESULT GetSelectionCount(int &oSelectionCount) const = 0;

  /**
   * Gets the selected documents identifiers.
   * See @href CATIFmuDocChooser#GetSelectedDocId
   */
  virtual HRESULT GetSelectedDocId(CATListPtrCATIDocId &oListOfDocId) const = 0;

  /**
   * Gets the selection's options.
   * See @href CATIFmuDocChooser#SetOptions.
   */
  virtual HRESULT SetOptions(const CATFmuDocChooserOptions &iOptions) = 0;

  /**
   * Gets the selection's options.
   * See @href CATIFmuDocChooser#GetOptions.
   */
  virtual HRESULT GetOptions(CATFmuDocChooserOptions &oOptions) const = 0;

  /**
   * Sets the type filter combo strings.
   * See @href CATIFmuDocChooser#SetFilterStrings
   */
  virtual HRESULT SetFilterStrings(CATUnicodeString *iTypeDescriptionList, CATString *iTypeExtensionsList, int iTypeFilterCount) = 0;

  /**
   * Set the active item in the type filter combo.
   * See @href CATIFmuDocChooser#SetActiveFilterIndex
   */
  virtual HRESULT SetActiveFilterIndex(int iActiveFilter) = 0;

  /**
   * Get the active item in the type filter combo.
   * See @href CATIFmuDocChooser#GetActiveFilterIndex.
   */
  virtual HRESULT GetActiveFilterIndex(int& oActiveFilter) const = 0;

  /**
   * Sets the title of the dialog object to the specified character string.
   * See @href CATIFmuDocChooser#SetTitle
   */
  virtual HRESULT SetTitle(const CATUnicodeString &iTitle) = 0;
};

//-----------------------------------------------------------------------

#endif
