// COPYRIGHT DASSAULT SYSTEMES  1999
//=============================================================================
//
// CATAnalysisCharacCollector
//
//=============================================================================
//
// Usage Notes: manipulation of collector characteristics
//
//=============================================================================
// Juin 99   Creation                                                  JND, LBK
//=============================================================================
#ifndef CATAnalysisCharacCollector_H_
#define CATAnalysisCharacCollector_H_

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATSAM0Explicit.h"

#include "CATString.h"
#include "CATSamCharacVersion.h"
#include "CATAnalysisCollectorRoot.h"
#include "CATAnalysisExplicitParent.h"

class CATSamAxis;
class CATSamDimension;
class CATSamCharacVersion;
class CATMathTransformation;
class CATSamCollectorAdaptor;
class CATAnalysisCollectorArchiver;

/**
 * A collector characteristic is a characteristic obtained by combining the
 * information of basic characteristics over several entities.<br>
 * To initialise a collector characteristic you must use the following methods in this order:
 * <ul>
 * <li><b>SetContext</b>
 * <li><b>SetDefinition</b>
 * <li><b>SetNbEntities</b>
 * <li><b>SetEntities</b>
 * <li><b>SetDimension</b>
 * <li><b>SetValues</b>
 * <li><b>SetPositionUVWCoordinates, SetCoordinateSystems</b> (optional)
 * </ul>
 * @see CATAnalysisExplicitParent, CATSamCharacVersion, CATSamDimension, CATSamAxis
 */

class ExportedByCATSAM0Explicit CATAnalysisCharacCollector : public CATAnalysisCollectorRoot
{
  public:
/**
 * Default constructor.
 */
    CATAnalysisCharacCollector() ;

/**
 * Copy constructor.
 */
    CATAnalysisCharacCollector(const CATAnalysisCharacCollector & iCollector) ;

/**
 * Destructor.
 */
    virtual ~CATAnalysisCharacCollector() ;
  
/**
 * Dumps the contents of the collector characteristic.
 * @param oListOfString
 *   The List of CATUnicodeString.
 * @param iIndent
 *   The indentation level (one level represents 3 spaces).
 * @param iRecurse
 *   The number of recursion levels.
 * @param iLoopSize
 *   The size of loops.
 */
    void Dump(CATListValCATUnicodeString* oListOfString, 
              int iIndent = 0, int iRecurse = 1, int iLoopSize = 10) const;

/**
 * Dumps the contents of the collector characteristic.
 * @param iIndent
 *   The indentation level (one level represents 3 spaces).
 * @param iRecurse
 *   The number of recursion levels.
 * @param iLoopSize
 *   The size of loops.
 */
    void Dump(int iIndent = 0, int iRecurse = 1, int iLoopSize = 10) const;
  
/**
 * Obtains all the information defining the collector characteristic.
 * @param oPhysicalType
 *   The physical type.
 * @param oUnit
 *   The unit category identifier.
 * @param oVersion
 *   The version information (a <b>CATSamCharacVersion</b> object).
 * @param oPosition
 *   The position type identifier.<br>
 *   The pre-defined positions are : NONE, NODE, DOF, ELEMENT, EDGE, FACE, CENTER, NODE_OF_ELEMENT and GAUSS.
 * @param oOccurrenceNumber
 *   The occurrence number.
 * @param oEntityPhysicalType
 *   The physical type of the Entity used to build collector.
 * @see CATSamCharacVersion
 */
    HRESULT GetDefinition(CATSamPhysicalType  & oPhysicalType,
                          CATString           & oUnit,
                          CATSamCharacVersion & oVersion,
                          CATString           & oPosition,
                          int                 & oOccurrenceNumber,
                          CATSamPhysicalType  & oEntityPhysicalType) const ;
/**
 * Assigns all the information defining the collector characteristic.
 * @param iPhysicalType
 *   The physical type.
 * @param iUnit
 *   The unit category identifier.
 * @param iVersion
 *   The version information (a <b>CATSamCharacVersion</b> object).
 * @param iPosition
 *   The position type identifier.<br>
 *   The pre-defined positions are : NONE, NODE, DOF, ELEMENT, EDGE, FACE, CENTER, NODE_OF_ELEMENT and GAUSS.
 * @param iOccurrenceNumber
 *   The occurrence number.
 * @param iEntityPhysicalType
 *   The physical type of the Entity used to build collector (default all physical type are used).
 * @see CATSamCharacVersion
 */
    virtual HRESULT SetDefinition(CATSamPhysicalType          iPhysicalType,
                                  const CATString           & iUnit,
                                  const CATSamCharacVersion & iVersion,
                                  const CATString           & iPosition,
                                  const int                   iOccurrenceNumber,
                                  CATSamPhysicalType          iEntityPhysicalType = CATSamPhysicalTypeNone) ;

/**
 * Assigns the context Set or Entity to which this collector belongs.
 * @param iContext
 *   A reference to the explicit version of the context.
 * @param iAttachToModel
 *   Indicates if the collector should be attached to the explicit
 *   model or not.
 * @see CATAnalysisExplicitParent
 */
    virtual HRESULT SetContext(const CATAnalysisExplicitParent & iContext, CATBoolean iAttachToModel = TRUE);
  
/**
 * Compares all the information defining the collector characteristic with
 * another definition.
 * @param iPhysicalType
 *   The physical type.
 * @param iVersion
 *   A pointer to the version information (a <b>CATSamCharacVersion</b> object).
 * @param iPosition
 *   A pointer to the position type identifier.<br>
 *   The pre-defined positions are : NONE, NODE, DOF, ELEMENT, EDGE, FACE, CENTER, NODE_OF_ELEMENT and GAUSS.
 * @param iOccurrenceNumber
 *   The occurrence number.
 * @param iEntityPhysicalType
 *   The physical type of the Entity used to build collector (default all physical type are used).
 * @see CATSamCharacVersion
 */
    CATBoolean CompareDefinition(CATSamPhysicalType    iPhysicalType,
                                 const CATSamCharacVersion & iVersion,
                                 const CATString           & iPosition,
                                 const int                   iOccurrenceNumber,
                                 CATSamPhysicalType          iEntityPhysicalType = CATSamPhysicalTypeNone) const ;
 
/**
 * Sets the number of entities for which the collector characteristic has information.
 * @param iNbEntities
 *   The number of entities.<br>
 *   If 0, then the number is deduced from the context and the definition.
 */
    virtual 
    HRESULT SetNbEntities(int iNbEntities = 0) ;
  
/**
 * Assigns the entities for which the collector characteristic has values.
 * @param iEntityFlags[NbEntities]
 *   A pointer to the table of entity flags indicating which entities
 *   should have their values collected.<br>
 *   A copy of the contents of the table will be made.
 */
    virtual 
    HRESULT SetEntities(const char* iEntityFlags) ;
  
/**
 * Obtains the dimension information per entity.
 * @param oNbDimensions
 *   The number of <b>CATSamDimension</b> objects (at least one).
 * @param oDimensions[NbDimensions]
 *   A pointer to the table of <b>CATSamDimension</b> objects.
 * @param oDimensionPointers[NbEntities]
 *   A pointer to the table of pointers to the <b>CATSamDimension</b> objects for each entity.<br>
 *   If NULL, then all the entities use <b>Dimensions[0]</b>.
 * @see CATSamDimension
 */
    HRESULT GetDimensions(int                            & oNbDimensions,
                          const CATSamDimension*         & oDimensions,
                          const CATSamDimension* const * & oDimensionPointers) const ;
    
/**
 * Assigns the dimension information per entity.
 * @param iNbDimensions
 *   The number of <b>CATSamDimension</b> objects (at least one).
 * @param iDimensions[NbDimensions]
 *   A pointer to the table of <b>CATSamDimension</b> objects.<br>
 *   A copy of the contents of the table will be made.
 * @param iDimensionPointers[NbEntities]
 *   A pointer to the table of pointers to the <b>CATSamDimension</b> objects for each entity.<br>
 *   A copy of the contents of the table will be made.<br>
 *   If NULL, then all the entities use <b>Dimensions[0]</b> and <b>NbDimensions</b> must be equal to 1.
 *   All non NULL entries of this table must point to an entry in <b>Dimensions</b>.
 * @see CATSamDimension
 */
    virtual
    HRESULT SetDimensions(int                            iNbDimensions,
                          const CATSamDimension*         iDimensions,
                          const CATSamDimension* const * iDimensionPointers) ;
  
/**
 * Obtains the UVW coordinates of the positions per entity.
 * @param oNbUVW
 *   The number of different UVW positions.
 * @param oUVW[3*NbUVW]
 *   A pointer to the different UVW positions.
 * @param oUVWPointers[NbEntities]
 *   A pointer to the table of pointers to the UVW positions for each entity.
 */
    HRESULT GetPositionUVWCoordinates(int                  & oNbUVW,
                                      const float*         & oUVW,
                                      const float* const * & oUVWPointers) const ;
  
/**
 * Assigns the UVW coordinates of the positions per entity.
 * @param iNbUVW
 *   The number of different UVW positions.<br>
 *   If 0, then <b>UVWPointer</b> must be non NULL.
 * @param iUVW[3*NbUVW]
 *   A pointer to the different UVW positions.<br>
 *   A copy of the contents of the table will be made.<br>
 *   If NULL, then <b>UVWPointer</b> must be non NULL.
 * @param iUVWPointers[NbEntities]
 *   A pointer to the table of pointers to the UVW positions for each entity.<br>
 *   A copy of the contents of the table will be made.<br>
 *   All non NULL entries of this table must point to an entry in <b>UVW</b>
 *   unless <b>UVW</b> is NULL.
 */
    virtual 
    HRESULT SetPositionUVWCoordinates(int                  iNbUVW,
                                      const float*         iUVW,
                                      const float* const * iUVWPointers) ;
  
/**
 * Obtains the XYZ coordinates of the positions.
 * @param oXYZPointers[NbElements+1]
 *   A pointer on a table of indices, in the <b>XYZPositions</b> and
 *   <b>XYZDisplacements</b> tables, of the first position for each element.
 * @param oXYZPositions[XYZPointers[NbElements]]
 *   The XYZ coordinates of the positions before any displacement.
 * @param oXYZDisplacements[XYZPointers[NbElements]]
 *   The XYZ displacement at each XYZ position.
 */
    HRESULT GetPositionXYZCoordinates(const int *  &oXYZPointers,
                                      const float* &oXYZPositions,
                                      const float* &oXYZDisplacements) const ;
/**
 * Assigns the XYZ coordinates of the positions.
 * @param iXYZPointers[NbElements+1]
 *   A pointer on a table of indices, in the <b>XYZPositions</b> and
 *   <b>XYZDisplacements</b> tables, of the first position for each element.
 * @param iXYZPositions[XYZPointers[NbElements]]
 *   The XYZ coordinates of the positions before any displacement.
 * @param iXYZDisplacements[XYZPointers[NbElements]]
 *   The XYZ displacement at each XYZ position.
 */
    virtual 
    HRESULT SetPositionXYZCoordinates(const int *  iXYZPointers,
                                      const float* iXYZPositions,
                                      const float* iXYZDisplacements) ;
/**
 * Obtains the coordinate system information per entity.
 * @param oNbAxes
 *   The number of <b>CATSamAxis</b> objects (at least one).
 * @param oAxes[NbAxes]
 *   A pointer to the table of <b>CATSamAxis</b> objects.
 * @param oAxisPointers[NbEntities]
 *   A pointer to the table of pointers to the <b>CATSamAxis</b> objects for each entity.<br>
 *   If NULL, then all the entities use <b>Axes[0]</b>.
 * @see CATSamAxis
 */
    HRESULT GetCoordinateSystems(int                       & oNbAxes,
                                 const CATSamAxis*         & oAxes,
                                 const CATSamAxis* const * & oAxisPointers) const ;

/**
 * Assigns the coordinate system information per entity.
 * @param iNbAxes
 *   The number of <b>CATSamAxis</b> objects (at least one).
 * @param iAxes[NbAxes]
 *   A pointer to the table of <b>CATSamAxis</b> objects.<br>
 *   A copy of the contents of the table will be made.
 * @param iAxisPointers[NbEntities]
 *   A pointer to the table of pointers to the <b>CATSamAxis</b> objects for each entity.<br>
 *   A copy of the contents of the table will be made.<br>
 *   If NULL, then all the entities use <b>Axes[0]</b> and <b>NbAxes</b> must be equal to 1.
 *   All non NULL entries of this table must point to an entry in <b>Axes</b>.
 * @see CATSamAxis
 */  
    virtual 
    HRESULT SetCoordinateSystems(int                       iNbAxes,
                                 const CATSamAxis*         iAxes,
                                 const CATSamAxis* const * iAxisPointers) ;
  
/**
 * Obtains the values of the collector characteristic.
 * @param oNbValues
 *   The total number of values.<br>
 *   It is obtained by adding the number of values for each entity which has a
 *   non NULL entry in the <b>ValuePointers</b> table.<br>
 *   In general is it <b>NOT</b> the same as the <b>NbValues</b> provided to the
 *   <b>SetValues</b> method.
 * @param oSizeValues
 *   The total size in bytes of the values (= NbValues * sizeof(value type)).
 * @param oValuePointers[NbEntities]
 *   A pointer to the table of pointers to the values for each entity.
 */
    HRESULT GetValues(int                 & oNbValues,
                      int                 & oSizeValues,
                      const void* const * & oValuePointers) const ;

/**
 * Assigns the values of the collector characteristic.
 * @param iNbValues
 *   The number of values.
 * @param iSizeValues
 *   The size in bytes of the values (= NbValues * sizeof(value type)).
 * @param iValues[NbValues]
 *   A pointer to the memory location where the values are stored.<br>
 *   A copy of the values will be made unless the pointer is NULL.<br>
 *   If NULL, then <b>ValuePointers</b> is required.
 * @param iValuePointers[NbEntities]
 *   A pointer to the table of pointers to the values for each entity.<br>
 *   A copy of the contents of the table will be made unless the pointer is NULL.<br>
 *   If NULL, then <b>Values</b> is required and <b>ValuePointers</b> will be created.<br>
 *   Non NULL entries in this table are not required to point exclusively into
 *   the <b>Values</b> table.
 */
    virtual 
    HRESULT SetValues(int                 iNbValues,
                      int                 iSizeValues,
                      const void*         iValues,
                      const void* const * iValuePointers) ;

/**
 * Obtains the UpToDate state of this collector.
 * <br> Inline Method. <br>
 */
    virtual CATBoolean IsUpToDate() const ;

/**
 * Obtains the Streamable state of this collector characteristic.
 */
    CATBoolean IsStreamable() const ;
  
/**
 * Assigns the Streamable state of this collector characteristic.
 * @param iIsStreamable
 *   The Streamable state.
 */
    HRESULT SetStreamable(CATBoolean iIsStreamable) ;

/**
 * Obtains a status on the coherency of this collector characteristic.
 * This method should be called before use a Collector.
 */
    CATBoolean IsACoherentCollector() const ;

/**
 * Return if this collector characteristic contain values.
 * This method should be called before a call to th method GetValues.
 */
    CATBoolean IsCollectorContainValues() const ;
  
/**
 * Converts the collector characteristic to a new version (if possible).
 * @param iVersion
 *   A pointer to the version information (a <b>CATSamCharacVersion</b> object).
 * @see CATSamCharacVersion
 */
    HRESULT Convert(const CATSamCharacVersion & iVersion) ;

/**
 * Check if the collector's values can be combined.
 */
    CATBoolean CanCombineValues() const;
  
/**
 * Combine the values of the collector for entities which support repetitions.
 * The combined collector must be released after use.
 * @param iCollectorToCombine
 *   A pointer to the collector to combine.
 * @param iCollectorToCombine
 *   A pointer to the combined collector.
 * @param iAttacheToModel
 *   The combined collector is attached or not in the Model.
 * @param iDuplicateCollector
 *   The collector to combine is copied before being combined.
 */
    static HRESULT CombineValues(const CATAnalysisCharacCollector*   iCollectorToCombine,
                                 const CATAnalysisCharacCollector* & oCollectorCombined,
                                 CATBoolean                          iAttachToModel = TRUE) ;

/**
 * Obtains the first valued entity number.<br>
 * this methods should be called only after a call to <li><b>SetValues</b>.<br>
 */
    virtual int GetFirstValuedEntity() const;

/**
 * Obtains the last valued entity number.<br>
 * this methods should be called only after a call to <li><b>SetValues</b>.<br>
 */
    virtual int GetLastValuedEntity() const;

/**
 * Obtains the number of valued entities.<br>
 * this methods should be called only after a call to <li><b>SetValues</b>.<br>
 */
    virtual int GetNbValuedEntities() const;

/**
 * Return TRUE if an Entity is Valued, FALSE otherwise.<br>
 * this methods should be called only after a call to <li><b>SetValues</b>.<br>
 * @param iEntityNumber
 *   The entity number.
 */
    virtual CATBoolean IsValuedEntity(int iEntityNumber) const;

  private:
    // Friend Class for Private Methods
    friend class CATECharacCollector;
    friend class CATSamModelDataRoot;
    friend class CATSamCollectorBuilder;
    friend class CATSamCollectorAdaptor;
    friend class CATSamCollectorValuesId;
    friend class CATSamModelCharacteristic;
    friend class CATSamCollectorAggregator;
    friend class CATCharacCollectorConvertor;
    friend class CATESamCharacCollectorForSet;
    friend class CATAnalysisCollectorArchiver;
    friend class CATAnalysisCollectorServices;
    friend class CATESamCharacCollectorStatistic;
    friend class CATCharacCollectorFactoryForSet;
    friend class CATAnalysisCharacCollectorPacked;
    friend class CATESamCharacCollectorForMeshSet;
    friend class CATESamCharacCollectorForProxyEntity;
    friend class CATESamCharacCollectorForCombinedEntity;
    friend class CATCharacCollectorFactoryForLocalEntity;

    // Stream the object.
    // @param ioStream  : The streaming buffer.
    // @param iVersion  : The version of stream.
    // @param iPhase    : The phase of the stream.<br>
    HRESULT Stream(CATSamStream &ioStream, int iVersion) ;

    // Unstream the object.
    // @param iStream       : The unstreaming buffer.
    // @param iVersion      : The version of stream.
    // @param iModel        : A pointer to the field model into which the object will be created.
    // @param iAllPointers  : A pointer to the array of all pointers of the field model objects.
    HRESULT UnStreamOld(CATSamStream &iStream, int iVersion, const CATAnalysisExplicitModel *iModel, CATSamExplicitPtr *iAllPointers) ;

    // Unstream the object.
    // @param iStream       : The unstreaming buffer.
    // @param iVersion      : The version of stream.
    // @param iModel        : A pointer to the field model into which the object will be created.
    // @param iDocUnstream  : To specifie if Unstream is called by a Document Unstream or a Paging Operation.
    HRESULT UnStream(CATSamStream &iStream, int iVersion, const CATAnalysisExplicitModel *iModel, CATBoolean iDocUnstream = TRUE);

    // SetBuildTime
    HRESULT SetBuildTime(CATLONG32 iBuildTime);
    // GetBuildTime
    HRESULT GetBuildTime(CATLONG32 &oBuildTime) const;

    // Pack
    virtual HRESULT Pack();
    // IsPackedType
    CATBoolean IsPackedType() const;
    // IsPacked
    virtual CATBoolean IsPacked() const;
    // IsFragmented
    virtual CATBoolean IsFragmented() const;

    // IsNumberingDependant
    HRESULT CheckIsNumberingDependant();
    inline const CATBoolean& IsNumberingDependant() const;

    // SetArchiver
    HRESULT SetArchiver(const CATAnalysisCollectorArchiver* iArchiver);
    // GetArchiver
    HRESULT GetArchiver(const CATAnalysisCollectorArchiver* & oArchiver) const;
    // Internal GetValues
    HRESULT GetValues(int &oNbValues, int &oSizeValues, const void* &oValues, const void* const * &oValuePointers) const ;

    // Reset &  Clean
    HRESULT Reset();
    HRESULT Clean();

    // CombineValues()
    HRESULT CombineValues();
    
    // ApplyTransformation
    HRESULT ApplyTransformation(const CATMathTransformation& iTransformation);

    // SetValuedEntitiesInterval
    virtual HRESULT SetValuedEntitiesInterval(int iFirstValuedEntity, int iLastValuedEntity);

    // Allocate & Deallocate Memory
    virtual HRESULT AllocateArea(void** ioArea, size_t iSize);
    HRESULT DeallocateArea(void** ioArea);

    // Assignement operator
    CATAnalysisCharacCollector &operator = (const CATAnalysisCharacCollector & iCollector) ;
    
    // SetDuplicateDimensionRemovalActivity
    HRESULT SetDuplicateDimensionRemovalActivity(CATBoolean iRemoveDuplicate) const;

  protected:
    //DATA MEMBERS
    CATSamCharacVersion           _Version ;
    CATSamPhysicalType            _PhysicalType ;
    CATSamPhysicalType            _EntityPhysicalType ;
    CATString                     _Unit;
     
    int                           _NumOccurrence ;
    int                           _NbValuedEntities ;
    int                           _FirstValuedEntity;
    int                           _LastValuedEntity;
    int                           _NbDimensions ;
    CATSamDimension*              _Dimensions ;
    const CATSamDimension**       _DimensionPointers ;
  
    int                           _NbUVW ;
    float*                        _UVW ;
    const float**                 _UVWPointers ;

    int*                          _XYZPointers ;
    float*                        _XYZPositions ;
    float*                        _XYZDisplacements ;

    int                           _NbAxes ;
    CATSamAxis*                   _Axes ;
    const CATSamAxis**            _AxisPointers ;
  
    int                           _NbValues ;
    int                           _SizeValues ;
    int                           _NbValuesDuplicated ;
    int                           _SizeValuesDuplicated ;
    void*                         _Values ;
    const void**                  _ValuePointers ;

    CATBoolean                    _AllocatorActivity ;
    CATBoolean                    _CanBeStreamed ;
    CATBoolean                    _PackDimension;
    CATBoolean                    _IsStreamable ;
    CATBoolean                    _IsPackedType;

    CATLONG32                     _AllocationMode ;
    CATLONG32                     _BuildTime ;
    CATAnalysisCollectorArchiver* _Archiver ;
} ;
// =============================================================================
// const CATBoolean& CATAnalysisCharacCollector::IsNumberingDependant(...) const
// =============================================================================
inline const CATBoolean& CATAnalysisCharacCollector::IsNumberingDependant() const
{
  return _IsNumberingDependant;
}

#endif
