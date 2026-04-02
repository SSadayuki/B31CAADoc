#ifndef CATIEwrUipWires_H
#define CATIEwrUipWires_H

// COPYRIGHT DASSAULT SYSTEMES 2002

/** 
 * @CAA2Level L1
 * @CAA2Usage U5
 */

// module declaration
#include "ExportedByCATEwrInterfaces.h"

// inherited from
#include "CATBaseUnknown.h"

// for class variable declaration
#include "CATListOfCATUnicodeString.h"
#include "CATEwrWire.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATEwrInterfaces IID IID_CATIEwrUipWires;
#else
extern "C" const IID IID_CATIEwrUipWires;
#endif

/**
 * Interface dedicated to wires.
 * <b>Role</b>: This interface is used to list the wires to route
 */
class ExportedByCATEwrInterfaces CATIEwrUipWires : public CATBaseUnknown
{
  CATDeclareInterface;
  
public:
  /**
   * Retrieves the list of wires for a given list of systems and a given list of criteria.
   * @param iListOfSystems
   *  The list of systems.
   * @param iListOfCriteria
   *  The list of criteria. This argument can be used to list the wires for a configuration (may be NULL).
   * @param oWiresCount
   *  The number of wires
   * @param oListOfWires
   *  The list of wires
   * @return
   *   An HRESULT value. 
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The wires have been retrieved.</dd>
   *     <dt>E_FAIL </dt>
   *     <dd>Error while retrieving the wires.</dd>
   *   </dl>
   */
  virtual HRESULT ListWires(const CATListValCATUnicodeString *iListOfSystems, const CATListValCATUnicodeString *iListOfCriteria, CATLONG32 &oWiresCount, CATEwrWire *&oListOfWires) = 0;
};

#endif
