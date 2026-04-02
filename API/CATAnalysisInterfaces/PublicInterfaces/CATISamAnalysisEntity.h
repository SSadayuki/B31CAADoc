#ifndef CATISamAnalysisEntity_h
#define CATISamAnalysisEntity_h
//==================================================================================
// COPYRIGHT DASSAULT SYSTEMES 2000  
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */
//==================================================================================
#include "CATIAV5Level.h"
#include "CATBaseUnknown.h"
#include "CATBoolean.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATLISTV_CATISpecObject.h"
#include "CATAnalysisInterface.h"
#include "CATSamDefs.h"
#include "CATUnicodeString.h"

class CATISamBasicComponent_var;
class CATISamAnalysisSupport_var;
class CATISamAnalysisSet_var;
class CATISpecObject_var;
class CATISamAnalysisModel;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamAnalysisEntity;
#else
extern "C" const IID IID_CATISamAnalysisEntity;
#endif
/**
 * Interface to define the Analysis entity.
 * <b>Role</b>:
 * This interface allows to 
 * <ul><li>Initialize an entity</li>
 *     <li>Retrieve the Basic components defined as parameters</li>
 *     <li>Retrieve the Analysis Model to which the entity is generated.</li></ul>
 *     <li>Complete the feature catalog definition.</li></ul>
 *     <li>Retrieve some feature catalog definition.</li></ul>
*/

class ExportedByCATAnalysisInterface CATISamAnalysisEntity : public CATBaseUnknown
{
	CATDeclareInterface;

	public:

/**
 * Initializes the analysis entity.
 * This Method is called after the entity is created and positioned. Do not use.
 */
	virtual HRESULT Initialize() = 0;

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
 * @param iBCName : List of Basic Components name, this is name of instance under the form : oStartUpName@oCatalogName?oClientId (For User defined Startups).
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

//======================================================================================
// Management of local sub entities.
/**
 * Removes a given entity from the list of local analysis Entities.
 * @param iEntity:  The local entity to remove.
 */
	virtual HRESULT RemoveAnalysisEntity(const CATISpecObject_var& iEntity) = 0;
/**
 * Adds the given entity to the list of local analysis Entities.
 * @param iEntity:  The local entity to refrerence.
 */
	virtual HRESULT AddAnalysisEntity(const CATISpecObject_var& iEntity) = 0;
/**
 * Retrieves the list of local entities.
 * @param oLocalEntities:  The Local entities.
 */
	virtual HRESULT GetLocalEntities(CATLISTV(CATBaseUnknown_var)* &oLocalEntities) = 0;
 /**
 * Retrieves the master entity. <br>
 * Only for Local AnalysisEntity
 * @param oEntity:  The mater entity.
 */
	virtual HRESULT GetFatherEntity(CATISpecObject_var& oEntity) = 0;

//======================================================================================

/**
 * Retrieves the FEM Model in which the entity is defined.
 * @param oFEMModel [out , CATBaseUnknown#Release]
 * The Finite Element Model in which the entity is defined.<br>
 * It implements CATISamAnalysisModel
 */
		virtual HRESULT GetFEMModel(CATISamAnalysisModel*& oFEMModel) = 0;

/**
 * Retrieves the Collect mode defined on the AnalysisEntity.
 * @param oCollectMode The collect mode.<br>
 */
		virtual HRESULT GetCollectMode(SAM_CollectParameter & oCollectMode) = 0;

/**
 * Sets the Collect mode defined on the AnalysisEntity.
 * @param iCollectMode The collect mode.<br>
 */
		virtual HRESULT SetCollectMode(SAM_CollectParameter & iCollectMode) = 0;

/**
 * Retrieves if the Entity is Local or Global.
 * @return TRUE if the entity is local.<br>
 */
		virtual CATBoolean IsLocal() = 0;

/**
 * Sets the Local mode defined on the AnalysisEntity.
 */
		virtual HRESULT SetLocal() = 0;

/**
 * Retrieves if the support selection needs to control that a meshpart is defined on the
 * body of the support.<br>
 * This control is done for Rsur, Redge, Mechanical feature support type.
 * @return TRUE if the control is required.<br>
 */
		virtual CATBoolean NeedMeshingControl() = 0;
/**
 * Sets if the support selection needs to control that a meshpart is defined on the
 * body of the support.<br>
 * This control is done for Rsur, Redge, Mechanical feature support type.
 * @param TRUE if the control is required.<br>
 */
		virtual HRESULT SetMeshingControl(CATBoolean iNeed) = 0;
/**
 * Retrieves the list of analysis sets that reference the analysis entity.
 * @param oListOfSets  Collection of analysis sets.
 */

    virtual HRESULT GetFatherSets(CATLISTV(CATBaseUnknown_var)* & oListOfSets) = 0;

/**
 * Returns the rights on this analysis entity.
 * <b>Legal values</b>:
 * <tt>TRUE</tt> The analysis entity is "locked".
 * <tt>FALSE</tt>  The Analysis entity can be modified.
 */
  virtual CATBoolean IsReadOnly () const = 0;

/**
 * Sets the rights on this analysis entity.
 * @param iRights: 
 * <b>Legal values</b>:
 * <tt>TRUE</tt> The analysis entity is locked..
 * <tt>FALSE</tt>  The analysis entity can be modified.
 */
  virtual void SetReadOnly (const CATBoolean iRights) = 0; 

/**
 * Retrieves the settings mode behavoir. <br>
 * <b>Legal values</b>:
 * <tt>TRUE</tt> The analysis entity manages automatic settings for basic component values.
 * <tt>FALSE</tt>  The analysis entity don't manage automatic settings for basic component values.
 */
  virtual CATBoolean GetSettingsMode() = 0;

/**
 * Sets the settings mode behavoir. <br>
 * @param iMode: 
 * <b>Legal values</b>:
 * <tt>TRUE</tt> The analysis entity manages automatic settings for basic component values.
 * <tt>FALSE</tt>  The analysis entity don't manage automatic settings for basic component values.
 */
  virtual HRESULT SetSettingsMode(CATBoolean iMode) =0;

/**
 * Appends a feature to this Analysis Entity. This feature will be aggregated as 
 * an output of the Entity.
 * @param iFeature The feature to be added.
 * @param iWithFieldModel Defines if a Field model Structure needs to be managed.
 * <b>Legal values</b>:
 * <tt>TRUE</tt> The Field model object associated to iFeature is created. For this the 
 * iFeature needs to have a Physical type.
 * <tt>FALSE</tt>  No Field model structure will be created.
 */
		virtual HRESULT AddOutputFeature(const CATISpecObject_var& iFeature,CATBoolean iWithFieldModel=FALSE) = 0;

/** 
 * Removes a feature to this Analysis Entity. This feature was previously added with the 
 * AddOutputFeature method. 
 * @param iFeature The feature to be removed.
 */
		virtual HRESULT RemoveOutputFeature(const CATISpecObject_var& iFeature) = 0;
/**
 * Retrieves all the Output Feature's responding to a given interface.
 * @param oFeatureList The collection of Feature's found.
 * @param iIntfIID Identifier of the interface filtering the kind of objects to find.
 */
		virtual HRESULT ListOutputFeature(CATLISTV(CATISpecObject_var)& oEntitiesList,
                                     const IID& iIntfIID) = 0;

/**
 * Appends a feature to this Analysis entity. 
 * This feature will be aggregated as an neutral of the entity.
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
 * This feature will be aggregated as an neutral of the entity.
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

CATDeclareHandler(CATISamAnalysisEntity,CATBaseUnknown);

#endif
