#ifndef CATISchCntrLocation_H
#define CATISchCntrLocation_H

//	COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

class CATISchGRR;

extern "C" const IID IID_CATISchCntrLocation ;

/**
 * Interface to manage the position and orientation of 
 * Schematic connector objects. 
 * <b>Role</b>: To query or modify the position and orientation of 
 * a schematic connector
 */
class CATISchCntrLocation : public IUnknown
{
  public: 
  
 /**
  * Get the current position of the connector in 
  * <b>absolute</b> coordinates.
  * @param iGRR
  *   Pointer to the graphical primitive or the graphical image or the
  *   graphical primitives of the owner of the connector.
  * @param oDb2Position
  *   Absolute X-Y coordinates of the current position of 
  *   the connector. 
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
  virtual HRESULT GetPosition (CATISchGRR *iGRR,
    double *oDb2Position) = 0;

 /**
  * Set the current position of the connector in 
  * <b>absolute</b> coordinates. All connectors on multi-images are
  * affected because the relative position on connect will
  * be changed accordingly.
  * @param iGRR
  *   Pointer to the graphical primitive or the graphical image or the
  *   graphical primitives of the owner of the connector.. 
  * @param iDb2Position
  *   absolute X-Y coordinates of the current position of 
  *   the connector to be set.
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
  virtual HRESULT SetPosition (CATISchGRR *iGRR,
    const double iDb2Position[2]) =  0;

 /**
  * Get the current position of the connector in 
  * <b>relative</b> coordinates.
  * @param oDb2RelativePosition
  *   relative X-Y coordinates of the current position of 
  *   the connector.
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
  virtual HRESULT GetRelativePosition (double *oDb2RelativePosition) = 0;

 /**
  * Set the current position of the connector in absolute coordinates.
  * @param iDb2RelativePosition
  *   relative X-Y coordinates of the current position of 
  *   the connector to be set.
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
  virtual HRESULT SetRelativePosition (const double iDb2RelativePosition[2]) =  0;

 /**
  * Get the current alignment vector of the connector.
  * @param iGRR
  *   Pointer to the graphical primitive or the graphical image or the
  *   graphical primitives of the owner of the connector.
  * @param oDb2AlignVector
  *   X-Y component of the current alignment vector of
  *   the connector.
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
  virtual HRESULT GetAlignVector (CATISchGRR *iGRR,
    double *oDb2AlignVector) = 0;

 /**
  * Set the current alignment vector of the connector.
  * @param iGRR
  *   Pointer to the graphical primitive or the graphical image or the
  *   graphical primitives of the owner of the connector.
  * @param iDb2AlignVector
  *   X-Y component of the current alignment vector of
  *   the connector to be set.
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
  virtual HRESULT SetAlignVector (CATISchGRR *iGRR,
	const double iDb2AlignVector[2]) = 0;
};
#endif
