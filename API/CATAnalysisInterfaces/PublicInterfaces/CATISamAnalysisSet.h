#ifndef CATISamAnalysisSet_h
#define CATISamAnalysisSet_h
//=================================================================================
// COPYRIGHT DASSAULT SYSTEMES 1999  

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */
//=================================================================================

#include "CATBaseUnknown.h"
#include "CATBoolean.h"
#include "CATLISTV_CATISpecObject.h"
#include "CATAnalysisInterface.h"
#include "CATLISTV_CATISamAnalysisSet.h"
#include "CATSamDefs.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATLISTV_CATISpecObject.h"

class CATISamBasicComponent_var;
class CATUnicodeString;
class CATISamAnalysisModel;
class CATListValCATISamAnalysisSet_var;
class CATISamAnalysisManager;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamAnalysisSet;
#else
extern "C" const IID IID_CATISamAnalysisSet;
#endif


/**
 * <b>SAM_ScanCriterium:</b> Enumerate to manage search varaibles.<br>
 * @param Scan_with_name 
 *  The name of the set is a criteria for the search.
 * @param Scan_with_type 
 *  The type of the set is a criteria for the search.
 * @param Scan_both 
 *  The name and type of the set is a criteria for the search.
 */

enum SAM_ScanCriterium 
{
	Scan_with_name,
	Scan_with_type,
	Scan_both
};

/**
 * Interface to manage the Analysis Sets.
 * <b>Role:</b> Interface designed to manage <b>Analysis Set behavior</b>.<br>
 * <p>
 * In the Analysis Model, an <b>Analysis Set</b> is the data 
 * dedicated to manage the <b>Analysis Entities</b>. 
 * <p>
 * Also, it provides some services dedicated to Analysis links between sets. It
 * also provides scan services about those links.
 * @see SAM_ScanCriterium , SAM_Status , CATISamAnalysisEntity
 */ 

class ExportedByCATAnalysisInterface CATISamAnalysisSet : public CATBaseUnknown
{
	CATDeclareInterface;

	public:

/**
 * Initializes the analysis set.
 * This Method is systematically called after the set creation. Do not use.
 */
	virtual HRESULT Initialize() = 0;

/**
 * Retrieves the FEM Model in which the set is included.
 * Remember that a set can be a component of a unique FEM Model.
 * @param oFEMModel [out , CATBaseUnknown#Release]
 * The parent FEM Model .
 */
		virtual HRESULT GetFEMModel(CATISamAnalysisModel*& oFEMModel) const = 0;

//=================================================================================
/**
 * Appends an analysis entity to the current Analysis Set.
 * @param iEntity The feature to be added.
 * @param iQuality The quality of the entity.
 * <br><b>Legal values</b>:
 * <ul> <li> <font color="red">Sam_IN</font> To Plug the entity as input of the set.</li>
 *      <li> <font color="red">Sam_OUT</font> To Plug the entity as output of the set..</li></ul>
 * <font color="red">Default Value is Sam_IN.</font>
 * @param iAddInverseLink. If iQuality == Sam_OUT, sets the set as input of the entity.
 * This mechanism allows to flag the entity not uptodate if the set is modified.
 */
		virtual HRESULT AddAnalysisEntity(const CATISpecObject_var& iEntity,
                                      SAM_Quality iQuality = Sam_IN, CATBoolean iAddInverseLink = FALSE ) = 0;
/**
 * Removes an analysis entity from the current Analysis Set.
 * This method will remove the link from an analysis set to an analysis entity. 
 * For complete remove of analysis entities, use @href CATISamAnalysisModel#RemoveAnalysisFeature
 * @param iEntity 
 * The feature to be removed.
 * @param iQuality The quality of the entity. <font color="red">Default Value is Sam_IN.</font>
 */
		virtual HRESULT RemoveAnalysisEntity(const CATISpecObject_var& iEntity,
                                         SAM_Quality iQuality = Sam_IN) = 0;
/**
 * Retrieves analysis entity with a given type.
 * @param iType 
 * The type used for search.
 * @param oEntitiesList
 * The collection of entities whose type is <b>iType</b>.
 * @param iQuality The quality of the entity. <font color="red">Default Value is Sam_IN.</font> 
 */
		virtual HRESULT GetTypedEntity(const CATUnicodeString& iType,
							                     CATLISTV(CATISpecObject_var)& oEntitiesList,
                                   SAM_Quality iQuality = Sam_IN) const = 0;
/**
 * Retrieves analysis entity with a given name.
 * <p>
 * Entities have a unique Name in the context of an Analysis Set.
 * @param iName 
 * The name used for search.
 * @param oEntity
 * The entity whose name is <b>iName</b>.
 * @param iQuality The quality of the entity. <font color="red">Default Value is Sam_IN.</font>
 */
		virtual HRESULT GetNamedEntity(const CATUnicodeString& iName,
                                   CATISpecObject_var& oEntity,
                                   SAM_Quality iQuality = Sam_IN) const = 0;

/**
 * Retrieves all the entities responding to a given interface.
 * @param oEntitiesList
 * The collection of entities found.
 * @param iIntfIID
 * identifier of the interface filtering the kind of objects to find.
 * @param iQuality The quality of the entity. <font color="red">Default Value is Sam_IN.</font>
 */
		virtual HRESULT GetAllDatas(CATLISTV(CATISpecObject_var)& oEntitiesList,
                                const IID& iIntfIID,
                                SAM_Quality iQuality = Sam_IN) const = 0;
  
//=================================================================================
 /**
 * Returns the status of the Analysis Set.
 */
		virtual  SAM_Status GetStatus() const = 0 ;		
/**
 * Sets the status of the Analysis Set.
 * @param iStatus SAM_Status be modified on the set.
 */
		virtual  void SetStatus(SAM_Status iStatus) = 0;	

 //=================================================================================
/** 
 * Links to a list of Sets. 
 * <br><b>Note</b>: 
 * <ul><li> Each set of the list must be in the same document of the current one.</li>
 *	   <li>	Quality of the feature link is Neutral.</li>
 *	   <li>	No view of this link is created inside the field model.</li></ul>
 * @param iLinks
 * The collection of Set to be connected
 * @param ToPlug
 * The connection mode
 */
		virtual HRESULT ConnectTo(CATLISTV(CATISamAnalysisSet_var)& iLinks,int ToPlug = 1) = 0;

/** 
 * Retrieves the list of linked Sets.
 * @param oLinks
 * Collection of CATISamAnalysisSet_var to be connected
 * @param iLevel
 * Indicates the number of level you want to scan in the hierarchy. <br>
 * (-1) indicates no limit in the search. It is the default value.
 */
		virtual HRESULT GetConnected(CATLISTV(CATISamAnalysisSet_var)& oLinks,int iLevel = -1) = 0;
/** 
 * Adds childrens to Set.
 * <br><b>Note</b>: 
 * <ul><li> Each set of the list must be in the same document of the current one.</li>
 *	   <li>	Quality of the feature link is Neutral.</li>
 *	   <li>	No view of this link is created inside the field model.</li></ul>
 * @param iSons
 * Collection of Set to be connected
 * @param ToPlug
 * Connection mode
 */
		virtual HRESULT AddSons(CATLISTV(CATISamAnalysisSet_var)& iSons,int ToPlug = 1) = 0;

/** 
 * Retrieves the children list of a Set.
 * @param oSons
 * Collection of children.
 * @param iLevel
 * The number of level you want to scan in the hierarchy. <br>
 * (-1) indicates no limit in the search. It is the default value.
 */

		virtual HRESULT GetSons(CATLISTV(CATISamAnalysisSet_var)& oSons,int iLevel = -1) = 0;

/** 
 * Scan service for sets links according to name and type.
 * @param oLinks
 * The collection of CATISamAnalysisSet found regarding the input criteria.
 * @param iCriterium
 * The search criterion with Name, Type or both criterion.
 * @param iName
 * The name you are looking for
 * @param iType
 * The type you are looking for
 * @param iDirection
 * The searching direction 
 * <br><b>Legal values</b>: 
 * <ul><li> 0 : upward. </li>
 *	   <li>	2 : downward.</li></ul>
 * @param iPartial
 * The ability to search with a substring of the name or the type.<br> Default value is 0
 * i.e. you are searching with the whole word
 * @param iLevel
 * The number of levels you want to scan in the hierarchy. <br> -1 indicates
 * no limit in the search. It is the default value
 */
		virtual HRESULT Scan(CATLISTV(CATISamAnalysisSet_var)& oLinks,SAM_ScanCriterium iCriterium,
                         const CATUnicodeString& iName,const CATUnicodeString& iType,
                         int iDirection = 0,int iPartial = 0,int iLevel = -1) = 0;

//=================================================================================
/**
 * Retrieves the Analysis Manager of the Model.
 * @param oAnalysisManager [out , CATBaseUnknown#Release]
 * The Analysis Manager of the Model.
 */
		virtual HRESULT GetAnalysisManager(CATISamAnalysisManager*& oAnalysisManager) const = 0;

//=================================================================================
/**
 * Retrieves the basic component corresponding to a given name.
 * @param iName name of the basic components.
 * @param oComponents pointer used to returned the list.
 */
		virtual HRESULT GetNamedBasicComponent(const CATUnicodeString& iName, CATISamBasicComponent_var& oComponent) const = 0;


/**
 * Retrieves the list of basic components corresponding to a given type.
 * If no type is given, every component is returned.
 * Warning : you have to deal with the list destruction.
 * @param oComponents  pointer used to returned the list.
 * @param iType The type of the basic component.
 */
		virtual HRESULT GetBasicComponents(CATLISTV(CATBaseUnknown_var)* &oComponents,const CATUnicodeString& iType=NULL) const = 0;

/**
 * Adds an optional Basic component to an AnalysisEntity.
 * Returns the identifiers of the optional basic components
 * @param iBCName : List of Basic Components name, this is name of instance.
 * @param iLiteralName: List of Basic Components name, this is name of startup.
 * @param iType : Used only in the case of Literal features. CATICkeType of the literal to derive.<br>
 * For Example,  use static CATICkeType_var MyLength = CATIParmDictionary::LengthType to create a length dimension.
 * @see CATIParmDictionary
 * @param iType 
 */
		virtual HRESULT AddBasicComponent(const CATUnicodeString& iBCName,
                                      const CATUnicodeString& iLiteralName=NULL,
                                      const CATBaseUnknown_var& iType = NULL_var ) const = 0;

/**
 * Removes an optional Basic componentto an AnalysisEntity.
 * @param iBCName  the name of the Basic Component to remove.
 */
		virtual HRESULT RemoveBasicComponent(const CATUnicodeString& iBcName) const = 0;

//=================================================================================
/**
 * Removes links to a list of Sets.
 * @param iLinks  The Collection of Set to be deconnected.
 * @param ToPlug  The connection mode.
 * <br><b>Legal values</b>: 
 * <ul><li>0</li>: upward.</li>
 *	   <li>2</li>: downward.</li></ul>
 */
		virtual HRESULT DeConnectTo(CATLISTV(CATISamAnalysisSet_var)& iLinks,int ToPlug = 1) = 0;

//=================================================================================
/**
 * Returns the rights on this analysis set.
 * <b>Legal values</b>:
 * <tt>TRUE</tt> The analysis set is "locked", No entity can be added or deleted.
 * <tt>FALSE</tt>  The Analysis set can be modified.
 */
  virtual CATBoolean IsReadOnly () const = 0;

/**
 * Sets the rights on this analysis set.
 * @param iRights: 
 * <b>Legal values</b>:
 * <tt>TRUE</tt> The analysis set is locked, No entity can be added or deleted.
 * <tt>FALSE</tt>  The analysis set can be modified.
 */
  virtual void SetReadOnly (const CATBoolean iRights) = 0; 

//=================================================================================
/**
 * Appends a feature to this Analysis Set. 
 * This feature will be aggregated as an output of the set.
 * <br><b>Note</b>: 
 * <ul><li> This feature must be in the same document of the current one.</li>
 *	   <li>	Quality of the feature link is Output.</li>
 *	   <li>	A view of this link can be created in the field model according to iWithFieldModel.</li></ul>
 * @param iFeature The feature to be added.
 * @param iWithFieldModel Defines if a Field model Structure needs to be managed.
 * <b>Legal values</b>:
 * <tt>TRUE</tt> The Field model object associated to iFeature is created. For this the 
 * iFeature needs to have a Physical type.
 * <tt>FALSE</tt>  No Field model structure will be created.
 */
		virtual HRESULT AddOutputFeature(const CATISpecObject_var& iFeature,CATBoolean iWithFieldModel=FALSE) = 0;

/** 
 * Removes a feature to this Analysis Set.
 * This feature was previously added with the AddOutputFeature method. 
 * @param iFeature The feature to be removed.
 */
		virtual HRESULT RemoveOutputFeature(const CATISpecObject_var& iFeature) = 0;

/**
 * Retrieves all the Output Feature's responding to a given interface.
 * @param oFeatureList The collection of Feature's found.
 * @param iIntfIID Identifier of the interface filtering the kind of objects to find.
 */
		virtual HRESULT ListOutputFeature(CATLISTV(CATISpecObject_var)& oEntitiesList,
                                     const IID& iIntfIID) const = 0;


//=================================================================================
/**
 * Retrieves the list of analysis cases that reference the analysis set.
 * For a set defined inside the analysis model, anlysis model will be returned.
 * @param oListOfCases  Collection of analysis cases.
 */

    virtual HRESULT GetFatherCases(CATLISTV(CATBaseUnknown_var)* & oListOfCases) const = 0;

//=================================================================================

/**
 * Appends a feature to this Analysis Set. 
 * This feature will be aggregated as an neutral of the set.
 * <br><b>Note</b>: 
 * <ul><li> This feature must be in the same document of the current one.</li>
 *	   <li>	Quality of the feature link is Neutral.</li>
 *	   <li>	No view of this link can be created in the field model.</li>
 *	   <li>	This feature will be shown in the feature tree and for 3D vizualisation.</li></ul>
 * @param iFeature The feature to be added.
 */
    virtual HRESULT AddNeutralFeature(const CATISpecObject_var& iFeature) = 0;

/**
 * Removes a feature to this Analysis Set. 
 * This feature will be aggregated as an neutral of the set.
 * @param iFeature The feature to be removed.
 */
    virtual HRESULT RemoveNeutralFeature(const CATISpecObject_var& iFeature) = 0;

/**
 * Retrieves all the Neutral Feature's responding to a given interface.
 * @param oFeatureList The collection of Feature's found.
 * @param iIntfIID Identifier of the interface filtering the kind of objects to find.
 */
		virtual HRESULT ListNeutralFeatures(CATLISTV(CATISpecObject_var)& oEntitiesList,const IID& iIntfIID) const = 0;

/**
 * Removes all the Neutral Feature's responding to a given interface.
 * @param oFeatureList The collection of Feature's found.
 * @param iIntfIID Identifier of the interface filtering the kind of objects to find.
 */
    virtual HRESULT RemoveAllNeutralFeatures(const IID& iIntfIID)= 0;
};

CATDeclareHandler(CATISamAnalysisSet,CATBaseUnknown);

#endif




