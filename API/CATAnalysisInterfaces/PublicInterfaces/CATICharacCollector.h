// COPYRIGHT DASSAULT SYSTEMES 1999
//===================================================================
//
// CATICharacCollector.h
// Define the CATICharacCollector interface
//
//===================================================================
#ifndef CATICharacCollector_H
#define CATICharacCollector_H
/**
 * @CAA2Level L1
 * @CAA2Usage U4 CATECharacCollector
 */

#include "CATString.h"
#include "CATBaseUnknown.h"
#include "CATAnalysisInterface.h"
#include "CATAnalysisExplicitDefinitions.h"

class CATSamCharacVersion;
class CATAnalysisExplicitModel;
class CATAnalysisExplicitParent;
class CATAnalysisCharacCollector;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATICharacCollector ;
#else
extern "C" const IID IID_CATICharacCollector ;
#endif

/**
 * Capability for a feature to return collector's.
 * Interface designed to ensure the possibility for analysis
 * features to give access to collector characteristics.
 * This interface must be implemented on feature build by derivation of AnalysisSet or AnalysisEntity
 * with a physical type defined.
 * <p><b>BOA information</b>: this interface CANNOT be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 * @see CATAnalysisCharacCollector, CATSamCharacVersion
 */
class ExportedByCATAnalysisInterface CATICharacCollector: public CATBaseUnknown
  {
  CATDeclareInterface;

  public:

/**
 * Retrieves the list of available collector characteristic physical types for the current set.<br>
 * The unit category for each physical type is also returned.
 * @param oNumber
 *   The number of different physical types (can be 0).
 * @param oPhysicalTypes[Number]
 *   A pointer to the table of physical types.
 * @param oUnits[Number]
 *   A pointer to the table of unit category identifiers.
 */
  virtual HRESULT GetAvailablePhysicalTypes(int                       & oNumber,
                                            const CATSamPhysicalType* & oPhysicalTypes,
                                            const CATString*          & oUnits) = 0 ;

/**
 * Retrieves the list of available Entities physical types for a Charac PhysicalTypes.<br>
 * @param iCharacPhysicalType
 *   The charac physical type
 * @param oNumber
 *   The number of different physical types (can be 0).
 * @param oPhysicalTypes[Number]
 *   A pointer to the table of physical types.
 */
  virtual HRESULT GetAvailableEntityPhysicalTypes(CATSamPhysicalType          iCharacPhysicalType,
                                                  int                       & oNumber,
                                                  const CATSamPhysicalType* & oPhysicalTypes) = 0;
  
/**
 * Retrieves the list of versions for the current set, and a physical type.
 * Only non combined versions are retrieved.
 * @param iPhysicalType
 *   The physical type
 * @param oNumber
 *   The number of different versions.
 * @param oVersions[Number]
 *   A pointer to the table of versions (<b>CATSamCharacVersion</b> objects).
 * @see CATSamCharacVersion
 */
  virtual HRESULT GetAvailableVersions(const CATSamPhysicalType     iPhysicalType,
                                       int                        & oNumber,
                                       const CATSamCharacVersion* & oVersions) = 0 ;
    
/**
 * Retrieves the list of position identifiers for the current set, physical type and version identifier.
 * @param iPhysicalType
 *   The physical type
 * @param iVersion
 *   The version identifier.<br>
 * @param oNumber
 *   The number of different positions.
 * @param oPositions[Number]
 *   A pointer to the table of position identifiers.<br>
 *   The pre-defined positions are : NONE, NODE, DOF, ELEMENT, EDGE, FACE, CENTER, NODE_OF_ELEMENT and GAUSS.
 */
  virtual HRESULT GetAvailablePositions(const CATSamPhysicalType    iPhysicalType,
                                        const CATSamCharacVersion & iVersion,
                                        int                       & oNumber,
                                        const CATString*          & oPositions) = 0 ;

/**
 * Retrieves the list of occurrences for the current set.
 * @param oNumberOfOccurrences
 *  0 means Single Occurrence.<br>
 *  N (N>0) means Multi Occurrence.<br>
 */
  virtual HRESULT GetNumberOfOccurrences(int & oNumberOfOccurrences) = 0 ;

/**
 * Retrieves the current occurrence number for the current set.
 * @param oOccurrenceNumber
 *   For Single Occurrence returns -1.<br>
 *   For Multi Occurrence returns [0,n-1] or -1 if the Charac not linked to any particular Occurrence or to all of them.<br>
 */
  virtual HRESULT GetCurrentOccurrence(int & oOccurrenceNumber) = 0 ;

/**
 * Set the current occurrence number for the current set.
 * @param iOccurrenceNumber
 */
  virtual HRESULT SetCurrentOccurrence(const int iOccurrenceNumber) = 0 ;

/**
 * Check if a complete definiton (physical type, position identifier, version) of a
 * <b>CATAnalysisCharacCollector</b> on the implementing feature is available.
 * @param iPhysicalType
 *   The physical type
 * @param iVersion
 *   The version (<b>CATSamCharacVersion</b> object).
 * @param iPosition
 *   The position identifier.<br>
 *   The pre-defined positions are : NONE, NODE, DOF, ELEMENT, EDGE, FACE, CENTER, NODE_OF_ELEMENT and GAUSS.
 * @param oIsCollectable
 *   The definition is availability status for the complete definition.
 * @see CATSamCharacVersion, CATAnalysisCharacCollector.
 */
  virtual HRESULT IsAnAvailableDefinition(const CATSamPhysicalType            iPhysicalType,
                                          const CATSamCharacVersion         & iVersion,
                                          const CATString                   & iPosition,
                                          CATBoolean                        & oIsCollectable) = 0 ;

/**
 * Retrieves a pointer on a <b>CATAnalysisCharacCollector</b> on the implementing feature 
 * according to the physical type, position identifier, version and list of entities.
 * To obtain a CharacCollector with combined values:
 * <ul>
 * <li> Use the method GetCharacCollector with a Version with ValuesAreCombined set to TRUE. </li>
 * <li> If the method returns a null CharacCollector, use again the method with the same Version 
 * and attribute ValuesAreCombined set to FALSE.</li>
 * <li> Call the class method CATAnalysisCharacCollector::CombineValues().</li>
 * </ul>
 * @param iPhysicalType
 *   The physical type
 * @param iVersion
 *   The version (<b>CATSamCharacVersion</b> object).
 * @param iPosition
 *   The position identifier.<br>
 *   The pre-defined positions are : NONE, NODE, DOF, ELEMENT, EDGE, FACE, CENTER, NODE_OF_ELEMENT and GAUSS.
 * @param iEntityFlags[NbEntities]
 *   A pointer to the table of entity flags indicating which entities should
 *   have their values collected.<br>
 *   If a <b>CATAnalysisCharacCollector</b> of the correct version already exists
 *   it will be updated if it does not contain values for all of the entities.<br>
 *   If this pointer is NULL, then it is assumed that values for all entities are
 *   requested.
 * @param oCharacCollector
 *   A pointer to a <b>CATAnalysisCharacCollector</b> object.
 * @iCollectValues
 *   Indicates if the <b>CATAnalysisCharacCollector</b> object should be filled
 *   with the requested values or not.
 * @iEntiyPhysicalTypeToCollect
 *   Indicates the Physical Type of the Entities which will be use to collect
 *   the Characs. If not specified all the entities will be use.
 *   Available Physical Types to collect a Charac can be obtain by the Method
 *   <b>GetAvailableEntityPhysicalTypes</b>.
 * @see CATSamCharacVersion, CATAnalysisCharacCollector.
 */
  virtual HRESULT GetCharacCollector(const CATSamPhysicalType            iPhysicalType,
                                     const CATSamCharacVersion         & iVersion,
                                     const CATString                   & iPosition,
                                     const char* const                   iEntityFlags,
                                     const CATAnalysisCharacCollector* & oCharacCollector,
                                     const CATBoolean                    iCollectValues = TRUE,
                                     const CATSamPhysicalType            iEntiyPhysicalTypeToCollect = CATSamPhysicalTypeNone) = 0 ;

/**
 * Retrieves an array of pointer on the <b>CATAnalysisCharacCollector</b> of the occurrences for the current set.
 * @param oNbCharacCollectors
 *   The number of <b>CATAnalysisCharacCollector</b> objects.
 * @param oCharacCollectors
 *   An array of pointer to <b>CATAnalysisCharacCollector</b> objects.
 * @iCollectValues
 *   Indicates if the <b>CATAnalysisCharacCollector</b> object should be filled
 *   with the requested values or not.
 */
  virtual HRESULT GetCharacCollectorsForOccurrences(int                                       & oNbCharacCollectors,
                                                    const CATAnalysisCharacCollector* const * & oCharacCollectors,
                                                    const CATBoolean                            iCollectValues = TRUE) = 0 ;

/**
 * Delete the instance of <b>CATAnalysisCharacCollector</b> pointed by the parameter iCharacCollector.
 * @param iCharacCollector
 *   The pointer on the instance of <b>CATAnalysisCharacCollector</b> to delete.
 */
  virtual HRESULT DeleteCharacCollector(const CATAnalysisCharacCollector* &iCharacCollector) = 0 ;

/**
 * Delete all instances of <b>CATAnalysisCharacCollector</b> created under the current Feature.
 */
  virtual HRESULT DeleteAll() = 0 ;

/**
 * Update internal data.
 */
  virtual HRESULT Update(CATBoolean iFullUpdate = TRUE) = 0 ;

/**
 * Set context Model for collect.
 * Defines the context for wich the Characcollector is computed.
 * This context may influence the sequential numbering of field model entities or the value itself,
 * (for example apply th positionning matrix of the analysis instance in an assembly)
 * @param iModelContext
 *   The pointer on the instance of <b>CATAnalysisExplicitModel</b>.
 */
  virtual HRESULT SetContextModel(const CATAnalysisExplicitModel* iModelContext) = 0 ;
  
/**
 * Get context Model for collect.
 * Return the context for wich the Characcollector is computed.
 * This context may influence the sequential numbering of field model entities or the value itself,
 * (for example apply th positionning matrix of the analysis instance in an assembly)
 * @param oModelContext
 *   The pointer on the instance of <b>CATAnalysisExplicitModel</b>.
 */
  virtual HRESULT GetContextModel(const CATAnalysisExplicitModel* &oModelContext) = 0 ;

/**
 * Return the Context.
 * @param oContext The Context is the explicit set or entity that represent the 
 * feature that implement the interface.
 */
    virtual HRESULT GetContext(CATAnalysisExplicitParent &oContext) = 0;

};

//------------------------------------------------------------------

CATDeclareHandler( CATICharacCollector, CATBaseUnknown );

#endif
