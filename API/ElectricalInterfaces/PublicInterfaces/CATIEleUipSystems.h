#ifndef CATIEleUipSystems_H
#define CATIEleUipSystems_H

// COPYRIGHT DASSAULT SYSTEMES 2002

/** 
 * @CAA2Level L1
 * @CAA2Usage U5
 */

// module declaration
#include "ExportedByCATElectricalInterfaces.h"

// inherited from
#include "CATBaseUnknown.h"

// forward declaration
class CATListValCATUnicodeString;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATElectricalInterfaces IID IID_CATIEleUipSystems;
#else
extern "C" const IID IID_CATIEleUipSystems;
#endif

/**
 * Interface dedicated to electrical systems.
 * <b>Role</b>: This interface helps you to retrieve the systems (wire diagrams,
 *  harnesses, etc) coming from external tools (legacy database for example).
 */
class ExportedByCATElectricalInterfaces CATIEleUipSystems : public CATBaseUnknown
{
  CATDeclareInterface;
  
public:
  /**
   * Retrieves the list of Systems (Wires Diagram, Harness) on which
   * the 3D electrical applications will work on.
   *
   * @param oListOfSystems
   *  the list of systems.
   * @return
   *   An HRESULT value. 
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The systems have been retrieved.</dd>
   *     <dt>E_FAIL </dt>
   *     <dd>Error while retrieving the systems.</dd>
   *   </dl>
   */
  virtual HRESULT ListSystems(CATListValCATUnicodeString *&oListOfSystems) = 0;
};

#endif
