#ifndef CATISchCntrConnect_H
#define CATISchCntrConnect_H

//	COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"
class CATISchGRRCntr;

extern "C" const IID IID_CATISchCntrConnect;

/**
 * Interface to manage connect information of
 * Schematic connector objects. 
 * <b>Role</b>: To query the validity of possible connection
 * and the transformation needed to accomplish it.
 */
class CATISchCntrConnect : public IUnknown
{
  public: 
  
 /**
  * Query whether 'this' connector can be connected to the specified
  * connector, that is, whether their positions are coincident.
  * @param iGRRCntr
  *   Pointer to the image of the 'connect to' connector. 
  * @param oBYes
  *   If TRUE, then it is OK to connect.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>CATReturnSuccess</dt>
  *     <dd>operation is successful</dd>
  *     <dt>CATReturnFailure</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT OKToConnect (CATISchGRRCntr *iGRRCntr, CATBoolean *oBYes) = 0;

 /**
  * Get the transformation matrix needed to transform 'this' connector to be 
  * coincident and aligned with the 'connect to' connector.
  * NOTE: "alignment" in this context means that the connectors' alignment
  *       vectors are facing opposite directions.
  * @param iGRRCntr
  *   Pointer to the image of the 'connect to' connector. 
  * @param oDb6Matrix
  *   Transformation matrix.
  *   @see CATISchCompLocation#GetTransformation2D 
  *   for explanation of this argument.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>CATReturnSuccess</dt>
  *     <dd>operation is successful</dd>
  *     <dt>CATReturnFailure</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetTransformMatrix (CATISchGRRCntr *iGRRCntr,
    double *oDb6Matrix) = 0;

};
#endif
