/* -*-c++-*- */
#ifndef CATIGSMUseAxisToAxis_H
#define CATIGSMUseAxisToAxis_H
// 
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGSMUseItfExportedBy.h"
#include "CATIMmiMechanicalFeature.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID  IID_CATIGSMUseAxisToAxis;
#else
extern "C" const IID IID_CATIGSMUseAxisToAxis;
#endif

/**
 * Interface to axis to axis transformation feature.
 * <b>Role</b>: Allows you to access data of the AxisToAxis feature created by using 
 * an element, a reference axis system and a target axis system
 * @see CATIGSMUseFactory#CreateAxisToAxis
 */
class ExportedByCATGSMUseItf CATIGSMUseAxisToAxis : public CATBaseUnknown
{
   CATDeclareInterface;
public: 
  
  /**
    * Gets the feature to transform.
    *   @param oElem
    *      feature to transform      
    */
   virtual HRESULT GetElemToTransform(CATIMmiMechanicalFeature_var & oElem) = 0;

  /**
    * Sets the feature to transform.
    *   @param iElem
    *      new feature to transform
    */
 virtual HRESULT SetElemToTransform(const CATIMmiMechanicalFeature_var iElem) = 0;

  /**
    * Gets the reference axis.
    *   @param oAxis
    *      reference axis
    */
 virtual HRESULT GetReferenceAxis(CATIMmiMechanicalFeature_var & oAxis) = 0;

  /**
    * Sets the reference axis.
    *   @param iAxis
    *      new reference axis
    */
 virtual HRESULT SetReferenceAxis(const CATIMmiMechanicalFeature_var & iAxis) = 0;

  /**
    * Gets the target axis.
    *   @param oAxis
    *      target axis
    */
 virtual HRESULT GetTargetAxis(CATIMmiMechanicalFeature_var & oAxis) = 0;

  /**
    * Sets the target axis.
    *   @param iAxis
    *      new target axis
    */
 virtual HRESULT SetTargetAxis(const CATIMmiMechanicalFeature_var & iAxis) = 0;

 /**
    * Gets the Creation Mode.
    *   @param oMode
    *      flag for transformation type (creation or modification)
    */
 virtual HRESULT GetCreationMode (CATBoolean & oMode)= 0;

 /**
    * Sets the Creation Mode.
    *   @param iMode
    *      flag for transformation type (creation or modification)
    */
 virtual HRESULT SetCreationMode (const CATBoolean iMode)= 0;

};
CATDeclareHandler (CATIGSMUseAxisToAxis, CATBaseUnknown);
#endif // CATIGSMUseAxisToAxis_H
