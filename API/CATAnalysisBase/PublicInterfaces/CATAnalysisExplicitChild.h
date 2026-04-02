// COPYRIGHT DASSAULT SYSTEMES  1999
//=============================================================================
//
// CATAnalysisExplicitChild 
//
//=============================================================================
//
// Usage Notes: Services linked to the field model objects which can be children
//              of entities or sets.
//
//=============================================================================
// Octobre 99   Creation                                                    LBK
//=============================================================================
#ifndef CATAnalysisExplicitChild_H_
#define CATAnalysisExplicitChild_H_

#include "CATAnalysisExplicitData.h"

class CATAnalysisExplicitList ;
class CATAnalysisExplicitGrNode ;
class CATMathVector;

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Field model child.
 * This object is used to provide services common to all objects of the field model
 * which can be children of entities or sets.
 */
class ExportedByCATSAM0Explicit CATAnalysisExplicitChild : public CATAnalysisExplicitData
{
   public :
/**
 * Default constructor.
 */
      CATAnalysisExplicitChild() ;

/**
 * Copy constructor.
 */
      CATAnalysisExplicitChild(const CATAnalysisExplicitChild &iChild) ;

/**
 * Copy constructor.
 * @see CATAnalysisExplicitData
 */
      CATAnalysisExplicitChild(const CATAnalysisExplicitData &iData) ;

/**
 * Assignment operator.
 */
      CATAnalysisExplicitChild &operator = (const CATAnalysisExplicitChild &iChild) ;

/**
 * Assignment operator.
 * @see CATAnalysisExplicitData
 */
      CATAnalysisExplicitChild &operator = (const CATAnalysisExplicitData &iData) ;

/**
 * Deletes from the field model the object pointed to by the current object.
 */
      virtual HRESULT Delete() ;

/**
 * Deletes from the field model the object pointed to by the current object.
 * @param really
 *   if Really = TRUE, the child is really destroyed.
 */
      virtual HRESULT Delete(CATBoolean really) ;

/**
 * Delete from the field model the object pointed to by the current object.
 */
      virtual HRESULT UnDelete() ;

/**
 * Assigns a new physical type.
 * @param iPhysicalType
 *   The new physical type.<br>
 *   This new physical type must not change the field model object type
 *   (ie set, entity or characteristic).
 */
      HRESULT SetPhysicalType(CATSamPhysicalType iPhysicalType) const ;

/**
 * Assigns a solver name.<br>
 * A solver name is a string used by a particular solver to identify data.
 * @param iSolverName
 *   The string representing the solver name.
 */
      HRESULT SetSolverName(const char *iSolverName) const ;

/**
 * @deprecated V5R17
 * Stores an external pointer (ie the pointer to an object which does not belong to the field model).<br>
 * <b>Note that an object has either an external pointer or an external tag but not both.</b>
 * @param iExternalPointer
 *   The pointer to store.
 */
      HRESULT SetExternalPointer(const void *iExternalPointer) const ;

/**
 * @deprecated V5R17
 * Stores an external tag (ie the tag of an object which does not belong to the field model).<br>
 * <b>Note that an object has either an external pointer or an external tag but not both.</b>
 * @param iExternalTag
 *   The tag to store.
 */
      HRESULT SetExternalTag(CATINT32 iExternalTag) const ;

/**
 * Assigns a sequential number.<br>
 * A sequential number is a number indicating the position of a data in a list.
 * @param iSequentialNumber
 *   The sequential number.
 */
      HRESULT SetSequentialNumber(int iSequentialNumber) const ;

/**
 * Retrieves the physical type.
 * @param oPhysicalType
 *   The physical type number in database of rules.
 */
      HRESULT GetPhysicalType(CATSamPhysicalType &oPhysicalType) const ;

/**
 * Retrieves the physical type.
 * @param oIdentity
 *   The physical type identity.
 */
      HRESULT GetPhysicalType(const char *(&oIdentity)) const ;

/**
 * Retrieves the physical type.
 * @param oString
 *   The physical type NLS string.
 */
      HRESULT GetPhysicalType(CATUnicodeString &oString) const ;

/**
 * Retrieves the solver name.<br>
 * A solver name is a string used by a particular solver to identify data.
 * @param oSolverName
 *   The string representing the solver name.
 */
      HRESULT GetSolverName(const char *(&oSolverName)) const ;

/**
 * Retrieves the status.<br>
 * @param oStatus
 *   The status of the field model object.
 * @see CATSamStatus
 */
      HRESULT GetStatus(int &oStatus) const ;

/**
 * @deprecated V5R17
 * Retrieves the external pointer (ie the pointer to an object which does not belong to the field model).<br>
 * <b>Note that an object has either an external pointer or an external tag but not both.</b>
 * @param oExternalPointer
 *   The pointer.
 */
      HRESULT GetExternalPointer(void *(&oExternalPointer)) const ;

/**
 * @deprecated V5R17
 * Retrieves the external tag (ie the tag of an object which does not belong to the field model).<br>
 * <b>Note that an object has either an external pointer or an external tag but not both.</b>
 * @param oExternalTag
 *   The tag.
 */
      HRESULT GetExternalTag(CATINT32 &oExternalTag) const ;

/**
 * Obtains the list of parents of the field model object.
 * @param oParentList
 *   The parent list.
 * @see CATAnalysisExplicitList
 */
      HRESULT GetParentList(CATAnalysisExplicitList &oParentList) const ;

/**
 * Obtains the array of pointers to the parents.
 * @param oNumber
 *   The number of parents.
 * @param oParents[oNumber]
 *   The array of pointers to the parents.<br>
 *   This parameter must be equal to NULL when this method is called.<br>
 *   The memory for the array is allocated by this method but must be de-allocated by the caller.
 * @param iFilter
 *   Indicates which type of parent should be obtained.<br>
 *   If <b>CATSamDataTypeLast</b> is provided, then all parents are obtained.
 * @see CATSamDataType
 */
      HRESULT GetParents(int &oNumber, CATSamExplicitPtr * &oParents,
         CATSamDataType iFilter = CATSamDataTypeLast) const ;

/**
 * Adds one parent to the current field model object.
 * @param iParent
 *   The parent to be added.
 * <b>Note : </b>The parent of a set can not be an entity.
 * @see CATAnalysisExplicitParent
 */
      HRESULT AddParent(const CATAnalysisExplicitParent &iParent) const ;

/**
 * Adds several parents to the current field model object.
 * @param iParents
 *   The list of parents to be added.
 * <b>Note : </b>The parents of a set can not be entities.
 * @see CATAnalysisExplicitList
 */
      HRESULT AddParents(CATAnalysisExplicitList &iParents) const ;

/**
 * Removes one parent from the current field model object.
 * @param iParent
 *   The parent to be removed.
 * @see CATAnalysisExplicitParent
 */
      HRESULT RemoveParent(const CATAnalysisExplicitParent &iParent) const ;

/**
 * Removes several parents from the current field model object.
 * @param iParents
 *   The list of parents to be removed.
 * @see CATAnalysisExplicitList
 */
      HRESULT RemoveParents(CATAnalysisExplicitList &iParents) const ;

/**
 * Retrieves the tag.
 * @param oTag
 *   The tag.
 */
      HRESULT GetTag(int &oTag) const ;

/**
 * Retrieves a sequential number.<br>
 * A sequential number is a number indicating the position of a data in a list.
 * @param oSequentialNumber
 *   The sequential number.
 */
      HRESULT GetSequentialNumber(int &oSequentialNumber) const ;

/**
 * Links the current object with a field model object based on its tag (ie unique identifier).
 * @param iTag
 *   The tag of the field model object.
 * @param iModel
 *   A pointer to the field model.
 * @see CATAnalysisExplicitModel
 */
      virtual HRESULT LinkWithTag(int iTag, const CATAnalysisExplicitModel *iModel) ;

/**
 * Obtains a pointer to the field model object the current object points to.
 * @param oExplicitPtr
 *   The field model object pointer.
 */
      void GetPointer(CATSamExplicitPtr &oNewExplicitPtr) const ;

/**
 * Links the current object with a field model object based on its pointer.
 * <ul>
 * <li> iModel can be set to NULL or to the model used for the object creation. Use GetModel to retreive it.</li>
 * <li> iModel can be set to another model that reference the model used for object creation. Use GetContextModel to retreive this new explicit model or
 *       GetModel to retreive the model used for the object creation. </li></ul>
 * @param iExplicitPtr  The pointer to the field model object.
 * @param iModel   A pointer to the field model.
 * @see CATAnalysisExplicitModel
 */
      HRESULT LinkWithPointer(const CATSamExplicitPtr& iExplicitPtr, const CATAnalysisExplicitModel *iModel) ;

   protected :
      virtual void    Reset() ;
      virtual HRESULT Init(const CATAnalysisExplicitData &iData) ;

    private :
      // Friend Class for Private Methods
      friend class CATAnalysisExplicitSet;
      friend class CATAnalysisExplicitAxis;
      friend class CATAnalysisExplicitData;
      friend class CATAnalysisExplicitNode;
      friend class CATAnalysisExplicitList;
      friend class CATAnalysisExplicitSearch;
      friend class CATAnalysisExplicitParent;
      friend class CATAnalysisExplicitEntity;
      friend class CATAnalysisExplicitCharac;
      friend class CATAnalysisExplicitElement;
      friend class CATAnalysisExplicitListATo;
      friend class CATAnalysisCharacCollector;
      friend class CATAnalysisExplicitServices;
      friend class CATAnalysisExplicitRulesData;
      friend class CATAnalysisExplicitVirtualNode;
      friend class CATAnalysisExplicitVirtualElement;

      // Apply the transformation matrix to the coordinates in context of assembly.
      // @param ioCoordinates : The coordinates in meters to transform.
      HRESULT ApplyTransformationOnCoord(double* ioCoordinates) const;
      // Apply the transformation matrix to the coordinates in context of assembly.
      // @param ioCoordinates : The coordinates in meters to transform.
      HRESULT ApplyTransformationOnCoord(float* ioCoordinates) const;
      // Apply the transformation matrix to a vector in context of assembly.
      // @param ioVector : The vector to transform.
      HRESULT ApplyTransformationOnVector(CATMathVector& ioVector)const;

      // Assigns a status.<br>
      // @param iStatus
      // The status of the field model object.
      // @see CATSamStatus
      HRESULT SetStatus(int iStatus, CATBoolean iCheckDisplayed = TRUE) const ;
      // Adds a flag to the status.<br>
      // @param iFlag : The flag to add.
      HRESULT AddFlag(CATSamStatus iFlag, CATBoolean iCheckDisplayed = TRUE) const ;
      // Removes a flag to the status.<br>
      // @param iFlag : The flag to remove.
      HRESULT RemoveFlag(CATSamStatus iFlag, CATBoolean iCheckDisplayed = TRUE) const ;

      // retrieves the category of the object.
      // @param oCategory : The category of the object.
      HRESULT UnSafeGetCategory(CATSamValue &oCategory) const ;
      // UnSafeGetPointedObject
      HRESULT UnSafeGetPointedObject(CATAnalysisExplicitChild& oPointedObject) const;
      // Check if this is a Proxy
      CATBoolean UnSafeIsProxy() const;

      // Proxy ExternalPointer
      HRESULT SetProxyExternalPointer(const void *iExternalPointer) const ;
      HRESULT GetProxyExternalPointer(void *(&oExternalPointer)) const ;

      // Check, UnCheck, UnCheck
      HRESULT Check();
      HRESULT UnCheck();
      CATBoolean IsChecked() const;

      // Uses the rules of the current field model to check the validity of the current field model object.
      // @param oList : A user list containing the offending object followed by the objects recursively traversed and ending by the current object.
      //                      This parameter is allocated by this method and must be deleted by the caller.
      // @param Check : This parameter specifies the check mode.
      HRESULT CheckValidity(CATAnalysisExplicitListUsr &oList, const int Check = CATSamCheckTypeAll) const ;
      // Scans the current model from the current object to check it is not cyclic.
      // @param oList : A user list containing the offending object followed by the objects recursively traversed and ending by the current object.
      //                This parameter is allocated by this method and must be deleted by the caller.
      HRESULT CheckCyclicity(CATAnalysisExplicitListUsr &oList) const ;

      void GetPointer(Handler(CATSamModelDataRoot) &oNewExplicitHandler) const;
      HRESULT LinkWithPointer(const Handler(CATSamModelDataRoot)& iExplicitHanlder, const CATAnalysisExplicitModel *iModel);
      
      HRESULT GetTag(CATSamExplicitTag &oTag) const ;
      virtual HRESULT LinkWithTag(const CATSamExplicitTag &iTag, const CATAnalysisExplicitModel *iModel) ;
} ;

#endif
