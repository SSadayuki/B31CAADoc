#ifndef CATISamAnalysisSupport_h
#define CATISamAnalysisSupport_h
//=================================================================================
// COPYRIGHT DASSAULT SYSTEMES 1999  

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */
//=================================================================================

#include "CATBaseUnknown.h"
#include "CATAnalysisInterface.h"
#include "CATSamDefs.h"
#include "CATUnicodeString.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "booleanDef.h"
#include "CATBoolean.h"

class CATILinkableObject;
class CATISpecObject;
class CATISamAnalysisConnector;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamAnalysisSupport;
#else
extern "C" const IID IID_CATISamAnalysisSupport;
#endif
/**
 * Interface to Analysis Support.
 * <b>Role:</b> Interface designed to manage <b>Analysis Support</b>.<br>
 * This interfaces is implemented on AnalysisEntity, and some basic components like:
 * SAMSingleGeomPtr, SAMMultiGeomPtr. It allows to setup, valuate, retrieve and remove the connectors
 * to the pointed objects. <br>
 * @see CATISamAnalysisConnector 
 */ 

class  ExportedByCATAnalysisInterface CATISamAnalysisSupport : public CATBaseUnknown
{
	CATDeclareInterface;

	public:

/**
 *  Retrieves the authorized types. 
 *  These types are defined as a bit mask as defined for the startup definition.
 *  @param oType The type of support that can be used. 
 */
		virtual HRESULT GetAuthorizedSupports(SAM_SupportId& oType) const = 0;


/**
 *  Retrieves an enumerations combination describing the kind of defined entities.
 *  @param oType The type of support that can be used (specific to analysis entities).
 */
	    virtual HRESULT GetAvailableSupport(SAM_SupportId& oType) const = 0;

/**
 *  Adds an entity to the definition of the Analysis support.
 *	Both of the parameters can not be null. <p>
 *  Warning! Even if an entity description is added several times, it will be added once.
 *  This entity is described by a couple of data as defined for an analysis connector.
 *	@param iLinkable CATILinkableObject that identify the object to be pointed.
 *	@param iSpecObject CATISpecObject that identify the object to be pointed for positionning management and
 *  instance/reference management. (Most current use is the CATIProduct Feature object).
 *	@param iType to be set as "GeometrySmartConnector"
 */
	    virtual HRESULT AddEntity (const CATILinkableObject* iLinkable,const CATISpecObject* iSpecObject,
                                 const CATUnicodeString& iType = NULL) = 0;

/**
 *  Removes an entity from the definition of the Analysis support.
 *  This entity is described by a couple of data as defined for an analysis connector.
 *	@param iLinkable CATILinkableObject that identify the object to be pointed.
 *	@param iSpecObject CATISpecObject that identify the object to be pointed for positionning management and
 *  instance/reference management. (Most current use is the CATIProduct Feature object).
 *	@param iType to be set as "GeometrySmartConnector"
 */
		virtual HRESULT RemoveEntity (const CATILinkableObject* iSupport,const CATISpecObject* iSpecObject,
                                  const CATUnicodeString& iType = NULL) = 0;

/**
 *  The given data description can be added if it isn't already bound, 
 *	else it is removed from the support, or may be substitute to another
 *	description.
 *  This entity is described by a couple of data as defined for an analysis connector.
 *	@param iLinkable CATILinkableObject that identify the object to be pointed.
 *	@param iSpecObject CATISpecObject that identify the object to be pointed for positionning management and
 *  instance/reference management. (Most current use is the CATIProduct Feature object).
 *	@param oModifStatus: A flag that defines how the new entity has been switched in the support:
 * <br><b>Legal values</b>: 
 * <ul><li> <font color="red">0</font color="red">: It has been REMOVED because it was already in the support.</li>
 *	<li><font color="red">1</font color="red">: It has been ADDED because it wasn't in the support yet.</li>
 *	<li><font color="red">2</font color="red">: It has been SUBSTITUTEED to another data of the same kind.</li></ul>
 *	@param iType: define the type of analysis connector used to bind given data.<br> To be set as"GeometrySmartConnector"
 */
		virtual HRESULT SwitchEntity (const CATILinkableObject* iLinkable,
									  const CATISpecObject*	iSpecObject,
									  int& oModifStatus, 
									  const CATUnicodeString& iType = NULL) = 0;

/**
 *  Retrieves the entities corresponding to the given interface identifier.
 *	The returned list is supposed to contain connectors that can be valuable
 *  as connectors.
 *	Each connector corresponds to a support entity. It binds the defining
 *	couple of data.
 */
		virtual HRESULT GetEntities (CATLISTV(CATBaseUnknown_var)& oSupport,
									 const IID &iid) const = 0;

/**
 *  Returns the number of bound entities in the support.
 *	@param oEntitiesNumber Number of valid support found.
 */
		virtual HRESULT GetEntitiesNumber (int& oEntitiesNumber) const = 0;

/**
 *  Returns the minimum and the maximum numbers of entities needed to have
 *	a consistent definition of the support.
 *  If oMinNumber is less than 0, there is no minimal amount.
 *	If oMaxNumber is less than 0, there is no maximal amount.
 *	@param oMinNumber Minimal number of connector to define the support.
 *	@param oMaxNumber Maximal number of connector to define the support.
 * 
 */
		virtual HRESULT GetMinAndMaxEntitiesNumber (int& oMinNumber, 
													int& oMaxNumber) const = 0;
/**
 * @nodoc
 *  Retrieves the entities that can no more be valuated.
 *	The returned list is supposed to contain connectors that can no more be solved 
 *  as a connector's attributes
 *	@param oSupport :
 *			List of non-valuable connectors.
 */
		virtual HRESULT GetNonSolvedSupport (CATLISTV(CATBaseUnknown_var)& oSupport) = 0;

/**
 *  Removes all the support defined on an Analysis Entity.
 */
		virtual HRESULT RemoveAllSupports () = 0;

/**
 * Setups the authorized types. 
 * These types are defined as a bit mask defined in CATSamDefs for the startup definition.
 * @param iType The type of support that can be used. 
 * @param iAdd Addition mode:
 * <br><b>Legal values</b>: 
 * <ul><li><font color="red">0</font color="red">: SupportId is replaced.</li>
 *	   <li><font color="red">1</font color="red">: SupportId is added.</li></ul>
 */

    virtual HRESULT SetAuthorizedSupports(SAM_SupportId iType, int iAdd=0) = 0;

/**
 *  Setups the minimum and the maximum numbers of entities needed to have
 *	a consistent definition of the support for the startup definition.
 *  If iMinNumber is less than 0, there is no minimal amount.
 *	If iMaxNumber is less than 0, there is no maximal amount.
 *	@param oMinNumber Minimal number of connector to define the support.
 *	@param oMaxNumber Maximal number of connector to define the support.
 * 
 */
		virtual HRESULT SetMinAndMaxEntitiesNumber (int iMinNumber,int iMaxNumber) = 0;

/**
 *  Retrieves the list of analysis connectors.
 *	Each connector corresponds to a support entity. It defines the couple of pointed data.
 *	No controle is done on the validity of the connector. It can be empty.
 *	@param oSupport Collection of AnalysisConnector.
 */
    virtual HRESULT GetEntities (CATLISTV(CATBaseUnknown_var)& oSupport) const = 0;

/**
 *  Sets the list of analysis connectors.
 *  This methode is dedicated for support definition at the level of a startup. For this, 
 *  use the @href CATISamAnalysisModelFactory#CreateConnector and put the returned connector
 *  in the iSupport List. Each connector corresponds to a support entity. 
 *  It defines the couple of pointed data.
 *  No controle is done on the validity of the connector. It can be empty.
 *	@param iRemove Empty the list or set up at the end.
 * <br><b>Legal values</b>:
 * <ul>
 * <li><font color="red">1</font color="red"> Existing connectors will be removed. </li>
 * <li><font color="red">2</font color="red"> New connectors will be added to existing one.  </li>
 * </ul>
 *	@param iSupport Collection of AnalysisConnector.
 */
		virtual HRESULT SetEntities (int iRemove, const CATLISTV(CATBaseUnknown_var)& iSupport) const = 0;

/**
 * @nodoc
 *  Removes the entities that can no more be valuated.
 */
		virtual HRESULT RemoveNonSolvedSupport () = 0;

 /**
 * Removes a connector.
 * @param ipiConnector The connector to remove.
 */
    virtual HRESULT RemoveConnector (const CATISamAnalysisConnector* ipiConnector ) = 0;

/**
 * Sets update behaviour.
 * @param iMode 
 * <br><b>Legal values</b>:
 * <ul>
 * <li><font color="red">1</font color="red"> The analysisEntity or a basic component that selects a BRep 
 * (ex: SAMSingleGeomPtr, SAMMultiGeomPtr) has to be informed 
 * when the BRep (particular pointed object) is modified. </li>
 * <li><font color="red">0</font color="red"> Otherwise.  </li>
 * </ul>
 */
    virtual HRESULT SetUpdateMode(int iMode) = 0 ;

/**
 * Retrieves update behaviour.
 * @param oMode
 * <br><b>Legal values</b>:
 * <ul>
 * <li><font color="red">1</font color="red"> The analysisEntity or a basic component that selects a BRep 
 * (ex: SAMSingleGeomPtr, SAMMultiGeomPtr) has to be informed 
 * when the BRep (particular pointed object) is modified. </li>
 * <li><font color="red">0</font color="red"> Otherwise.  </li>
 * </ul>
*/
    virtual HRESULT GetUpdateMode(int & oMode) const = 0;

/**
 * Sets the default connector type.
 * @param iType the connector type.
 * <br><b>Default value</b>: 
 * <ul><li>If not specified a <font color="red">GeometrySmartConnector</font color="red"> will be created.</li>
 *     <li>If specified a connector build by derivation of GeometrySmartConnector is required.</li></ul>
 * <b>Note that this method must be used on startup and not on feature instance.</b>
 */
    virtual HRESULT SetConnectorType(const CATUnicodeString & iType) = 0 ;

/**
 * Retrieves  the default connector type.
 * @return the connector type.
*/
    virtual CATUnicodeString GetConnectorType() const = 0;

/**
 * Sets if boundary representations of a MechanicalTool-Body can be selected.
 * This method must be used on a 
 * @param iBRepAuthorized
 * <ul><li> <font color="red">TRUE</font color="red"> Boundary representations of a MechanicalTool-Body may be selected </li>
 *     <li> <font color="red">FALSE</font color="red"> Boundary representations of a MechanicalTool-Body can't be selected </li> </ul>
 */
    virtual HRESULT SetBodyControl(CATBoolean iBRepAuthorized) = 0 ;

/**
 * Retrieves if boundary representations of a MechanicalTool-Body can be selected.
 * @param oBRepAuthorized
 * <ul> <li> <font color="red">TRUE</font color="red"> Boundary representations of a MechanicalTool-Body may be selected </li>
 *      <li> <font color="red">FALSE</font color="red"> Boundary representations of a MechanicalTool-Body can't be selected </li> </ul>
*/
    virtual HRESULT GetBodyControl(CATBoolean &oBRepAuthorized) const = 0;

/**
 *  Check if a support can be added in an entity.
 *  This support is described by a couple of data as defined for an analysis connector.
 *	@param iPointed      CATILinkableObject that identify the object to be pointed.
 *	@param iPositionning CATISpecObject that identify the object to be pointed for positionning management and
 *  instance/reference management. (Most current use is the CATIProduct Feature object).<br>
 *  This method delegated its answer to CATISamSupportFilter is the object is implementing this interface, <br> 
 *  else SAM_SupportId of iPointed is checked.
 *  @return HRESULT 
 * <br><b>Legal values</b>:
 * <ul><li><font color="red">S_OK</font color="red"> Valid Support./li>
 *     <li><font color="red">E_FAIL</font color="red"> Otherwise.  </li></ul>
 *
 */
    virtual HRESULT CheckSupport (const CATILinkableObject* iPointed,const CATISpecObject* iPositionning) const = 0;

};

CATDeclareHandler(CATISamAnalysisSupport,CATBaseUnknown);

#endif
