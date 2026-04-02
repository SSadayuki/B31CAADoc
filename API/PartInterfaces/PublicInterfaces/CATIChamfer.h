/* -*-c++-*- */
#ifndef CATIChamfer_H
#define CATIChamfer_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include <PartItf.h>
#include <CATIShape.h>
#include <CATPrtEnum.h>
#include <CATLISTV_CATISpecObject.h>
#include "CATISpecObject.h"

#include "CATBoolean.h"

class CATICkeParm_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATIChamfer;
#else
extern "C" const IID IID_CATIChamfer;
#endif

/**
* Interface to represent the chamfer shape.
* <b>Role</b>: A chamfer is made up of a list of elements to be chamfered,
* such as edges or faces, is defined with a pair of parameters,
* such as two lengthes, or a length and an angle.
*/
class ExportedByPartItf CATIChamfer : public CATIShape
{
	CATDeclareInterface;

public:
	/**
	* Sets the first value of the chamfer.
	* @param iLength1 
	* This is the first length value if the chamfer is defined with two lengthes,
	* or if the chamfer is defined with a length and an angle.
	* This is ChordalLength if the chamfer is defined with Chordal length and an angle.
	* This is Height if the chamfer is defined with Height and an angle.
	* <br><b>Legal values</b>: The first length value must be greater 
	* than 0 but not equal to 0.
	*/
	virtual void ModifyLength1(double iLength1) = 0;

	/**
	* Sets the second length value or the angle value of the chamfer.
	* @param iLength2 
	* This is the second length value if the chamfer is defined with two lengthes,
	* or the angle value if the chamfer is defined with a length and an angle.
	* <br><b>Legal values</b>: The second length value must be greater 
	* than 0 but not equal to 0 and the angle value must be greater than 0 
	* but not equal to 0 and smaller than 90 but not equal to 90.
	*/
	virtual void ModifyLength2(double iLength2) = 0;

	/**
	* Sets the propagation mode of the elements to be chamfered.
	* @param iPropagation 
	* The propagation mode specifies the edges taken into account when chamfering.
	* <br>The propagation can be performed in two ways:
	* <br><b>Tangency</b>:CATIA continues chamfering beyond the selected edge 
	* until it encounters an edge that is non continuous in tangency.
	* <br><b>Minimal</b>: the propagation is done up to the first natural relimitation
	* by the geometry.
	* <br><b>Legal values</b>: the CATPrtChamferPropagation propagation mode can be set
	* to <tt>_TANGENCY</tt> or <tt>_MINIMAL</tt>.
	*/
	virtual void ModifyPropagation(CATPrtChamferPropagation iPropagation) = 0;

	/**
	* Sets the chamfer parameter mode.
	* @param iParameterMode 
	* The chamfer parameter mode specifies both parameters required 
	* to define the chamfer: two lengthes (Length1/Length2) or 
	* a length and an angle (Length1/Angle).
	* <br><b>Legal values</b>: the CATPrtChamferMode parameter mode can be set
	* to <tt>LENGTH</tt> or <tt>LENGTH_ANGLE</tt>.
	*/
	virtual void ModifyMode (CATPrtChamferMode iParameterMode) = 0;

	/**
	* Sets the chamfer orientation.
	* @param iReferenceFace 
	* The first length, or the single length, depending on the way the
	* chamfer is defined, is measured on the reference face from the
	* edge to chamfer. 
	* <br>This reference face is either the face selected or the face
	* determined by CATIA if the edge to be chamfered was selected.
	* <br>The chamfer orientation defines whether to keep the face selected or determined 
	* by CATIA as the chamfer reference face.
	* <br><b>Legal values</b>: the CATPrtChamferReferenceFace orientation can be set
	* to <tt>NO_REVERSE</tt> (the chamfer reference face is the face selected or determined
	* by CATIA) or <tt>REVERSE</tt> (the chamfer reference face is the other face).
	*/
	virtual void ModifyReferenceFace (CATPrtChamferReferenceFace iReferenceFace) = 0;

	/**
	* Adds elements to be chamfered.
	* @param iObjectList
	* Specifies the list of sharp edges or faces be chamfered.
	* <br>The CATISpecObject_var should be a Redge (CATIMfRedge) or Rsur (CATIMfRsur) feature 
	* created with CATIMmiBRepFactory. 
	* This edge or face should not be already used in the chamfer.
	* This edge or face should belong to the same mechanical body.
	*/
	virtual void AddObject(CATLISTV(CATISpecObject_var) iObjectList) = 0;

	/**
	* Removes elements from those to be chamfered.
	* @param iObjectList
	* Specifies the list of edges or faces to be removed.
	* The CATISpecObject_var should be a Redge (CATIMfRedge) or Rsur (CATIMfRsur) feature . 
	* This edge or face should belong to the chamfer.
	*/
	virtual void RemoveObject(CATLISTV(CATISpecObject_var) iObjectList) = 0;

	/**
	* Returns the first value of the chamfer.
	* This is the first length value if the chamfer is defined with two lengthes,
	* or if the chamfer is defined with a length and an angle.
	* This returns ChordalLength if the chamfer is defined with Chordal length and an angle.
	* This returns Height if the chamfer is defined with Height and an angle.
	* <br><b>Legal values</b>: The first length value must be greater 
	* than 0 but not equal to 0.
	*/
	virtual double GetLength1() const = 0;

	/** @nodoc */
	virtual CATICkeParm_var GetLength1Parm() const= 0;

	/**
	* Returns the second length value or the angle value of the chamfer.
	* This is the second length value if the chamfer is defined with two lengthes,
	* or the angle value if the chamfer is defined with other modes.
	* <br><b>Legal values</b>: The second length value must be greater 
	* than 0 but not equal to 0 and the angle value must be greater than 0 
	* but not equal to 0 and smaller than 90 but not equal to 90.
	*/
	virtual double GetLength2() const = 0;

	/** @nodoc */
	virtual CATICkeParm_var GetLength2Parm() const= 0;

	/** @nodoc */
	virtual CATICkeParm_var GetAngleParm() const= 0;

	/**
	* Returns the propagation mode of the elements to be chamfered.
	* The propagation mode specifies the edges taken into account when chamfering.
	* <br>The propagation can be performed in two ways:
	* <br><b>Tangency</b>:CATIA continues chamfering beyond the selected edge 
	* until it encounters an edge that is non continuous in tangency.
	* <br><b>Minimal</b>: the propagation is done up to the first natural relimitation
	* by the geometry.
	* <br><b>Legal values</b>: the CATPrtChamferPropagation propagation mode can be set
	* to <tt>_TANGENCY</tt> or <tt>_MINIMAL</tt>.
	*/
	virtual CATPrtChamferPropagation GetPropagation() const = 0;

	/**
	* Returns the chamfer parameter mode.
	* <br>The chamfer parameter mode specifies both parameters required 
	* to define the chamfer: two lengthes (Length1/Length2) or 
	* a length and an angle (Length1/Angle).
	* <br><b>Legal values</b>: the CATPrtChamferMode parameter mode can be set
	* to <tt>LENGTH</tt> or <tt>LENGTH_ANGLE</tt>.
	*/
	virtual CATPrtChamferMode GetMode() const= 0;

	/**
	* Returns the chamfer orientation.
	* <br>The first length, or the single length, depending on the way the
	* chamfer is defined, is measured on the reference face from the
	* edge to chamfer. 
	* <br>This reference face is either the face selected or the face
	* determined by CATIA if the edge to be chamfered was selected.
	* <br>The chamfer orientation defines whether to keep the face selected or determined 
	* by CATIA as the chamfer reference face.
	* <br><b>Legal values</b>: the CATPrtChamferReferenceFace orientation can be set
	* to <tt>NO_REVERSE</tt> (the chamfer reference face is the face selected or determined
	* by CATIA) or <tt>REVERSE</tt> (the chamfer reference face is the other face).
	*/
	virtual CATPrtChamferReferenceFace GetReferenceFace() const= 0;

	/**
	* Returns the list of chamfered edges or faces.
	* The CATISpecObject_var is a Redge (CATIMfRedge) or Rsur (CATIMfRsur) feature. 
	*/
	virtual CATLISTV(CATISpecObject_var) * GetObject() const = 0;

	/** @nodoc */
	virtual void GetObjectandOrientation (CATLISTV(CATISpecObject_var)& oObjectList ,CATListOfInt& oOrientationList) const = 0;

	/**
	* Returns the context of the chamfer (0 for PartDesign, 1 for Surfaces, 4 for Volumes and 5 for Functional).
	*/
	virtual void GetContext (int &oContext) = 0;

	/**
	* Sets the context of the chamfer (0 for PartDesign, 1 for Surfaces, 4 for Volumes and 5 for Functional).
	*/
	virtual void SetContext (int &iContext) = 0;

	/**
	* Sets the TrimSupportMode of the chamfer.
	*/
	virtual HRESULT ModifyTrimSupportMode(CATPrtTrimSupportMode iTrimSupportMode) = 0;

	/**
	* Returns the TrimSupportMode of the chamfer.
	*/
	virtual HRESULT GetTrimSupportMode(CATPrtTrimSupportMode &oTrimSupportMode) = 0;

	/**
	* Sets the Extremities of the chamfer.
	*/
	virtual HRESULT ModifyExtremities(CATPrtChamferExtremities iExtremities) = 0;

	/**
	* Returns the Extremities of the chamfer.
	*/
	virtual HRESULT GetExtremities(CATPrtChamferExtremities &oExtremities) = 0;

	/**
	* Sets the Support of the chamfer.
	*/
	virtual HRESULT ModifySupport(CATBaseUnknown_var ihsupport) = 0;

	/**
	* Returns the Support of the chamfer.
	*/
	virtual HRESULT GetSupport(CATBaseUnknown_var &ohsupport) = 0;

	/**
	* Set the SymmetricalExtent button status.
	*/
	virtual HRESULT ModifySymmetricalExtent(const CATBoolean &iSym) = 0;  

	/**
	* Returns the SymmetricalExtent button status.
	*/
	virtual HRESULT GetSymmetricalExtent(CATBoolean &oSym) = 0; 

	/**
	* Sets the CornerCapMode of the chamfer.
	*/
	virtual HRESULT ModifyCornerCapMode(const CATBoolean &iCornerCap) = 0;

	/**
	* Returns the CornerCapMode of the chamfer.
	*/
	virtual HRESULT GetCornerCapMode(CATBoolean &OCornerCap) = 0; 

  /** 
   *Adds a hold curve.
   */
  virtual HRESULT AddHoldCurve(const CATISpecObject_var &ihSpec) = 0;

  /** 
   * Retrieves the hold curves list.
   */
  virtual HRESULT GetHoldCurve(CATLISTV(CATISpecObject_var)& oObjectList) = 0;

  /** 
   * Removes a hold curve.
   */
  virtual HRESULT RemoveHoldCurve(const CATISpecObject_var &ihSpec) = 0;

	/** @nodoc */
	virtual HRESULT GetChordalLengthParm(CATICkeParm_var &oChordalLength) const = 0;

	/** @nodoc */
	virtual HRESULT GetHeightParm(CATICkeParm_var &oHeight)  const = 0;	

};

CATDeclareHandler (CATIChamfer, CATIShape); 

#endif // CATIChamfer_H
