/* -*-c++-*- */
#ifndef CATIGSMUseCombine_H
#define CATIGSMUseCombine_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGSMUseItfExportedBy.h"
#include "CATIMmiMechanicalFeature.h"
#include "CATIGSMUseDirection.h"
#include "CATGSMCombineDef.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID  IID_CATIGSMUseCombine;
#else
extern "C" const IID IID_CATIGSMUseCombine;
#endif

/**
 * Interface to combined curve feature.
 * <b>Role</b>: Allows you to access data of the combined curve feature created by using 
 * an element, a direction,  another element and another direction.
 * The directions are used to extrude the elements.
 * Note  
 *    Solution Type: CATGSMNearestSolutionCombine (=0) -> Nearest solution
 *    Solution Type: CATGSMAllSolutionsCombine    (=1) -> All solutions
 *    Solution TypeCombine: CATGSMSolutionCombine0 -> Normal
 *    Solution TypeCombine: CATGSMSolutionCombine1 -> Directions
 * @see CATGSMCombineSolutionType, CATGSMCombineSolutionTypeCombine
 * @see CATIGSMUseFactory#CreateCombine
 */
class ExportedByCATGSMUseItf CATIGSMUseCombine : public CATBaseUnknown
{
   CATDeclareInterface;
public:
 
  /**
    * Gets the first feature to combine (curve).
    *   @param oElem
    * @see CATIMmiMechanicalFeature
    */
 virtual    HRESULT GetElem1(CATIMmiMechanicalFeature_var & oElem) = 0;

  /**
    * Sets the first feature to combine (a curve).
    *   @param iElem
    *      new feature to combine
    * @see CATIMmiMechanicalFeature
    */
 virtual    HRESULT SetElem1(const CATIMmiMechanicalFeature_var iElem) = 0;
 
 
  /**
    * Gets the second feature to combine (curve).
    *   @param oElem
    * @see CATIMmiMechanicalFeature
    */
 virtual    HRESULT GetElem2(CATIMmiMechanicalFeature_var & oElem) = 0;

  /**
    * Sets the second feature to combine (a curve).
    *   @param iElem
    *      new feature to combine
    * @see CATIMmiMechanicalFeature
    */
 virtual    HRESULT SetElem2(const CATIMmiMechanicalFeature_var iElem) = 0;
 
  /**
    * Gets the extrude direction.
    * <br>
    * The direction is used if normal mode is off.
    *   @param oElem
    *      extrusion direction of the first element
    * @see CATIGSMUseDirection
    */
 virtual    HRESULT GetDirection1(CATIGSMUseDirection_var & oElem) = 0;

  /**
    * Sets the extrude direction.
    * <br>
    * The direction is used if normal mode is off.
    *   @param iElem
    *      extrusion direction of the first element of the combine
    * @see CATIGSMUseDirection
    */
 virtual    HRESULT SetDirection1(const CATIGSMUseDirection_var iElem) = 0;
 
 
  /**
    * Gets the extrude direction.
    * <br>
    * The direction is used if normal mode is off.
    *   @param oElem
    *      extrusion direction of the second element
    * @see CATIGSMUseDirection
    */
 virtual    HRESULT GetDirection2(CATIGSMUseDirection_var & oElem) = 0;

  /**
    * Sets the extrude direction.
    * <br>
    * The direction is used if normal mode is off.
    *   @param iElem
    *      extrusion direction of the second element of the combine
    * @see CATIGSMUseDirection
    */
 virtual    HRESULT SetDirection2(const CATIGSMUseDirection_var iElem) = 0;
 
  /**
    * Gets Solution type.
    * <br>
    * All solutions or Nearest solution (only nearest combine 
    * is kept when more than one solution is possible).
    *   @param oType
    *      Solution type
    *       : CATGSMNearestSolutionCombine (=0) -> Nearest solution
    *       : CATGSMAllSolutionsCombine (=1) -> All solutions
    * @see CATGSMCombineSolutionType
    */
 virtual    HRESULT GetSolutionType(CATGSMCombineSolutionType & oType) = 0;
 
   /**
    * Gets the Combination Mode.
    * <br> i.e: Normal for planar curve or using Extrusion Directions
    *   @param oType
    *      Solution type
    *       : CATGSMSolutionCombine0 -> Normal
    *       : CATGSMSolutionCombine1 -> Directions
    * @see CATGSMCombineSolutionTypeCombine
    */
 virtual    HRESULT GetSolutionTypeCombine(CATGSMCombineSolutionTypeCombine & oType) = 0;

  /**
    * Sets the Combination Type. 
    * <br> It modifies the solution type either "Nearest solution" or "All solutions"
   *  (only nearest combine is kept when more than one solution is possible) :
    * <br> Note: 
    * <br>  - If combined curve type selected is Normal, the directions of the combined curve are the normals to 
    * the planes on which are the curves.
    * <br>  - If Directions is selected, two directions of combine are needed.
    *   @param iType
    *      Solution type
    *       : CATGSMNearestSolutionCombine (=0) -> Nearest solution
    *       : CATGSMAllSolutionsCombine (=1) -> All solutions
    * @see CATGSMCombineSolutionType
    */
 virtual    HRESULT SetSolutionType(CATGSMCombineSolutionType iType) = 0;
    
   /**
    * Sets the Combination Mode.
    * <br> i.e: Normal for planar curve or using Extrusion Directions
    *   @param iType
    *      Solution typecombine
    *       : CATGSMSolutionCombine0 -> Normal
    *       : CATGSMSolutionCombine1 -> Directions
    * @see CATGSMCombineSolutionTypeCombine
    */
 virtual    HRESULT SetSolutionTypeCombine(CATGSMCombineSolutionTypeCombine iType) = 0;
};
CATDeclareHandler (CATIGSMUseCombine, CATBaseUnknown);
#endif // CATIGSMUseCombine_H


