/* -*-c++-*- */
#ifndef CATIFaceFillet_H
#define CATIFaceFillet_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include <PartItf.h>
#include <CATIFillet.h>
class CATIMfBRepFeature_var;
class CATIMfBRep_var;
class CATICkeParm_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATIFaceFillet;
#else
extern "C" const IID IID_CATIFaceFillet;
#endif

/**
 * Interface to represent the face fillet shape.
 * <b>Role</b>: A face fillet shape is built between two faces with a radius.
 */
class ExportedByPartItf CATIFaceFillet : public CATIFillet
{
  CATDeclareInterface;
  
public:
/**
 * Sets the face fillet radius.
 * @param iRadius
 * Specifies the radius value.
 * <br><b>Legal values</b>: The radius value must be greater 
 * than 0 but not equal to 0. 
 */
  virtual void ModifyRadius(double iRadius) = 0;
  
  
  /** @nodoc */
  virtual void SetFace1(CATIMfBRepFeature_var ihRsur1) const= 0;
  
  /**
  * Sets or removes the first face to be filleted.
  * @param ihRsur1
  * Case remove a face, ihRsur1 must be equal to NULL_var.
  * <br>Case set a face, the CATIMfBRep_var should be a 
  * Rsur feature (CATIMfRsur) created with CATIMmiBRepFactory.
  * This face should not be already used in the fillet.
  * This face should belong to the same mechanical body.
  */
  virtual void SetFirstFace(CATIMfBRep_var ihRsur) const  = 0;
  
  
  /** @nodoc */
  virtual void SetFace2(CATIMfBRepFeature_var ihRsur2) const= 0;
  
  
  /**
  * Sets or removes the second face to be filleted.
  * @param ihRsur2
	* Case remove a face, ihRsur2 must be equal to NULL_var.
  * <br>Case set a face, the CATIMfBRep_var should be a 
  * Rsur feature (CATIMfRsur) created with CATIMmiBRepFactory.
  * This face should not be already used in the fillet.
  * This face should belong to the same mechanical body.
	*/
  virtual void SetSecondFace(CATIMfBRep_var ihRsur) const  = 0;
  
  
  /**
  * Returns the face fillet radius.
  * <br><b>Legal values</b>: The radius value must be greater 
  * than 0 but not equal to 0. 
  */  
  virtual double GetRadius() const= 0;
  
  /** @nodoc */
  virtual CATICkeParm_var GetRadiusParm() const= 0;
  
  /** @nodoc */
  virtual CATIMfBRepFeature_var GetFace1() const= 0;
  
  /**
  * Returns the first filleted face.
  * The CATISpecObject_var is a Rsur Feature (CATIMfRsur). 
  */
  virtual CATIMfBRep_var GetFirstFace() const= 0;
  
  /** @nodoc */
  virtual CATIMfBRepFeature_var GetFace2() const= 0;
  
  /**
  * Returns the second filleted face.
  * The CATISpecObject_var is a Rsur Feature (CATIMfRsur). 
  */
  virtual CATIMfBRep_var GetSecondFace() const= 0;
  
  /** @nodoc */
  virtual HRESULT SetHoldCurve(const CATISpecObject_var& hHoldCurve) const= 0;
  
  /** @nodoc */
  virtual HRESULT GetHoldCurve(CATISpecObject_var& hHoldCurve) const= 0;
  
  /** @nodoc */
  virtual HRESULT SetSpine(const CATISpecObject_var& hSpine) const= 0;
  
  /** @nodoc */
  virtual HRESULT GetSpine(CATISpecObject_var& hSpine) const= 0;
  
};

CATDeclareHandler (CATIFaceFillet, CATIFillet); 

#endif // CATIFaceFillet_H


