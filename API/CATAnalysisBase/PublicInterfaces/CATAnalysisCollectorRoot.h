// COPYRIGHT DASSAULT SYSTEMES  1999
//=============================================================================
//
// CATAnalysisCollectorRoot
//
//=============================================================================
//
// Usage Notes: manipulation of Collector
//
//=============================================================================
// Fevrier 2002 Creation                                                    JND
//=============================================================================
#ifndef CATAnalysisCollectorRoot_H_
#define CATAnalysisCollectorRoot_H_

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATSAM0Explicit.h"

#include "CATString.h"
#include "CATAnalysisExplicitParent.h"


/**
 * A collector is an object obtained by combining the
 * information of basic characteristics over several entities.<br>
 */

class ExportedByCATSAM0Explicit CATAnalysisCollectorRoot
{
  public:
/**
 * Default constructor.
 */
    CATAnalysisCollectorRoot() ;

/**
 * Copy constructor.
 */
    CATAnalysisCollectorRoot(const CATAnalysisCollectorRoot & iCollector) ;

/**
 * Destructor.
 */
    virtual ~CATAnalysisCollectorRoot() ;

/**
 * Dumps the contents of the collector.
 * @param oListOfString
 *   The List of CATUnicodeString.
 * @param iIndent
 *   The indentation level (one level represents 3 spaces).
 * @param iRecurse
 *   The number of recursion levels.
 * @param iLoopSize
 *   The size of loops.
 */
    virtual void Dump(CATListValCATUnicodeString* oListOfString, 
                      int iIndent = 0, int iRecurse = 1, int iLoopSize = 10) const;

/**
 * Dumps the contents of the collector.
 * @param iIndent
 *   The indentation level (one level represents 3 spaces).
 * @param iRecurse
 *   The number of recursion levels.
 * @param iLoopSize
 *   The size of loops.
 */
    virtual void Dump(int iIndent = 0, int iRecurse = 1, int iLoopSize = 10) const;

/**
 * Obtains the context Set or Entity to which this collector belongs.
 * @param oContext
 *   A reference to the explicit version of the context.
 * @see CATAnalysisExplicitParent
 */
    virtual HRESULT GetContext(CATAnalysisExplicitParent & oContext) const ;
  
/**
 * Assigns the context Set or Entity to which this collector belongs.
 * @param iContext
 *   A reference to the explicit version of the context.
 * @param iAttachToModel
 *   Indicates if the collector should be attached to the explicit
 *   model or not.
 * @see CATAnalysisExplicitParent
 */
    virtual HRESULT SetContext(const CATAnalysisExplicitParent & iContext,
                               CATBoolean                  iAttachToModel = TRUE);

/**
 * Obtains the number of entities for which the collector has information.
 * @param oNbEntities
 *   The number of entities.
 */
    virtual HRESULT GetNbEntities(int & oNbEntities) const ;
 
/**
 * Sets the number of entities for which the collector has information (Only for CharacCollector).
 * @param iNbEntities
 *   The number of entities.<br>
 *   If 0, then the number is deduced from the context and the definition.
 * @see CATAnalysisCharacCollector
 */
    virtual HRESULT SetNbEntities(int iNbEntities = 0) ;
   
/**
 * Obtains the entities for which the collector has values.
 * @param oEntityFlags[NbEntities]
 *   A pointer to the table of entity flags indicating which entities
 *   had their values collected.
 */
    virtual HRESULT GetEntities(const char* & oEntityFlags) const ;
  
/**
 * Assigns the entities for which the collector has values (Only for CharacCollector).
 * @param iEntityFlags[NbEntities]
 *   A pointer to the table of entity flags indicating which entities
 *   should have their values collected.<br>
 *   A copy of the contents of the table will be made.
 * @see CATAnalysisCharacCollector
 */
    virtual HRESULT SetEntities(const char* iEntityFlags) ;

/**
 * Indicates if this collector is attached to the model or not.
 */
    inline const CATBoolean& IsAttachedToModel() const ;
  
/**
 * Attaches or detaches this collector from the model.
 * @param iIsAttachedToModel
 *   The CATBoolean indicating the required action.
 * @param iCharacteristic
 *   The pointer to the basic characteristic to which this collector
 *   is linked to.<br>
 *   It is only used when detaching and if it is NULL, then it will be searched for.
 * @param iDeleteCharacteristic
 *   If the collector is to be detached, then this parameter indicates
 *   if the basic characteristic must be deleted or not.
 */
    HRESULT SetAttachedToModel(CATBoolean           iIsAttachedToModel,
                               CATSamExplicitPtr    iCharacteristic = NULL,
                               CATBoolean           iDeleteCharacteristic = FALSE) ;

/**
 * Obtains the UpToDate state of this collector.
 * <br> Inline Method. <br>
 */
    virtual CATBoolean IsUpToDate() const ;

/**
 * Obtains the Streamable state of this collector.
 */
    virtual CATBoolean IsStreamable() const ;
  
/**
 * Assigns the UpToDate state of this collector.
 * <br> Inline Method. <br>
 * @param iIsUpToDate
 *   The UpToDate state.
 */
    HRESULT SetUpToDate(CATBoolean iIsUpToDate);

/**
 * Increment the reference count.
 * @return The reference count value.
 */
    int AddRef() const ;
  
/**
 * Decrement the reference count.
 * @return The reference count value.
 */
    int Release() const ;

/**
 * Obtain the reference count.
 * <br> Inline Method. <br>
 * @return The reference count value.
 */
    inline const int& GetReferenceCount() const ;

/**
 * Obtain Context model tag.
 * <br> Inline Method. <br>
 * @return Context model tag.
 */
    inline const int& GetContextModelTag() const ;
  
/**
 * Requests the collector delayed destruction.
 * <br> Inline Method. <br>
 * The collector will be destroyed as soon as this will be possible.
 * @param iRequestDestruction
 *   This parameter indicates the request for the collector deletion.
 */
    inline void RequestDelayedDestruction(CATBoolean iRequestDestruction = TRUE) ;

  private:
    // friend class for Private Methods
    friend class CATAnalysisEntityCollector;
    friend class CATAnalysisCharacCollector;
    friend class CATESamCharacCollectorForSet;
    friend class CATESamCharacCollectorForProxyEntity;

    static CATULONG32 CollectorTag;
    // Reset
    virtual HRESULT Reset();
    // SetContextModelTag
    inline void SetContextModelTag(int iContextModelTag) ;
    // GetEntitiesFlags
    virtual HRESULT GetEntitiesFLags() const;

    // operator =
    CATAnalysisCollectorRoot& operator = (const CATAnalysisCollectorRoot & iCollector) ;

  protected:
    // DATA MEMBERS
    CATString                 _Position ;
    CATBoolean                _IsUpToDate ;
    CATBoolean                _IsAttachedToModel ;
    CATBoolean                _IsNumberingDependant ;
    CATBoolean                _IsRequestForDestruction ;
    CATBoolean                _DismisAttachement ;

    int                       _NbEntities ;
    int                       _NumReference ;
    int                       _NbFlagedEntities ;
    char*                     _EntityFlags ;

    CATSamPhysicalType        _CollectorPhysicalType ;
    CATAnalysisExplicitParent _Parent;
    int                       _ContextModelTag;
    int                       _ContextSequentialMumber;
    CATULONG32                _Tag;
} ;

/*****************************************************************/
/* Implementation of inline Methods                              */
/*****************************************************************/
inline HRESULT CATAnalysisCollectorRoot::SetUpToDate(CATBoolean iIsUpToDate) {
  _IsUpToDate = iIsUpToDate;
  return S_OK;
}

inline const int& CATAnalysisCollectorRoot::GetReferenceCount() const { return _NumReference ; }

inline const CATBoolean& CATAnalysisCollectorRoot::IsAttachedToModel() const { return _IsAttachedToModel; }

inline void CATAnalysisCollectorRoot::RequestDelayedDestruction(CATBoolean iRequestDestruction) { _IsRequestForDestruction = iRequestDestruction; }

inline const int& CATAnalysisCollectorRoot::GetContextModelTag() const { return _ContextModelTag; }

inline void CATAnalysisCollectorRoot::SetContextModelTag(int iContextModelTag) { _ContextModelTag = iContextModelTag; }

#endif
