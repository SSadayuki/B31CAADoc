#ifndef CATIPspPartConnector_H
#define CATIPspPartConnector_H

// COPYRIGHT Dassault Systemes 2001
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "IUnknown.h"
#include "CATPspPartConnectorTypeEnum.h"

class CATListValCATUnicodeString;
class CATIMovable;
class CATIMovable_var;
class CATMathPoint;
class CATMathPlane;
class CATMathDirection;

extern "C" const IID IID_CATIPspPartConnector ;

/**
 * Interface to manage the technological data on connectors.
 * <b>Role</b>: To access the technological data on connectors.
 */

class CATIPspPartConnector: public IUnknown
{
  public:
  
  /**
  * Get face connector.
  * @param oConnector [out, IUnknown#Release]
  *   Face connector.
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
  virtual HRESULT GetFaceConnector (IUnknown **oConnector) = 0;

  /**
  * Set the face connector.
  * @param iConnector 
  *   The new sub-Face connector.
  * @param iEFaceType 
  *   The new Face connector type.
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
  virtual HRESULT SetFaceConnector(IUnknown *iConnector, CATPspPartConnectorTypeEnum iEFaceType) = 0;

  /**
  * Get alignment connector.
  * @param oConnector [out, IUnknown#Release]
  *   Alignment connector.
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
  virtual HRESULT GetAlignmentConnector (IUnknown **oConnector) = 0;

  /**
  * Set the alignment connector.
  * @param iConnector 
  *   The new sub-alignment connector.
  * @param iEAlignType 
  *   The new alignment connector type.
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
  virtual HRESULT SetAlignmentConnector(IUnknown *iConnector, CATPspPartConnectorTypeEnum iEAlignType) = 0;

  /**
  * Get orientation connector.
  * @param oConnector [out, IUnknown#Release]
  *   Orientation connector.
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
  virtual HRESULT GetOrientationConnector (IUnknown **oConnector) = 0;

  /**
  * Set the orientation connector.
  * @param iConnector 
  *   The new sub-orientation connector.
  * @param iEClockType 
  *   The new orientation connector clock type.
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
  virtual HRESULT SetOrientationConnector(IUnknown *iConnector, CATPspPartConnectorTypeEnum iEClockType) = 0;

  /**
  * Get datum connector.
  * @param oConnector [out, IUnknown#Release]
  *   Datum connector.
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
  virtual HRESULT GetDatumConnector (IUnknown **oConnector) = 0;

  /**
  * Set the datum connector.
  * @param iConnector 
  *   The new sub-datum connector.
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
  virtual HRESULT SetDatumConnector(IUnknown *iConnector) = 0;

  /**
  * Get connector number.
  * @param oCtrNumber
  *   Connector number on this connector. 
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
  virtual HRESULT GetConnectorNumber (int &oCtrNumber) = 0;

  /**
  * Retrieve the CATMathPoint of the position associated with this connector.
  * @param iRelAxis
  *   The relative axis object (NULL means relative to parent).
  * @param oPosition
  *   The position as CATMathPoint.
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
  virtual HRESULT GetPosition (const CATIMovable *iRelAxis, CATMathPoint &oPosition) = 0;

  /**
  * Retrieve the CATMathDirection of outward normal to the face place position
  * associated with this connector.
  * @param iRelAxis
  *   The relative axis object (NULL means relative to parent).
  * @param oAlignmentDirection
  *   The align direction as a CATMathDirection.
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
  virtual HRESULT GetAlignmentDirection (const CATIMovable *iRelAxis,
     CATMathDirection &oAlignmentDirection) = 0;

  /**
  * Retrieve the CATMathDirection of the upward normal to the up plane
  * associated with this connector.
  * @param iRelAxis
  *   The relative axis object (NULL means relative to parent).
  * @param oUpDirection
  *   The up direction as CATMathDirection.
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
  virtual HRESULT GetUpDirection (const CATIMovable *iRelAxis,
     CATMathDirection &oUpDirection) = 0;

  /**
  * Retrieve the CATMathPlane that contains the connector position (plane origin), 
  * alignment direction (plane z-axis), and the up direction (plane y-axis).
  * @param iRelAxis
  *   The relative axis object (NULL means relative to parent).
  * @param oMathPlane
  *   The connector face plane.
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
  virtual HRESULT GetConnectorMathPlane (const CATIMovable *iRelAxis,
     CATMathPlane &oMathPlane) = 0;

  /**
  * Retrieve the face type (normal or "transparent" support) for this connector.
  * @param oFaceType
  *   The face type.
  *   @see CATPspPartConnectorTypeEnum
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
  virtual HRESULT GetFaceType (CATPspPartConnectorTypeEnum &oFaceType) = 0;

  /**
  * Retrieve the alignment type for this connector.
  * @param oAlignType
  *   The alignment type.
  *   @see CATPspPartConnectorTypeEnum
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
  virtual HRESULT GetAlignType (CATPspPartConnectorTypeEnum &oAlignType) = 0;

  /**
  * Retrieve the clocking type (how symmetric this end is) for this connector.
  * @param oClockType
  *   The clock type.
  *   @see CATPspPartConnectorTypeEnum
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
  virtual HRESULT GetClockType (CATPspPartConnectorTypeEnum &oClockType) = 0;

  /**
  * Set a list of attribute names associated to this connector.
  * @param opListOfAttrNames
  *   List of attribute names associated.
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
  virtual HRESULT SetAttrNames ( const CATListValCATUnicodeString* ipListOfAttrNames ) = 0;
  
  /**
  * Returns a list of attribute names associated to this connector.
  * @param opListOfAttrNames
  *   List of attribute names associated.
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
  virtual HRESULT ListAttrNames ( CATListValCATUnicodeString*& opListOfAttrNames ) = 0;

  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

#endif
