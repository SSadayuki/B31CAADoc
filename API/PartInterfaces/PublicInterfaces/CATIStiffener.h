#ifndef CATIStiffener_H
#define CATIStiffener_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include <PartItf.h>
#include <CATIShape.h>
class CATISpecObject_var;
class CATIPrtAxis1_var;
class CATICkeParm_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATIStiffener;
#else
extern "C" const IID IID_CATIStiffener;
#endif

/**
 * Interface associated to the Stiffener feature.
 * <b>Role</b>: This interface allows users to manage the specifications of a Stiffener.
 * A Stiffener adds material by extruding an open profile along a direction normal to the profile.
 */
class ExportedByPartItf CATIStiffener : public CATIShape
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
  * Sets the symmetrical extension.
  * @param iSym
  *   The symmetry flag.
  *   <br><b>Legal values</b>: 1 for symmetry, 0 otherwise.
  */  
  virtual void SetSymmetry(int iSym) = 0;
  
  /** 
  * Sets the thickness value.
  * @param iValue
  *   The thickness value.
  */  
  virtual void SetThicknessValue(double iValue) = 0;
  
  /** 
  * Allows users to reverse the thickness direction.
  * @param iRev
  *   The reversal flag.
  *   <br><b>Legal values</b>: 1 for reversal, 0 otherwise.
  */  
  virtual void SetReversedThicknessDirection(int iRev) = 0;
  
  /** 
  * Specifies which side of the open profile will be used for closing.
  * @param iSide
  *   The side information.
  *   <br>To determine the closing side users must compute a three vectors axis at a point of the contour: 
  *   <br>- the tangent to the contour oriented according to the contour orientation,
  *   <br>- the normal to the contour belonging to the profile plane, oriented towards the desired closing side,
  *   <br>- the normal to the plane supporting the contour.
  *   <br><b>Legal values</b>: 1 for direct axis, -1 for indirect axis.
  */  
  virtual void SetInnerSide(int iSide) = 0;
  
  
  /** 
  * @nodoc 
  * Do not use - Obsolete.
  */  
  virtual CATISpecObject_var GetSketch() const = 0;
  
  /**
  * Returns the profile internal component.  
  * @return
  *   The profile.
  */  
  virtual CATISpecObject_var GetProfile() const = 0;
  
  /** 
  * Tests whether the symmetrical extension is set or not.
  * @return
  *   The symmetry flag.
  *   <br><b>Legal values</b>: 1 for symmetry, 0 otherwise.
  */  
  virtual int GetSymmetry() const = 0;
  
  /** 
  * Returns the thickness value.
  * @return
  *   The thickness value.
  */  
  virtual double GetThicknessValue() const = 0;
  
  /** 
  * Tests whether the thickness direction is reversed or not.
  * @return
  *   The reversal flag.
  *   <br><b>Legal values</b>: 1 for reversal, 0 otherwise.
  */  
  virtual int IsReversedThicknessDirection() const = 0;
  
  /** 
  * Returns the closing side of the open profile.
  * @return
  *   The side flag.
  */  
  virtual int GetInnerSide() const = 0;
  
  /**
  * Returns the parameter links to the thickness of a top thin stiffener.
  * @return
  *   The parameter.
  */
  virtual void GetThicknessTop     (CATICkeParm_var & oThickParm) = 0;
  
  /**
  * Returns the value of the thickness of a top thin stiffener.
  * @return
  *   The value.
  */
  virtual void GetThicknessTop    (double & oThick) = 0;
  
  /**
  * Sets the value of the thickness of a top thin stiffener.
  */
  virtual void SetThicknessTop   (const double iThick) = 0;
  
  /**
  * Returns the mode of the stiffener.
  * @return
  *  = 0 stiffener from side (False) 
  *  = 1 stiffener from top (True) 
  */
  virtual void GetStiffenerMode    (int & oMode) = 0;
  
  /**
  * Sets the mode of the stiffener.
  *  = 0 stiffener from side (False) 
  *  = 1 stiffener from top (True) 
  */
  virtual void SetStiffenerMode    (const int iMode) = 0;
};

CATDeclareHandler(CATIStiffener, CATIShape);

#endif // CATIStiffener_H
