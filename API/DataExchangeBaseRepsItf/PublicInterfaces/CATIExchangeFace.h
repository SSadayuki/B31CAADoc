/* -*-c++-*- */

#ifndef _CATIExchangeFace_H
#define _CATIExchangeFace_H

//  COPYRIGHT DASSAULT SYSTEMES PROVENCE 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

#include "CATBaseUnknown.h"
#include "DataExchangeBaseRepsItfCPP.h"
#include "CATListOfValCATIExchangeLoop.h"
#include "CATIExchangeSurface.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDataExchangeBaseRepsItfCPP IID IID_CATIExchangeFace;
#else
extern "C" const IID IID_CATIExchangeFace;
#endif

/**
 * Interface to exchange faces.
 * <b>Role</b>: This interface is dedicated to get faces information.
 * <br>A face is a bi-dimensional topological entity. Its underlying geometry is a 3D surface.
 * <br>Available from CATIA V5R10.
 */
class ExportedByDataExchangeBaseRepsItfCPP CATIExchangeFace : public CATBaseUnknown
{
  CATDeclareInterface;

public:

/**
 * Returns the list of all associated loops.
 */
  virtual CATLISTV(CATIExchangeLoop_var)* EnumLoops() const = 0;

/**
 * Returns the associated basis surface.
 */
  virtual CATIExchangeSurface_var GetSurface() = 0;

/**
 * Returns TRUE if the face's surface parametrization is opposed to the
 * logical flow imposed by convention, FALSE otherwise.
 */ 
  virtual int IsParamReversed() = 0;

/**
 * Retrieves the geometric properties of the face.
 * @param oArea
 *				Get the face's area.
 */ 
  virtual HRESULT GetGeometricProperties
                  (double & oArea) const = 0;
  
};
CATDeclareHandler(CATIExchangeFace,CATBaseUnknown);

#endif
