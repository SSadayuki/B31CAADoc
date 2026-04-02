#ifndef CATIEleUipFilteringCriteria_H
#define CATIEleUipFilteringCriteria_H

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
extern ExportedByCATElectricalInterfaces IID IID_CATIEleUipFilteringCriteria;
#else
extern "C" const IID IID_CATIEleUipFilteringCriteria;
#endif

/**
 * Interface dedicated to configuration management.
 * <b>Role</b>: This interface is used to list the criteria that can be applied to routed wires.
 */
class ExportedByCATElectricalInterfaces CATIEleUipFilteringCriteria : public CATBaseUnknown
{
  CATDeclareInterface;
  
public:
  /**
   * Retrieves the list of criteria for a given list of systems.
   * @param iListOfSystems
   *  The list of systems (It is possible to give no systems. In this case, all criteria for the whole project will be
   *  returned).
   * @param oListOfCriteria
   *  The list of criteria.
   * @return
   *   An HRESULT value. 
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The criteria have been retrieved.</dd>
   *     <dt>E_FAIL </dt>
   *     <dd>Error while retrieving the criteria.</dd>
   *   </dl>
   */
  virtual HRESULT ListCriteria(const CATListValCATUnicodeString *iListOfSystems, CATListValCATUnicodeString *&oListOfCriteria) = 0;

  /**
   * Retrieves the list of wires for a given list of systems and a given list of criteria.
   * @param iListOfSystems
   *  The list of systems (It is possible to give no systems)
   * @param oListOfCriteria
   *  The list of criteria.
   * @param oListOfWires
   *  The list of wires' identifiers available for the given list of criteria.
   * @return
   *   An HRESULT value. 
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The wire identifiers have been retrieved.</dd>
   *     <dt>E_FAIL </dt>
   *     <dd>Error while retrieving the wire identifiers.</dd>
   *   </dl>
   */
  virtual HRESULT ListWires(const CATListValCATUnicodeString *iListOfSystems, const CATListValCATUnicodeString *iListOfCriteria, CATListValCATUnicodeString *&oListOfWires) = 0;
};

#endif
