#ifndef CATIEwrUipEquipotentials_H
#define CATIEwrUipEquipotentials_H

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
#include "CATUnicodeString.h"
#include "CATEwrEquipotential.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATEwrInterfaces IID IID_CATIEwrUipEquipotentials;
#else
extern "C" const IID IID_CATIEwrUipEquipotentials;
#endif

/**
 * Interface dedicated to equipotentials.
 * <b>Role</b>: This interface is used to list the equipotentials to route
 */
class ExportedByCATEwrInterfaces CATIEwrUipEquipotentials : public CATBaseUnknown
{
  CATDeclareInterface;
  
public:
  /**
   * Retrieves the list of equipotentials for a given system.
   * @param iListOfSystems
   *  The list of systems.
   * @param oEquipotentialsCount
   *  The number of equipotentials
   * @param oListOfEquipotentials
   *  The list of equipotentials
   * @return
   *   An HRESULT value. 
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The equipotentials have been retrieved.</dd>
   *     <dt>E_FAIL </dt>
   *     <dd>Error while retrieving the equipotentials.</dd>
   *   </dl>
   */
  virtual HRESULT ListEquipotentials(const CATListValCATUnicodeString *iListOfSystems, CATLONG32 &oEquipotentialsCount, CATEwrEquipotential *&oListOfEquipotentials) = 0;
};

#endif
