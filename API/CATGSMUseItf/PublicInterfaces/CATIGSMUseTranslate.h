/* -*-c++-*- */
#ifndef CATIGSMUseTranslate_H
#define CATIGSMUseTranslate_H
//
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */


#include "CATGSMUseItfExportedBy.h"
#include "CATIMmiMechanicalFeature.h"
#include "CATICkeParm.h"
#include "CATIGSMUseDirection.h"
#include "CATGSMTranslateDef.h"
#include "CATGSMTransfoModeDef.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID  IID_CATIGSMUseTranslate;
#else
extern "C" const IID IID_CATIGSMUseTranslate;
#endif

/**
 * Translation.
 * <b>Role</b>: Allows to access data of the Translation feature created by using
 * an element, a direction  and a distance value
 * @see CATIGSMUseFactory#CreateTranslate
 */
class ExportedByCATGSMUseItf CATIGSMUseTranslate : public CATBaseUnknown
{
   CATDeclareInterface;
public:

  /**
    * Gets the type of the translation vector definition.
    * <br> (1= Direction+ Distance, 2= Point+ Point, 3= Coordinates)
    *   @param oType
    *      type of the translation vector
    */
 virtual HRESULT GetVectorType(CATGSMTranslateVectorType &oType)= 0;

  /**
    * Gets the feature to translate.
    *   @param oElem
    *      feature to translate
    */
 virtual    HRESULT GetElemToTranslate(CATIMmiMechanicalFeature_var & oElem)= 0;

  /**
    * Gets the first point defining the translation vector.
    *   @param oElem
    *      The first point.
    */
 virtual    HRESULT GetFirstPoint(CATIMmiMechanicalFeature_var & oElem) = 0;

  /**
    * Gets the second point defining the translation vector.
    *   @param oElem
    *      The second point.
    */
 virtual    HRESULT GetSecondPoint(CATIMmiMechanicalFeature_var & oElem) = 0;

  /**
    * Gets the direction.
    *   @param oDirection
    *      direction
    *   @see CATIGSMUseDirection
 */
 virtual    HRESULT GetDirection(CATIGSMUseDirection_var & oDirection)= 0;

  /**
    * Gets the distance value.
    *    @param oDistance
    *        Distance value
    */
 virtual    HRESULT GetDistance(double & oDistance) = 0;

  /**
    * Gets the distance value.
    *    @param oDistance
    *        Distance value
    *   @see CATICkeParm
 */
 virtual    HRESULT GetDistance(CATICkeParm_var & oDistance) = 0;

  /**
    * Gets the X coordinate value.
    *    @param oCoordX
    *        X coordinate value
    */
 virtual    HRESULT GetCoordX(double & oCoordX) = 0;

  /**
    * Gets the X coordinate value.
    *    @param oCoordX
    *        oCoordX value
    *   @see CATICkeParm
 */
 virtual    HRESULT GetCoordX(CATICkeParm_var & oCoordX) = 0;

  /**
    * Gets the Y coordinate value.
    *    @param oCoordY
    *        Y coordinate value
    */
 virtual    HRESULT GetCoordY(double & oCoordY) = 0;

  /**
    * Gets the Y coordinate value.
    *    @param oCoordY
    *        oCoordY value
    *   @see CATICkeParm
 */
 virtual    HRESULT GetCoordY(CATICkeParm_var & oCoordY) = 0;

  /**
    * Gets the Z coordinate value.
    *    @param oCoordZ
    *        Z coordinate value
    */
 virtual    HRESULT GetCoordZ(double & oCoordZ) = 0;

  /**
    * Gets the Z coordinate value.
    *    @param oCoordZ
    *        oCoordZ value
    *   @see CATICkeParm
 */
 virtual    HRESULT GetCoordZ(CATICkeParm_var & oCoordZ) = 0;

  /**
    * Gets the Creation Mode.
    *   @param oMode
    *      flag for transformation type (from CATGSMTransfoMode enumeration) :
	*		- CATGSMTransfoModeUnset
	*		- CATGSMTransfoModeCreation
	*		- CATGSMTransfoModeModification
    */
 virtual    HRESULT GetCreationMode (enum CATGSMTransfoMode & oMode)= 0;

  /**
    * Sets the type of the translation vector definition.
    * <br> (1= Direction+ Distance, 2= Point+ Point, 3= Coordinates)
    *   @param iType
    *      type of the translation vector
    */
 virtual HRESULT SetVectorType(CATGSMTranslateVectorType iType)= 0;

  /**
    * Sets the feature to translate.
    *   @param iElem
    *      The new feature to translate.
    */
 virtual    HRESULT SetElemToTranslate (const CATIMmiMechanicalFeature_var iElem) = 0;

  /**
    * Sets the first point defining the translation vector.
    *   @param iElem
    *      The first point.
    */
 virtual    HRESULT SetFirstPoint(const CATIMmiMechanicalFeature_var iElem) = 0;

  /**
    * Sets the second point defining the translation vector.
    *   @param iElem
    *      The second point.
    */
 virtual    HRESULT SetSecondPoint(const CATIMmiMechanicalFeature_var iElem) = 0;

  /**
    * Sets the direction.
    *
    *   @param iDirection
    *      The new direction of translation.
    *   @see CATIGSMUseDirection
 */
 virtual    HRESULT SetDirection  (const CATIGSMUseDirection_var iDirection)= 0;

  /**
    * Sets the distance value.
    *    @param iDistance
    *        Distance value
    */
 virtual    HRESULT      SetDistance  (double iDistance) = 0;

  /**
    * Sets the distance value.
    *    @param iDistance
    *        Distance value
    *   @see CATICkeParm
 */
 virtual    HRESULT SetDistance  (const CATICkeParm_var iDistance)= 0;

  /**
    * Sets the X coordinate value.
    *    @param iX
    *        X coordinate value
    */
 virtual    HRESULT      SetCoordX  (double iX) = 0;

  /**
    * Sets the X coordinate value.
    *    @param iX
    *        X coordinate value
    *   @see CATICkeParm
 */
 virtual    HRESULT SetCoordX (const CATICkeParm_var iX)= 0;

  /**
    * Sets the Y coordinate value.
    *    @param iY
    *        Y coordinate value
    */
 virtual    HRESULT      SetCoordY  (double iY) = 0;

  /**
    * Sets the Y coordinate value.
    *    @param iY
    *        Y coordinate value
    *   @see CATICkeParm
 */
 virtual    HRESULT SetCoordY (const CATICkeParm_var iY)= 0;

  /**
    * Sets the Z coordinate value.
    *    @param iZ
    *        Z coordinate value
    */
 virtual    HRESULT      SetCoordZ  (double iZ) = 0;

  /**
    * Sets the Z coordinate value.
    *    @param iZ
    *        Z coordinate value
    *   @see CATICkeParm
 */
 virtual    HRESULT SetCoordZ (const CATICkeParm_var iZ)= 0;

  /**
    * Sets the Creation Mode.
    *   @param iMode
    *      flag for transformation type (creation or modification)
    */
 virtual    HRESULT SetCreationMode (const CATBoolean iMode)= 0;

 /**
  * Gets the reference Axis. 
  * This data is not mandatory, if oRefAxis is null, then absolute axis system is considered as reference axis system.
  * @Param oRefAxis
  *     Reference axis (oRefAxis = NULL_var is allowed).
  */
 virtual HRESULT GetReferenceAxis(CATIMmiMechanicalFeature_var& oRefAxis) = 0;

/**
  * Sets the reference Axis. 
  *    This data is not mandatory, if iRefAxis is null, then absolute axis system is considered as reference axis system.
  * @Param iRefAxis
  *     Reference Axis (iRefAxis = NULL_var is allowed).
  */
 virtual HRESULT SetReferenceAxis(const CATIMmiMechanicalFeature_var& iRefAxis) = 0;

};
CATDeclareHandler (CATIGSMUseTranslate, CATBaseUnknown);
#endif // CATIGSMUseTranslate_H
