#ifndef CATIPrtBooleanFactory_H
#define CATIPrtBooleanFactory_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include <PartItf.h>
#include "CATBaseUnknown.h"
#include "CATISpecObject.h"
#include "CATIContainer.h" 
 
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATIPrtBooleanFactory;
#else
extern "C" const IID IID_CATIPrtBooleanFactory;
#endif

/**
 * Class to define common boolean operations.
 * <b>Role</b>: A boolean operation is an operation between two non operated
 * mechanical bodies. The operation will insert iSecond body
 * after the last feature 
 * of iFirst body, the iFirst body may have no feature.
 * <br><b>Precondition</b>:<br>
 * - Users must set iFirst body as current body.<br>
 * - The two bodies must be both updated.<br>
 * - iSecond body must be different of iFirst body and therefore not be 
 * linked to iFirst body (no specification loop is tolered). 
 */
class ExportedByPartItf CATIPrtBooleanFactory: public CATBaseUnknown
{
  CATDeclareInterface;
  
  public :
/**
 * Adds iSecond body to iFirst body.
 * @param iFirst
 *   Current body.
 * @param iSecond
 *   Body to be added to the iFirst body.
 * @param AggregateSecondOperand
 *	 Whether iSecond has to be aggregated to iFirst
 * @return The created boolean operation. 
 */    
  virtual CATISpecObject_var CreateAdd       (CATISpecObject_var iFirst, CATISpecObject_var iSecond, CATBoolean AggregateSecondOperand = TRUE )  =0;
/**
 * Removes iSecond body to iFirst body.
 * @param iFirst
 *   Current body.
 * @param iSecond
 *   Body to be removed to the iFirst body.
 * @param AggregateSecondOperand
 *	 Whether iSecond has to be aggregated to iFirst
 * @return The created boolean operation. 
 */  
  virtual CATISpecObject_var CreateRemove    (CATISpecObject_var iFirst, CATISpecObject_var iSecond, CATBoolean AggregateSecondOperand = TRUE )  =0;
/**
 * Intersects iSecond body to iFirst body.
 * @param iFirst
 *   Current body.
 * @param iSecond
 *   Body to be intersected to the iFirst body.
 * @param AggregateSecondOperand
 *	 Whether iSecond has to be aggregated to iFirst
 * @return The created boolean operation.
 */
  virtual CATISpecObject_var CreateIntersect (CATISpecObject_var iFirst, CATISpecObject_var iSecond, CATBoolean AggregateSecondOperand = TRUE )  =0;
/**
 * Assembles iSecond body to iFirst body.
 * @param iFirst
 *   Current body.
 * @param iSecond
 *   Body to be assembled to the iFirst body. If the polarity of the first
 * feature of the iSecond body is either positive nor negative, the operation 
 * will either add nor remove iSecond body to iFirst body.
 * @param AggregateSecondOperand
 *	 Whether iSecond has to be aggregated to iFirst
 * @return The created boolean operation. 
 */
  virtual CATISpecObject_var CreateAssemble  (CATISpecObject_var iFirst, CATISpecObject_var iSecond, CATBoolean AggregateSecondOperand = TRUE )  =0;
/** @nodoc */ 
  virtual CATISpecObject_var  CreateStartUpBooleanOperation(CATIContainer_var featcont) = 0 ;
/** @nodoc */
  virtual CATISpecObject_var  CreateStartUpAdd(CATIContainer_var featcont) = 0 ;
/** @nodoc */
  virtual CATISpecObject_var  CreateStartUpRemove(CATIContainer_var featcont) = 0  ;
/** @nodoc */
  virtual CATISpecObject_var  CreateStartUpIntersect(CATIContainer_var featcont)= 0  ;
/** @nodoc */
  virtual CATISpecObject_var  CreateStartUpAssemble(CATIContainer_var featcont) = 0 ;

/**
 * @deprecated V5R14
 * use CATISpecObject_var CreateAdd (CATISpecObject_var iFirst, CATISpecObject_var iSecond)  =0;
 * or  CATISpecObject_var CreateVolumicAdd (CATISpecObject_var iFirst, CATISpecObject_var iSecond)  =0;
 * depending of the type of boolean add you want to create
 */    
  virtual CATISpecObject_var CreateAdd (CATISpecObject_var iFirst, CATISpecObject_var iSecond, int iType )  =0;
/**
 * @deprecated V5R14
 * use CATISpecObject_var CreateRemove (CATISpecObject_var iFirst, CATISpecObject_var iSecond)  =0;
 * or  CATISpecObject_var CreateVolumicRemove (CATISpecObject_var iFirst, CATISpecObject_var iSecond)  =0;
 * depending of the type of boolean remove you want to create
 */  
  virtual CATISpecObject_var CreateRemove (CATISpecObject_var iFirst, CATISpecObject_var iSecond, int iType )  =0;
/**
 * @deprecated V5R14
 * use CATISpecObject_var CreateIntersect (CATISpecObject_var iFirst, CATISpecObject_var iSecond)  =0;
 * or  CATISpecObject_var CreateVolumicIntersect (CATISpecObject_var iFirst, CATISpecObject_var iSecond)  =0;
 * depending of the type of boolean intersect you want to create
 */
  virtual CATISpecObject_var CreateIntersect (CATISpecObject_var iFirst, CATISpecObject_var iSecond, int iType )  =0;
/** @nodoc */
  virtual CATISpecObject_var CreateAssemble (CATISpecObject_var iFirst, CATISpecObject_var iSecond, int iType )  =0;  
/**
 * Adds iSecond volume or body to iFirst volume.
 * @param iFirst
 *   Volume to be modified.
 * @param iSecond
 *   Volume or body to be added to the iFirst volume.
 * @param AggregateSecondOperand
 *	 Whether iSecond has to be aggregated to iFirst if iSecond is a body
 * @return The created volumic boolean operation. 
 */    
  virtual CATISpecObject_var CreateVolumicAdd (CATISpecObject_var iFirst, CATISpecObject_var iSecond, CATBoolean AggregateSecondOperand = TRUE )  =0;
/**
 * Removes iSecond volume or body to iFirst volume.
 * @param iFirst
 *   Volume to be modified.
 * @param iSecond
 *   Volume or body to be removed to the iFirst volume.
 * @param AggregateSecondOperand
 *	 Whether iSecond has to be aggregated to iFirst if iSecond is a body
 * @return The created volumic boolean operation. 
 */  
  virtual CATISpecObject_var CreateVolumicRemove (CATISpecObject_var iFirst, CATISpecObject_var iSecond, CATBoolean AggregateSecondOperand = TRUE )  =0;
/**
 * Intersects iSecond volume or body to iFirst volume.
 * @param iFirst
 *   Volume to be modified.
 * @param iSecond
 *   Volume or body to be intersected to the iFirst volume.
 * @param AggregateSecondOperand
 *	 Whether iSecond has to be aggregated to iFirst if iSecond is a body
 * @return The created volumic boolean operation.
 */
  virtual CATISpecObject_var CreateVolumicIntersect (CATISpecObject_var iFirst, CATISpecObject_var iSecond, CATBoolean AggregateSecondOperand = TRUE )  =0;
};
CATDeclareHandler (CATIPrtBooleanFactory, CATBaseUnknown);

#endif



