#ifndef CATIArrConnectorFactory_H
#define CATIArrConnectorFactory_H

//	COPYRIGHT DASSAULT SYSTEMES 2001
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */
// System
#include "IUnknown.h"
#include "CATArrFaceConnectorTypeEnum.h"
#include "CATArrAlignmentConnectorTypeEnum.h"
#include "CATArrOrientationConnectorTypeEnum.h"

class CATGeometry;
class CATIConnector;

extern "C" const IID IID_CATIArrConnectorFactory ;

/**
 * Interface to manage connectors on untyped parts as in the case for SRT, PLO, or SSR
 * <b>Role</b>: To manage connectors on spatial objects.
 */

class CATIArrConnectorFactory : public IUnknown
{
  public:  
  
  /**
   * Add a new connector with existing geometry data.
   * @param iFaceGeom
   *   The geometry associated with the Face connector.
   *   The face where the connector is located.
   * @param iFaceCntrType
   *   The face connector type.
   * @param iAlignmentGeom
   *   The geometry associated with the Alignment connector.
   *   The alignment line that the connector is associated to.
   * @param iAlignmentCntrType
   *   The alignment connector type.
   * @param iOrientationGeom
   *   The geometry associated with the Orientation connector.
   *   The orientation plane that the connector is associated to.
   * @param iOrientationCntrType
   *   The orientation connector type.
   * @param oIndex
   *   The index of the newly created connector. 
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

  virtual HRESULT AddConnector(CATGeometry                                *iFaceGeom,
                               const CATArrFaceConnectorTypeEnum          &iFaceCntrType,
                               CATGeometry                                *iAlignmentGeom,
                               const CATArrAlignmentConnectorTypeEnum     &iAlignmentCntrType,
                               CATGeometry                                *iOrientationGeom,
                               const CATArrOrientationConnectorTypeEnum   &iOrientationCntrType, 
                               int                                        &oIndex)= 0;

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

  /**
   * Returns the face connector and its type for a given index.
   * @param iIndex
   *   The index of the connector for which the face connector is to be fetched. 
   * @param oFaceCntr [out, CATBaseUnknown#Release]
   *   The face connector.
   * @param oFaceCntrTtype
   *   The type associated with that connector.
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
  virtual HRESULT GetFaceConnector(const int                     iIndex, 
                                   CATIConnector                 **oFaceCntr, 
                                   CATArrFaceConnectorTypeEnum   &oFaceCntrType)= 0;

  /**
   * Returns the alignment connector and its type for a given index.
   * @param iIndex
   *   The index of the connector for which the alignment connector is to be fetched. 
   * @param oAlignCntr [out, CATBaseUnknown#Release]
   *   The Alignment connector.
   * @param oAlignCntrType
   *   The type associated with that connector.
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
  virtual HRESULT GetAlignmentConnector(const int                        iIndex, 
                                        CATIConnector                    **oAlignCntr,
                                        CATArrAlignmentConnectorTypeEnum &oAlignCntrType)= 0;

  /**
   * Returns the orientation connector and its type for a given index.
   * @param iIndex
   *   The index of the connector for which the orientation connector is to be fetched. 
   * @param oOrientCntr [out, CATBaseUnknown#Release]
   *   The orientation connector.
   * @param oOrientCntrType
   *   The type associated with that connector.
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
  virtual HRESULT GetOrientationConnector(const int                          iIndex, 
                                          CATIConnector                      **oOrientCntr,
                                          CATArrOrientationConnectorTypeEnum &oOrientCntrType)= 0;

};
#endif
