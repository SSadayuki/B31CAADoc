#ifndef CATIGSMUseAffinity_H
#define CATIGSMUseAffinity_H
// 
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGSMUseItfExportedBy.h"

#include "CATBaseUnknown.h"
#include "CATBoolean.h"

class CATMathAxis;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID  IID_CATIGSMUseAffinity;
#else
extern "C" const IID IID_CATIGSMUseAffinity;
#endif

class CATIMmiMechanicalFeature_var;
class CATICkeParm_var;

/**
 * Interface to affinity feature. 
 * <b>Role</b>: Allows you to acess data of Affinity feature created by using 
 * an element, an axis and three ratios.
 * @see CATIGSMUseFactory#CreateAffinity
 */
class ExportedByCATGSMUseItf CATIGSMUseAffinity : public CATBaseUnknown
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
    * Gets the ratios of the affinity.
    *   @param oRatX
    *      ratio in the first direction
    *   @param oRatY
    *      ratio in the second direction
    *   @param oRatZ
    *      ratio in the third direction
    */
   virtual HRESULT GetRatios(CATICkeParm_var & oRatX, CATICkeParm_var & oRatY, CATICkeParm_var & oRatZ) = 0;

   /**
    * Gets the ratios of the affinity.
    *   @param iRatX
    *      ratio in the first direction
    *   @param iRatY
    *      ratio in the second direction
    *   @param iRatZ
    *      ratio in the third direction
    */
   virtual HRESULT GetRatios(double & oRatX, double & oRatY, double & oRatZ) = 0;
   
   /**
    * Sets the ratios of the affinity.
    *   @param iRatX
    *      ratio in the first direction
    *   @param iRatY
    *      ratio in the second direction
    *   @param iRatZ
    *      ratio in the third direction
    */
   virtual HRESULT SetRatios(const CATICkeParm_var iRatX, const CATICkeParm_var RatY, const CATICkeParm_var RatZ) = 0;

   /**
    * Sets the ratios of the affinity.
    *   @param iRatX
    *      ratio in the first direction
    *   @param iRatY
    *      ratio in the second direction
    *   @param iRatZ
    *      ratio in the third direction
    */
   virtual HRESULT SetRatios(double RatX,double RatY,double RatZ) = 0;
    
   /**
    * Gets the origin of the reference axis system (always direct).
    *   @param oElem
    *      origin point of the reference axis system
    */
   virtual HRESULT GetAxisOrigin(CATIMmiMechanicalFeature_var & oElem) = 0;

   /**
    * Gets the xy plane of the reference axis system (always direct).
    *   @param oElem
    *      xy plane of the reference axis system
    */
    virtual HRESULT GetAxisPlane(CATIMmiMechanicalFeature_var & oElem) = 0;

   /**
    * Gets the first direction of the reference axis system (always direct).
    *   @param oElem
    *      first direction (x) of the reference axis system
    */
 virtual HRESULT GetAxisFirstDirection(CATIMmiMechanicalFeature_var & oElem) = 0;

   /**
    * Gets the reference axis system (always direct).
    *   @param oAxis
    *      reference axis system
    */
   virtual HRESULT GetAxis(CATMathAxis & oAxis) = 0;

   /**
    * Sets the origin point of the reference axis system (always direct).
    *   @param iElem
    *      new origin point of the reference axis system
    */
   virtual HRESULT SetAxisOrigin(const CATIMmiMechanicalFeature_var iElem) = 0;

   /**
    * Sets the reference plane of the reference axis system (always direct).
    *   @param iElem
    *      new xy plane of the reference axis system
    */
   virtual HRESULT SetAxisPlane(const CATIMmiMechanicalFeature_var iElem) = 0;

   /**
    * Sets the first direction of the reference axis system (always direct).
    *   @param iElem
    *      new first direction (x) of the reference axis system
    */
   virtual HRESULT SetAxisFirstDirection(const CATIMmiMechanicalFeature_var iElem) = 0;

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

CATDeclareHandler (CATIGSMUseAffinity, CATBaseUnknown);
#endif // CATIGSMUseAffinity_H
