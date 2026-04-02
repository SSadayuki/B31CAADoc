//================================================================
//COPYRIGHT DASSAULT SYSTEMES 2001 
//================================================================

/**
 *   @CAA2Level L1
 *   @CAA2Usage U3
 */


#ifndef CATICfgCatLnk_h_
#define CATICfgCatLnk_h_


#include "CATBaseUnknown.h"
#include "GUIDVPMInterfaces.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATICfgCatLnk;
#else
extern "C" const IID IID_CATICfgCatLnk;
#endif

/**
 *Class  to manage properties of a Category
 * @see CATICfgSpecCategory. 
 */
class ExportedByGUIDVPMInterfaces CATICfgCatLnk : public CATBaseUnknown {

CATDeclareInterface;
    public:
/**
 *
 * Make the category mandatory.
 * @return
 *   An HRESULT value.
 *   <br><b>Legal values</b>:
 *   <dl>
 *     <dt>S_OK</dt>
 *     <dd>SetMandatory succeeds.</dd>
 *     <dt>E_FAIL </dt>
 *     <dd>An error occured</dd>
 *   </dl>
 *
 */
        virtual HRESULT SetMandatory() = 0;

/**
 *
 * Make the category optional.
 * @return
 *   An HRESULT value.
 *   <br><b>Legal values</b>:
 *   <dl>
 *     <dt>S_OK</dt>
 *     <dd>SetMandatory succeeds.</dd>
 *     <dt>E_FAIL </dt>
 *     <dd>An error occured</dd>
 *   </dl>
 *
 */
        virtual HRESULT UnsetMandatory() = 0;
/**
 *
 * Check whether the category is mandatory or not.
 * @return
 *   An HRESULT value.
 *   <br><b>Legal values</b>:
 *   <dl>
 *     <dt>S_OK</dt>
 *     <dd>The category is mandatory.</dd>
 *     <dt>S_FALSE</dt>
 *     <dd>The category is not mandatory.</dd>
 *     <dt>E_FAIL </dt>
 *     <dd>An error occured</dd>
 *   </dl>
 *
 */
        virtual HRESULT IsMandatory() const  = 0;

/**
 *
 * Make the category usable to define a Product Type.
 * @return
 *   An HRESULT value.
 *   <br><b>Legal values</b>:
 *   <dl>
 *     <dt>S_OK</dt>
 *     <dd>SetTypeDefining succeeds.</dd>
 *     <dt>E_FAIL </dt>
 *     <dd>An error occured</dd>
 *   </dl>
 *
 */
        virtual HRESULT SetTypeDefining() = 0;

/**
 *
 * Check whether the category can be used to define a ProductType.
 * @return
 *   An HRESULT value.
 *   <br><b>Legal values</b>:
 *   <dl>
 *     <dt>S_OK</dt>
 *     <dd>The category can be used to define a ProducType.</dd>
 *     <dt>S_FALSE</dt>
 *     <dd>The category can not be used to define a ProducType.</dd>
 *     <dt>E_FAIL </dt>
 *     <dd>An error occured</dd>
 *   </dl>
 *
 */
        virtual HRESULT IsTypeDefining() const = 0;

/**
 *
 * Make the category not usable to define a ProductType.
 * Caution: This will delete this link between the CO and the Category
 * @return
 *   An HRESULT value.
 *   <br><b>Legal values</b>:
 *   <dl>
 *     <dt>S_OK</dt>
 *     <dd>The category can no longer be used to define a ProducType.</dd>
 *     <dt>E_FAIL </dt>
 *     <dd>An error occured</dd>
 *   </dl>
 *
 */
        virtual HRESULT UnsetTypeDefining() = 0;

};

CATDeclareHandler(CATICfgCatLnk, CATBaseUnknown);

#endif
