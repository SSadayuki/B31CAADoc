/* -*-c++-*- */
#ifndef CATIThick_H
#define CATIThick_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
* @CAA2Level L1
* @CAA2Usage U3
*/


#include <PartItf.h>
#include <CATIShape.h>
#include <CATLISTV_CATISpecObject.h>
#include <CATPrtEnum.h>
#include <CATICkeParm.h>

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATIThick;
#else
extern "C" const IID IID_CATIThick;
#endif

/**
* Class to define methods relative to the thickness feature.
* <b>Role</b>: A thickness feature is defined with a list of faces
* to be thicken and an offset value. 
*/

class ExportedByPartItf CATIThick : public CATIShape
{
  CATDeclareInterface;

public:
  /**
  * Modifies the value of the offset.
  * @param iOffset
  *   New value of the offset.
  */    
  virtual void ModifyOffset(double iOffset) = 0;
  /**
  * Returns the value of the offset.
  * @return The offset value.
  */
  virtual double GetOffset() const = 0;
  /**
  * Adds a face to thickness specifications. This face indicates
  * which faces must be thicken.
  * @param iFace
  *   Init Face for tangency propagation. 
  */ 
  virtual void AddFaceToThicken (const CATISpecObject_var iFace) = 0;
  /**
  * Removes a face to thickness specifications. This face indicates
  * which faces must be thicken.
  * @param iFace
  *   Init Face for tangency propagation. 
  */ 
  virtual void WithdrawFaceToThicken (const CATISpecObject_var iFace) = 0;
  /**
  * Returns the list of specified faces. 
  * @return The list. 
  */ 
  virtual CATLISTV(CATISpecObject_var) * GetThickSpec() const = 0;
  /**
  * Adds a face with different thicknesses to thickness specifications.
  * @param iFace
  *   Init Face for tangency propagation.
  * @param iOffset
  *   Value of the offset.
  */ 
  virtual void AddFaceWithDifferentThickness (const CATISpecObject_var iFace, double iOffset) = 0;

  /**
  * Adds a faces to Other thickness specifications.
  * @param iFace
  *   Init Face for tangency propagation.
  * @param iOffset
  *   Value of the offset.
  */
  virtual void AddFaceWithDifferentThicknessWhileUpgrade(const CATISpecObject_var iFace, double iOffset) = 0;

  /**
  * Removes a face with different thicknesses to thickness specifications.
  * @param iFace
  *   Init Face for tangency propagation.
  */ 
  virtual void RemoveFaceWithDifferentThickness (const CATISpecObject_var iFace) = 0;
  /**
  * Returns the list of faces with different thickness.
  * @return The list. 
  */ 
  virtual CATLISTV(CATISpecObject_var) * GetFacesWithDifferentThickness() const = 0;
  /**
  @nodoc 
  - DO NOT USE -
  * Returns a face and the corresponding thickness parameter
  * @param iInt
  *   If iInt = 0, oFace and oParm correspond to the default specifications.
  *   If iInt > 0, oFace and oParm correspond to the different thicknesses.  
  * @param oFace
  *   Init Face for tangency propagation. 
  * @param oParm
  *   Thickness parameter.
  */
  virtual void  GetThickParameters (const int iInt, CATISpecObject_var& oFace, CATICkeParm_var& oParm) = 0;
  /** @nodoc */
  virtual void  GetThickParameters (const int iInt, CATISpecObject_var& oFace, CATISpecObject_var& oParm) = 0;
  /**
  * Returns the list of non offset faces.
  * @return The list. 
  */ 
  virtual CATLISTV(CATISpecObject_var) * GetNonOffsetFaces() const = 0;
  /**
  * Removes a non offset face to thickness specifications.
  * @param iFace
  *   Non offset face.
  */ 
  virtual void RemoveNonOffsetFace (const CATISpecObject_var iFace) = 0;
  /**
  * Get number of specified faces.
  * @return The number of specified faces. 
  */
  virtual int GetNbOfThickSpec () = 0;
  /**
  * Get number of faces with different thickness.
  * @return The number of faces with different thickness. 
  */
  virtual int GetNbOfFacesWithDifferentThickness () = 0;
  /**
  * Get number of non offset faces.
  * @return The number of non offset faces. 
  */
  virtual int GetNbOfNonOffsetFaces () = 0;


  /** @nodoc */ 
  virtual HRESULT GetSmoothingMode(CATPrtSmoothing  &oMode) = 0;

  /** @nodoc */ 
  virtual HRESULT SetSmoothingMode(CATPrtSmoothing iMode) = 0;

  /** @nodoc */ 
  virtual HRESULT GetMaxDeviation(CATICkeParm_var& ohMaxDeviation) = 0;

  /** @nodoc */ 
  virtual HRESULT GetMaxDeviation(double & oMaxDeviation) = 0;

  /** @nodoc */  
  virtual HRESULT SetMaxDeviation(const double iMaxDeviation) = 0;  

  /** 
  * Sets the regularization type
  *   @param oRegul
  *      CATPrtRegularization_Undefined if the regularization is not defined
  *	   CATPrtRegularization_Local if the regularization is local
  *	   CATPrtRegularization_Global if the regularization is global
  */
  virtual HRESULT SetRegularizationType(const CATPrtOffsetRegularisationType &iRegul) = 0;

  /** 
  * Gets the regularization type
  *   @param oRegul
  *      CATPrtRegularization_Undefined if the regularization is not defined
  *	   CATPrtRegularization_Local if the regularization is local
  *	   CATPrtRegularization_Global if the regularization is global
  */
  virtual HRESULT GetRegularizationType(CATPrtOffsetRegularisationType &oRegul) = 0;

  /** 
  * Gets the assemble result mode.
  *   @param oMode
  *	   CATPrtAssembleResult if the assemble result mode is active. (this is the default)
  *	   CATPrtNoAssembleResult if the assemble result mode is inactive.
  */
  virtual HRESULT	GetAssembleResultMode(CATPrtAssembleResultMode &oMode) = 0;

  /** 
  * Sets the assemble result mode.
  *   @param iMode
  *	   CATPrtAssembleResult if the assemble result mode  is active. (this is the default)
  *	   CATPrtNoAssembleResult if the assemble result mode is inactive. 
  */
  virtual HRESULT	SetAssembleResultMode(const CATPrtAssembleResultMode iMode) = 0;

  /**
  * Gets the propagation mode
  * @return The propagation attribute for face
  */
  virtual int GetPropagationProperty() = 0;

  /**
  * Sets the propagation mode
  *   @param iMode
  * If the propagation is set the tagent faces will be selected ( this is the default )
  */
  virtual void SetPropagationProperty(const int iTanProp) = 0;

  /**
  * Sets the offset to face
  * @param hFace
   *   Face for which the offset to be applied
   * @param iOffsetParm
   *  The offset value to be set ont eh face
   */
  virtual void SetOffsetToFace(CATISpecObject_var hFace, double iOffsetParm) = 0;


  /**
  * Gets the offset of a face
  * @param hFace
  *   Face for which the offset to be read
  * @return The offset value to be set on the face
  */
  virtual double GetOffsetByFace(const CATISpecObject_var& iFace) = 0;

};
CATDeclareHandler (CATIThick, CATIShape); 

#endif // CATIThick_H
