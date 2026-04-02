#ifndef CATIDftBalloon_H
#define CATIDftBalloon_H
//==============================================================================
//                                   CATIA - Version 5
//	COPYRIGHT DASSAULT SYSTEMES 1999
//------------------------------------------------------------------------------
// FILENAME    :    CATIDftBalloon.h
// LOCATION    :    DraftingInterfaces\PublicInterfaces
// AUTHOR      :    XJT 
// DATE        :    Arpil 99
//------------------------------------------------------------------------------
// DESCRIPTION :    Definition of interface for Text
//
// INHERITANCE :    CATIDftAnnotation
//                        IUnknown
//------------------------------------------------------------------------------
// COMMENTS    :    
//                  
//------------------------------------------------------------------------------
// MODIFICATIONS    user       date      purpose
//------------------------------------------------------------------------------

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATIDftText.h"

#include "CATDraftingInterfaces.h"
#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDftBalloon ;
#else
extern "C" const IID IID_CATIDftBalloon ;
#endif

class CATIDftTextProperties;
class CATICkeParm;

/**
* Interface for Balloon objects.
*/
class ExportedByDraftingItfCPP CATIDftBalloon : public CATIDftText
{

public:

  /**
   * Get the text of balloon.
   *
   * @param
   * <dl>
   * <dt><tt>oText </tt> : text.
   * </dl>
   * @return
   * <dl>
   * <dt><tt>S_OK   </tt> <dd> if the operation succeeded.
   * <dt><tt>E_FAIL </tt> <dd> if the operation failed.
   * </dl>
   */
  virtual HRESULT GetText (wchar_t **oText) = 0; 

  /**
   * Set the text of balloon.
   *
   * @param
   * <dl>
   * <dt><tt>iText </tt> : text.
   * </dl>
   * @return
   * <dl>
   * <dt><tt>S_OK   </tt> <dd> if the operation succeeded.
   * <dt><tt>E_FAIL </tt> <dd> if the operation failed.
   * </dl>
   */
  virtual HRESULT SetText (const wchar_t *iText) = 0; 

  /**
   * Get the part specification of balloon.
   *
   * @param
   * <dl>
   * <dt><tt>oPartNumber </tt> : part specification.
   * </dl>
   * @return
   * <dl>
   * <dt><tt>S_OK   </tt> <dd> if the operation succeeded.
   * <dt><tt>E_FAIL </tt> <dd> if the operation failed.
   * </dl>
   */
  virtual HRESULT GetPartNumberSpec (CATICkeParm **oPartNumber) = 0;

  /**
   * Set the part specification of balloon.
   *
   * @param
   * <dl>
   * <dt><tt>iPartNumber </tt> : part specification.
   * </dl>
   * @return
   * <dl>
   * <dt><tt>S_OK   </tt> <dd> if the operation succeeded.
   * <dt><tt>E_FAIL </tt> <dd> if the operation failed.
   * </dl>
   */
  virtual HRESULT SetPartNumberSpec (const CATICkeParm *iPartNumber) = 0;
};
#endif
