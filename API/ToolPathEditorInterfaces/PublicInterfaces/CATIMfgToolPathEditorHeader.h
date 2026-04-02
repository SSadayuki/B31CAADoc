// COPYRIGHT DASSAULT SYSTEMES 2002
//===================================================================
//
// CATIMfgToolPathEditorHeader.h
// Define the CATIMfgToolPathEditorHeader interface
//
//===================================================================
//
// Usage notes:
//   Used to give the list of headers of command of the tool path editor.
//   He also can activate ou deactivate these headers for a given set
//   of selected Objects.
//===================================================================
//
//  Jan 2002 Creation: CRA
//===================================================================
//History:
//-------------------------------------------------------------------
//===================================================================
#ifndef CATIMfgToolPathEditorHeader_H
#define CATIMfgToolPathEditorHeader_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "TPEItfEnv.h"

#include "CATBoolean.h"
#include "CATBooleanDef.h"

#include "CATCSO.h"
#include "CATListOfCATString.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByTPEItfEnv IID IID_CATIMfgToolPathEditorHeader ;
#else
extern "C" const IID IID_CATIMfgToolPathEditorHeader ;
#endif

//------------------------------------------------------------------

/**
 *  Interface to create the sub-menu of the tool path in the PPR Tree.  
 */
class ExportedByTPEItfEnv CATIMfgToolPathEditorHeader: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * Retrieves the list of command headers in the tool path editor.
     * @param ioHeadersList
     *   The retrieved list of command headers
     */
  virtual HRESULT GetHeaders( CATListValCATString &ioHeadersList )= 0;

    /**
     * Determines whether a list of command headers is available for a given set of objects.
     * @param ioHeadersList
     *   The list of command headers
     * @param iCSO
     *   The set of objects
     */
  virtual HRESULT IsHeadersAvailable( CATListValCATString& ioHeadersList , CATCSO* iCSO )= 0;


  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

//------------------------------------------------------------------

CATDeclareHandler( CATIMfgToolPathEditorHeader, CATBaseUnknown );

#endif
