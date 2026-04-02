// COPYRIGHT DASSAULT SYSTEMES  1999
//=============================================================================
//
// CATAnalysisExplicitListATo
//
//=============================================================================
//
// Usage Notes: services linked to the apply lists of the field model.
//
//=============================================================================
// Octobre 99   Creation                                                    LBK
//=============================================================================
#ifndef CATAnalysisExplicitListATo_H_
#define CATAnalysisExplicitListATo_H_

#include "CATAnalysisExplicitList.h"

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Field model apply to list.
 * This object provides services for apply to lists of the field model.
 */
class ExportedByCATSAM0Explicit CATAnalysisExplicitListATo : public CATAnalysisExplicitList
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
      CATAnalysisExplicitListATo() ;

/**
 * Copy constructor.
 */
      CATAnalysisExplicitListATo(const CATAnalysisExplicitListATo &iList) ;

/**
 * Copy constructor.
 * @see CATAnalysisExplicitData
 */
      CATAnalysisExplicitListATo(const CATAnalysisExplicitData &iData) ;

/**
 * Assignment operator.
 */
      CATAnalysisExplicitListATo &operator = (const CATAnalysisExplicitListATo &iList) ;

/**
 * Assignment operator.
 * @see CATAnalysisExplicitData
 */
      CATAnalysisExplicitListATo &operator = (const CATAnalysisExplicitData &iData) ;

/**
 * Returns the object at the current location in the list and its apply number.
 * @param oApplyNumber
 *   The apply number.
 * @see CATAnalysisExplicitChild
 */
      const CATAnalysisExplicitChild &GetCurrent(int &oApplyNumber) const ;

/**
 * Returns the position of apply of the list.
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
 * Obtains the arrays of pointers to the list contents, apply position and apply numbers.
 * @param oNumber
 *   The number of objects in the list.
 * @param oContents[oNumber]
 *   The array of pointers to the objects.<br>
 *   This parameter must be equal to NULL when this method is called.<br>
 *   The memory for the array is allocated by this method but must be de-allocated by the caller.
 * @param iExpand
 *   If iExpand is True, and if the ApplyTo list contains sets and/or groups, the method
 *   returns the ApplyTo under the sets and/or the ApplyTo of the groups.
 * @param iFilter
 *   A filter of the ApplyTo list: it's used to select virtual or not virtual ApplyTo entities in
 *   the expanded ApplyTo list.<br>
 *   Notes that iFilter is active only if iExpand is True.
 * @see CATSamPosition, CATSamMeshType
 */
      HRESULT GetContents(int &oNumber, CATSamExplicitPtr * &oContents,
                          CATBoolean iExpand = FALSE, CATSamMeshType iFilter = CATSamMeshTypeAll);
   
/**
 * Obtains the arrays of pointers to the list contents, apply position, apply numbers and apply qualifiers.
 * @param oNumber
 *   The number of objects in the list.
 * @param oContents[oNumber]
 *   The array of pointers to the objects.<br>
 *   This parameter must be equal to NULL when this method is called.<br>
 *   The memory for the array is allocated by this method but must be de-allocated by the caller.
 * @param oApplyPosition
 *   The apply position of the list.
 * @param oApplyNumbers[oNumber]
 *   The array of apply numbers.<br>
 *   This parameter must be equal to NULL when this method is called.<br>
 *   The memory for the array is allocated by this method but must be de-allocated by the caller.
 * @param oApplyQualifiers[oNumber]
 *   The array of apply qualifiers.<br>
 *   This parameter must be equal to NULL when this method is called.<br>
 *   The memory for the array is allocated by this method but must be de-allocated by the caller.
 * @param iExpand
 *   If iExpand is True, and if the ApplyTo list contains sets and/or groups, the method
 *   returns the ApplyTo under the sets and/or the ApplyTo of the groups.
 * @param iFilter
 *   A filter of the ApplyTo list: it's used to select virtual or not virtual ApplyTo entities in
 *   the expanded ApplyTo list.<br>
 *   Notes that iFilter is active only if iExpand is True.
 * @see CATSamPosition, CATSamMeshType, CATSamApplyQualifier
 */
      HRESULT GetContents(int &oNumber, CATSamExplicitPtr * &oContents, CATSamPosition &oApplyPosition, int * &oApplyNumbers,
                          CATSamApplyQualifier *&oApplyQualifiers, CATBoolean iExpand = FALSE, CATSamMeshType iFilter = CATSamMeshTypeAll);
/**
 * Obtains the arrays of pointers to the list contents, apply position, apply numbers and apply qualifiers.
 * @param oNumber
 *   The number of apply-to.
 * @param oContents[oNumber]
 *   The array of Sequential Number of the objects.<br>
 *   This parameter must be equal to NULL when this method is called.<br>
 *   The memory for the array is allocated by this method but must be de-allocated by the caller.
 * @param oApplyToPosition
 *   The apply position.
 * @param oApplyToNumbers[oNumber]
 *   The array of apply numbers.<br>
 *   This parameter must be equal to NULL when this method is called.<br>
 *   The memory for the array is allocated by this method but must be de-allocated by the caller.
 * @param oApplyQualifiers[oNumber]
 *   The array of apply qualifiers.<br>
 *   This parameter must be equal to NULL when this method is called.<br>
 *   The memory for the array is allocated by this method but must be de-allocated by the caller.
 * @param iExpand
 *   If iExpand is True, and if the ApplyTo list contains sets and/or groups, the method
 *   returns the ApplyTo under the sets and/or the ApplyTo of the groups.
 * @param iFilter
 *   A filter of the ApplyTo list: it's used to select virtual or not virtual ApplyTo entities in
 *   the expanded ApplyTo list.<br>
 *   Notes that iFilter is active only if iExpand is True.
 * @see CATSamPosition, CATSamMeshType, CATSamApplyQualifier
 */
      HRESULT GetContents(int &oNumber, int * &oContents, CATSamPosition &oApplyPosition, int * &oApplyNumbers,
                          CATSamApplyQualifier *&oApplyQualifiers, CATBoolean iExpand = FALSE, CATSamMeshType iFilter = CATSamMeshTypeAll);

/**
 * Moves to the first location in the list.
 */
      CATAnalysisExplicitListATo &First() ;

/**
 * Moves to the last location in the list.
 */
      CATAnalysisExplicitListATo &Last() ;

/**
 * Moves to the next location in the list.
 */
      CATAnalysisExplicitListATo &Next() ;

/**
 * Moves to the previous location in the list.
 */
      CATAnalysisExplicitListATo &Previous() ;

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
      CATAnalysisExplicitListATo &Find(CATSamCompareType iCompareType, CATBoolean iSortList, const void* iToSearch) ;

/**
 * Searches from the current location for data in a list.
 * @param iCompareType
 *   The search criteria. 
 * @param iWhat
 *   A pointer to the value being searched for.
 */
      CATAnalysisExplicitListATo &Find(CATSamCompareType iCompareType, const void* iToSearch) ;

} ;
#endif
