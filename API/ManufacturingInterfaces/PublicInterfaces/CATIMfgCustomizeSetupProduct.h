// COPYRIGHT Dassault Systemes 2004
#ifndef CATIMfgCustomizeSetupProduct_H
#define CATIMfgCustomizeSetupProduct_H

/**
* @CAA2Level L1
* @CAA2Usage U5
*/

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"

#include "CATDocument.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgCustomizeSetupProduct;
#else
extern "C" const IID IID_CATIMfgCustomizeSetupProduct ;
#endif

//------------------------------------------------------------------

/**
 * Interface to customize the Product which is going to be associated to the new Part Operation of a new CATProcess.
 * <b>Role</b>: This interface offers services to implement on the ManufacturingSetup services to customize
 * the product to associate to a new CATProcess for CAA WB using CAA Machining WB transition services.<br>
 */
class ExportedByMfgItfEnv CATIMfgCustomizeSetupProduct : public CATBaseUnknown
{
  CATDeclareInterface;
  
public:
  
  /**
   * From the .
   *   @param iDSFDocument
   *      The document Machining WB transition have identify to associate
   *   @param oDSFDocument
   *      The document that CAA WB wants to associate
   *   <br><b>Legal values</b>:
   *   <ul>
   *   <li>=NULL : No Product association </li>
   *   <li>=iDSFDocument : Default behaviour of MachininWB </li>
   *   <li>=otherwise : the Product to associate to Part Operation </li>
   *   </ul>
   */
  virtual HRESULT CustomizeProduct (CATDocument * iDSFDocument, CATDocument *& oDSFpDocument) = 0;

  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

//------------------------------------------------------------------
CATDeclareHandler(CATIMfgCustomizeSetupProduct, CATBaseUnknown);

#endif
