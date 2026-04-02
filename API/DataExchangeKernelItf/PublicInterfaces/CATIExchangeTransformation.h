/* -*-c++-*- */

#ifndef CATIExchangeTransformation_H
#define CATIExchangeTransformation_H

//  COPYRIGHT DASSAULT SYSTEMES PROVENCE 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

//===================================================================
//
// --/--/--: ---: Creation
// 17/03/03: MAX: CAA Documentation 
//===================================================================

#include "DataExchangeKernelItfCPP.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDataExchangeKernelItfCPP IID IID_CATIExchangeTransformation;
#else
extern "C" const IID IID_CATIExchangeTransformation ;
#endif

/**
 * Interface to exchange transformations.
 * <b>Role</b>: This interface is dedicated to get transformations information.
 * <br>Available from CATIA V5R10.
 */ 
class ExportedByDataExchangeKernelItfCPP CATIExchangeTransformation: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Retrieves the transformation (rotation + translation).
 * @param oRot
 *				Get the rotation component. 
 * @param oTrans
 *				Get the translation component. 
 * @return S_OK if the transformation is not the identity.
 */
    virtual HRESULT GetTransformation(double oRot[3][3], double oTrans[3]) const = 0;
};
CATDeclareHandler( CATIExchangeTransformation, CATBaseUnknown );

#endif
