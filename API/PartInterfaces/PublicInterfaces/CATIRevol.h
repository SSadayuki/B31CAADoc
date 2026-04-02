/* -*-c++-*- */
#ifndef CATIRevol_H
#define CATIRevol_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include <PartItf.h>
#include <CATIShape.h>

class CATICkeParm_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATIRevol;
#else
extern "C" const IID IID_CATIRevol;
#endif

/**
 * Interface associated to the Shaft and Groove features.
 * <b>Role</b>: This interface allows users to manage the specifications of a Revol (Shaft or Groove).
 * A Revol extrudes a profile around an axis. The profile sketch must contain an axis 
 * used as the revolution axis. A Shaft adds material, a Groove removes material.
 * @see CATIShaft, CATIGroove
 */
class ExportedByPartItf CATIRevol : public CATIShape
{
  CATDeclareInterface;
  
public:
  
/**
* Sets a new element as profile.
* @param ihElt
*   The profile element. Typically a Sketch.
  */
  virtual void ModifyProfile(const CATISpecObject_var& ihElt) = 0;
  
  /**
  * @nodoc
  * Do not use - Not yet implemented.
  */
  virtual void ModifyInnerSide(int iSide) = 0;
  
  /**
  * @nodoc
  * Do not use - Not yet implemented.
  */
  virtual void ModifyOuterShape(int iOnOff) = 0;
  
  /**
  * Sets a new element as axis.
  * @param ihElt
  *   The axis element. Typically a Line.
  */
  virtual void ModifyAxis(const CATISpecObject_var& ihElt) = 0;
  
  /**
  * Sets the first angle value measured in the direct way starting from the profile.
  * @param iAngle
  *   The angle value.
  */
  virtual void ModifyEndAngle(double iAngle) = 0;
  
  /**
  * Sets the second angle value measured in the opposite way starting from the profile.
  * @param iAngle
  *   The angle value.
  */
  virtual void ModifyStartAngle(double iAngle) = 0;
  
  
  /** 
  * @nodoc
  * Do not use - Obsolete. 
  */
  virtual CATISpecObject_var GetSketch() = 0;
  
  /**
  * Returns the profile internal component.
  * @return
  *   The profile.
  */
  virtual CATISpecObject_var GetProfile() = 0;
  
  /**
  * @nodoc
  * Do not use - Not yet implemented.
  */
  virtual int GetInnerSide() = 0;
  
  /**
  * @nodoc
  * Do not use - Not yet implemented.
  */
  virtual int IsOuterShape() = 0;
  
  /**
  * @nodoc
  * Returns the axis internal component.
  */
  virtual CATISpecObject_var GetAxis() = 0;
  
  /**
  * Returns the reference element which specifies the revolution axis.
  * @return
  *   The reference element.
  */
  virtual CATISpecObject_var GetReferenceAxis() = 0;
  
  /**
  * Returns the first angle parameter.
  * @return
  *   The parameter.
  */
  virtual CATICkeParm_var GetEndAngleParm() = 0;
  
  /**
  * Returns the second angle parameter.
  * @return
  *   The parameter.
  */
  virtual CATICkeParm_var GetStartAngleParm() = 0;
  
  /**
  * Returns the first angle value. 
  * @return
  *   The angle value.
  */
  virtual double GetEndAngle() = 0;
  
  /**
  * Returns the second angle value.
  * @return
  *   The angle value.
  */
  virtual double GetStartAngle() = 0;
  
  
  /** 
  * @nodoc
  */
  virtual void TestInputValidity() = 0;
  
  /**
  * Returns the parameter links to the first thickness of a thin prism.
  * @return
  *   The parameter.
  */
  virtual void GetThickThin1     (CATICkeParm_var & oThickParm) = 0;
  
  /**
  * Returns the value of the first thickness of a thin prism.
  * @return
  *   The value.
  */
  virtual void GetThickThin1    (double & oThick) = 0;
  
  /**
  * Sets the value of the first thickness of a thin prism.
  */
  virtual void SetThickThin1   (const double iThick) = 0;
  
  /**
  * Returns the parameter links to the second thickness of a thin prism.
  * @return
  *   The parameter.
  */
  virtual void GetThickThin2    (CATICkeParm_var & oThickParm) = 0;
  
  /**
  * Returns the value of the second thickness of a thin prism.
  * @return
  *   The value.
  */
  virtual void GetThickThin2    (double & oThick) = 0;
  
  /**
  * Sets the value of the second thickness of a thin prism.
  */
  virtual void SetThickThin2   (const double iThick)= 0;
  
  /**
  * Returns the neutral fiber status for a thin prism.
  * @return
  *  = 0 neutral fiber inactivated 
  *  = 1 neutral fiber activated
  */
  virtual void GetNeutralFiber    (int & oNeutralFiber) = 0;
  
  /**
  * Sets the neutral fiber status for a thin prism.
  *  = 0 neutral fiber inactivated 
  *  = 1 neutral fiber activated
  */
  virtual void SetNeutralFiber    (const int iNeutralFiber) = 0;
  
  /**
  * Returns the lateral relimitation status for a thin prism.
  * @return
  *  = 0 no lateral relimitation 
  *  = 1 lateral relimitation
  */
  virtual void GetMergeThin    (int & oMergeThin) = 0;
  
  /**
  * Sets the lateral relimitation status for a thin prism.
  *  = 0 no lateral relimitation 
  *  = 1 lateral relimitation
  */  
  virtual void SetMergeThin    (const int iMergeThin) =0;
  
  /**
  * Returns the thin status for a prism.
  * @return
  *  = 0 prism not thin 
  *  = 1 prism thin 
  */
  virtual void GetThinCheck    (int & oThinCheck)= 0;
  
  /**
  * Sets the thin status for a prism.
  *  = 0 prism not thin 
  *  = 1 prism thin 
  */  
  virtual void SetThinCheck    (const int iThinCheck) = 0;  
  
 /**
 * Sets the first limit type.
 * @param iType
 *   The type.
 *   <br><b>Legal values</b>: They are provided with the <tt>CatLimitMode</tt> enum.
 * @see CATIPrtSimpleLimit
 */
  virtual void ModifyEndType(int iType) = 0;

 /**
 * Sets the first limit limiting element in case the type is <tt>catUpToPlaneLimit</tt> or <tt>catUpToSurfaceLimit</tt>. 
 * @param ihInit
 *   The limiting element.
 *   <br>For the <tt>catUpToPlaneLimit</tt> type, it must be a plane feature or a planar FSur feature (CATIMfFsur).
 *   <br>For the <tt>catUpToSurfaceLimit</tt> type, it must be a face feature.
 *   <br>If this face belongs to some surfacic geometry, it must be a FSur feature. Then the entire surface 
 *   is used to limit the shape.
 *   <br>If it is a face of a volume, it must be a RSur feature (CATIMfRsur) which belongs to the body in 
 *   which the limited feature is created. In this case the limiting surface is defined by a propagation 
 *   on the surface of the body starting from the init face.
 */
  virtual void ModifyEndInit(const CATISpecObject_var& ihInit) = 0;

  /** 
 * @nodoc
 * Do not use - Not yet implemented.
 */
  virtual void ModifyEndOffsetFromSurface(double iOffset) = 0;

  /**
 * Sets the second limit type.
 * @param iType
 *   The type.
 *   <br><b>Legal values</b>: They are provided with the <tt>CatLimitMode</tt> enum.
 * @see CATIPrtSimpleLimit
 */
  virtual void ModifyStartType(int iType) = 0;

/**
 * Sets the first limit limiting element in case the type is <tt>catUpToPlaneLimit</tt> or <tt>catUpToSurfaceLimit</tt>.
 * @param ihInit
 *   The limiting element.
 *   <br>For the <tt>catUpToPlaneLimit</tt> type, it must be a plane feature or a planar FSur feature (CATIMfFsur).
 *   <br>For the <tt>catUpToSurfaceLimit</tt> type, it must be a face feature.
 *   <br>If this face belongs to some surfacic geometry, it must be a FSur feature. Then the entire surface 
 *   is used to limit the shape.
 *   <br>If it is a face of a volume, it must be a RSur feature (CATIMfRsur) which belongs to the body in 
 *   which the limited feature is created. In this case the limiting surface is defined by a propagation 
 *   on the surface of the body starting from the init face.
 */
  virtual void ModifyStartInit(const CATISpecObject_var& ihInit) = 0;

  /** 
 * @nodoc
 * Do not use - Not yet implemented.
 */
  virtual void ModifyStartOffsetFromSurface(double iOffset) = 0;
  
  /**
 * Returns the internal first limit component.
 * @return
 *   The limit feature.
 */
  virtual CATISpecObject_var GetEndLimit() = 0;
  
/**
 * Returns the first limit type.
 * @return
 *   The type.
 */
  virtual int GetEndType() = 0;
  
/**
 * Returns the first limit limiting element.
 * @return
 *   The element.
 */
  virtual CATISpecObject_var GetEndInit() = 0;

 /** 
 * @nodoc
 * Do not use - Not yet implemented.
 */
  virtual double GetEndOffsetFromSurface() = 0;
  
  /**
 * Returns the second limit internal component.
 * @return
 *   The limit feature.
 */
  virtual CATISpecObject_var GetStartLimit() = 0;
  
/**
 * Returns the second limit type.
 * @return
 *   The type.
 */
  virtual int GetStartType() = 0;

/**
 * Returns the second limit limiting element.
 * @return
 *   The element.
 */
  virtual CATISpecObject_var GetStartInit() = 0;

  /** 
 * @nodoc
 * Do not use - Not yet implemented.
 */
  virtual double GetStartOffsetFromSurface() = 0;

 /** 
 * @nodoc
 * Updates the old Angle attributes to the new Limit angle attributes.
 */
  virtual HRESULT UpdateAngleAttribute() = 0;
 
};

CATDeclareHandler (CATIRevol, CATIShape); 

#endif // CATIRevol_H
