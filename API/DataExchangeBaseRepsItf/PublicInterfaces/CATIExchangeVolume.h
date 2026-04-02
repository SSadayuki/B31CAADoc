/* -*-c++-*- */

#ifndef _CATIExchangeVolume_H
#define _CATIExchangeVolume_H

//  COPYRIGHT DASSAULT SYSTEMES PROVENCE 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

#include "CATBaseUnknown.h"
#include "DataExchangeBaseRepsItfCPP.h"
#include "CATListOfValCATIExchangeShell.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDataExchangeBaseRepsItfCPP IID IID_CATIExchangeVolume;
#else
extern "C" const IID IID_CATIExchangeVolume;
#endif

/**
 * Interface to exchange volumes.
 * <b>Role</b>: This interface is dedicated to get a volume's content.
 * <br>A volume is a tri-dimensional topological entity. It has no underlying geometry.
 * <br>Available from CATIA V5R10.
 */
class ExportedByDataExchangeBaseRepsItfCPP CATIExchangeVolume : public CATBaseUnknown
{
  CATDeclareInterface;

public:

/**
 * Returns a list of all the shells contained in the volume.
 */  
  virtual CATLISTV(CATIExchangeShell_var)* EnumShells() const = 0;

/**
 * Retrieves the geometric properties of the volume.
 * @param oCentroid
 *				Get the volume's centroid.
 * @param oVolume
 *				Get the volume's volume.
 * @param oWetArea
 *				Get the volume's wet area.
 */ 
  virtual HRESULT GetGeometricProperties(double oCentroid[], double & oVolume, double & oWetArea) const = 0;

};
CATDeclareHandler(CATIExchangeVolume,CATBaseUnknown);

#endif
