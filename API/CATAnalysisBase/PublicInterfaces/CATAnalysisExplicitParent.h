// COPYRIGHT DASSAULT SYSTEMES  1999
//=============================================================================
// CATAnalysisExplicitParent
//=============================================================================
// Usage Notes: Services linked to the field model objects which can be parents.
//=============================================================================
// Octobre 99   Creation                                                   
//=============================================================================
#ifndef CATAnalysisExplicitParent_H_
#define CATAnalysisExplicitParent_H_

#include "CATAnalysisExplicitChild.h"
#include "CATAnalysisExplicitTypes.h"

class CATAnalysisExplicitEntity;
class CATAnalysisExplicitParent;
class CATAnalysisCharacCollector;
class CATAnalysisEntityCollector;
class CATAnalysisExplicitListUsr;
class CATAnalysisExplicitCharac;
class CATSamCharacVersion;
class CATString;

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Field model parent.
 * This object is used to provide services common to all objects of the field model
 * which can be parents.
 * @see CATAnalysisExplicitChild
 */
class ExportedByCATSAM0Explicit CATAnalysisExplicitParent : public CATAnalysisExplicitChild
{
  public :
/**
 * Default constructor.
 */
    CATAnalysisExplicitParent() ;

/**
 * Copy constructor.
 */
    CATAnalysisExplicitParent(const CATAnalysisExplicitParent &iParent) ;

/**
 * Copy constructor.
 * @see CATAnalysisExplicitData
 */
    CATAnalysisExplicitParent(const CATAnalysisExplicitData &iData) ;

/**
 * Assignment operator.
 */
    CATAnalysisExplicitParent &operator = (const CATAnalysisExplicitParent &iParent) ;

/**
 * Assignment operator.
 * @see CATAnalysisExplicitData
 */
    CATAnalysisExplicitParent &operator = (const CATAnalysisExplicitData &iData) ;

/**
 * Assigns a user name.
 * A user name is a string provided by the user to identify data.
 * @param iUserName
 *   The string representing the user name.
 */
    HRESULT SetUserName(const char *iUserName) const ;

/**
 * Assigns a user number.
 * A user number is a number provided by the user to identify data.
 * @param iUserNumber
 *   The user number.
 */
    HRESULT SetUserNumber(int iUserNumber) const ;

/**
 * Retrieves the user name.
 * A user name is a string provided by the user to identify data.
 * @param oUserName
 *   The string representing the user name.
 */
    HRESULT GetUserName(const char *(&oUserName)) const ;

/**
 * Retrieves a user number.
 * A user number is a number provided by the user to identify data.
 * @param oUserNumber
 *   The user number.
 */
    HRESULT GetUserNumber(int &oUserNumber) const ;

/**
 * Obtains the list of children.
 * @param oChildrenList
 *   The list of children.
 * @see CATAnalysisExplicitList
 */
    HRESULT GetChildrenList(CATAnalysisExplicitList &oChildrenList) const ;

/**
 * Obtains the recursive list of children using optional filter.
 * @param ioChildrenList
 *   A list created by user.
 * @param iCompareType
 *   A filter criteria.
 * @param iCompareValue
 *   A pointer to the value used by the filter criteria.
 * @param iRecurse
 *   If TRUE, then the children list is built recursively in all the hierarchy.
 * @param iConcat
 *   If TRUE, then the children list is concatenated to previous one.
 * @see CATAnalysisExplicitListUsr
 */
    HRESULT GetChildrenList(CATAnalysisExplicitListUsr  &ioChildrenList,
                            CATSamCompareType           iCompareType = CATSamCompareTypeLast,
                            const void                  *iCompareValue = NULL,
                            CATBoolean                  iRecurse = FALSE,
                            CATBoolean                  iConcat = FALSE) const ;

/**
 * Obtains the first child of a given PhysicalType.
 * @param iPhysicalType
 *   The PhysicalType
 * @param oChildOfType
 *   The first child  of the given PhysicalType.
 * @see CATAnalysisExplicitChild
 */
    HRESULT GetChildOfType(const CATSamPhysicalType& iPhysicalType, CATAnalysisExplicitChild &oChildOfType) const ;

/**
 * Obtains the apply-by list.
 * @param oApplyByList
 *   The apply-by list.
 * @see CATAnalysisExplicitList
 */
    HRESULT GetApplyByList(CATAnalysisExplicitList &oApplyByList) const ;

/**
 * Obtains the array of pointers to the apply-by.
 * @param oNumber
 *   The number of apply-by.
 * @param oApplyBy[oNumber]
 *   The array of pointers to the apply-by.<br>
 *   This parameter must be equal to NULL when this method is called.<br>
 *   The memory for the array is allocated by this method but must be de-allocated by the caller.
 */
    HRESULT GetApplyBy(int &oNumber, CATSamExplicitPtr * &oApplyBy) const ;


/**
 * Obtains the array of pointers to the apply-by, the array of apply types and
 * the array of apply numbers.
 * @param oNumber
 *   The number of apply-by.
 * @param oApplyBy[oNumber]
 *   The array of pointers to the apply-by.<br>
 *   This parameter must be equal to NULL when this method is called.<br>
 *   The memory for the array is allocated by this method but must be de-allocated by the caller.
 * @param oApplyByPositions[oNumber]
 *   The array of apply positions.<br>
 *   This parameter must be equal to NULL when this method is called.<br>
 *   The memory for the array is allocated by this method but must be de-allocated by the caller.
 * @param oApplyByNumbers[oNumber]
 *   The array of apply numbers.<br>
 *   This parameter must be equal to NULL when this method is called.<br>
 *   The memory for the array is allocated by this method but must be de-allocated by the caller.
 * @see CATSamPosition
 */
    HRESULT GetApplyBy(int                 &oNumber, 
                       CATSamExplicitPtr * &oApplyBy,
                       CATSamPosition    * &oApplyByPositions,
                       int               * &oApplyByNumbers) const ;

/**
 * Adds one child to the current field model object.
 * @param iChild The child to be added.<br>
 *
 * <b>Note :</b>
 * <ul><li>A set can only be the child of other sets but not of entities.</li>
 *     <li>The child must be in same field model as the parent.</li></ul>
 * @see CATAnalysisExplicitChild
 */
    HRESULT AddChild(const CATAnalysisExplicitChild &iChild) const ;

/**
 * Adds one child to the current field model object.
 * @param iChild The child to be added.<br>
 * <b>Note :</b>
 * This method must be used if iChild and the current parent are not defined in the same field model.
 * In addition the current field must must be in an assembly context.
 */
    HRESULT AddAssemblyChild(const CATAnalysisExplicitParent &iChild) const ;

/**
 * Adds several children to the current field model object.
 * @param iChildren The list of children to be added.<br>
 * <b>Note :</b>
 * <ul><li>A set can only be the child of other sets but not of entities.</li>
 *     <li>Each child must be in same field model as the parent.</li></ul>
 * @see CATAnalysisExplicitList
 */
    HRESULT AddChildren(CATAnalysisExplicitList &iChildren) const ;

/**
 * Removes one child from the current field model object.
 * @param iChild
 *   The child to be removed.
 * @see CATAnalysisExplicitChild
 */
    HRESULT RemoveChild(const CATAnalysisExplicitChild &iChild) const ;

/**
 * Removes several children from the current field model object.
 * @param iChildren
 *   The list of children to be removed.
 * @see CATAnalysisExplicitList
 */
    HRESULT RemoveChildren(CATAnalysisExplicitList &iChildren) const ;

/**
 * Finds in the current parent the collector characteristic corresponding to a definition.
 * @param iPhysicalType
 *   The physical type.
 * @param iVersion
 *   A pointer to the version information (a <b>CATSamCharacVersion</b> object).
 * @param iPosition
 *   A pointer to the position type identifier.
 * @param iNumOccurrence
 *   The number of the occurrence.
 * @param oCollector
 *   A pointer to the collector characteristic if it was found.
 *   NULL if it was not found.
 * @param iEntityFlagsNumber
 *   The size of the table iEntityFlags
 * @param iEntityFlags[iEntityFlagsNumber]
 *   A pointer to the table of entity flags indicating which entities
 *   had their values collected.
 * @param iEntityPhysicalType
 *   The physical type of the Entity used to build collector (default all physical type are used).
 * @param iContextModelTag
 *   the context model tag for which the the collector is requested.
 * @see CATSamCharacVersion, CATAnalysisCharacCollector
 */
    HRESULT FindCharacCollector(      CATSamPhysicalType            iPhysicalType,
                                const CATSamCharacVersion         & iVersion,
                                const CATString                   & iPosition,
                                const int                           iNumOccurrence,
                                      CATAnalysisCharacCollector* & oCollector,
                                const int                           iEntityFlagsNumber = 0,
                                const char* const                   iEntityFlags = NULL,
                                      CATSamPhysicalType            iEntityPhysicalType = CATSamPhysicalTypeNone,
                                const int                           iContextModelTag = -1) const ;

/**
 * Finds in the current parent the explicit characteristic pointing to the collector iCharacCollector.
 * @param iCharacCollector
 *   The instance of <b>CATAnalysisCharacCollector</b>.
 * @param oCharac
 *   A reference to the explicit characteristic.
 *   NULL_exp if it was not found.
 * @see CATAnalysisExplicitCharac
 */
    HRESULT FindCharacCollector(const CATAnalysisCharacCollector* iCharacCollector,
                                      CATAnalysisExplicitCharac & oCharac) const ;

/**
 * Finds in the current parent the collector characteristic corresponding to a definition.
 * @param iValue
 *   The CATSamValue.
 * @param iPosition
 *   The CATSamPosition.
 * @param oCollector
 *   A pointer to the collector characteristic if it was found.
 *   NULL if it was not found.
 * @see  CATAnalysisEntityCollector
 */
    HRESULT FindEntityCollector(const CATSamValue				&iValue,
                                const CATString		        &iPosition,
                                CATAnalysisEntityCollector*	&oCollector) const ;
/**
 * Finds in the current parent the explicit characteristic pointing to the collector iEntityCollector.
 * @param iEntityCollector
 *   The instance of CATAnalysisEntityCollector.
 * @param oCharac
 *   A reference to the explicit characteristic.
 *   NULL_exp if it was not found.
 * @see CATAnalysisExplicitCharac
 */
    HRESULT FindEntityCollector(const CATAnalysisEntityCollector* iEntityCollector,
                                      CATAnalysisExplicitCharac & oCharac) const ;
/**
 * Delete an EntityCollector under the current field model object.
 * @param iEntityCollector
 *   A pointer to the CATAnalysisEntityCollector to be deleted.
 * @see CATAnalysisEntityCollector
 */
    HRESULT DeleteEntityCollector(const CATAnalysisEntityCollector* &iEntityCollector) ;

/**
 * Delete all EntityCollector under the current field model object.
 * @see CATAnalysisEntityCollector
 */
    HRESULT DeleteAllEntityCollector() ;

/**
 * Delete a CharacCollector under the current field model object.
 * @param iCharacCollector
 *   A pointer to the <b>CATAnalysisCharacCollector</b> to be deleted.
 * @see CATAnalysisCharacCollector
 */
    HRESULT DeleteCharacCollector(const CATAnalysisCharacCollector* &iCharacCollector) ;

/**
 * Delete all CharacCollector under the current field model object.
 * @see CATAnalysisCharacCollector
 */
    HRESULT DeleteAll() ;

/**
 * Obtains the category of the object.
 * @param oCategory
 *   The category of the object.
 * @see CATSamValue
 */
    HRESULT GetCategory(CATSamValue &oCategory) const ;

/**
 * Returns the activity status.
 * <b>Legal values</b>:
 * <ul><li><tt>TRUE</tt> The object is activated.</li>
 *     <li><tt>FALSE</tt>  The object is not activated.</li></ul>
 */
    CATBoolean IsActivated() const ;

/**
 * Returns the proxy status.
 * <b>Legal values</b>:
 * <ul><li><tt>TRUE</tt> The object is a proxy.<br>
 * This means that it is a relay to another explicit object in another field model 
 * in the context of assembly of analysis. To access the "final" object use @href #GetPointedObject.</li>
 *     <li><tt>FALSE</tt>  The object is not a proxy.</li></ul>
 */
    CATBoolean IsProxy() const;

/**
 * Returns the pointed by proxy status.
 * <b>Legal values</b>:
 * <ul><li><tt>TRUE</tt> The object is pointed by a proxy.<br>
 * This means that it relayed by another explicit object in another field model 
 * in the context of assembly of analysis.</li>
 *     <li><tt>FALSE</tt>  The object is not pointed by a proxy.</li></ul>
 */
    CATBoolean IsPointedByProxy() const;

/**
 * Gets the pointed parent if proxi status.
 * @param oPointedObject the pointed object.
 */
    HRESULT GetPointedObject(CATAnalysisExplicitParent& oPointedObject) const;


  private :
    // Friend class for private methods
    friend class CATAnalysisExplicitSet;
    friend class CATAnalysisExplicitChild;
    friend class CATAnalysisExplicitEntity;
    friend class CATAnalysisExplicitServices;
    friend class CATAnalysisExplicitTopologyUnit;

    virtual void    Reset() ;
    virtual HRESULT Init(const CATAnalysisExplicitData &iData) ;

    // Adds several children to the current field model object.
    // @param iNumber             : The number of children.
    // @param iChildren[iNumber]  : The array of pointers to the children to be added.<br>
    // <b>Note :</b>
    // <ul><li>A set can only be the child of other sets but not of entities.</li>
    // <li>Each child must be in same field model as the parent.</li></ul>
    HRESULT AddChildren(int iNumber, const CATSamExplicitPtr *iChildren) const ;
    // Removes several children from the current field model object.
    // @param iNumber             : The number of children.
    // @param iChildren[iNumber]  : The array of pointers to the children to be removed.
    HRESULT RemoveChildren(int iNumber, const CATSamExplicitPtr *iChildren) const ;

    // Activates or desactivates the current object from the explicitation.
    // @param iState : If TRUE, then the object is activated.
    //                 else the object is desactivated.
    HRESULT SetActivity(CATBoolean iState) const;

    // Get the Proxy contening the Object in ContextMdodel
    HRESULT GetProxyInContextModel(CATAnalysisExplicitListUsr& oProxyList) const;

    // Get the Proxy contening the Object in ContextModel.
//    static HRESULT SearchProxySetOfParentInContextModel(const CATAnalysisExplicitParent& iEntity, const CATAnalysisExplicitParent& iFromSet, CATAnalysisExplicitListUsr& oProxyList);

    // FeatureInfos
    HRESULT SetFeatureInfos(short iContainerType, CATULONG32 iFeatureIdentity) const;
    HRESULT GetFeatureInfos(short &oContainerType, CATULONG32 &oFeatureIdentity) const;

    // FeaturePointer
    HRESULT SetFeaturePointer(void* iFeaturePointer) const;
    HRESULT GetFeaturePointer(void* &oFeaturePointer) const;
} ;

#endif
