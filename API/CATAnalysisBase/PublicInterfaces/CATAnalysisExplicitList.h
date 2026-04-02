// COPYRIGHT DASSAULT SYSTEMES  1999
//=============================================================================
//
// CATAnalysisExplicitList
//
//=============================================================================
//
// Usage Notes: General services linked to the lists of the field model.
//
//=============================================================================
// Octobre 99   Creation                                                    
//=============================================================================
#ifndef CATAnalysisExplicitList_H_
#define CATAnalysisExplicitList_H_

#include "CATAnalysisExplicitChild.h"

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

class CATSamModelListIterator;

/**
 * Field model list.
 * This object provides services common to all types of lists of the field model.
 */
class ExportedByCATSAM0Explicit CATAnalysisExplicitList : public CATAnalysisExplicitData
{
   public :
/**
 * Default constructor.
 */
      CATAnalysisExplicitList() ;

/**
 * Donstructor.
 */
      virtual ~CATAnalysisExplicitList();

/**
 * Copy constructor.
 */
      CATAnalysisExplicitList(const CATAnalysisExplicitList &iList) ;

/**
 * Copy constructor.
 * @see CATAnalysisExplicitData
 */
      CATAnalysisExplicitList(const CATAnalysisExplicitData &iData) ;

/**
 * Assignment operator.
 */
      CATAnalysisExplicitList &operator = (const CATAnalysisExplicitList &iList) ;

/**
 * Assignment operator.
 * @see CATAnalysisExplicitData
 */
      CATAnalysisExplicitList &operator = (const CATAnalysisExplicitData &iData) ;

/**
 * Returns the length of the list.
 * @param really
 *   If really = TRUE, it returns the real length of the list (with temporary deleted datas).
 */
      int GetLength(CATBoolean really = FALSE) ;

/**
 * Returns the type of the list.
 * @see CATSamListType
 */
      CATSamListType GetListType() const ;

/**
 * Returns the object at the current location in the list.
 * @see CATAnalysisExplicitChild
 */
      const CATAnalysisExplicitChild &GetCurrent() const ;

/**
 * Returns the object at the current location in the list.
 * @see CATAnalysisExplicitChild
 */
      const CATAnalysisExplicitChild &operator*() const ;

/**
 * Obtains the array of pointers to the list contents.
 * @param oNumber
 *   The number of objects in the list.
 * @param oContents[oNumber]
 *   The array of pointers to the objects.<br>
 *   This parameter must be equal to NULL when this method is called.<br>
 *   The memory for the array is allocated by this method but must be de-allocated by the caller.
 */
      HRESULT GetContents(int &oNumber, CATSamExplicitPtr * &oContents) ;

/**
 * Moves to the first location in the list.
 */
      CATAnalysisExplicitList &First() ;

/**
 * Moves to the last location in the list.
 */
      CATAnalysisExplicitList &Last() ;

/**
 * Moves to the next location in the list.
 */
      CATAnalysisExplicitList &Next() ;

/**
 * Moves to the previous location in the list.
 */
      CATAnalysisExplicitList &Previous() ;

/**
 * Compare current location with first location in the list.
 * Returns TRUE if there are equal.
 */
      CATBoolean CurrentIsFirst() const ;

/**
 * Compares the content of the current object with a value using a criteria.
 * @param iCompareType
 *   The compare criteria.
 * @param iCompareValue
 *   A pointer to the value used by the compare criteria.
 */
      int Compare(CATSamCompareType iCompareType, const void *iCompareValue) ;

/**
 * @deprecated V5R17
 *    Use @href CATAnalysisExplicitListUsr#Sort instead with twice the same arguments.
 * Sorts the list using a criteria.
 * @param iCompareType
 *   The criteria.
 * @see CATSamCompareType
 */
      HRESULT Sort(CATSamCompareType iCompareType) ;

/**
 * @deprecated V5R17
 *    Use @href CATAnalysisExplicitListUsr#Sort instead.
 * Sorts the list using two criterias.
 * @param iCompareType1
 *   The first criteria.
 * @param iCompareType2
 *   The second criteria.
 * @see CATSamCompareType
   */
      HRESULT Sort(CATSamCompareType iCompareType1, CATSamCompareType iCompareType2) ;

/**
 * @deprecated V5R17
 *    Use @href #Find(CATSamCompareType, const void *) instead.
 * Searches from the current location for data in a list.
 * @param iCompareType
 *   The search criteria. 
 * @param iSorted
 *   If TRUE, then the list is sorted using the search criteria.
 * @param iWhat
 *   A pointer to the value being searched for.
 */
      CATAnalysisExplicitList &Find(CATSamCompareType iCompareType, CATBoolean iSorted, const void *iWhat) ;
   
/**
 * Searches from the current location for data in a list.
 * @param iCompareType
 *   The search criteria. 
 * @param iWhat
 *   A pointer to the value being searched for.
 */
      CATAnalysisExplicitList &Find(CATSamCompareType iCompareType, const void *iWhat) ;

   protected :
     CATAnalysisExplicitChild _Child ;
     CATSamListType           _ExpListType ;
     CATSamModelListIterator  *_Position;

   private :
     // Friend Class for Private Method
     friend class CATSamModelListIterator;
     friend class CATSamModelListServices;
     friend class CATAnalysisExplicitModel;
     friend class CATAnalysisExplicitChild;
     friend class CATAnalysisExplicitEntity;
     friend class CATAnalysisExplicitParent;
     friend class CATAnalysisExplicitSearch;
     friend class CATAnalysisExplicitListUsr;
     friend class CATAnalysisExplicitListATo;
     friend class CATAnalysisExplicitListABy;
     friend class CATAnalysisExplicitServices; 
     friend class CATAnalysisExplicitRulesData;

    // Reset
    virtual void Reset() ;
    // ResetLocation
    HRESULT ResetPosition();
    // ResetLocation
    virtual void ResetLocation() ;
    // ResetCurrent
    virtual void ResetCurrent() ;
    // Init
    virtual HRESULT Init(const CATAnalysisExplicitData &iData) ;
    // Init
    HRESULT Init(const CATAnalysisExplicitModel *iModel, const Handler(CATSamModelList) &iDataList, CATSamListType iListType, CATSamPhysicalType iPhysicalType = CATSamPhysicalTypeNone );
    // Init
    HRESULT Init(const CATAnalysisExplicitModel *iModel, const Handler(CATSamModelDataRoot) &iListRootFrom, const Handler(CATSamModelList) &iDataList, CATSamListType iListType, CATSamPhysicalType iPhysicalType = CATSamPhysicalTypeNone);
    // CreateIterator
    HRESULT CreateIterator(const CATSamListType &iListType, const Handler(CATSamModelList)& iModelList);
    HRESULT CreateIterator(const Handler(CATSamModelDataRoot)& iModelRoot, const CATSamListType &iListType, const Handler(CATSamModelList)& iModelList);
    HRESULT CreateIterator(const CATSamModelListIterator* iIterator);
    // IteratorIsGood
    CATBoolean IteratorIsGood(const int& iClassType) const;
    CATBoolean IteratorIsGood(const CATSamModelListIterator* iIterator) const;
} ;

#endif
