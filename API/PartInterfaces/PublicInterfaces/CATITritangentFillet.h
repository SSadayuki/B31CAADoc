/* -*-c++-*- */
#ifndef CATITritangentFillet_H
#define CATITritangentFillet_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include <PartItf.h>
#include <CATIFillet.h>
#include <CATPrtEnum.h>
class  CATIMfBRepFeature_var;
class  CATIMfBRep_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATITritangentFillet;
#else
extern "C" const IID IID_CATITritangentFillet;
#endif

/**
 * Interface to represent the tritangent fillet shape.
 * <b>Role</b>: A tritangent fillet shape is built between 3 faces.
 * Two faces will be relimited, the third is used as "face to be removed".
 * and will disappear within the resulting shape.
 */
class ExportedByPartItf CATITritangentFillet : public CATIFillet
{
  CATDeclareInterface;

  public:

    /**
    * @nodoc
    */
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
  virtual void SetFirstFace(CATIMfBRep_var ihRsur) const= 0;


    /**
    * @nodoc
    */
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
  virtual void SetSecondFace(CATIMfBRep_var ihRsur) const= 0;


    /**
    * @nodoc
    */
  virtual void SetRemoveFace(CATIMfBRepFeature_var ihRemoveRsur) const= 0;


  	/**
     * Sets or removes the face to be removed.
 	   * @param ihRsur2
 		 * Case remove a face, ihRsur2 must be equal to NULL_var.
     * <br>Case set a face, the CATIMfBRep_var should be a 
		 * Rsur feature (CATIMfRsur) created with CATIMmiBRepFactory.
		 * This face should not be already used in the fillet.
		 * This face should belong to the same mechanical body.
	   */ 
  virtual void SetFaceToRemove(CATIMfBRep_var ihRsur) const= 0;

    /**
    * @nodoc
    */
  virtual CATIMfBRepFeature_var GetFace1() const= 0;

   	/**
     * Returns the first filleted face.
     * The CATISpecObject_var is a Rsur Feature (CATIMfRsur). 
	   */
  virtual CATIMfBRep_var GetFirstFace() const= 0;

    /**
    * @nodoc
    */
  virtual CATIMfBRepFeature_var GetFace2() const= 0;

		/**
     * Returns the second filleted face.
     * The CATISpecObject_var is a Rsur Feature (CATIMfRsur). 
	   */
  virtual CATIMfBRep_var GetSecondFace() const= 0;

    /**
    * @nodoc
    */
  virtual CATIMfBRepFeature_var GetRemoveFace() const= 0;

		/**
     * Returns the removed face.
     * The CATISpecObject_var is a Rsur Feature (CATIMfRsur). 
	   */
  virtual CATIMfBRep_var GetFaceToRemove() const= 0;

};

CATDeclareHandler (CATITritangentFillet, CATIFillet); 

#endif // CATITritangentFilletFillet_H
