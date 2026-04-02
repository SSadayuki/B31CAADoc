/* -*-c++-*- */
#ifndef CATIPrtPattern_H
#define CATIPrtPattern_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include <PartItf.h>
#include <CATIShape.h>
#include <CATICkeParm.h>
#include <CATLISTV_CATISpecObject.h>
#include <CATMathDirection.h>
#include <CATMathPoint.h>
#include <CATMathGridOfVectors.h>
#include "CATMathTransformation.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATIPrtPattern;
#else
extern "C" const IID IID_CATIPrtPattern;
#endif

/**
 * Interface to read or modify the specifications of the pattern.
 * <b>Role</b>: The pattern feature allows users to duplicate an original feature according
 * a specific distribution. 
 */
class ExportedByPartItf CATIPrtPattern : public CATIShape
{
  CATDeclareInterface;

  public :


	/**
	* Return a CATMathGridOfvectors. It contains all the transformation vectors of the 
	* pattern instances.
  * A CATMathGridOfvectors is a bi-dimensional grid of CATMathVector
	*/
  virtual CATMathGridOfVectors * GetTransfo() = 0;
  /** @nodoc */
  virtual int GetRotation(CATMathTransformation &Rotation, int i, int j) = 0;
  /** @nodoc */
  virtual int GetGeneralTransformation(CATMathTransformation &ioTransfo) = 0;

  /**
	*  Returns the original feature.
	*/
	virtual CATISpecObject_var GetItem() = 0;

	/**
	* Returns the list of feature used for the creation of the pattern of list.
	*  @param oListItem
	*    List containing reference features of the pattern of list.
	*/
	virtual void GetItemList(CATLISTV(CATISpecObject_var) &oListItem) = 0;

  /**
   *  Sets the original feature.
   *  @param iItem
   *    iItem must be either:
   *  <br>- a mechanical form feature in the same mechanical tool that the pattern 
   *  <br>- a mechanical tool resulting from boolean operation
   *  <br>- an imported solid in the same mechanical tool that the pattern
   *  <br>- a feature which implement CATIPrtToPattern.
   */
  virtual void ModifyItem(const CATISpecObject_var &iItem) = 0;

  /**
   *  Returns the anchor point of the original feature.
   */  
  virtual CATMathPoint GetAnchorPoint() = 0;
  /** @nodoc */
  virtual void LinearToPlaneIdentification(int iInput, int & oPosi, int & Posj) = 0;
  /** @nodoc */
  virtual void PlaneToLinearIdentification(int iPosi, int iPosj, int & oI) = 0;

  /** @nodoc */
  virtual int GetScopeIdentification(int iId_Transfo, int &oScope_i, int &oScope_j) = 0;
  /** @nodoc */
  virtual int GetTransfoIdentification(int iScope_i, int iScope_j, int &oId_Transfo) = 0;
  /** @nodoc */
  virtual CATISpecObject_var GetSite() = 0;

  /**
   *  Returns if users want to keep the specifications of the original feature such as "Up to".
   *  <br>1 indicates that users want to keep the specifications.
   */
  virtual int GetIfDesignIntent() = 0;

  /**
   * Sets if users want to keep the specifications of the original feature such as "Up to".
   * @param iDsgIntent
   * <br><b>Legal values</b>:
   * <br>1 indicates that users want to keep the specifications.
   * <br>0 indicates that users do not want to keep the specifications.
   */
  virtual int SetDesignIntent(int iDsgIntent) = 0;

  /** @nodoc */
  virtual CATBoolean GetIfSimpleGeometry() = 0;
  /** @nodoc */
  virtual void SetSimpleGeometry(CATBoolean iFlagSimleGeom) = 0;

  /** @nodoc */
  virtual CATBoolean GetIfPatternOfList() = 0;

	/** @nodoc */
	virtual HRESULT ModifyContext(int iCtxt) = 0;
  /** @nodoc */
  virtual HRESULT GetContext(int& oCtxt) = 0;
  /** @nodoc */
  virtual int GetContext() = 0;

  /**
  * Returns Number of Instances in First and Second Direction.
  * @param InFirstDirection
  *    Number of Instances in First Direction.
  * @param InSecondDirection
  *    Number of Instances in Second Direction.
  */
	virtual HRESULT GetNumberOfInstances(int &oInFirstDirection, int &oInSecondDirection) = 0;

  /** @nodoc */
  virtual CATBoolean GetIfPatternOfBody() = 0;

  /** @nodoc */
  virtual HRESULT UpdateCoherence (CATLISTV(CATISpecObject_var) ListSpec, int &ModificationDone) = 0;

  /** @nodoc */
  virtual HRESULT GetIfPatternOfCurrentSolid (CATBoolean &oBool) = 0;

/** @nodoc */
	//virtual void  ModifyCurrentSolidFlag(boolean iCurrentSolid) = 0;
/** @nodoc */
	//virtual HRESULT GetCurrentSolidFlag(boolean& oCurrentSolid) = 0;

  virtual HRESULT UpdateDesignIntentAttribute()=0;

  /**
  * Returns the Deactivated status of the instance at position i,j
  * @param iposi
  *    The position of the instance in the First Direction (i)
  * @param iposj
  *    The position of the instance in the Second Direction (j)
  * @param obDeactivated
   * <br><b>Legal values</b>:
   * <br>1 indicates instance is deactivated   
  */
  virtual HRESULT IsInstanceAtLocationDeactivated (int &iposi ,int &iposj , CATBoolean &obDeactivated) = 0 ;

};

CATDeclareHandler (CATIPrtPattern, CATIShape); 

#endif // CATIPrtPattern_H









