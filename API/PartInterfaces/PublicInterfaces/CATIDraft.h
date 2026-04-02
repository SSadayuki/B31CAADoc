/* -*-c++-*- */
#ifndef CATIDraft_H
#define CATIDraft_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include <PartItf.h>
#include <CATIShape.h>
#include <CATLISTV_CATISpecObject.h>
//#include <CATListOfCATCells.h>
#include <ListPOfCATFace.h>
#include <CATMathDirection.h>
#include <CATPrtEnum.h>
#include "ListPOfCATEdge.h"
#include <CATListOfInt.h>

class CATMathDirection;
class CATICkeParm_var;
class CATPointOnCurve_var;
class CATCurve_var;
class CATEdge_var;
class CATWire_var;
class CATBody_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATIDraft;
#else
extern "C" const IID IID_CATIDraft;
#endif

/**
 * Interface to read or modify the draft feature.
 * <b>Role</b>: Drafts are defined on molded parts to make them easier to remove from molds.
 */
class ExportedByPartItf CATIDraft : public CATIShape
{
  CATDeclareInterface;

  public:
  /**
  * Sets the draft angle value.
  *@param  iAngle
  *    The draft angle value.
  *    <br><b>Legal values</b>: Angle between -90 degrees (not included) to +90 degrees (not included).
  *    <br>The value should be set in degree.
  */
  virtual void ModifyAngle(double iAngle,int iSide=1) = 0;
  /** @nodoc */
  virtual void ModifyMode (int iMode,int iSide=1) =0;
  /** @nodoc */
  virtual void ModifyBothSidesType (int iBothSidesType) =0;
  /** @nodoc */
  virtual void ModifyPropagation (int iPropagation) =0;
  /** @nodoc */
  virtual void ModifyNeutralPropagation (int iNeutralPropagation,int iSide=1) =0;
  /** @nodoc */
  virtual void AddSupportToDraft(const CATLISTV(CATISpecObject_var)* ihSupportToDraft) =0;
  /** @nodoc */
  virtual void DeleteSupportToDraft(CATLISTV(CATISpecObject_var)* ihSupportToDraft) =0;
  /**
  * Sets the draft neutral element.
  *@param  ihNeutral
  *    The neutral element.
  *    <br>The intersection of this element and the faces to be drafted
  *    defines a neutral curve on which the drafted face will lie.
  *    <br>This element will remain  the same during the draft.
  *    <br>The neutral element and parting element may be the same element. 
  *    <br><b>Legal values</b>: The CATISpecObject_var could be a plane, a face or a surface.
  *    <br>NULL_var value is not allowed.
  *@param  iSide
  *    Side number (used in case of draft both sides)
  *    <br>Specify which side of the parting element will be concerned  
  *    <br><b>Legal values</b>: 1,2.
  */
  virtual void ModifyNeutral (CATISpecObject_var ihNeutral,int iSide=1) =0;
  /**
  * Sets the draft parting element.
  *@param  ihParting
  *    The parting element.
  *    <br>This element cuts the faces to be drafted in two and one portion is drafted according to its
  *    previously defined pulling direction.
  *    <br>The parting element and neutral element may be the same element.
  *    <br><b>Legal values</b>: The CATISpecObject_var could be a plane, a face or a surface.
  *    <br>NULL_var value means draft with <b>no</b> parting element.
  */
  virtual void ModifyParting (CATISpecObject_var ihParting) =0;
  /**
  * Sets the pulling direction.
  * @param iPullDir
  *     The pulling direction.
  *     <br>This is the direction in which the mold will be removed from the part.
  *@param  iSide
  *    Side number (used in case of draft both sides)
  *    <br>Specify which side of the parting element will be concerned  
  *    <br><b>Legal values</b>: 1,2.
  * @param iBuild 
  * Do not use this parameter.
  */
  virtual void ModifyPullingDirection (CATMathDirection iPullDir,int iSide=1, int iBuild=1) =0;
  /**
  * Sets the pulling direction reference.
  * @param ihPullDirSpec
  *     The pulling direction reference.
  *     <br><b>Precondition</b>: If you used a reference you must set the pulling direction iPullDir to the
  *     CATMathDirection of the reference.
  *    <br><b>Legal values</b>: The CATISpecObject_var is either
  *    <dl>
  *      <dt>a plane or a planar face or a planar surface</dt>
  *      <dd>the pulling direction is normal to this element, or</dd>
  *      <dt>a line or a linear edge</dt>
  *      <dd>the pulling direction is the direction of the element, or</dd>
  *      <dt>NULL_var</dt>
  *      <dd>there is no pulling direction reference.</dd>
  *    </dl>
  *@param  iSide
  *    Side number (used in case of draft both sides)
  *    <br>Specify which side of the parting element will be concerned  
  *    <br><b>Legal values</b>: 1,2.
	* @param iBuild 
  * Do not use this parameter.
  */
  virtual void ModifyPullingDirection (CATISpecObject_var ihPullDirSpec,int iSide=1, int iBuild=1) =0;
  /** @nodoc */
  virtual void ModifyMultiselMode (int iMultiselMode) =0;
  /** @nodoc */
	virtual void ModifyPartingEqualNeutral(int iPartingEqualNeutral) = 0;

  /** @nodoc */
  virtual void AddDraftParam(CATISpecObject_var iObject, double iAngle) = 0;
  /** @nodoc */
  virtual void RemoveDraftParam(CATISpecObject_var iObject) = 0;

  /**
  * Returns the draft angle value.
  *  <br><b>Legal values</b>: The value is returned in degree.
  *@param  iSide
  *    Side number (used in case of draft both sides)
  *    <br>Specify which side of the parting element will be concerned  
  *    <br><b>Legal values</b>: 1,2.
  */ 
  virtual double GetAngle(int iSide=1) const= 0;
 /** @nodoc */
  virtual CATICkeParm_var GetAngleParm(int iSide=1) const=0;
  /** @nodoc */
	virtual double GetAngleOnPoint(CATISpecObject_var iPoint) const = 0;
  /** @nodoc */
  virtual CATICkeParm_var GetAngleParmOnPoint(CATISpecObject_var iPoint) const = 0;

 /** 
  *  Returns the draft mode (standard or reflectline).
  *   <br><b>Legal values</b>: The Draft mode is either
  *	  <tt>0</tt> standard (the draft's neutral element must be input).
  *	  <tt>1</tt> reflectline (the draft's neutral element is computed as the reflect line).
  *@param  iSide
  *    Side number (used in case of draft both sides)
  *    <br>Specify which side of the parting element will be concerned  
  *    <br><b>Legal values</b>: 1,2.
  */
  virtual int GetMode(int iSide=1) const=0;
 /** @nodoc */
  virtual int GetBothSidesType() const=0;
 /** @nodoc */
  virtual int GetPropagation() const=0;
 /** @nodoc */
  virtual int GetNeutralPropagation(int iSide=1) const=0;
  /**
  * Returns the pulling direction as a normalized vector.
  * <br>The pulling direction is the direction in which the mold will be removed from the part.
  *@param  iSide
  *    Side number (used in case of draft both sides)
  *    <br>Specify which side of the parting element will be concerned  
  *    <br><b>Legal values</b>: 1,2.
  */ 
  virtual CATMathDirection GetPullingDirection(int iSide=1) const=0;
  /**
  *  Returns the pulling direction reference.
  * <br><b>Legal values</b>: The CATISpecObject_var is either
 *    <dl>
  *      <dt>a plane or a planar face or a planar surface</dt>
  *      <dd>the pulling direction is normal to this element, or</dd>
  *      <dt>a line or a linear edge</dt>
  *      <dd>the pulling direction is the direction of the element, or</dd>
  *      <dt>NULL_var</dt>
  *      <dd>there is no pulling direction reference.</dd>
  *    </dl>
  *@param  iSide
  *    Side number (used in case of draft both sides)
  *    <br>Specify which side of the parting element will be concerned  
  *    <br><b>Legal values</b>: 1,2.  
  */ 
  virtual CATISpecObject_var GetPullingDirectionObject(int iSide=1) const=0;
  /**
  * Returns the neutral element.
  *<br><b>Legal values</b>: The CATISpecObject_var is a plane, a face or a surface.
  */ 
  virtual CATISpecObject_var GetNeutral(int iSide=1) const=0;
  /**
  * Returns the parting element.
  *<br><b>Legal values</b>: The CATISpecObject_var is a plane, a face or a surface.
  */ 
  virtual CATISpecObject_var GetParting() const=0;
  /**
  * Returns the list of faces to be drafted.
  *<br><b>Legal values</b>: The CATISpecObject_var is a face.
  */ 
  virtual CATLISTV(CATISpecObject_var) *  GetSupportToDraft() const= 0;
 /** @nodoc */
  virtual CATLISTP(CATFace)  GetFacesToDraft() const= 0;
 /** @nodoc */
  virtual CATLISTP(CATFace)  GetNeutralFaces(int iSide=1) const= 0;
 /** @nodoc */
  virtual int GetMultiselMode() const=0;
 /** @nodoc */
	virtual int GetPartingEqualNeutral() const = 0;  

 /** @nodoc */
	virtual CATLISTV(CATISpecObject_var)* GetNeutralList(int iSide=1) const = 0;
 /** @nodoc */
	virtual void AddNeutral(CATLISTV(CATISpecObject_var)* ihNeutralList,int iSide=1) = 0;
 /** @nodoc */
	virtual void DeleteNeutral(CATLISTV(CATISpecObject_var)* ihNeutralList,int iSide=1) = 0;
 /** @nodoc */
  virtual  void SetDraftVariationType(CATPrtDraftVariation iVariation) const=0;
 /** @nodoc */
  virtual CATPrtDraftVariation GetDraftVariationType() const=0;
 /** @nodoc */
  virtual CATLISTV(CATISpecObject_var) * GetPoint() const = 0;

  /** @nodoc */
  virtual CATEdge_var GetSupportEdge(CATISpecObject_var ihVertex, CATISpecObject_var ihInitialEdge, CATPointOnCurve_var &ohProjectedPoint, CATCurve_var &ohCurveMin) const = 0;
  /** @nodoc */
  virtual CATWire_var GetNeutralCurve(CATLISTP(CATEdge)*& oListEdgeSA, CATBody_var& ohBody, CATISpecObject_var& ohNeutralCurve) const = 0;
  /** @nodoc */
  virtual void ModifyDrivingMode(int iDrivingMode) = 0;
  /** @nodoc */
  virtual int GetDraftDrivingMode() = 0;

  /** @nodoc */
  virtual HRESULT AddLimitingElement(CATISpecObject_var ihLimitingElement,int iOrientation) = 0;
  /** @nodoc */
  virtual HRESULT RemoveLimitingElement(CATISpecObject_var ihLimitingElement) = 0;
  /** @nodoc */
  virtual HRESULT SetOrientationOnLimitingElement(CATISpecObject_var ihLimitingElement, int iOrientation) = 0;
  /** @nodoc */
  virtual HRESULT GetOrientationOnLimitingElement(CATISpecObject_var ihLimitingElement, int& oOrientation) const = 0;
  /** @nodoc */
  virtual HRESULT GetLimitingElements(int iOrientationListNeeded, CATLISTV(CATISpecObject_var)& oLimitingElementList, CATRawCollint & oOrientationList) const = 0;
 /** @nodoc */
  virtual  void ModifyFittedParameter (double iValue) =0;
 /** @nodoc */
  virtual double GetFittedParameter () const=0;
 /** @nodoc */
  virtual CATICkeParm_var GetFittedParm() const=0;
  
  /**
  * Gets the pulling direction orientation.
  * @param  iSide
  *    Side number (used in case of draft both sides)
  *    <br>Specify which side of the parting element will be concerned  
  *    <br><b>Legal values</b>: 1,2.
	* @param oOrientation 
  *    Output value
  *    <br><b>Legal values</b>: 1,-1.
  */
  virtual HRESULT GetPullDirOrientation(int iSide, int &oOrientation) = 0;
  /**
  * Sets the pulling direction orientation.
  * @param iOrientation 
  *    Pullign Direction Orientation value
  *    <br><b>Legal values</b>: 1,-1.
  * @param  iSide
  *    Side number (used in case of draft both sides)
  *    <br>Specify which side of the parting element will be concerned  
  *    <br><b>Legal values</b>: 1,2.
  */
  virtual HRESULT SetPullDirOrientation(int iOrientation,int iSide) = 0;
  
  /**
  * Sets the context of Draft feature.
  * @param iContext
  *   context can be :
  *<br>- 0 (Part)       
  *<br>- 4 (Volume)    
  *<br>- 5 (Functional)
  */
  virtual HRESULT SetContext(int iContext) = 0;
  
  /**
  * Returns the context of Draft feature.
  * @param oContext
  *   context can be :
  *<br>- 0 (Part)       
  *<br>- 4 (Volume)    
  *<br>- 5 (Functional)
  */
  virtual HRESULT GetContext(int & oContext) = 0;
};

CATDeclareHandler (CATIDraft, CATIShape); 

#endif // CATIDraft_H
