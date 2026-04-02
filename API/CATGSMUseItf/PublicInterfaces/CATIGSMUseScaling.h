/* -*-c++-*- */
#ifndef CATIGSMUseScaling_H
#define CATIGSMUseScaling_H
// 
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGSMUseItfExportedBy.h"
#include "CATIMmiMechanicalFeature.h"
#include "CATICkeParm.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID  IID_CATIGSMUseScaling;
#else
extern "C" const IID IID_CATIGSMUseScaling;
#endif

/**
 * Interface to scaling transformation feature.
 * <b>Role</b>: Allows you to access data of the Scaling feature created by using 
 * an element, an axis and three ratios
 * @see CATIGSMUseFactory#CreateScaling
 */
class ExportedByCATGSMUseItf CATIGSMUseScaling : public CATBaseUnknown
{
   CATDeclareInterface;
public:

   /**
    * Gets the feature to scale.
    *   @param oElem
    *      feature to scale      
    */
 virtual HRESULT GetElemToScale(CATIMmiMechanicalFeature_var & oElem)= 0;

   /**
    * Sets the feature to scale.
    *   @param iElem
    *      new feature to scale
    */ 
 virtual HRESULT SetElemToScale(const CATIMmiMechanicalFeature_var iElem)= 0;
  
   /**
    * Gets the reference element (a point or a plane).
    *   @param oElem
    *      reference element
    */
 virtual HRESULT GetCenter (CATIMmiMechanicalFeature_var & oElem)= 0;
 
   /**
    * Sets the reference element (a point or a plane).
    *   @param iElem
    *      reference element
    */ 
 virtual HRESULT SetCenter(const CATIMmiMechanicalFeature_var iElem)= 0;
  
  /**
    * Gets the ratio of the scaling. 
    *   @param oRatio
    *      ratio  
    */
   virtual HRESULT GetRatio(double & oRatio) = 0;
 
  /**
    * Gets the ratio of the scaling. 
    *   @param oRatio
    *      ratio 
    */
 virtual HRESULT GetRatio(CATICkeParm_var & oRatio) = 0;

  /**
    * Sets the ratio of the scaling.
    *   @param iRatio
    *      ratio
    */
 virtual HRESULT SetRatio(double Ratio) = 0;
 
  /**
    * Sets the ratio of the scaling.
    *   @param iRatio
    *      ratio
    */
 virtual HRESULT SetRatio(const CATICkeParm_var iRatio) = 0;

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
CATDeclareHandler (CATIGSMUseScaling, CATBaseUnknown);
#endif // CATIGSMUseScaling_H
