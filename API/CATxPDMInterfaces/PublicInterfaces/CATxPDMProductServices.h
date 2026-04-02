#ifndef CATxPDMProductServices_H
#define CATxPDMProductServices_H
//COPYRIGHT DASSAULT SYSTEMES 2006

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATBaseUnknown.h" 
#include "ExportedByCATxPDMInterfaces.h"
#include "CATListOfCATIxPDMItem.h" 

class CATIxPDMPartItem_var;
class CATIReporter;

/**
  * Class for PDM services working on Part and Product items loaded in session.
  * <p>All the methods pre-requisites the PX1 license </p>
  * @see CATIxPDMProductItem , CATIxPDMPartItem.
  */
class ExportedByCATxPDMInterfaces CATxPDMProductServices
{
 public:
    /**
    * Changes Product context of a CATPart item.
    * <br><b>Role:</b>This method changes the product context of a CATPart item.
    * This method works only for CATPart items with an existing context ( see @href CATIxPDMPartItem:HasExternalLinks )
    * This method works only if during context change, existing links can be rerouted to a new
    * consistent context. Only one single context is allowed for a CATPart.
    *
    * @param iPartItemToChange
    *   The CATPart item with an old context to change.
    * @param iNewContextInstance
    *   The new context instance. Be carefull, it should be an instance of iPartItemToChange in root context
    *   (not first level of instance).
    * @return
    *   <ul>
    *   <li><tt>S_OK</tt>: The context successfully changed. </li> 
    *   <li><tt>E_FAIL</tt>: The method has failed. The possible <b>returned errors </b> (listed by their identifier) are:</li>
    *   <ul>
    *      <li><tt>InputERR_1001:</tt></li>
    *       The PX1 licence is not available.
    *      <li><tt>InputERR_1005:</tt></li>
    *       The PartItem should be loaded.
    *      <li><tt>InputERR_1126:</tt></li>
    *       The PartItem should have some contextual links.
    *      <li><tt>InputERR_1127:</tt></li>
    *       The new context instance is not valid.
    *  </ul>
    *  </ul>
    */
    static HRESULT ChangeContext(const CATIxPDMPartItem_var& iPartItemToChange,const CATBaseUnknown_var& iNewContextInstance);



    /**
    * Activate or Deactivate a product instance with session impacts.
    * <br><b>Role:</b>This method changes the product activation/deactivation status.
    * In Root Product context of input instance, all geometrical import links will be inactivated at deactivation (activated at product activation).
    * For Solid import, Boolean Operation using Body with import will also be deactivated (or activated).
    * Import of deactivated body will also be deactivated (recursively).
    *
    * @param iInstanceToChange
    *   The product instance you want to activate or inactivate.
    * @param iActivate
    *   TRUE to activate selected instance, FALSE to deactivate product instance.
    * @param oItemsWithError
    *   List of items with associated errors or warning. Items can be duplicated in this list if there is several errors on one item.
    * @param oReporter
    *   List of errors or warning on impacts managed. Use CATIReporter#GetListReporterInfo to retrieve all details.
    *   Authorized values are:
    *   <ul>
    *      <li><tt>InputERR_1401:</tt></li>
    *       An geometrical import has been automatically deactivated.
    *      <li><tt>InputERR_1402:</tt></li>
    *       An geometrical import has been automatically activated.
    *      <li><tt>InputERR_1403:</tt></li>
    *       A boolean operation has been automatically deactivated.
    *      <li><tt>InputERR_1404:</tt></li>
    *       A boolean operation has been automatically activated.
    *  </ul>
    * @return
    *   <ul>
    *   <li><tt>S_OK</tt>: Activation/Deactivation successfully performed. </li> 
    *   <li><tt>E_FAIL</tt>: The method has failed. The possible <b>returned errors </b> (listed by their identifier) are:</li>
    *   <ul>
    *      <li><tt>InputERR_1001:</tt></li>
    *       The PX1 licence is not available.
    *  </ul>
    *  </ul>
    */
    static HRESULT SetProductInstanceActivation(const CATBaseUnknown_var& iInstanceToChange,const CATBoolean iActivate,
       CATListValCATIxPDMItem_var* & oItemsWithError,CATIReporter* & oReporter);


};
#endif

