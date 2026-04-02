#ifndef CATIPspAppFactory_H
#define CATIPspAppFactory_H

// COPYRIGHT Dassault Systemes 2004
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "IUnknown.h"
class CATUnicodeString;
class CATIPspLogicalLine;
class CATIPspGroup;
class CATIProduct;
class CATIUnknownList;

extern "C" const IID IID_CATIPspAppFactory;

/**
 * Interface to manage groups, logical lines, compartments.
 * <b>Role</b>: To create, instanciate, delete and query groups,
 * logical lines, compartments and parts.
 */

class CATIPspAppFactory: public IUnknown
{
  public:
  
  /**
  * Instanciate a logical line from the catalog into the current Product.
  * @param iCurrentProduct
  *   The current Product into which a logical line will be instanciated.
  * @param iLogicalLineID
  *   Logical line ID to get from the logical line catalog.
  * @param oLogicalLine [out, IUnknown#Release]
  *   Logical line instance.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetLogicalLine (const CATIProduct *iCurrentProduct, 
      const CATUnicodeString &iLogicalLineID, 
      CATIPspLogicalLine **oLogicalLine) = 0;

  /**
  * Retrieve a list of logical lines in the current Product.
  * @param iCurrentProduct
  *   The current Product to query.
  * @param oListOfLogicalLines [out, IUnknown#Release]
  *   List of logical lines.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT ListLogicalLines (const CATIProduct *iCurrentProduct,
      CATIUnknownList **oListOfLogicalLines) = 0;

  /**
  * Delete a logical line instance.
  * @param iLogicalLine
  *   Logical line to be deleted.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT DeleteLogicalLine (const CATIPspLogicalLine *iLogicalLine) = 0;

  /**
  * Instanciate a compartment from the catalog into the current Product.
  * @param iCurrentProduct
  *   The current Product into which a compartment will be instanciated.
  * @param iCompartmentID
  *   Compartment ID to get from the compartment catalog.
  * @param oCompartment [out, IUnknown#Release]
  *   Compartment instance.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetCompartment (const CATIProduct *iCurrentProduct, 
      const CATUnicodeString &iCompartmentID, 
      IUnknown **oCompartment) = 0;

  /**
  * Retrieve a list of compartments in the current Product.
  * @param iCurrentProduct
  *   The current Product to query.
  * @param oListOfCompartments [out, IUnknown#Release]
  *   List of compartments.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT ListCompartments (const CATIProduct *iCurrentProduct,
      CATIUnknownList **oListOfCompartments) = 0;

  /**
  * Delete a compartment instance.
  * @param iCompartment
  *   Compartment to be deleted.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT DeleteCompartment (const IUnknown *iCompartment) = 0;

  /**
  * Create a group in the current Product.
  *   The current Product into which a new group will be instanciated.
  * @param iGroupType
  *   Group Startup type.
  * @param iGroupID
  *   Group ID. A default ID will be generated if input is NULL.
  * @param oGroup [out, IUnknown#Release]
  *   Group instance.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT CreateGroup (const CATIProduct *iCurrentProduct, 
      const CATUnicodeString &iGroupType, const CATUnicodeString &iGroupID,
      CATIPspGroup **oGroup) = 0;

  /**
  * Retrieve a list of groups in the current Product.
  * @param iCurrentProduct
  *   The current Product to query.
  * @param oListOfGroups [out, IUnknown#Release]
  *   List of groups.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT ListGroups (const CATIProduct *iCurrentProduct,
      CATIUnknownList **oListOfGroups) = 0;

  /**
  * Delete a group.
  * @param iGroup
  *   Group to be deleted.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT DeleteGroup (const CATIPspGroup *iGroup) = 0;

  /**
  * Delete a part.
  * @param iProduct
  *   Part to be deleted.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT DeletePart (const CATIProduct *iProduct) = 0;
};

#endif
