/* -*-c++-*- */
#ifndef CATIUserPatt_H
#define CATIUserPatt_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include <PartItf.h>
#include <CATIPrtPattern.h>
#include <CATICkeParm.h>
#include <CATLISTV_CATISpecObject.h>
#include <CATMathDirection.h>
#include <CATMathPoint.h>
#include <CATMathGridOfVectors.h>
#include "CATLISTP_CATMathTransformation.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATIUserPatt;
#else
extern "C" const IID IID_CATIUserPatt;
#endif

/**
 * Interface to read or modify the specifications of the user pattern.
 * <b>Role</b>: The user pattern feature allows users to duplicate an original feature according
 * an user distribution. 
 */
class ExportedByPartItf CATIUserPatt : public CATIPrtPattern
{
  CATDeclareInterface;

  public :

  /**
  * Returns the number of times that the original feature will be duplicated.
  */
  virtual int GetNbCopy() = 0;

  /** @nodoc */
  virtual CATICkeParm_var GetParmNbCopy() = 0;

  /**
  * Returns the list of location elements.
  * The list is composed of one sketch of points.
  */
  virtual CATLISTV(CATISpecObject_var) GetLocationElt()= 0;
 
  /**
  * Returns the list of location orientations.
  * The list is composed of transofrmation containing only orientations at each location point.
  * The list items must be deleted after use.
  */
  virtual HRESULT GetLocationOrientations(CATLISTP(CATMathTransformation)& oListOrientTransfos)= 0;
 
  /** @nodoc */
  virtual CATISpecObject_var GetStepElt() = 0;

  /**
  * Sets the location elements.
  * @param ihObjectList
  *  One sketch of points.
  */ 
  virtual int ModifyLocationElt(const CATISpecObject_var &ihObjectList) = 0;

  /**
  * Sets the location elements.
  * @param iListOfLocationElts
  *  List of Positioning elements, it can be either a single sketch of points or list of points/axis systems.
  */ 
  virtual int ModifyLocationElts(const CATLISTV(CATISpecObject_var) & iListOfLocationElts) = 0;

  /** @nodoc */
  virtual int ModifyStepElt(const CATISpecObject_var &ihStepElt) = 0;  

  /** @nodoc */
  virtual CATISpecObject_var GetAnchor() = 0;

  /** @nodoc */
  virtual int ModifyAnchor(const CATISpecObject_var &ihAnchorPoint) = 0;

	/** @nodoc */
  virtual HRESULT GetLocationPoints(CATLISTV(CATBaseUnknown_var)& ListPoint, int& oConfusionPointPosition) = 0;  

	/** @nodoc */
  virtual HRESULT UpdateLocationElt(const CATISpecObject_var &ihElt) = 0;  

};

CATDeclareHandler (CATIUserPatt, CATIPrtPattern); 

#endif // CATIUserPatt_H
