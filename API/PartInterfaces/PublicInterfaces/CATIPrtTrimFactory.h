#ifndef CATIPrtTrimFactory_H
#define CATIPrtTrimFactory_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include <PartItf.h>
#include "CATBaseUnknown.h"
#include "CATISpecObject.h"
#include "CATIContainer.h"
class CATListValCATISpecObject_var; 

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATIPrtTrimFactory;
#else
extern "C" const IID IID_CATIPrtTrimFactory;
#endif

/**
 * Class to define advanced boolean operations called trim operations.
 * <b>Role</b>: A boolean operation is an operation between two non operated
 * mechanical bodies. The operation will insert iSecond body
 * after the last feature 
 * of iFirst body, the iFirst body must have at least one feature.
 * The trim operation starts with a step of dividing the volumes of the two
 * bodies in a set of new volumes (volumes which belong only to iFirst body,
 * volumes which belong only to iSecond body, volumes which belong to both
 * bodies). 
 * The second step consist to take into account a list of specified faces in
 * order to define which volumes must be kept or removed.
 * <br><b>Precondition</b>:<br>
 * - Users must set iFirst body as current body.<br> 
 * - The two bodies must be both updated.<br>
 * - iSecond body must be different of iFirst body and therefore not be 
 * linked to iFirst body (no specification loop is tolered). 
 */
class ExportedByPartItf CATIPrtTrimFactory: public CATBaseUnknown
{
  CATDeclareInterface;
  
  public :
/**
 * Trim iSecond body to iFirst body.
 * @param iFirst
 *   Current body.
 * @param iSecond
 *   Body to be trimmed to iFirst body. 
 *   <br> <b>Legal values</b>: if iSecond = NULL_var, the operation is a 
 * special trim operation called remove lump operation.
 * @param iRemoveList
 *   List of non divided faces by trim operation used to indicate which 
 * resulting volumes must be removed. 
 * @param iKeepList
 *   List of non divided faces by trim operation used to indicate which 
 * resulting volumes must be kept.
 * @param iRemoveByAdjacentList
 *   List of divided faces by trim operation used to indicate which 
 * resulting volumes must be removed. 
 *   <br> <b>Legal values</b>:  iRemoveByAdjacentList = 0 
 * @param iAdjacentForRemoveList
 *   List of adjacent faces. For each face of iRemoveByAdjacentList list, an
 * adjacent face which belongs to the other body is needed.
 *   <br> <b>Legal values</b>:  iAdjacentForRemoveList = 0   
 * @param iKeepByAdjacentList
 *   List of divided faces by trim operation used to indicate which 
 * resulting volumes must be kept.
 *   <br> <b>Legal values</b>:  iKeepByAdjacentList = 0 
 * @param iAdjacentForKeepList
 *   List of adjacent faces. For each face of iKeepByAdjacentList list, an
 * adjacent face which belongs to the other body is needed. 
 *   <br> <b>Legal values</b>:  iAdjacentForKeepList = 0
  * @returns the created trim feature.     
 */     
  virtual CATISpecObject_var CreateTrim (
                  CATISpecObject_var iFirst,
                  CATISpecObject_var iSecond,   
                  const CATLISTV(CATISpecObject_var)* iRemoveList,
                  const CATLISTV(CATISpecObject_var)* iKeepList,
                  const CATLISTV(CATISpecObject_var)* iRemoveByAdjacentList=0,
                  const CATLISTV(CATISpecObject_var)* iAdjacentForRemoveList=0,
                  const CATLISTV(CATISpecObject_var)* iKeepByAdjacentList=0,
                  const CATLISTV(CATISpecObject_var)* iAdjacentForKeepList=0
                   )  =0;
/** @nodoc */ 
  virtual CATISpecObject_var  CreateStartUpTrim(CATIContainer_var featcont) = 0 ;
};

CATDeclareHandler (CATIPrtTrimFactory, CATBaseUnknown);

#endif



