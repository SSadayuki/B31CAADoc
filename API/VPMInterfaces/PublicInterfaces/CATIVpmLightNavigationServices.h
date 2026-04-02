// --------------------------------------------------------------
// VPM (c) Copyright Dassault Systemes 2013
// --------------------------------------------------------------
// Responsable : JDV/HXH/PPN                               
// --------------------------------------------------------------
// Header      : CATIVpmLightNavigationServices.h                                      
// --------------------------------------------------------------
// Content     : Navigation services on Doc to Doc objects
// --------------------------------------------------------------
// History     :                                                          
// Creation    : 2013/04/01 > HXH                                          
// --------------------------------------------------------------

/**
* @CAA2Level L1
* @CAA2Usage U3
*/


#ifndef CATIVpmLightNavigationServices_H_
#define CATIVpmLightNavigationServices_H_


#include "GUIDVPMInterfaces.h"
#include "CATBaseUnknown.h"
#include "CATListOfCATUnicodeString.h"
#include "CATListOfCATIVpmLightExpandObject.h"
class ENOVQObjectIdentity;

class CATUnicodeString;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIVpmLightNavigationServices;
#else
extern "C" const IID IID_CATIVpmLightNavigationServices;
#endif



/** Interface to the VPM factory manager for navigation services on objects.
  * <b>Role</b>: This interface runs light queries and does not load any object in memory.   
 */

class ExportedByGUIDVPMInterfaces CATIVpmLightNavigationServices : public CATBaseUnknown   
{
   CATDeclareInterface;

 

   public :
		/** Helper method to get the UUID from the ENOVQObjectIdentity
  	      * iQueryResult: The inputObject ID.
  	      * oLink:		  UUID of input object.
		*/
		virtual HRESULT GetUUIDFromObjectIdentity(const ENOVQObjectIdentity *iQueryResult, SEQUENCE(octet) &oLink) = 0;
		/**
		   * to retrieve a list of DR from a list of PV.
		   * The navigation can be done on Representation links only, on Documentation links only, or on both ( representation links is "including" the exposition link)
		   * @iListOfPVUUID: The input list of Part Version UUIDs
		   * @iSelectClause: Input select clause with attributes on Doc Revision and Doc Master
		   *  here we only support the standard attributes of this 2 Tables, as defined in DOCDIR
		   * iDocCriteria: value in { LEX_Representation,LEX_Documentation, LEX_Document)
		   *   refer to VPMInterfaces/PublicInterfaces/CATIVpmLightExpandObject.h
		   * @oDRLightObjects: The output list of Doc Revision/Doc Master as Light Objects
		   *
		   * Attention: this code only queries on the database
		  */
		virtual HRESULT GetConnectedDocuments (
		const CATLISTV(_SEQUENCE_octet) & iListOfPVUUIDs, 
		const CATListOfCATUnicodeString & iSelectClause, 
		DocumentCriteria iDocCriteria,
		CATListOfCATIVpmLightExpandObject * &oDRLightObjects ) = 0;

	  /**
        * This is to inverser navigation on Represetation/Documentation link to retrieve  a list of PV from a list of Document revision.
		* The navigation will be done on Representation/Documentation links only.
        * @iListOfDRUUID : The input list of Documents Revisions UUIDs
        * @iSelectClause : Input select clause with attributes on PartVersion and PartMaster
        * @iDocCriteria  : value in { LEX_Representation,LEX_Documentation, LEX_Document)
        * @oRefLightObjects  : The output list of Part Versions/PRC as Light expand objects.
        *
        * Attention: this code only runs on the database
        * Attention: This code only applies A Posteriori security
       */

      virtual HRESULT whereUsedParts_Light( const CATLISTV(_SEQUENCE_octet) & iListOfDRUUIDs, 
											const CATListOfCATUnicodeString & iSelectClause, 
											DocumentCriteria iDocCriteria,
											CATListOfCATIVpmLightExpandObject * &oRefLightObjects) = 0;




	/**
	  *
	  * explore the links between documents in ENOVIA in order to enumerate documents impacting the input
	  * ( it corresponds to all the content of a BlackBox in CATIA meaning), including data on associated PartVersion
	  *
	  * @param iRootDocUuid 
	  * the uuid of Document Revision corresponding to the CATproduct root of th BlackBox (typically the doc seen in expand result)
	  * 
	  * @param iSelectClauseOnDoc
	  * the attributes required on DR/DM ( eg the one we put in CATIA proxy for document)
	  * 
	  * @param iSelectClauseOnRef 
	  * the attributes required on PV/PM ( eg the one we put in CATIA proxy for reference)
	  * 
	  * @param oLightObjects
	  * the exhaustive results of doc/PV/PRC implied in navigation IN LEX format.
	  * 
	  * @param iRecusively
	  * To specify the level of explore. Valid values are 
	  * iRecusively = 0 // to specify one level only.
	  * iRecusively = 1 // to explore all level.
	  * 

	  * @return S_OK in case of success
	  *         E_FAIL in case of error
	  * 
	  * Attention: this code only runs on the database
	 */

	virtual HRESULT ExploreDocumentLinks  (
	  const SEQUENCE(octet) & iRootDocUuid, 
	  const CATListOfCATUnicodeString & iSelectClauseOnDoc,
	  const CATListOfCATUnicodeString & iSelectClauseOnRef, 
	  CATListOfCATIVpmLightExpandObject * &oLightObjects, 
	  int iRecusively )=0;


};

CATDeclareHandler( CATIVpmLightNavigationServices, CATBaseUnknown );

#endif








