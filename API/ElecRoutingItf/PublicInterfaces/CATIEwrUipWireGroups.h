#ifndef CATIEwrUipWireGroups_H
#define CATIEwrUipWireGroups_H

// COPYRIGHT DASSAULT SYSTEMES 2004

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
#include "CATEwrWireGroup.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATEwrInterfaces IID IID_CATIEwrUipWireGroups;
#else
extern "C" const IID IID_CATIEwrUipWireGroups;
#endif

/**
 * Interface dedicated to wire groups.
 * <b>Role</b>: This interface is used to list the wire groups to route
 */
class ExportedByCATEwrInterfaces CATIEwrUipWireGroups : public CATBaseUnknown
{
  CATDeclareInterface;
  
public:
  /**
   * Retrieves the list of wire groups for a given list of systems and a given list of criteria.
   * @param iListOfSystems
   *  The list of systems.
   * @param iListOfCriteria
   *  The list of criteria. This argument can be used to list the wire groups for a configuration (may be NULL).
   * @param oWireGroupsCount
   *  The number of wire groups
   * @param oListOfWireGroups
   *  The list of wire groups
   * @return
   *   An HRESULT value. 
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The wire groups have been retrieved.</dd>
   *     <dt>E_FAIL </dt>
   *     <dd>Error while retrieving the wire groups.</dd>
   *   </dl>
   */
  virtual HRESULT ListWireGroups(const CATListValCATUnicodeString *iListOfSystems, const CATListValCATUnicodeString *iListOfCriteria, CATULONG32 &oWireGroupsCount, CATEwrWireGroup *&oListOfWireGroups) = 0;
};

#endif

