/* -*-c++-*- */
#ifndef CATIGSMIntegratedLaw_H
#define CATIGSMIntegratedLaw_H
 
// COPYRIGHT DASSAULT SYSTEMES 2003


#include "CATGitInterfacesExportedBy.h"
#include "CATBoolean.h"
#include "CATGSMBasicLawDef.h"
#include "CATLISTV_CATISpecObject.h"

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMIntegratedLaw;
#else
extern "C" const IID IID_CATIGSMIntegratedLaw;
#endif

class CATISpecObject_var;
class CATICkeParm_var;
class CATICkeLaw_var;


/**
 * Interface for GSD Law Management.
 * <b>Role</b>: Allows you to access data of the integrated law.
 * Adheres to CATICkeLaw Interface, corresponding CATCompositeLaw can be retrieved by querying CATICkeLaw interface.
 * @see CATICkeLaw#ComputeCompositeLaw,  CATIGSMFactoryInternal#CreateIntegratedLaw
 */
class ExportedByCATGitInterfaces CATIGSMIntegratedLaw : public CATBaseUnknown
{
    CATDeclareInterface;
    
public:
    
    /**
    * Gets pitch law type.
    *   @param oType
    *      Type of law (from CATGSMBasicLawType enumeration).
    *   @see CATGSMBasicLawType
    */
    virtual HRESULT GetPitchLawType(enum CATGSMBasicLawType & oType) = 0;

    /**
    * Sets pitch law type.
    *   @param iType
    *      Type of law (from CATGSMBasicLawType enumeration).
    *   @see CATGSMBasicLawType
    */
    virtual HRESULT SetPitchLawType(const enum CATGSMBasicLawType iType) = 0;
    
    /**
    * Gets the external law.
    * <br> Note: Used for law type=        CATGSMBasicLawType_Advanced
    *   @param oLaw
    *      GSD distance Law or Knowledge Law
    *  @see CATICkeParmFactory#CreateLaw,CATGSMBasicLawType, CATIGSMLawDistProj
    */
    virtual    HRESULT GetAdvancedLaw (CATICkeLaw_var & oLaw)      = 0;

   /**
    * Sets the external law.
    * <br> Note: Used for law type=        CATGSMBasicLawType_Advanced
    *   @param iLaw
    *      GSD distance Law or Knowledge Law
    *  @see CATICkeParmFactory#CreateLaw,CATGSMBasicLawType, CATIGSMLawDistProj
    */
    virtual    HRESULT SetAdvancedLaw(const CATICkeLaw_var & iLaw) = 0;
    
    /**
    * Gets the mapping orientation of the law. 
    *   @param oInvert
    *       False : Law is applied from the beginning to the end of the curve (mapping is not inverted).
    *   <br>    True :  Law is applied from the end to the beginning of the curve (mapping is inverted).
    */ 
    virtual    HRESULT  GetInvertMappingLaw (CATBoolean & oInvert) = 0;
 
    /**
    * Sets the mapping orientation of the law.
    *   @param iInvert
    *     False : Law is applied from the beginning to the end of the curve (mapping is not inverted).
    *   <br>  True :  Law is applied from the end to the beginning of the curve (mapping is inverted).
    */ 
    virtual    HRESULT  SetInvertMappingLaw (CATBoolean iInvert) = 0;
    
    /**
    * Gets start parameter.
    * <br> Note: Used for law type=    CATGSMBasicLawType_Constant,
    *                  CATGSMBasicLawType_Linear,
    *                  CATGSMBasicLawType_SType
    *   @param oParam
    *       Parameter unit depends on law unit
    *   @see CATGSMBasicLawType
    */
    virtual    HRESULT  GetStartParam(CATICkeParm_var& oParam) = 0;

    /**
    * Sets start parameter.
    * <br> Note: Used for law type=    CATGSMBasicLawType_Constant,
    *                  CATGSMBasicLawType_Linear,
    *                  CATGSMBasicLawType_SType
    *   @param iParam
    *       Parameter unit depends on law unit
    *   @see CATGSMBasicLawType
    */
    virtual    HRESULT  SetStartParam(const CATICkeParm_var& iParam) = 0;
    
    /**
    * Gets end parameter. 
    * <br> Note: Used for law type=    CATGSMBasicLawType_Linear,
    *                  CATGSMBasicLawType_SType
    *   @param oParam
    *       Parameter unit depends on law unit
    *   @see CATGSMBasicLawType
    */
    virtual    HRESULT  GetEndParam(CATICkeParm_var& oParam) = 0;

    /**
    * Gets end parameter.
    * <br> Note: Used for law type=    CATGSMBasicLawType_Linear,
    *                  CATGSMBasicLawType_SType
    *   @param oParam
    *       Parameter unit depends on law unit
    *   @see CATGSMBasicLawType
    */
    virtual    HRESULT  SetEndParam(const CATICkeParm_var& iParam) = 0;
    
   /**
    * Gets the list points on spine and associated parameters.
    * <br> Note: Used for law type=       CATGSMBasicLawType_Implicit
    *   @param oSpecPoints
    *        List of points on spine
    *   @param oSpecParams
    *        List of corresponding parameters
    *   @see CATGSMBasicLawType
    */ 
 virtual    HRESULT GetListOfPointsAndParams(CATLISTV(CATISpecObject_var) & oSpecPoints,
                                           CATLISTV(CATISpecObject_var) & oSpecParams) = 0;

   /**
    * Sets 'Point on spine' and associated parameter.
    *<br> Note: Used  for law type=         CATGSMBasicLawType_Implicit
    *   @param iSpecPoint
    *       Point on spine
    *   @param iParam
    *       Corresponding parameter
    *   @see CATGSMBasicLawType
    */ 
 virtual	HRESULT AppendNewPointAndParam(const CATISpecObject_var & iSpecPoint,
                                            const CATICkeParm_var & iParam) = 0;

   /**
    * Remove a point and his parameter.
    * for law type=         CATGSMBasicLawType_Implicit
    *   @param iSpecPoint
    *        Point to remove
    *   @see CATGSMBasicLawType
    */ 
 virtual    HRESULT RemovePointAndParam(const CATISpecObject_var & iSpecPoint) = 0;

 /**
   * Remove all the points and associated parameters.
   * <br> Note: Used for law type=         CATGSMBasicLawType_Implicit
   *   @see CATGSMBasicLawType
   */ 
 virtual    HRESULT RemoveAllPointsAndParams() = 0; 

  /**
   * Gets Spine for implicit law.
    * <br> Note: Used for law type=         CATGSMBasicLawType_Implicit
   *   @param oSpine
   *        Spine on which implicit law inputs points are defined
   *   @see CATGSMBasicLawType
   */ 
 virtual    HRESULT  GetSpine(CATISpecObject_var& oSpine) = 0;

  /**
   * Gets Spine for implicit law.
   * <br> Note: Used for law type=         CATGSMBasicLawType_Implicit
   *   @param iSpine
   *        Spine on which implicit law inputs points are defined
   *   @see CATGSMBasicLawType
   */ 
 virtual    HRESULT  SetSpine(const CATISpecObject_var& iSpine) = 0;

  /**
   * Gets Interpolation mode for implicit law.
   * <br> Note: Used for law type=         CATGSMBasicLawType_Implicit
   * @param oMode
   *        Implicit law interpolation mode
   *   @see CATGSMImplicitLawInterpolationMode, CATGSMBasicLawType
   */ 
 virtual    HRESULT GetImplicitLawInterpolationMode(enum CATGSMImplicitLawInterpolationMode & oMode) = 0;

  /**
   * Sets Interpolation mode for implicit law.
   * <br> Note: Used for law type=         CATGSMBasicLawType_Implicit
   * @param oMode
   *        Implicit law interpolation mode
   *   @see CATGSMImplicitLawInterpolationMode,CATGSMBasicLawType
   */ 
 virtual    HRESULT SetImplicitLawInterpolationMode(const enum CATGSMImplicitLawInterpolationMode & iMode) = 0;


};
CATDeclareHandler (CATIGSMIntegratedLaw, CATBaseUnknown);
#endif // CATIGSMIntegratedLaw_H








