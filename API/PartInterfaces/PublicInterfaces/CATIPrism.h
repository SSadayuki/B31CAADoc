/* -*-c++-*- */
#ifndef CATIPrism_H
#define CATIPrism_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include <PartItf.h>
#include <CATIShape.h>

class CATISpecObject_var;
class CATMathDirection;
class CATICkeParm_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATIPrism;
#else
extern "C" const IID IID_CATIPrism;
#endif

/**
 * Interface associated to the Pad and Pocket features.
 * <b>Role</b>: This interface allows users to manage the specifications of a Prism (Pad or Pocket).
 * A Prism extrudes a profile along a specific direction. A Pad adds material, a Pocket removes material.
 * @see CATIPad, CATIPocket
 */
class ExportedByPartItf CATIPrism : public CATIShape
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
 * Sets the symmetrical extension property.
 * @param iSym
 *   The symmetry flag.
 *   <br><b>Legal values</b>: 1 for symmetry, 0 otherwise.
 */
  virtual void ModifySym(int iSym) = 0;

/**
 * When the profile is open, specifies which side of the profile will be used for closing.
 * @param iSide
 *   The side information.
 *   <br>To determine the closing side users must compute a three vectors axis at a point of the contour: 
 *   <br>- the tangent to the contour oriented according to the contour orientation,
 *   <br>- the normal to the contour belonging to the profile plane, oriented towards the desired closing side,
 *   <br>- the normal to the plane supporting the contour.
 *   <br><b>Legal values</b>: 1 for direct axis, -1 for indirect axis.
 */
  virtual void ModifyInnerSide(int iSide) = 0;

/**
 * @nodoc
 * Do not use - Not yet implemented.
 */
  virtual void ModifyOuterShape(int iOnOff) = 0;


/**
 * Specifies a mathematical extrusion direction.
 * @param iDir
 *   The direction vector.
 */
  virtual void ModifyDirection(const CATMathDirection& iDir) = 0;

/**
 * Specifies an element as reference for the direction.
 * @param ihDir
 *   The reference element.
 */
  virtual void ModifyDirection(const CATISpecObject_var& ihDir) = 0;
  
/**
 * Reverses the specified direction.
 */
  virtual void ReverseDirection() = 0;


/**
 * Sets the first limit type.
 * @param iType
 *   The type.
 *   <br><b>Legal values</b>: They are provided with the <tt>CatLimitMode</tt> enum.
 * @see CATIPrtSimpleLimit
 */
  virtual void ModifyEndType(int iType) = 0;
  
/**
 * Sets the first limit offset value in case the type is <tt>catOffsetLimit</tt>.
 * @param iOffset
 *   The offset value.
 */
  virtual void ModifyEndOffset(double iOffset) = 0;
  
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
 * Sets the second limit offset value in case the type is <tt>catOffsetLimit</tt>.
 * @param iOffset
 *   The offset value.
 */
  virtual void ModifyStartOffset(double iOffset) = 0;

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
 * Tests whether the symmetrical extension is set or not.
 * @return
 *   The symmetry flag.
 *   <br><b>Legal values</b>: 1 for symmetry, 0 otherwise.
 */
  virtual int GetSym() = 0;
  
/**
 * Returns the closing side of the open profile.
 * @return
 *   The side flag.
 */
  virtual int GetInnerSide() = 0;

/**
 * @nodoc
 * Do not use - Not yet implemented.
 */
  virtual int IsOuterShape() = 0;


/**
 * Returns the direction internal component.
 * @return
 *   The axis feature.
 */
  virtual CATISpecObject_var GetAxis() = 0;
  
/**
 * Returns the extrusion direction.
 * @return
 *   The extrusion vector.
 */
  virtual CATMathDirection GetDirection() = 0;
  
/**
 * Returns the reference element which specifies the direction.
 * @return
 *   The reference element.
 */
  virtual CATISpecObject_var GetReferenceDir() = 0;
  
/**
 * Tests whether the direction is opposite to the reference or not.
 * @return
 *   0 if the direction is same,
 *   1 if the direction has been reversed.
 */
  virtual int IsDirectionReversed() = 0;


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
 * Returns the first limit offset value.
 * @return
 *   The offset value.
 */
  virtual double GetEndOffset() = 0;
  
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
 * Returns the second limit offset value.
 * @return
 *   The offset value.
 */
  virtual double GetStartOffset() = 0;
  
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
};

CATDeclareHandler (CATIPrism, CATIShape); 

#endif // CATIPrism_H
