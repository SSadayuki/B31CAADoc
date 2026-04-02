#ifndef CATISchGRRComp_H
#define CATISchGRRComp_H

//	COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

extern "C" const IID IID_CATISchGRRComp ;

/**
 * Interface to manage the position and orientation of 
 * Schematic component graphic objects. 
 * <b>Role</b>: To query or modify the position and orientation of 
 * a component graphic
 */
class CATISchGRRComp : public IUnknown
{
  public:   
  
  /**
  * Get the local coordinate reference frame (with respect to absolute
  * coordinate system) of the component.
  * @param oDb6TransMatrix
  *   See @href CATISchCompLocation#GetTransformation2D
  *   for explanation of this argument.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetTransformation2D (double *oDb6TransMatrix) = 0;

  /**
  * Set the local coordinate reference frame (with respect to absolute
  * coordinate system) of the component.
  * @param iDb6TransMatrix
  *   Transformation matrix to be set.
  *   See @href CATISchCompLocation#GetTransformation2D 
  *   for explanation of this argument.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT SetTransformation2D (const double iDb6TransMatrix[6]) = 0;

  /**
  * Get the current scale factor of the component.
  * @param oDb1ScaleFactor
  *   The current scale factor of the component.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetScale (double *oDb1ScaleFactor) = 0;

  /**
  * Set the current scale factor of the component.
  * @param iDb1ScaleFactor
  *   The scale factor of the component to be set.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT SetScale (const double iDb1ScaleFactor) = 0;

 /**
  * Get the current position of the component.
  * @param oDb2Position
  *   The current position of the component.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetPosition (double *oDb2Position) = 0;

 /**
  * Set the current position of the component.
  * @param iDb2Position
  *   The position of the component to be set.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT SetPosition (const double oDb2Position[2]) = 0;

 /**
  * Get the current rotation angle (from x-axis in radian) of the component.
  * @param oDb1RotationAngleInRad
  *   The current angle of the component in radian.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetRotationAngle (double *oDb1RotationAngleInRad) = 0;

 /**
  * Set the current rotation angle (from x-axis in radian) of the component.
  * @param iDb1RotationAngleInRad
  *   The rotation angle of the component in radian to be set.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT SetRotationAngle (const double iDb1RotationAngleInRad) = 0;
};
#endif
