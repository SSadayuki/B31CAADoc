#ifndef CATIPspPhysicalProduct_H
#define CATIPspPhysicalProduct_H

//	COPYRIGHT DASSAULT SYSTEMES 2001
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */
// System
#include "IUnknown.h"
#include "CATPspPartConnectorTypeEnum.h"

class CATIPspPartConnector;
class CATIUnknownList;

extern "C" const IID IID_CATIPspPhysicalProduct ;

/**
 * Interface to manage the technological connectors on physical objects.
 * <b>Role</b>: To manage connectors on physical objects.
 */

class CATIPspPhysicalProduct : public IUnknown
{
  public:  
  
  /**
  * Add a connector.
  * @param iTechCtrClassType 
  *   Class type of the connector to be added.
  * @param iCtrNumber 
  *   Connector number.
  * @param iFaceConnector 
  *   Face connector.
  * @param iEFaceType 
  *   Connector face type to be set.
  *   @see CATPspPartConnectorTypeEnum
  * @param iAlignConnector 
  *   Alignment connector.
  * @param iEAlignType 
  *   Connector alignment type to be set.
  *   @see CATPspPartConnectorTypeEnum
  * @param iOrientationConnector 
  *   Orientation connector.
  * @param iEClockType 
  *   Connector orientation type to be set.
  *   @see CATPspPartConnectorTypeEnum
  * @param oTechConnector [out, IUnknown#Release]
  *   The new technological connector object created.
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
  virtual HRESULT AddConnector (const char *iTechCtrClassType,
    int iCtrNumber, IUnknown *iFaceConnector, CATPspPartConnectorTypeEnum iEFaceType,
    IUnknown *iAlignConnector, CATPspPartConnectorTypeEnum iEAlignType,
    IUnknown *iOrientationConnector, CATPspPartConnectorTypeEnum iEClockType,
    CATIPspPartConnector **oTechConnector) = 0;

  /**
  * Remove a connector.
  * @param iCtrNumber
  *   The connector number of connector to be removed. 
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
  virtual HRESULT RemoveConnector (int iCtrNumber) = 0;

  /**
  * Find all the connectors of this object.
  * @param iTechCtrClassTypeFilter
  *   Technological connector class types for filtering the output connector
  *   list.
  * @param oListOfTechConnectors [out, IUnknown#Release]
  *   A list of technological connectors on this object.
  *   (members are CATIPspPartConnector interface pointers).
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
  virtual HRESULT ListConnectors (char *iTechCtrClassTypeFilter,
    CATIUnknownList **oListOfTechConnectors) = 0;

  /**
  * Get the number of connectors on this object.
  * @param oNumOfCtrs
  *   Number of connectors on object. 
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
  virtual HRESULT GetNumberOfConnectors (int &oNumOfCtrs) = 0;

};
#endif
