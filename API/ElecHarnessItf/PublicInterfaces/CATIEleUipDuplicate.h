// --------------------------------------------------------
// COPYRIGHT Dassault Systemes 2006
//===================================================================
//
// CATIEleUipDuplicate.h
// Define the CATIEleUipDuplicate interface
//
//===================================================================
//
// Usage notes:
//   New interface: describe its use here
//
//===================================================================
//  April 2006  Creation: CVV
//===================================================================

//Specify CAA Level and CAA Usage for interface
/**
  * @CAA2Level L1
  * @CAA2Usage U5
  */

#ifndef CATIEleUipDuplicate_h
#define CATIEleUipDuplicate_h

#include "CATBaseUnknown.h"
#include "CATEhiInterfaces.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATEhiInterfaces IID IID_CATIEleUipDuplicate;
#else
extern "C" const IID IID_CATIEleUipDuplicate ;
#endif

//------------------------------------------------------------------

/**
 * This Interface CATIEleUipDuplicate allows user to give suffix to be added to duplicated harness by implementing function GetSuffix
 * Interface must be implemented by the user.
 */

// Forward declaration
class CATUnicodeString;

class ExportedByCATEhiInterfaces CATIEleUipDuplicate: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     *       
     *   User has to provide the implementation for this method when he implements this interface on CAAEleDuplicate component.
     *   Location of header files for argument types in frameworks:
     *   @param iElecObject
     *      (Input): Root of the black box to be duplicated
     *   @param oSuffix
     *      (Output): the suffix to be added.
     *   @return
     *   An HRESULT value
     *   <br><b>Legal values</b>:
     *   <dl>
     *     <dt>S_OK</dt>
     *     <dd>Method is successful</dd>
     *     <dt>E_FAIL </dt>
     *     <dd>Method Failed</dd>
     *   </dl>
     * 
     */
  virtual HRESULT GetSuffix (CATBaseUnknown *ipIUnkElecObject, CATUnicodeString &oStrSuffix) = 0;

  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

//------------------------------------------------------------------

#endif
