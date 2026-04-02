// COPYRIGHT DASSAULT SYSTEMES  1999
//=============================================================================
//
// CATAnalysisExplicitEntity
//
//=============================================================================
//
// Usage Notes: Services linked to the field model entities.
//
//=============================================================================
// Octobre 99   Creation                                                    LBK
//=============================================================================
#ifndef CATAnalysisExplicitEntity_H_
#define CATAnalysisExplicitEntity_H_

#include "CATAnalysisExplicitParent.h"

class CATSamStream ;

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Field model entity.
 * This object is used to provide services linked to the field model entities.
 */
class ExportedByCATSAM0Explicit CATAnalysisExplicitEntity : public CATAnalysisExplicitParent
{
   public :
/**
 * Default constructor.
 */
      CATAnalysisExplicitEntity() ;

/**
 * Copy constructor.
 */
      CATAnalysisExplicitEntity(const CATAnalysisExplicitEntity &iEntity) ;

/**
 * Copy constructor.
 * @see CATAnalysisExplicitData
 */
      CATAnalysisExplicitEntity(const CATAnalysisExplicitData &iData) ;

/**
 * Assignment operator.
 */
      CATAnalysisExplicitEntity &operator = (const CATAnalysisExplicitEntity &iEntity) ;

/**
 * Assignment operator.
 * @see CATAnalysisExplicitData
 */
      CATAnalysisExplicitEntity &operator = (const CATAnalysisExplicitData &iData) ;

/**
 * Creates an entity in the field model.
 * @param iModel
 *   A pointer to the field model into which the entity will be created.
 * @param iPhysicalType
 *   The physical type of the entity.
 * @see CATAnalysisExplicitModel
 */
      HRESULT CreateEntity(const CATAnalysisExplicitModel *iModel,
         CATSamPhysicalType iPhysicalType) ;

/**
 * Creates an entity in the field model as the child of an other set or entity.
 * @param iParent
 *   The parent of the entity which will be created.
 * @param iPhysicalType
 *   The physical type of the entity.
 * @see CATAnalysisExplicitParent
 */
      HRESULT CreateEntity(const CATAnalysisExplicitParent &iParent,
         CATSamPhysicalType iPhysicalType) ;

/**
 * Obtains the apply-to list.
 * @param oApplyToList
 *   The apply-to list.
 * @see CATAnalysisExplicitList
 */
      HRESULT GetApplyToList(CATAnalysisExplicitList &oApplyToList) const ;

/**
 * Obtains the array of pointers to the apply-to.
 * @param oNumber
 *   The number of apply-to.
 * @param oApplyTo[oNumber]
 *   The array of pointers to the apply-to.<br>
 *   This parameter must be equal to NULL when this method is called.<br>
 *   The memory for the array is allocated by this method but must be de-allocated by the caller.
 * @param iExpand
 *   If iExpand is True, and if the ApplyTo list contains Sets or Groups, the method
 *   returns the children of the Sets or the ApplyTo of the Groups.
 */
      HRESULT GetApplyTo(int &oNumber, CATSamExplicitPtr * &oApplyTo, CATBoolean iExpand = FALSE) const ;
    
/**
 * Obtains the arrays of the apply-to pointers, apply-to numbers, apply-to Qualifiers and the apply-to positions.
 * @param oNumber
 *   The number of apply-to.
 * @param oApplyTo[oNumber]
 *   The array of the apply-to pointers.<br>
 *   This parameter must be equal to NULL when this method is called.<br>
 *   The memory for the array is allocated by this method but must be de-allocated by the caller.
 * @param oApplyToPosition
 *   The apply position.
 * @param oApplyToNumbers[oNumber]
 *   The array of apply-to numbers.<br>
 *   This parameter must be equal to NULL when this method is called.<br>
 *   The memory for the array is allocated by this method but must be de-allocated by the caller.
 * @param oApplyToQualifiers[oNumber]
 *   The array of apply-to qualifiers.<br>
 *   This parameter must be equal to NULL when this method is called.<br>
 *   The memory for the array is allocated by this method but must be de-allocated by the caller.
 * @param iExpand
 *   If iExpand is True, and if the ApplyTo list contains Sets or Groups, the method
 *   returns the children of the Sets or the ApplyTo of the Groups. 
 * @see CATSamPosition, CATSamApplyQualifier
 */
      HRESULT GetApplyTo(int &oNumber, CATSamExplicitPtr* &oApplyTo, CATSamPosition &oApplyToPosition, int* &oApplyToNumbers,
                         CATSamApplyQualifier* &oApplyToQualifiers, CATBoolean iExpand = FALSE) const ;
 
/**
 * Obtains the arrays of the apply-to sequential numbers, apply-to numbers, apply-to Qualifiers and the apply-to positions.
 * @param oNumber
 *   The number of apply-to.
 * @param oApplyTo[oNumber]
 *   The array of the apply-to Sequential Number .<br>
 *   This parameter must be equal to NULL when this method is called.<br>
 *   The memory for the array is allocated by this method but must be de-allocated by the caller.
 * @param oApplyToPosition
 *   The apply-to position.
 * @param oApplyToNumbers[oNumber]
 *   The array of apply-to numbers.<br>
 *   This parameter must be equal to NULL when this method is called.<br>
 *   The memory for the array is allocated by this method but must be de-allocated by the caller.
 * @param oApplyToQualifiers[oNumber]
 *   The array of apply-to qualifiers.<br>
 *   This parameter must be equal to NULL when this method is called.<br>
 *   The memory for the array is allocated by this method but must be de-allocated by the caller.
 * @param iExpand
 *   If iExpand is True, and if the ApplyTo list contains Sets or Groups, the method
 *   returns the children of the Sets or the ApplyTo of the Groups. 
 * @see CATSamPosition, CATSamApplyQualifier
 */
      HRESULT GetApplyTo(int &oNumber, int* &oApplyTo, CATSamPosition &oApplyToPosition, int* &oApplyToNumbers,
                         CATSamApplyQualifier* &oApplyToQualifiers, CATBoolean iExpand = FALSE) const ;

/**
 * Applies a field model entity to another entity or set.
 * @param iApplyTo
 *   The field object on which the apply is done. must be defined in the same model than the entity.
 * @param iApplyPosition
 *   The position of the apply.
 * @param iApplyNumber
 *   The number of the apply.
 * @param iApplyQualifier
 *   The apply qualifier.
 * @see CATAnalysisExplicitParent, CATSamPosition, CATSamApplyQualifier
 */
      HRESULT ApplyTo(const CATAnalysisExplicitParent &iApplyTo, CATSamPosition iApplyPosition,
                      int iApplyNumber = 0, CATSamApplyQualifier iApplyQualifier = CATSamApplyQualifierLast) const ;

/**
 * Applies a field model entity to several entities or sets.
 * @param oNumber
 *   The number of apply-to.
 * @param iApplyTo[oNumber]
 *   The array of pointers to the field objects on which the apply is done.
 * @param iApplyPosition
 *   The position of the applies.
 * @param iApplyNumber
 *   The number of the applies.
 * @param iApplyQualifier
 *   The apply qualifier.
 * @see CATSamPosition, CATSamApplyQualifier
 */
      HRESULT ApplyTo(int iNumber, const CATSamExplicitPtr *iApplyTo, CATSamPosition iApplyPosition, int iApplyNumber = 0,
                      CATSamApplyQualifier iApplyQualifier = CATSamApplyQualifierLast) const ;
   
/**
 * Applies a field model entity to several entities or sets.
 * @param oNumber
 *   The number of apply-to.
 * @param iApplyTo[oNumber]
 *   The array of pointers to the field objects on which the apply is done.
 * @param iApplyPosition
 *   The position of the applies.
 * @param iApplyNumber[oNumber]
 *   The array of numbers of the applies.
 * @param iApplyQualifier[oNumber]
 *   The array of apply qualifiers.
 * @see CATSamPosition
 */
      HRESULT ApplyTo(int iNumber, const CATSamExplicitPtr *iApplyTo, CATSamPosition iApplyPosition,
                      const int *iApplyNumber, const CATSamApplyQualifier *iApplyQualifier = NULL) const ;
  
/**
 * Removes the apply of a field model entity on another entity or set.
 * @param iApplyTo
 *   The field object for which the apply must be removed.
 * @see CATAnalysisExplicitParent
 */
      HRESULT RemoveApplyTo(const CATAnalysisExplicitParent &iApplyTo) const ;

/**
 * Removes the applies of a field model entity on several entities or sets.
 * @param oNumber
 *   The number of apply-to.
 * @param iApplyTo[oNumber]
 *   The array of pointers to the field objects for which the apply must be removed.
 * @param iApplyModel
 *   if iApplyModel is not NULL the objects for which the apply must be removed are defined in iApplyModel, otherwise they are defined in the same model than the entity.
 */
      HRESULT RemoveApplyTo(int iNumber, const CATSamExplicitPtr *iApplyTo, const CATAnalysisExplicitModel *iApplyModel = NULL) const ;

/**
 * @deprecated V5R17
 * Returns the Combine status.
 * <b>Legal values</b>:
 * <ul><li><tt>TRUE</tt> The object is a combined Entity.<br>
 * This means that it is pointing to aSet in an other case.
 * To access the "pointed" Set object use @href #GetPointedSetByCombinedEntity.</li>
 *     <li><tt>FALSE</tt>  The object is not a combined Entity.</li></ul>
 */
      CATBoolean IsACombinedEntity() const;

/**
 * @deprecated V5R17
 * Gets the pointed Set if Combine status.
 * @param oPointedObject the pointed object.
 */
      HRESULT GetPointedSetByCombinedEntity(CATAnalysisExplicitSet& oPointedSet) const;

   protected :
     virtual void    Reset() ;
     virtual HRESULT Init(const CATAnalysisExplicitData &iData) ;

   private :
    // Friend Class For Private Methode
    friend class CATAnalysisExplicitServices; 

    // Creates an entity in the field model (internal use Only
    HRESULT CreateEntity(const CATAnalysisExplicitModel *iModel, const CATULONG32& iEntityTag, const CATSamPhysicalType& iPhysicalType, const CATBoolean& iIsOrpan);
    // Obtain the User defined positions of the instance of CATAnalysisExplicitEntity if exists.
    // return TRUE if the instance of CATAnalysisExplicitEntity had User defined positions.
    CATBoolean HadUserDefinedPositions(CATAnalysisExplicitCharac &oNbPositions, CATAnalysisExplicitCharac &oPositions) const;
    // Check the position apply in case of enity having variable characteristics.
    // return S_OK if the User defined positions are well defined.
    HRESULT CheckApplyValidity() const;
} ;

#endif
