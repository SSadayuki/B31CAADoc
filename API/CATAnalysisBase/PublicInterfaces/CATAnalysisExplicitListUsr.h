// COPYRIGHT DASSAULT SYSTEMES  1999
//=============================================================================
//
// CATAnalysisExplicitListUsr
//
//=============================================================================
//
// Usage Notes: services linked to the apply lists of the field model.
//
//=============================================================================
// Octobre 99   Creation                                                    
//=============================================================================
#ifndef CATAnalysisExplicitListUsr_H_
#define CATAnalysisExplicitListUsr_H_

#include "CATAnalysisExplicitList.h"

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Field model user list.
 * This object provides services for user lists of the field model.
 */
class ExportedByCATSAM0Explicit CATAnalysisExplicitListUsr : public CATAnalysisExplicitList
{
   private :
 
      HRESULT Init(const CATAnalysisExplicitData &iData) ;

   public :
/**
 * Default constructor.
 */
      CATAnalysisExplicitListUsr() ;

/**
 * Copy constructor.
 */
      CATAnalysisExplicitListUsr(const CATAnalysisExplicitListUsr &iList) ;

/**
 * Copy constructor.
 * @see CATAnalysisExplicitData
 */
      CATAnalysisExplicitListUsr(const CATAnalysisExplicitData &iData) ;

/**
 * Assignment operator.
 */
      CATAnalysisExplicitListUsr &operator = (const CATAnalysisExplicitListUsr &iList) ;

/**
 * Assignment operator.
 * @see CATAnalysisExplicitData
 */
      CATAnalysisExplicitListUsr &operator = (const CATAnalysisExplicitData &iData) ;

/**
 * Creates a user list in the field model.
 * @param iModel
 *   A pointer to the field model into which the list will be created.
 * @see CATAnalysisExplicitModel
 */
      HRESULT CreateList(const CATAnalysisExplicitModel *iModel) ;

/**
 * Deletes a user list from the field model.
 */
      HRESULT Delete() ;

/**
 * Inserts a new object in the list after the current position.
 * The current position of the list points on the inserted object.
 * @param iChild
 *   The object to insert in the list.
 * @param iBefore
 *   If TRUE, then the object is inserted before the current position. If FALSE
 *   then the object is inserted after the current position.
 * @see CATAnalysisExplicitChild
 */
      HRESULT Insert(const CATAnalysisExplicitChild &iChild, CATBoolean iBefore = FALSE) ;

/**
 * Inserts a list of new objects in the list after the current position.
 * The current position of the list points on the last inserted object.
 * @param iList
 *   The list of objects to insert in the list.
 * @param iBefore
 *   If TRUE, then the objects are inserted before the current position. If FALSE
 *   then the objects are inserted after the current position.
 * @see CATAnalysisExplicitList
 */
      HRESULT Insert(CATAnalysisExplicitList &iList, CATBoolean iBefore = FALSE) ;

/**
 * Inserts a list of new objects in the list after the current position using a filter.
 * The current position of the list points on the last inserted object.
 * @param iList
 *   The list of objects to insert in the list.
 * @param iCompareType
 *   The filter criteria.
 * @param iCompareValue
 *   A pointer to the value used by the filter criteria.
 * @param iBefore
 *   If TRUE, then the objects are inserted before the current position. If FALSE
 *   then the objects are inserted after the current position.
 * @see CATAnalysisExplicitList, CATSamCompareType
 */
      HRESULT Insert(CATAnalysisExplicitList &iList, CATSamCompareType iCompareType,
                     const void *iCompareValue, CATBoolean iBefore = FALSE) ;

/**
 * Inserts a new object in the list after the current position.
 * The current position of the list points on the inserted object.
 * @param iChild
 *   The object to insert in the list.
 * @see CATAnalysisExplicitChild
 */
      void operator+=(const CATAnalysisExplicitChild &iChild) ;

/**
 * Inserts a list of new objects in the list after the current position.
 * The current position of the list points on the last inserted object.
 * @param iList
 *   The list of objects to insert in the list.
 * @see CATAnalysisExplicitList
 */
      void operator+=(CATAnalysisExplicitList &iList) ;

/**
 * Removes an object from the list.
 * The current position of the list points to the previous object (or to the first
 * one in the list).
 * @param iAll
 *   If TRUE, then the list is completely emptied.
 */
      HRESULT Remove(CATBoolean iAll = FALSE) ;

/**
 * Removes a list of objects from the list.
 * The current position of the list points to the first object in the list.
 * @param iList
 *   The list of objects to remove from the list.
 * @param iSort
 *   If TRUE, then both lists will be sorted using the <b>CATSamCompareTypePointer</b> criteria
 *   before any processing.
 * @see CATAnalysisExplicitList
 */
      HRESULT Remove(CATAnalysisExplicitList &iList, CATBoolean iSort = FALSE) ;

/**
 * Removes all objects from the list which satisfy a particular filter.
 * @param iCompareType
 *   The filter criteria.
 * @param iCompareValue
 *   A pointer to the value used by the filter criteria.
 */
      HRESULT Remove(CATSamCompareType iCompareType, const void *iCompareValue) ;

/**
 * Removes a list of objects from the list (use Remove() for a more optimized version).
 * The current position of the list points to the first object in the list.
 * @param iList
 *   The list of objects to remove from the list.
 * @see CATAnalysisExplicitList
 */
      void operator-=(CATAnalysisExplicitList &iList) ;

/**
 * Moves to the first position of the list.
 * @param iLinkToListModel.
 * <br><b>Legal values</b>: 
 * <ul><li> TRUE  : The object at the first location will be linked to the creation field model of the list.
 *	   <li> FALSE : The object at the first location will be linked to its own creation field model.
 */
      CATAnalysisExplicitListUsr &First(CATBoolean iLinkToListModel = TRUE) ;

/**
 * Moves to the last position of the list.
 * @param iLinkToListModel.
 * <br><b>Legal values</b>: 
 * <ul><li> TRUE  : The object at the last location will be linked to the creation field model of the list.
 *	   <li> FALSE : The object at the last location will be linked to its own creation field model.
 */
      CATAnalysisExplicitListUsr &Last(CATBoolean iLinkToListModel = TRUE) ;

/**
 * Moves to the next position of the list.
 * @param iLinkToListModel.
 * <br><b>Legal values</b>: 
 * <ul><li> TRUE  : The object at the next location will be linked to the creation field model of the list.
 *	   <li> FALSE : The object at the next location will be linked to its own creation field model.
 */
      CATAnalysisExplicitListUsr &Next(CATBoolean iLinkToListModel = TRUE) ;

/**
 * Moves to the previous position of the list.
 * @param iLinkToListModel.
 * <br><b>Legal values</b>: 
 * <ul><li> TRUE  : The object at the previous location will be linked to the creation field model of the list.
 *	   <li> FALSE : The object at the previous location will be linked to its own creation field model.
 */
      CATAnalysisExplicitListUsr &Previous(CATBoolean iLinkToListModel = TRUE) ;

/**
 * @deprecated V5R16.
 * Moves to the next position of the list.
 */
      CATAnalysisExplicitListUsr &operator++() ;

/**
 * @deprecated V5R16.
 * Moves to the previous position of the list.
 */
      CATAnalysisExplicitListUsr &operator--() ;

/**
 * Searches from the current position for data in a list.<br>
 * <font color="red"> Warning! Since V5R17, parameter iLinkToListModel is mandatory. </font>
 * @param iCompareType
 *   The search criteria. 
 * @param iSorted
 *   If TRUE, then the list is sorted using the search criteria.
 * @param iWhat
 *   A pointer to the value being searched for.
 * @param iLinkToListModel.
 * <br><b>Legal values</b>: 
 * <ul><li> TRUE  : The founded object will be linked to the creation field model of the list.
 *	   <li> FALSE : The founded object will be linked to its own creation field model.
 */
      CATAnalysisExplicitListUsr &Find(CATSamCompareType iCompareType, CATBoolean iSorted, const void *iWhat, CATBoolean iLinkToListModel = TRUE) ;

/**
 * Sorts the list using two criterias.
 * @param iCompareType1
 *   The first criteria.
 * @param iCompareType2
 *   The second criteria.
 * @see CATSamCompareType
 */
      HRESULT Sort(CATSamCompareType iCompareType1, CATSamCompareType iCompareType2) ;

} ;


#endif
