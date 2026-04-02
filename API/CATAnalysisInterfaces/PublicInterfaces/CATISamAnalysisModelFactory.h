#ifndef CATISamAnalysisModelFactory_h
#define CATISamAnalysisModelFactory_h
//=================================================================================
// COPYRIGHT DASSAULT SYSTEMES 1999  

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */
//=================================================================================
#include "CATAnalysisInterface.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATString.h"
#include "CATISpecObject.h"
#include "CATICkeRelationForwards.h"

class CATILinkableObject;
class CATISpecObject;
class CATISamAnalysisSupport;
class CATISamAnalysisCase;
class CATISamAnalysisSet;
class CATISamAnalysisConnector;
class CATICkeParm;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamAnalysisModelFactory;
#else
extern "C" const IID IID_CATISamAnalysisModelFactory;
#endif

/**
 * Interface to create Analysis Features.
 * <b>Role:</b> Interface designed to create all kinds of Analysis data.<br>
 * @see CATISamAnalysisEntity , CATISamAnalysisSet , CATISamAnalysisCase
 */ 

class ExportedByCATAnalysisInterface CATISamAnalysisModelFactory : public CATBaseUnknown
{
	CATDeclareInterface;

	public:

/**
 * Creates an Analysis Case.
 * @param iName The name of the Analysis Case to be created under the form : oStartUpName@oCatalogName?oClientId (For User defined Startups).
 * @return  CATBaseUnknown#Release
 * The created Analysis Case. @see CATISamAnalysisCase.
 */
		virtual CATISamAnalysisCase* CreateAnalysisCase(const CATUnicodeString& iName) = 0;
/**
 * Creates a Load Set.
 * @param iName Name of the Load Set to be created under the form : oStartUpName@oCatalogName?oClientId (For User defined Startups).
 * @param iContainingObject Pointer to the Analysis Model used for creation and that will aggregate the set.
 * @return  CATBaseUnknown#Release
 * The load Set created. @see CATISamAnalysisSet.
 */	
		virtual CATISamAnalysisSet* CreateLoadSet(const CATUnicodeString& iName,CATISpecObject* iContainingObject = NULL) = 0;
/**
 * Creates a Restraint Set.
 * @param iName Name of the Restraint Set to be created under the form : oStartUpName@oCatalogName?oClientId (For User defined Startups).
 * @param iContainingObject Pointer to the Analysis Model used for creation and that will aggregate the set.
 * @return  CATBaseUnknown#Release
 * The restraint Set created. @see CATISamAnalysisSet.
 */	
		virtual CATISamAnalysisSet* CreateRestraintSet(const CATUnicodeString& iName,CATISpecObject* iContainingObject = NULL) = 0;
/**
 * Creates a User Set.
 * @param iType Late Type of the User Set to be created (from a spec object point on view) under the form : oStartUpName@oCatalogName?oClientId (For User defined Startups).
 * @param iName Name of the User Set to be created.
 * @param iContainingObject Pointer to the Analysis Model used for creation and that will aggregate the set.
 * @param iStartUp, if API Fails, then its user responsibility to CreateStartUP using CATOsmSUhandler and send to function
 * @return  CATBaseUnknown#Release
 * The user set created. @see CATISamAnalysisSet.
 */
		virtual CATISamAnalysisSet* CreateUserSet(const CATUnicodeString& iType,
                                							const CATUnicodeString& iName,
                                              CATISpecObject* iContainingObject = NULL,
											 CATISpecObject_var iStartup = NULL_var) = 0;
/**
 * Creates an Analysis Entity.
 * @param iName Name of the Analysis Entity to be created. 
 * @param iType Late Type of the Analysis Entity to be created (from a spec object point on view) under the form : oStartUpName@oCatalogName?oClientId (For User defined Startups).
 * @param iContainingObject Pointer to the Analysis Model used for creation and that will aggregate the set.
* @param iStartUp, if API Fails, then its user responsibility to CreateStartUP using CATOsmSUhandler and send to function 
 * @return  CATBaseUnknown#Release
 * The analysis entity created. @see CATISamAnalysisEntity.
 */
		virtual CATISpecObject* CreateAnalysisEntity(const CATUnicodeString& iName,
                                                 const CATUnicodeString& iType,
                                              CATISpecObject* iContainingObject = NULL,
											 CATISpecObject_var iStartup = NULL_var) = 0;

/**
 * Creates an Analysis Connector.
 * @param iPointedObject        CATILinkableObject to be linked.
 * @param iPositionningObject   CATILinkableObject for positionning.
 * @param iType                 CATUnicodeString: "GeometrySmartConnector" may be used.
 * @param iUpdateMode           Update Mode 
 * <ul> <li> iUpdateMode = 0 : default behaviour </i>
 *      <li> iUpdateMode = 1 : time stamp is updated if iPointedObject is a BRep </li></ul>
 * @return  CATBaseUnknown#Release
 * The connector created. @see CATISamAnalysisConnector.
 */
		virtual CATISamAnalysisConnector* CreateConnector(const CATILinkableObject* iPointedObject,
                                                      const CATILinkableObject* iPositionningObject,
                                                      const CATUnicodeString& iType = NULL,
                                                      int iUpdateMode = 0) = 0;


/**
 *  Creates an Analysis Measure Feature.
 *  This Object is designed for Analysis Measures based on parameters defined with Formulas.
 *  @param iType  string representing the kind of measures to create under the form : oStartUpName@oCatalogName?oClientId (For User defined Startups). <br> 
 *  "AnalysisMeasureWithProgram" is the basic late Type, It can be derived or used directly.
 *  @param iListOfParameters (pointer on list of CATBaseUnknown_var) contains literal used as inputs or outputs.
 *  @param iBody contains the string describing the program.
 *  @param iSensorContainer The Sensor set in which the measure will be created.
 *  @return  CATBaseUnknown#Release
 *  The created measure. This Object implements CATISamSensor interface.
 *  @see CATISamSensor
 */
		virtual CATISpecObject* CreateAnalysisMeasure(const CATUnicodeString&   iType,
      											                      const CATCkeListOfParm    iListOfParameters,
			                          		              const CATUnicodeString    &iBody,
                                                  const CATISpecObject*     iSensorContainer = NULL) = 0;

/** 
 *  Creates an Analysis Link Feature.
 *  This Object is designed to create a link to external documents.
 *  @param iLinkType  string representing the kind of document to be linked under the form : oStartUpName@oCatalogName?oClientId (For User defined Startups).
 *  @param iType  Late Type Of the feature to create (If NULL_string a SAMFeatureLink will be created).
 *  @return  CATBaseUnknown#Release
 *  The created analysis link. 
 */
		virtual CATISpecObject* CreateAnalysisLink(const CATString iLinkType = "SAMLink",
                                               const CATUnicodeString& iType = "") = 0;

/** 
 *  Creates an Analysis Sensor.
 *  This Object is designed for Analysis Measures.
 *  @param iType  string representing the kind of measures to create under the form : oStartUpName@oCatalogName?oClientId (For User defined Startups). <br> 
 *  "AnalysisSensor" is the basic late Type, It can be derived or used directly.
 *  @param iIdentifier  string representing the name of measures to create. 
 *  @param iSensorContainer The Sensor set in which the measure will be created.
 *  @return  CATBaseUnknown#Release
 *  The created measure. This Object implements CATISamSensor interface.
 *  @see CATISamSensor
 */
		virtual CATISpecObject* CreateAnalysisSensor(const CATUnicodeString&   iType,
                                                 const CATUnicodeString&   iIdentifier,
                                                 const CATISpecObject*     iSensorContainer = NULL) = 0;

/** 
 *  Duplicate a CATISamAnalysisConnector feature.
 * Create new connector by duplication. (Same type & same attribute valuation).
 *  @return  CATBaseUnknown#Release
 *  The created connector.
 *  @see CATISamAnalysisConnector
 */
		virtual CATISamAnalysisConnector* DuplicateConnector(const CATISamAnalysisConnector* iconnector) = 0;


};

CATDeclareHandler (CATISamAnalysisModelFactory , CATBaseUnknown );
#endif
