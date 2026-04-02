#ifndef CATISchCompLocation_H
#define CATISchCompLocation_H

//	COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

/**
 * @deprecated V5R15
 * <br> This interface will be deleted in V5R17 and it will not been implemented.
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

class CATISchGRRComp;

extern "C" const IID IID_CATISchCompLocation ;

/**
 * Interface to manage the position and orientation of 
 * Schematic component objects. 
 * <b>Role</b>: To query or modify the position and orientation of 
 * a component
 */
class CATISchCompLocation : public IUnknown
{
  public: 
  
  /**
  * Get the local coordinate reference frame (with respect to absolute
  * coordinate system) of the component.
  * @param iGRR
  *   Pointer to the graphical image of the component
  * @param oDb6TransMatrix
  *   An double array of 6 members.
  *   Transformation matrix that defines the local coordinate reference frame
  *   of the component
  *   member 1, 2 - defines the x-axis of the local coordinate reference frame.
  *   member 3, 4 - defines the y-axis of the local coordinate reference frame.
  *   member 5, 6 - defines the origin of the local coordinate reference frame
  *   One can also interpret this as the transformation matrix that would move
  *   the component from the absolute coordinate frame to the current position
  *   and orientation. As such, the member 5,6 define the translational vector
  *   Furthemore, rotation angle and scale factor can be calculated from
  *   member 1 to 4.
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
  virtual HRESULT GetTransformation2D (CATISchGRRComp *iGRR,
    double *oDb6TransMatrix) = 0;

  /**
  * Set the local coordinate reference frame (with respect to absolute
  * coordinate system) of the component.
  * @param iGRR
  *   Pointer to the graphical image of the component
  * @param iDb6TransMatrix
  *   Transformation matrix to be set.
  *   See @href #GetTransformation2D for explanation of this argument.
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
  virtual HRESULT SetTransformation2D (CATISchGRRComp *iGRR,
    const double iDb6TransMatrix[6]) = 0;

  /**
  * Get the current scale factor of the component.
  * @param iGRR
  *   Pointer to the graphical image of the component
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
  virtual HRESULT GetScale (CATISchGRRComp *iGRR,
    double *oDb1ScaleFactor) = 0;

  /**
  * Set the current scale factor of the component.
  * @param iGRR
  *   Pointer to the graphical image of the component
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
  virtual HRESULT SetScale (CATISchGRRComp *iGRR,
    const double iDb1ScaleFactor) = 0;

 /**
  * Get the current position of the component.
  * @param iGRR
  *   Pointer to the graphical image of the component
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
  virtual HRESULT GetPosition (CATISchGRRComp *iGRR,
    double *oDb2Position) = 0;

 /**
  * Set the current position of the component.
  * @param iGRR
  *   Pointer to the graphical image of the component
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
  virtual HRESULT SetPosition (CATISchGRRComp *iGRR,
    const double oDb2Position[2]) =  0;

 /**
  * Get the current rotation angle (from x-axis in radian) of the component.
  * @param iGRR
  *   Pointer to the graphical image of the component
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
  virtual HRESULT GetRotationAngle (CATISchGRRComp *iGRR,
    double *oDb1RotationAngleInRad) = 0;

 /**
  * Set the current rotation angle (from x-axis in radian) of the component.
  * @param iGRR
  *   Pointer to the graphical image of the component
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
  virtual HRESULT SetRotationAngle (CATISchGRRComp *iGRR,
    const double iDb1RotationAngleInRad) = 0;
};
#endif
