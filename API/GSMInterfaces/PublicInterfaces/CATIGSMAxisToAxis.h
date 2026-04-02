/* -*-c++-*- */
#ifndef CATIGSMAxisToAxis_H
#define CATIGSMAxisToAxis_H
// 
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGitInterfacesExportedBy.h"
#include "CATISpecObject.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMAxisToAxis;
#else
extern "C" const IID IID_CATIGSMAxisToAxis;
#endif

/**
 * Interface to axis to axis transformation feature.
 * <b>Role</b>: Allows you to access data of the AxisToAxis feature created by using 
 * an element, a reference axis system and a target axis system
 * @see CATIGSMFactory#CreateAxisToAxis
 */
class ExportedByCATGitInterfaces CATIGSMAxisToAxis : public CATBaseUnknown
{
   CATDeclareInterface;
public: 
  
  /**
    * Gets the feature to transform.
    *   @param oElem
    *      feature to transform      
    */
   virtual HRESULT GetElemToTransform(CATISpecObject_var & oElem) = 0;

  /**
    * Sets the feature to transform.
    *   @param iElem
    *      new feature to transform
    */
 virtual HRESULT SetElemToTransform(const CATISpecObject_var iElem) = 0;

  /**
    * Gets the reference axis.
    *   @param oAxis
    *      reference axis
    */
 virtual HRESULT GetReferenceAxis(CATISpecObject_var & oAxis) = 0;

  /**
    * Sets the reference axis.
    *   @param iAxis
    *      new reference axis
    */
 virtual HRESULT SetReferenceAxis(const CATISpecObject_var & iAxis) = 0;

  /**
    * Gets the target axis.
    *   @param oAxis
    *      target axis
    */
 virtual HRESULT GetTargetAxis(CATISpecObject_var & oAxis) = 0;

  /**
    * Sets the target axis.
    *   @param iAxis
    *      new target axis
    */
 virtual HRESULT SetTargetAxis(const CATISpecObject_var & iAxis) = 0;

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
CATDeclareHandler (CATIGSMAxisToAxis, CATBaseUnknown);
#endif // CATIGSMAxisToAxis_H
