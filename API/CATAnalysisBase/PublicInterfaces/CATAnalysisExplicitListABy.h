// COPYRIGHT DASSAULT SYSTEMES  1999
//=============================================================================
//
// CATAnalysisExplicitListABy
//
//=============================================================================
//
// Usage Notes: services linked to the apply lists of the field model.
//
//=============================================================================
// Octobre 99   Creation                                                    LBK
//=============================================================================
#ifndef CATAnalysisExplicitListABy_H_
#define CATAnalysisExplicitListABy_H_

#include "CATAnalysisExplicitList.h"

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Field model apply by list.
 * This object provides services for apply by lists of the field model.
 */
class ExportedByCATSAM0Explicit CATAnalysisExplicitListABy : public CATAnalysisExplicitList
{
   private :
      CATSamPosition            _ApplyPosition ;
      int                       _ApplyNumber ;
      CATSamApplyQualifier      _ApplyQualifier ;

      virtual void    Reset() ;
      virtual void    ResetLocation() ;
      virtual void    ResetCurrent() ;
      virtual HRESULT Init(const CATAnalysisExplicitData &iData) ;

   public :
/**
 * Default constructor.
 */
      CATAnalysisExplicitListABy() ;

/**
 * Copy constructor.
 */
      CATAnalysisExplicitListABy(const CATAnalysisExplicitListABy &iList) ;

/**
 * Copy constructor.
 * @see CATAnalysisExplicitData
 */
      CATAnalysisExplicitListABy(const CATAnalysisExplicitData &iData) ;

/**
 * Assignment operator.
 */
      CATAnalysisExplicitListABy &operator = (const CATAnalysisExplicitListABy &iList) ;

/**
 * Assignment operator.
 * @see CATAnalysisExplicitData
 */
      CATAnalysisExplicitListABy &operator = (const CATAnalysisExplicitData &iData) ;

/**
 * Returns the object at the current location in the list and its position of apply and apply number.
 * @param oApplyPosition
 *   The position of apply.
 * @param oApplyNumber
 *   The apply number.
 * @see CATAnalysisExplicitChild, CATSamPosition
 */
      const CATAnalysisExplicitChild &GetCurrent(CATSamPosition &oApplyPosition, int &oApplyNumber) const ;

/**
 * Returns the position of apply at the current location in the list.
 * @see CATSamPosition
 */
      CATSamPosition GetApplyPosition() const ;

/**
 * Returns the apply number at the current location in the list.
 */
      int GetApplyNumber() const ;

/**
 * Returns the apply qualifier at the current location in the list.
 * @see CATSamApplyQualifier
 */
      CATSamApplyQualifier GetApplyQualifier() const ;

/**
 * Obtains the arrays of pointers to the list contents, apply positions and apply numbers.
 * @param oNumber
 *   The number of objects in the list.
 * @param oContents[oNumber]
 *   The array of pointers to the objects.<br>
 *   This parameter must be equal to NULL when this method is called.<br>
 *   The memory for the array is allocated by this method but must be de-allocated by the caller.
 * @param oApplyPositions[oNumber]
 *   The array of apply positions.<br>
 *   This parameter must be equal to NULL when this method is called.<br>
 *   The memory for the array is allocated by this method but must be de-allocated by the caller.
 * @param oApplyNumbers[oNumber]
 *   The array of pointers to the objects.<br>
 *   This parameter must be equal to NULL when this method is called.<br>
 *   The memory for the array is allocated by this method but must be de-allocated by the caller.
 * @see CATSamPosition
 */
      HRESULT GetContents(int &oNumber, CATSamExplicitPtr * &oContents,
                          CATSamPosition * &oApplyPositions, int * &oApplyNumbers) ;

/**
 * Returns the array of apply qualifiers for the list.
 * @param oNumber
 *   The number of objects in the list.
 * @param oApplyQualifiers[oNumber]
 *   The array of apply qualifiers.<br>
 *   This parameter must be equal to NULL when this method is called.<br>
 *   The memory for the array is allocated by this method but must be de-allocated by the caller.
 * @see CATSamApplyQualifier
 */
      HRESULT GetApplyQualifiers(int &oNumber, CATSamApplyQualifier *&oApplyQualifiers) ;

/**
 * Moves to the first location in the list.
 */
      CATAnalysisExplicitListABy &First() ;

/**
 * Moves to the last location in the list.
 */
      CATAnalysisExplicitListABy &Last() ;

/**
 * Moves to the next location in the list.
 */
      CATAnalysisExplicitListABy &Next() ;

/**
 * Moves to the previous location in the list.
 */
      CATAnalysisExplicitListABy &Previous() ;

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
      CATAnalysisExplicitListABy &Find(CATSamCompareType iCompareType, CATBoolean iSorted, const void *iWhat) ;

/**
 * Searches from the current location for data in a list.
 * @param iCompareType
 *   The search criteria. 
 * @param iWhat
 *   A pointer to the value being searched for.
 */
      CATAnalysisExplicitListABy &Find(CATSamCompareType iCompareType, const void *iWhat) ;

} ;

#endif
