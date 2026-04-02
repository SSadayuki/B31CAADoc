// COPYRIGHT DASSAULT SYSTEMES 1999
//===================================================================
//
// CATECharacCollector.h
// Provide default implementation of some methods of interface
//    CATICharacCollector for AnalysisSet and AnalysisEntity
//
//===================================================================
//
// Usage notes:
//
//===================================================================
#ifndef CATECharacCollector_H
#define CATECharacCollector_H
/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */
#include "CATIAV5Level.h"
#include "CATBaseUnknown.h"
#include "CATAnalysisResources.h"
#include "CATAnalysisExplicitTypes.h"

class CATString;
class CATSamCharacVersion;
class CATAnalysisExplicitModel;
class CATAnalysisExplicitParent;
class CATAnalysisCharacCollector;
class CATAnalysisCollectorArchiver;

//------------------------------------------------------------------

/**
 * Status of the CATAnalysisCharacCollector.
 * @param CollectorArchiveFlagRetrieved 
 *   The CATAnalysisCharacCollector has been retreived in the model with @href CATAnalysisExplicitParent#FindCharacCollector method.
 * @param CollectorArchiveFlagAcquired 
 *   The CATAnalysisCharacCollector has been created and filled by your implementation of CATICharacCollector.
 * @param CollectorArchiveFlagRetrieved 
 *   The CATAnalysisCharacCollector has been swapped to disk and retreived through an archiver.
 */

enum CollectorArchiveFlag
{
  CollectorArchiveFlagRetrieved,
  CollectorArchiveFlagAcquired,
  CollectorArchiveFlagArchived
} ;


/**
 * Adapter for the implementation of CATICharacCollector interface.
 * It can be used for both for AnalysisSet and AnalysisEntity.
 * @see CATICharacCollector, CATAnalysisCharacCollector, CATSamCharacVersion
 */

class ExportedByCATAnalysisResources CATECharacCollector: public CATBaseUnknown
{
  public:

/**
 * Default constructor.
 */
    CATECharacCollector();

/**
 * Destructor.
 */
    virtual ~CATECharacCollector();    

/**
 * Returns the list of available collector characteristic physical types for the current set.<br>
 * The unit category for each physical type is also returned.<br>
 * <b>This method must be redefined</b>.<br>
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
                                                  const CATSamPhysicalType* & oPhysicalTypes);

/**
 * Returns the list of versions for the current set, and a physical type.<br>
 * <b>This method must be redefined</b>.<br>
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
 * Returns the list of position identifiers for the current set, physical type and version identifier.<br>
 * <b>This method must be redefined</b>.
 * @param iPhysicalType
 *   The physical type
 * @param iVersion
 *   The version identifier.
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
 * Returns the list of occurrences for the current set.
 * <b>This method must be redefined</b>.<br>
 * @param oNumberOfOccurrences The number of occurrences.
 */
    virtual HRESULT GetNumberOfOccurrences(int & oNumberOfOccurrences) = 0 ;

/**
 * Returns the current occurrence number for the current set.
 * <b>This method must be redefined</b>.
 * @param oOccurrenceNumber The occurrence number.
 */
    virtual HRESULT GetCurrentOccurrence(int & oOccurrenceNumber) = 0 ;

/**
 * Sets the current occurrence number for the current set.
 * <b>This method must be redefined</b>.
 * @param iOccurrenceNumber The occurrence number.
 */
    virtual HRESULT SetCurrentOccurrence(const int iOccurrenceNumber) = 0 ;

/**
 * Asks to the implementing feature if a definition of a CATAnalysisCharacCollector is available.
 * Note that a complete definition means physical type, version and position identifier.
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
                                          CATBoolean                        & oIsCollectable);

/**
 * Returns a CATAnalysisCharacCollector. 
 * <b>This method must be redefined</b>.
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
 *   If a CATAnalysisCharacCollector of the correct version already exists
 *   it will be updated if it does not contain values for all of the entities.<br>
 *   If this pointer is NULL, then it is assumed that values for all entities are
 *   requested.
 * @param oCharacCollector
 *   A pointer to a CATAnalysisCharacCollector object.
 * @iCollectValues
 *   Indicates if the CATAnalysisCharacCollector object should be filled with the requested values or not.
 * @param iEntiyPhysicalTypeToCollect
 *   Allow to filter by physical the list of entities that are scanned for building the CATAnalysisCharacCollector.
 *   This parameter is not taken into account for our implementations. 
 */
    virtual HRESULT GetCharacCollector(const CATSamPhysicalType            iPhysicalType,
                                       const CATSamCharacVersion         & iVersion,
                                       const CATString                   & iPosition,
                                       const char* const                   iEntityFlags,
                                       const CATAnalysisCharacCollector* & oCharacCollector,
                                       const boolean                       iCollectValues = TRUE,
                                       const CATSamPhysicalType            iEntiyPhysicalTypeToCollect = CATSamPhysicalTypeNone) = 0 ;

/**
 * Returns an array of CATAnalysisCharacCollector describing the occurrences values.
 * @param oNbCharacCollectors
 *   The number of CATAnalysisCharacCollector objects.
 * @param oCharacCollectors
 *   An array of CATAnalysisCharacCollector objects.
 * @iCollectValues
 *   Indicates if the CATAnalysisCharacCollector object should be filled with the requested values or not.
 */
    virtual HRESULT GetCharacCollectorsForOccurrences(int                                       & oNbCharacCollectors,
                                                      const CATAnalysisCharacCollector* const * & oCharacCollectors,
                                                      const boolean                               iCollectValues = TRUE);

/**
 * Deletes an instance of CATAnalysisCharacCollector.
 * @param iCharacCollector
 *   The pointer on the instance of <b>CATAnalysisCharacCollector</b> to delete.
 */
    virtual HRESULT DeleteCharacCollector(const CATAnalysisCharacCollector* &iCharacCollector) ;

/**
 * Delete all instances of CATAnalysisCharacCollector.
 */
    virtual HRESULT DeleteAll() ;

/**
 * Update internal data.
 * <b>This method can be redefined, in this case, this adpter must be called.
 */
    virtual HRESULT Update(CATBoolean iFullUpdate = TRUE) ;

/**
 * Sets context Model for collect.
 * Defines the context for wich the CATAnalysisCharacCollector is computed.
 * This context may influence the sequential numbering of field model entities or the value itself,
 * (for example apply th positionning matrix of the analysis instance in an assembly)
 * @param iModelContext
 *   The pointer on the instance of <b>CATAnalysisExplicitModel</b>.
 */
  virtual HRESULT SetContextModel(const CATAnalysisExplicitModel* iModelContext);

/**
 * Gets context Model for collect.
 * Returns the context for wich the CATAnalysisCharacCollector is computed.
 * This context may influence the sequential numbering of field model entities or the value itself,
 * (for example apply th positionning matrix of the analysis instance in an assembly)
 * @param oModelContext
 *   The pointer on the instance of <b>CATAnalysisExplicitModel</b>.
 */
  virtual HRESULT GetContextModel(const CATAnalysisExplicitModel* &oModelContext);

/**
 * Return the Context.
 * @param oContext The Context is the explicit set or entity that represent the 
 * feature that implement the interface.
 */
  virtual HRESULT GetContext(CATAnalysisExplicitParent &oContext);

  protected:

/**
 * Check the Activity of the Feature.
 */
    virtual CATBoolean GetActivity();

/**
 * Get Collector archiving  autorization.
 * <b>This method should be redefined to allow collector archiving</b>.
 * @param oCanArchive 
 * <br><b>Legal values</b>:
 * <ul><li><font color="red">TRUE</font color="red"> Allow the archiving.</li>
 *     <li><font color="red">FALSE</font color="red"> Deny the archiving. <b>This is the default value.</b></li></ul>
 */
    virtual
    HRESULT IsAuthorizedToArchiveCollectors(CATBoolean & oCanArchive) const;

/**
 * Returns the associated collector archiver.
 * @param iPhysicalType The physical type
 * @param iVersion The version object.
 * @param iPosition The position identifier.
 * @param oGetCollectorArchiver The CATAnalysisCollectorArchiver object.
 */
    HRESULT GetCollectorArchiver(const CATSamPhysicalType        iPhysicalType,
                                 const CATSamCharacVersion     & iVersion,
                                 const CATString               & iPosition,
                                 CATAnalysisCollectorArchiver* & oGetCollectorArchiver);

/**
 * Assigns the associated collector archiver.
 * @param iPhysicalType The physical type
 * @param iVersion The version object.
 * @param iPosition The position identifier.
 * @param iSetCollectorArchiver The CATAnalysisCollectorArchiver object.
 * <b>Note: </b> If iSetCollectorArchiver is NULL, this will remove <br>
 * the CATAnalysisCollectorArchiver associated to the definition.
 */
    HRESULT SetCollectorArchiver(const CATSamPhysicalType      iPhysicalType,
                                 const CATSamCharacVersion   & iVersion,
                                 const CATString             & iPosition,
                                 CATAnalysisCollectorArchiver* iSetCollectorArchiver);

/**
 * Returns if CharacCollector has been built for all entities.
 * @param iCharacCollector The CATAnalysisCharacCollector.
 * @param oIsForAllEntities TRUE if the object is built for all entities.
 */
    HRESULT CollectorIsForAllEntities(const CATAnalysisCharacCollector* iCharacCollector,
                                            CATBoolean                & oIsForAllEntities);

/**
 * Creates the link from the XharacCollector to its archiver.
 * @param iCharacCollector The CATAnalysisCharacCollector.
 * @param iCollectorHadBeenAcquired The status of the archiver.
 */
    HRESULT AssignArchiverToCollector(const CATAnalysisCharacCollector* iCharacCollector,
                                            CollectorArchiveFlag        iCollectorHadBeenAcquired);

  private:
/** Friend class     */
    friend class CATESamCharacCollector;
/** Init Storage Area for CollectorArchivers     */
    HRESULT InitCollectorArchiversStorageArea();
/** Locate the Collector Archiver of a CharacCollector     */
    HRESULT LocateCollectorArchiver(const CATSamPhysicalType      iPhysicalType,
                                    const CATSamCharacVersion   & iVersion,
                                    const CATString             & iPosition,
                                    int                         & oPhysicalTypeIndex,
                                    int                         & oVersionIndex,
                                    int                         & oPositionIndex);
/** Reset Storage Area for CollectorArchivers    */
    HRESULT ResetCollectorArchiversStorageArea();
/** Reset Storage Area for Numbering Dependant CollectorArchivers    */
    HRESULT ResetNumberingDependantCollectorArchiversStorageArea();
 
/**
 * Constructors. No implementation provided. Just declared to avoid that 
 * someone could build this class.
 */
    CATECharacCollector(const CATECharacCollector &);
    CATECharacCollector& operator=(const CATECharacCollector &);
 
    // Data Members for CollectorArchiving
    int                              _NbPhysicalTypes;
    int*                             _NbVersions;
    int**                            _NbPositions;
    CATAnalysisCollectorArchiver**** _CollectorArchivers;
    const CATAnalysisExplicitModel*  _ModelContext;
    const CATAnalysisExplicitModel*  _LastModelContext;
};   

#endif


