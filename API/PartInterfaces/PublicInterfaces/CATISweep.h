#ifndef CATISweep_H
#define CATISweep_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include <PartItf.h>
#include <CATIShape.h>
#include <CATPrtEnum.h>
class CATMathDirection;
class CATUnicodeString;
class CATISpecObject_var;
class CATICkeParm_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATISweep;
#else
extern "C" const IID IID_CATISweep;
#endif


/**
 * Class to manage sweep object.
 * <b>Role</b>: This interface is the base object for rib and slot
 * features.
 * @see CATIShape
 */
class ExportedByPartItf CATISweep : public CATIShape
{
  CATDeclareInterface;
  
public:
/**
* Sets sweep profile.
* @param ihProfile
*   Sweep profile.
*<br>The profile is swept along the centercurve. 
*<br>Profile is represented by a sketch.
  */   
  virtual void  SetProfile (const CATISpecObject_var ihProfile)                 = 0;
  
  /**
  * Sets sweep centercurve.
  * @param ihCenterCurve
  *   Sweep centercurve.
  *<br>The profile is swept along this centercurve. 
  *<br>Centercurve is represented by a sketch.
  */   
  virtual void  SetCenterCurve (const CATISpecObject_var ihCenterCurve)         = 0;
  
  /**
  * Sets sweep referencesurface.
  * @param ihRefSurf
  *   Sweep reference surface.
  *<br>Reference surface is used to define profile orientation.
  *<br>By default profile is oriented with keep angle mode.
  *<br>Centercurve must lay down reference surface.
  */   
  virtual void  SetReferenceSurface (const CATISpecObject_var ihRefSurf)        = 0;
  
  /** 
  * @nodoc 
  */
  virtual void  SetLimit (CATPrtLimitName iName, const CATUnicodeString &iType) = 0;
  
  /**
  * Sets sweep pulling direction.
  * @param iMathDir
  *   Sweep pulling direction.
  *<br>Pulling direction is used to define profile orientation.
  *<br>By default profile is oriented with keep angle mode.
  */   
  virtual void  SetPullingDirection (const CATMathDirection iMathDir)           = 0;
  
  /**
  * Sets sweep pulling direction.
  * @param ihDirection
  *   Sweep pulling direction.
  *<br>Pulling direction is used to define profile orientation.
  *<br>By default profile is oriented with keep angle mode.
  */   
  virtual void  SetPullingDirection (const CATISpecObject_var ihDirection)            = 0;
  
  /**
  * Resets pulling direction.
  */   
  virtual void  UnsetPullingDirection ()                                        = 0;
  
  /**
  * Returns sweep profile.
  */   
  virtual CATISpecObject_var  GetProfile ()                               const = 0;
  
  /**
  * Returns sweep centercurve.
  */   
  virtual CATISpecObject_var  GetCenterCurve ()                           const = 0;
  
  /**
  * Returns sweep reference surface.
  */   
  virtual CATISpecObject_var  GetReferenceSurface ()                      const = 0;
  
  /** @nodoc */
  virtual CATUnicodeString    GetLimit (const CATPrtLimitName iName)      const = 0;
  
  /**
  * Returns sweep pulling direction.
  * @param iMathDir
  *   Sweep pulling direction.
  */   
  virtual void  GetPullingDirection (CATMathDirection &iMathDir)          const = 0;
  
  /**
  * Returns sweep pulling direction.
  * @param ihDirection
  *   Sweep pulling direction.
  */
  virtual void  GetPullingDirection (CATISpecObject_var &ihDirection)     const = 0;
  
  /**
  * Returns if the sweep has a pulling direction.
  * <br> If no pulling direction: returns FALSE.
  * <br> If pulling direction:    returns TRUE.
  */
  virtual CATBoolean HasPullingDirection ()                                  const = 0;
  
  /**
  * Returns the parameter links to the first thickness of a thin sweep.
  * @return
  *   The parameter.
  */
  virtual void GetThickThin1     (CATICkeParm_var & oThickParm) = 0;
  
  /**
  * Returns the value of the first thickness of a thin sweep.
  * @return
  *   The value.
  */
  virtual void GetThickThin1    (double & oThick) = 0;
  
  /**
  * Sets the value of the first thickness of a thin sweep.
  */
  virtual void SetThickThin1   (const double iThick) = 0;
  
  /**
  * Returns the parameter links to the second thickness of a thin sweep.
  * @return
  *   The parameter.
  */
  virtual void GetThickThin2    (CATICkeParm_var & oThickParm) = 0;
  
  /**
  * Returns the value of the second thickness of a thin sweep.
  * @return
  *   The value.
  */
  virtual void GetThickThin2    (double & oThick) = 0;
  
  /**
  * Sets the value of the second thickness of a thin sweep.
  */
  virtual void SetThickThin2   (const double iThick)= 0;
  
  /**
  * Returns the neutral fiber status for a thin sweep.
  * @return
  *  = 0 neutral fiber inactivated 
  *  = 1 neutral fiber activated
  */
  virtual void GetNeutralFiber    (int & oNeutralFiber) = 0;
  
  /**
  * Sets the neutral fiber status for a thin sweep.
  *  = 0 neutral fiber inactivated 
  *  = 1 neutral fiber activated
  */
  virtual void SetNeutralFiber    (const int iNeutralFiber) = 0;
  
  /**
  * Returns the lateral relimitation status for a thin sweep.
  * @return
  *  = 0 no lateral relimitation 
  *  = 1 lateral relimitation
  */
  virtual void GetMergeThin    (int & oMergeThin) = 0;
  
  /**
  * Sets the lateral relimitation status for a thin sweep.
  *  = 0 no lateral relimitation 
  *  = 1 lateral relimitation
  */ 
  virtual void SetMergeThin    (const int iMergeThin) =0;
  
  /**
  * Returns the thin status for a sweep.
  * @return
  *  = 0 prism not thin 
  *  = 1 prism thin 
  */
  virtual void GetThinCheck    (int & oThinCheck)= 0;
  
  /**
  * Sets the thin status for a sweep.
  *  = 0 prism not thin 
  *  = 1 prism thin 
  */
  virtual void SetThinCheck    (const int iThinCheck) = 0;
  
  /**
  * Returns the twist reduction status for a sweep.
  * @return
  *  = TRUE twist reduction activated 
  *  = FALSE twist reduction non activated 
  */
  virtual void GetTwistReductionFlag (boolean &oTwistReduction) = 0;

  /**
  * Sets the twist reduction status for a sweep.
  *  = TRUE twist reduction activated 
  *  = FALSE twist reduction non activated 
  */
  virtual void SetTwistReductionFlag (boolean iTwistReduction) = 0;
  
  /**
  * Returns the parameter links to the offset if twist reduction is activated.
  * @return
  *   The parameter.
  */
  virtual void GetTwistReductionOffset (CATICkeParm_var & oOffsetParm) = 0;

  /**
  * Returns the value of the offset if twist reduction is activated.
  * @return
  *   The value.
  */
  virtual void GetTwistReductionOffset    (double & oOffset) = 0;
  
  /**
  * Sets the value of the offset if twist reduction is activated.
  */
  virtual void SetTwistReductionOffset   (const double iOffset)= 0;
};

CATDeclareHandler(CATISweep, CATIShape);

#endif // CATISweep_H
