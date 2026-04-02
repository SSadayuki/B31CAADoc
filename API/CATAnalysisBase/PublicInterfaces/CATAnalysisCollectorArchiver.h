// COPYRIGHT DASSAULT SYSTEMES  1999
//=============================================================================
//
// CATAnalysisCollectorArchiver
//
//=============================================================================
//
// Usage Notes: Archiver for collector characteristic
//=============================================================================

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#ifndef CATAnalysisCollectorArchiver_H_
#define CATAnalysisCollectorArchiver_H_

#include "CATISpecDeclarations.h"
#include "CATUnicodeString.h"
#include "CATSAM0Explicit.h"
#include "CATBoolean.h"

class CATAnalysisCharacCollector;
class CATAnalysisExplicitParent;

/**
 * Archiver for collector characteristic.<br>
 */

class ExportedByCATSAM0Explicit CATAnalysisCollectorArchiver
{
  private:
/**
 * Default constructor.
 */
    CATAnalysisCollectorArchiver(const CATOldTimeStamp &iTimeStamp);

  public :
/**
 * Destructor.
 */
    virtual ~CATAnalysisCollectorArchiver() ;

/**
 * UnStream the collector.
 * @param oCollector
 *   The unstreamed collector characteristic.
 * @param iOccurenceNumber
 *   The Occurence number of the requested collector characteristic.
 * @param iCollectContextTag
 *   The Tag of the context model of the collector characteristic through @href CATICharacCollector#GetContextModel method. 
 *   Then use @href CATAnalysisExplicitModel#GetModelTag method. 
 */
    HRESULT UnStream(const CATAnalysisExplicitParent &iContext, int iOccurenceNumber, int iCollectContextTag, CATAnalysisCharacCollector* &oCollector);

/**
 * Returns the UnStreamable status.
 * <br> Inline Method. <br>
 * @param iOccurenceNumber
 *   The Occurence number of the collector characteristic.
 * @param iCollectContextTag
 *   The Tag of the context model of the collector characteristic.
 * @return the UnStreamable status.
 */
    CATBoolean IsUnStreamable(int iOccurenceNumber, int iCollectContextTag) const;

/**
 * Returns the Stream status.
 * <br> Inline Method. <br>
 * @param iOccurenceNumber
 *   The Occurence number of the collector characteristic.
 * @param iCollectContextTag
 *   The Tag of the context model of the collector characteristic.
 * @return the Stream status.
 */
    CATBoolean HadBeenStreamed(int iOccurenceNumber, int iCollectContextTag) const;

  private:
    // Friend class for private methodes
    friend class CATECharacCollector;
    friend class CATAnalysisCharacCollector;
    friend class CATESamCharacCollectorForProxyEntity;
    friend class CATESamCharacCollectorForCombinedEntity;

    // Stream the collector.
    HRESULT Stream(const CATAnalysisCharacCollector* iCollector) const;

    // UnStream the collector.
    // @param oCollector         : The unstreamed collector characteristic.
    // @param iOccurenceNumber   : The Occurence number of the requested collector characteristic.
    // @param iCollectContextTag : The Tag of the context model of the collector characteristic.
    HRESULT UnStreamPacked(const CATAnalysisExplicitParent &iContext, int iOccurenceNumber, int iCollectContextTag, CATAnalysisCharacCollector* &oCollector);
  
    // Increment the reference count.
    // @return The reference count value.
    int AddRef() const ;
    
    // Decrement the reference count.
    // @return The reference count value.
    int Release() const ;

    // Obtain the reference count.
    inline int GetReferenceCount() const ;

    // Obtain the Streamable status.
    inline const CATBoolean& IsStreamable() const;

    // Obtain the NumberingDependant status.
    inline const CATBoolean& IsNumberingDependant() const;

    // SetUnStreamable
    inline void SetUnStreamable();

    // IsMatchingTimeStamp
    inline CATBoolean IsMatchingTimeStamp(const CATOldTimeStamp &iContextTimeStamp) const;

    // CreateStorage
    HRESULT CreateStorage();

    // ResetStorage
    HRESULT ResetStorage();

    // ResetStorage
    HRESULT RemoveArchive(const CATAnalysisCharacCollector* iCollector);

  protected :
    // DATA MEMBERS
    int              _NumReference;
    CATBoolean       _IsNumberingDependant;
    CATBoolean       _IsStreamable;
    CATBoolean       _HadStorage;
    CATOldTimeStamp  _TimeStamp;
    CATUnicodeString _ArchiveName;

  private : // Only to avoid somebody call this methods
    CATAnalysisCollectorArchiver(const CATAnalysisCollectorArchiver &iArchiver) ;
    CATAnalysisCollectorArchiver &operator = (const CATAnalysisCollectorArchiver &iArchiver) ;
} ;
 
// =============================================================================
// CATAnalysisCollectorArchiver::GetReferenceCount() const
// =============================================================================
inline int CATAnalysisCollectorArchiver::GetReferenceCount() const { return _NumReference; }

// =============================================================================
// CATAnalysisCollectorArchiver::IsStreamable() const
// =============================================================================
inline const CATBoolean& CATAnalysisCollectorArchiver::IsStreamable() const { return _IsStreamable; }

// =============================================================================
// inline const CATBoolean& CATAnalysisCollectorArchiver::IsNumberingDependant(...) const
// =============================================================================
inline const CATBoolean& CATAnalysisCollectorArchiver::IsNumberingDependant() const { return _IsNumberingDependant; }

// =============================================================================
// CATAnalysisCollectorArchiver::IsMatchingTimeStamp() const
// =============================================================================
inline CATBoolean CATAnalysisCollectorArchiver::IsMatchingTimeStamp(const CATOldTimeStamp &iContextTimeStamp) const { return iContextTimeStamp == _TimeStamp; }

// =============================================================================
// CATAnalysisCollectorArchiver::SetUnStreamable()
// =============================================================================
inline void CATAnalysisCollectorArchiver::SetUnStreamable() { _IsStreamable = FALSE; }

#endif
