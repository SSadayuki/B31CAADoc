#ifndef CATIEwrFilter_H
#define CATIEwrFilter_H

// COPYRIGHT DASSAULT SYSTEMES 2005

/** 
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// module declaration
#include "ExportedByCATEwrInterfaces.h"

// inherited from
#include "CATBaseUnknown.h"

// for class variable declaration
#include "CATListOfCATUnicodeString.h"

// for typedef declaration
#include "CATEwrFilterOption.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATEwrInterfaces IID IID_CATIEwrFilter;
#else
extern "C" const IID IID_CATIEwrFilter;
#endif


/**
 * Interface dedicated to filtering.
 * <b>Role</b>: This interface is used to filter a session
 */
class ExportedByCATEwrInterfaces CATIEwrFilter : public CATBaseUnknown
{
  CATDeclareInterface;
  
public:

  /**
   * Filter a session for a given list of systems, a given list of criteria and a filtering option.
   * @param iListOfSystems
   *  The list of systems.
   * @param iListOfCriteria
   *  The list of criteria. This argument can be used to list the wires for a configuration.
   * @param iOption
   *  Filtering option
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>ElecFilterBundleSegment</dt>
   *     <dd>Filtering of bundle segment activated.</dd>
   *     <dt>ElecFilterDevice</dt>
   *     <dd>Filtering of device activated.</dd>
   *     <dt>ElecFilterSupport</dt>
   *     <dd>Filtering of support activated.</dd>
   *     <dt>ElecFilterProtection</dt>
   *     <dd>Filtering of protective covering activated.</dd>
   *     <dt>Or a combination of thosee value using '|' operator </dt>
   *     <dd>Example : ElecFilterBundleSegment|ElecFilterDevice to activate filtering of bundle segment and device.</dd>
   *   </dl>
   * @return
   *   An HRESULT value. 
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The session is filtered.</dd>
   *     <dt>E_FAIL </dt>
   *     <dd>Error while filtering.</dd>
   *   </dl>
   */
  virtual HRESULT Filter(const CATListValCATUnicodeString *iListOfSystems, const CATListValCATUnicodeString *iListOfCriteria, CATEwrFilterOption iOption) = 0;


  /**
   * Reset the session by reactivating every filtered objects.
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
  virtual HRESULT ResetFilter() = 0;

};

#endif
