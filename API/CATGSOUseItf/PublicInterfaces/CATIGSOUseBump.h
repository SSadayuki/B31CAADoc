/* -*-c++-*- */
#ifndef CATIGSOUseBump_H
#define CATIGSOUseBump_H
// COPYRIGHT Dassault Systemes 2001

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

//
// CATIGSOUseBump.h
// Define the CATIGSOUseBump interface
//

#include "ExportedByCATGSOUseItf.h"
#include "CATBaseUnknown.h"
#include "CATGSMContinuityDef.h"

class CATIMmiMechanicalFeature_var; 
class CATICkeParm_var; 



#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSOUseItf IID IID_CATIGSOUseBump;
#else
extern "C" const IID IID_CATIGSOUseBump;
#endif

//------------------------------------------------------------------
/**
 * Interface to Bump surface feature.
 * <b>Role</b>: Allows you to access data of Bump surfaces.
 * @see CATIGSOUseFactory#CreateBump
 */

class ExportedByCATGSOUseItf CATIGSOUseBump: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

 /** 
  * Gets the element to deform.
  *   @param oElemToBump
  *      new reference element
  */
 virtual    HRESULT GetElemToBump (CATIMmiMechanicalFeature_var & oElemToBump)   = 0;

 /** 
  * Gets the limit curve of the deformation.
  *   @param oLimitCurve
  *      new limit curve
  */
 virtual    HRESULT GetLimitCurve (CATIMmiMechanicalFeature_var & oLimitCurve)   = 0;

 /** 
  * Gets the center of the deformation.
  *   @param oDeformationCenter
  *      new center of deformation
  */
 virtual    HRESULT GetDeformationCenter (CATIMmiMechanicalFeature_var & oDeformationCenter)   = 0;

 /** 
  * Gets the projection direction.
  *   @param oProjectionDir
  *      new projection direction
  */
 virtual    HRESULT GetProjectionDir (CATIMmiMechanicalFeature_var & oProjectionDir)   = 0;

 /** 
  * Gets the deformation direction.
  *   @param oDeformationDir
  *      new deformation direction
  */
 virtual    HRESULT GetDeformationDir (CATIMmiMechanicalFeature_var & oDeformationDir)   = 0;

 /**
  * Gets the deformation distance.
  *   @param oDeformationDistance
  *      Deformation distance
  */
 virtual    HRESULT   GetDeformationDistance    (double & oDeformationDistancee)   = 0;
 
 /**
  * Gets the deformation distance.
  *   @param oDeformationDistance
  *      Deformation distance
  */
 virtual    HRESULT   GetCkeDeformationDistance (CATICkeParm_var & oDeformationDistance)      = 0;
 
 /**
   * Gets the deviation fixed by the user.
   *   @param oDeviationUser
   *      Deviation fixed by the user
   */   
 virtual    HRESULT  GetDeviationUser(CATICkeParm_var & oDeviationUser) = 0;

 /**
  * Gets the continuity mode.
  *   @param oContinuity
  *      continuity between the bump and the extarnal elements
  */
 virtual HRESULT GetContinuity(enum CATGSMContinuity & oContinuity) = 0;

 /**
   * Gets the tension at the center of the deformation.
   *   @param oCenterTension
   *      Tension at the center of the deformation
   */   
 virtual    HRESULT  GetCenterTension(CATICkeParm_var & oCenterTension) = 0;


 /** 
  * Sets the relement to deform.
  *   @param iElemToBump
  *      new reference element
  */
 virtual    HRESULT SetElemToBump   (const CATIMmiMechanicalFeature_var iElemToBump) = 0;

 /** 
  * Sets the limit curve of the deformation.
  *   @param iLimitCurve
  *      new limit curve
  */
 virtual    HRESULT SetLimitCurve   (const CATIMmiMechanicalFeature_var iLimitCurve) = 0;

 /** 
  * Sets the center of the deformation.
  *   @param iDeformationCenter
  *      new center of deformation
  */
 virtual    HRESULT SetDeformationCenter   (const CATIMmiMechanicalFeature_var iDeformationCenter) = 0;

 /** 
  * Sets the projection direction.
  *   @param iProjectionDir
  *      new projection direction
  */
 virtual    HRESULT SetProjectionDir  (const CATIMmiMechanicalFeature_var iProjectionDir) = 0;

 /** 
  * Sets the deformation direction.
  *   @param iDeformationDir
  *      new deformation direction
  */
 virtual    HRESULT SetDeformationDir   (const CATIMmiMechanicalFeature_var iDeformationDir) = 0;

 /**
  * Sets the deformation distance.
  *   @param iDeformationDistance
  *      Deformation distance
  */
 virtual    HRESULT SetDeformationDistance (double iDeformationDistance) = 0;
 
 /**
  * Sets the deformation distance.
  *   @param iDeformationDistance
  *      Deformation distance
  */
 virtual    HRESULT SetDeformationDistance (const CATICkeParm_var iDeformationDistance) = 0;
 
 /**
   * Sets the deviation fixed by the user.
   *   @param iDeviationUser
   *      Deviation fixed by the user
   */ 
 virtual    HRESULT SetDeviationUser (const CATICkeParm_var iDeviationUser) = 0;

 /**
   * Sets the continuity mode.
   *   @param iContinuity
   *      continuity between the support and the fill
   */
 virtual HRESULT SetContinuity (const enum CATGSMContinuity iContinuity) = 0;

  /**
   * Sets the tension at the center of the deformation.
   *   @param iCenterTension
   *      Tension at the center of the deformation
   */   
 virtual    HRESULT  SetCenterTension(CATICkeParm_var & iCenterTension) = 0;

 
};
CATDeclareHandler (CATIGSOUseBump, CATBaseUnknown);

//------------------------------------------------------------------

#endif
