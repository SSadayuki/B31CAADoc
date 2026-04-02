#ifndef CATIDrwProperties_H
#define CATIDrwProperties_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
* @deprecated V5R30 replacement CATIDftProperties
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "DraftingItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATDrwPropertiesEnum.h"

class CATIDrwProperties_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwProperties;
#else
extern "C" const IID IID_CATIDrwProperties;
#endif

/**
* Interface used as a base for all Drafting specific properties interfaces.
* <b>Role</b>: Properties specific to the Drafting are managed thru 
* interfaces inheriting from CATIDrwProperties.
* The only method of this base interface allows you to rebuild your object
* after changing its properties, with the lowest cost possible 
* (i.e. without updating external links, etc).
*/
class ExportedByDraftingItfCPP CATIDrwProperties : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

   /**
   * Refreshes the object visualization according to its properties.
   * @param iRefreshContext
   *    The specific context in which you want to refresh your object.
   *    <br><b>Legal values</b>: 
   *    <dl>
   *    <dt>CATDrwRefreshNone
   *    <dd>No specific context as been defined until now, 
   *    so that it's the only legal value for now.
   *    </dl>
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dt>E_FAIL
   *    <dd>Method execution failed. Reasons of the failure are not given.
   *    <dt>E_NOTIMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   * @see CATDrwRefreshContext
   */
   virtual HRESULT Refresh( const CATDrwRefreshContext & iRefreshContext = CATDrwRefreshNone ) = 0;

};

CATDeclareHandler( CATIDrwProperties, CATBaseUnknown );

#endif





























