#ifndef CATISamAnalysisConnector_H
#define CATISamAnalysisConnector_H
//=================================================================================
// COPYRIGHT DASSAULT SYSTEMES 2000  
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */
//=================================================================================

#include "CATAnalysisInterface.h"
#include "CATIAV5Level.h"
#include "CATBaseUnknown.h"
#include "CATSamDefs.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATBoolean.h"

class CATILinkableObject;
class CATISpecObject;
class CATString;
class CATIProduct;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamAnalysisConnector ;
#else
extern "C" const IID IID_CATISamAnalysisConnector ;
#endif

/**
 * Interface to manage links with Design Data.
 * <b>Role:</b> Interface designed to manage <b>Connector behavior</b>.<br>
 * This element allow to define and extract an associative link. <br>
 * <b>Note:</b> This link is build with two information's:<br>
 * <ul><li>The Pointed Object (BrepAccess Object, Mechanicalfeature....)</li>
 *     <li>The Positioning Object is the CATIProduct in which the Linkable is defined. <br>
 *         The intent of this link is to identify the instance on the Pointed Object and to manage the change of 
 *         position that can occur in a product structure document. </li>
 * </ul>
 * To create a connector, use the @href CATISamAnalysisModelFactory#CreateConnector 
 * <p>
 */ 

class ExportedByCATAnalysisInterface CATISamAnalysisConnector: public CATBaseUnknown
{
	CATDeclareInterface;

	public:

 /**
 * Associates a Pointed object with the Connector.
 * @param iExternalObject CATILinkableObject to be stored in the link.
 */
		virtual HRESULT SetPointedObject(CATILinkableObject* iExternalObject) = 0;
/**
 * Retrieves the Pointed objectstored in the Connector.
 * @param oExternalObject  [out , CATBaseUnknown#Release]
 * CATILinkableObject stored in the link.
 */
		virtual HRESULT GetPointedObject(CATILinkableObject*& oExternalObject) const = 0;
/**
 * Associates a Positioning object with the Connector.
 * @param iExternalObject CATILinkableObject to be stored in the link.
 */
		virtual HRESULT SetPositionningObject(CATILinkableObject* iExternalObject) = 0;
/**
 * Retrieves the Positioning object stored in the Connector.
 * @param oExternalObject [out , CATBaseUnknown#Release]
 * CATILinkableObject stored in the link.
 */
		virtual HRESULT GetPositionningObject(CATILinkableObject*& oExternalObject) const = 0;

/**
 * Method to compare a given connector to the current one.
 * @param iConnectorToCompare a Pointer on the connector to compare.
 * @return HRESULT
 *  <ul><li> S_OK		: connectors are identical.</li>
 *      <li> S_FALSE	: connectors are different.</li>
 *  </ul>
 */
		virtual HRESULT IsSame(CATISamAnalysisConnector* iConnectorToCompare) = 0;

/**
 * Retrieves both Positionning and pointing object stored in the Connector.
 * @param oPointedObject  [out , CATBaseUnknown#Release]
 * CATILinkableObject stored in the link.
 * @param oPositionningObject  [out , CATBaseUnknown#Release]
 * CATILinkableObject stored in the link.
 */
		virtual HRESULT GetAllObjects(CATILinkableObject*& oPointedObject,
                                  CATILinkableObject*& oPositionningObject) const = 0;

/**
 * Retrieves support identifier of the pointed Object.
 * @param oType  SAM_SupportId of the pointed Object.
 */
		virtual HRESULT GetPointedSupportId(SAM_SupportId& oType) const = 0;


/**
 * Retrieves if the connector is managed by publication.
 * @param oPublication  [out , CATBaseUnknown#Release]
 * The ProductStructure Object that manage the Publication. 
 * This object implements CATIPrdPublication.
 * @return Informs if the connector is based on Publishing.
 * <br><b>Legal values</b>: 
 * <ul>
 * <li><font color="red">0</font color="red"> Not based on publishing, direct link on object is done. </li>
 * <li><font color="red">1</font color="red"> Based on publishing.</li></ul>
 */

  virtual int GetPublicationConnector(CATILinkableObject* &oPublication) = 0;

/**
 * Indicates if pointed object is loaded in session.
 * @return Informs if the connector is loaded
 */
	virtual CATBoolean IsLoaded() = 0;

};

//------------------------------------------------------------------

CATDeclareHandler( CATISamAnalysisConnector, CATBaseUnknown );

#endif
