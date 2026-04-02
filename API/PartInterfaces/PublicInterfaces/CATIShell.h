/* -*-c++-*- */
#ifndef CATIShell_H
#define CATIShell_H
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
extern ExportedByPartItf IID IID_CATIShell;
#else
extern "C" const IID IID_CATIShell;
#endif

/**
 * Class to define methods relative to the shell feature.
 * <b>Role</b>: A shell feature is defined with a list of faces corresponding 
 * to its opening and two offset values.
 */
class ExportedByPartItf CATIShell : public CATIShape
{
  CATDeclareInterface;

  public:
/**
 * Modifies the value of the internal offset of the shell.
 * @param iIntOffset
 *   New value of the internal offset.
 */    
  virtual void ModifyIntOffset(double iIntOffset) = 0;
/**
 * Modifies the value of the external offset of the shell.
 * @param iExtOffset
 *   New value of the external offset.
 */ 
  virtual void ModifyExtOffset(double iExtOffset) = 0;
/**
 * Returns the value of the internal offset of the shell.
 * @return The offset value.
 */
  virtual double GetIntOffset() const = 0;
/**
 * Returns the value of the external offset of the shell.
 * @return The offset value.
 */
  virtual double GetExtOffset() const = 0;
/**
 * Adds a face to shell specifications. This face indicates which faces must 
 * be removed to define the shell opening.
 * @param iFace
 *   Init Face for tangency propagation. 
 */ 
  virtual void AddFaceToRemove (const CATISpecObject_var iFace) = 0;
/**
 * Removes a face to shell specifications.
 * @param iFace
 *   Init Face for tangency propagation.  
 */ 
  virtual void WithdrawFaceToRemove (const CATISpecObject_var iFace) = 0;
/**
 * Returns the list of specified faces.
 * @return The list. 
 */ 
  virtual CATLISTV(CATISpecObject_var) * GetShellSpec() const = 0;
/**
 * Adds a face with different thicknesses to shell specifications.
 * @param iFace
 *   Init Face for tangency propagation.
 * @param iIntOffset
 *   Value of the internal offset.
 * @param iExtOffset
 *   Value of the external offset.
 */ 
  virtual void AddFaceWithDifferentThickness (const CATISpecObject_var iFace, double iIntOffset, double iExtOffset) = 0;
/**
 * Removes a face with different thicknesses to shell specifications.
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
 * Returns a face and the corresponding offset parameters
 * @param iInt
 *   If iInt = 0, oFace, oIntParm and oExtParm correspond to the default 
 * specifications.
 *   If iInt > 0, oFace, oIntParm and oExtParm correspond to the different 
 * thicknesses.  
 * @param oFace
 *   Init Face for tangency propagation. 
 * @param oIntParm
 *   Internal offset parameter. 
 * @param oExtParm
 *   External offset parameter. 
 */
  virtual void  GetShellParameters (const int iInt, CATISpecObject_var& oFace, CATICkeParm_var& oIntParm, CATICkeParm_var& oExtParm) = 0;
/** @nodoc */
  virtual void  GetShellParameters (const int iInt, CATISpecObject_var& oFace, CATISpecObject_var& oIntParm, CATISpecObject_var& oExtParm) = 0;
/**
 * Returns the list of non offset faces.
 * @param InOut 
 *   InOut=1 for Internal Offset, InOut=2 for External Offset
 * @return The list. 
 */ 
  virtual CATLISTV(CATISpecObject_var) * GetNonOffsetFaces(const int& InOut) const = 0;
/**
 * Removes a non offset face to shell specifications.
 * @param iFace
 * @param InOut 
 *   InOut=1 for Internal Offset, InOut=2 for External Offset
 *   Non offset face.
 */ 
  virtual void RemoveNonOffsetFace (const CATISpecObject_var iFace, const int& InOut) = 0;
/**
 * Returns the number of specified faces.
 * @return The number of specified faces. 
 */ 
  virtual int GetNbOfShellSpec() const = 0;
/**
 * Returns the number of faces with different thickness.
 * @return The number of faces with different thickness. 
 */ 
  virtual int GetNbOfFacesWithDifferentThickness() const = 0;
/**
 * Returns the number of non offset faces.
 * @param InOut 
 *   InOut=1 for Internal Offset, InOut=2 for External Offset
 * @return The number of non offset faces. 
 */ 
  virtual int GetNbOfNonOffsetFaces(const int& InOut) const = 0;

/** @nodoc */ 
  virtual HRESULT GetSmoothingMode(CATPrtSmoothing  &oMode) = 0;

/** @nodoc */ 
  virtual HRESULT SetSmoothingMode(CATPrtSmoothing iMode) = 0;

/** @nodoc */ 
  virtual HRESULT GetConstantThicknessMode(int &oMode) = 0;

/** @nodoc */ 
  virtual HRESULT SetConstantThicknessMode(const int iMode) = 0;

/** @nodoc */ 
  virtual HRESULT GetMaxDeviation(CATICkeParm_var& ohMaxDeviation) = 0;

/** @nodoc */ 
  virtual HRESULT GetMaxDeviation(double & oMaxDeviation) = 0;

/** @nodoc */  
  virtual HRESULT SetMaxDeviation(const double iMaxDeviation) = 0;  

/** @nodoc
- DO NOT USE -
Sets the Tangency Propagation value*/
	virtual HRESULT SetTangencyPropogation(int iPropagation) = 0;

/** @nodoc
- DO NOT USE -
Gets the Tangency Propagation value*/
	virtual HRESULT GetTangencyPropogation(int &oPropagation) = 0;

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

  /** @nodoc
  - DO NOT USE -
  Gets the Other Face(Global) Tangency Propagation value
  */
  virtual HRESULT GetOtherFacesTangencyPropagation(int &oOtherFaceTanProp) = 0;
  /** @nodoc
  - DO NOT USE -
  Sets the Other Face(Global) Tangency Propagation value
  */
  virtual HRESULT SetOtherFacesTangencyPropagation(int iOtherFaceTanProp) = 0;

};



CATDeclareHandler (CATIShell, CATIShape); 

#endif // CATIShell_H
