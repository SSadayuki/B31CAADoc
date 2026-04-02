/* -*-c++-*- */

#ifndef _CATIExchangeTabulatedCylinder_H
#define _CATIExchangeTabulatedCylinder_H

// COPYRIGHT DASSAULT SYSTEMES PROVENCE 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

#include "CATBaseUnknown.h"
#include "DataExchangeBaseRepsItfCPP.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDataExchangeBaseRepsItfCPP IID IID_CATIExchangeTabulatedCylinder;
#else
extern "C" const IID IID_CATIExchangeTabulatedCylinder;
#endif

/**
 * Interface to exchange tabulated cylinders.
 * <b>Role</b>: This interface is dedicated to get tabulated cylinders information.
 * <br>Available from CATIA V5R10.
 */ 
class ExportedByDataExchangeBaseRepsItfCPP CATIExchangeTabulatedCylinder : public CATBaseUnknown
{
  CATDeclareInterface;

public: 
  
/**
 * Retrieves the tabulated cylinder's parameters.
 * @param oVectDirectrix
 *				Get the directrix vector.
 * @param oLimitLength
 *				Get the limit length.
 * @param oOtherLimitLength
 *				Get the other limit length.
 * @param oGeneratrix
 *				Get the generatrix.
 */
  virtual HRESULT GetTabulatedCylinderData(double oVectDirectrix[3], double *oLimitLength,
			                                  double *oOtherLimitLength, 
                                           CATBaseUnknown_var &oGeneratrix) const = 0;

 /**
 * @nodoc
 * Do not use
 */
  virtual HRESULT ActiveGeneratrixTrim(CATBaseUnknown_var iRelimitedOnFace,
                                       short iIsFittingRequested = 0) const = 0;


/**
 * Retrieves the tabulated cylinder's reference direction.
 * @param oRefDirection
 *				To define.
 */
  virtual HRESULT GetTabulatedCylinderInfo(double oRefDirection[3]) const = 0;

};
CATDeclareHandler(CATIExchangeTabulatedCylinder,CATBaseUnknown);

#endif
