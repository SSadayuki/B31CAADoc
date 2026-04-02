/* -*-c++-*- */

#ifndef CATIExchangeBody_H
#define CATIExchangeBody_H

// COPYRIGHT DASSAULT SYSTEMES PROVENCE 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

//===================================================================
//
// 03/12/02: ABM: Creation From CATIExchangeSurfaceBody
// 17/03/03: MAX: CAA Documentation 
//
//===================================================================

#include "DataExchangeBaseRepsItfCPP.h"
#include "CATBaseUnknown.h"

#include "CATListOfValCATIExchangeVolume.h"
#include "CATListOfValCATIExchangeShell.h"
#include "CATListOfValCATIExchangeFace.h"
#include "CATListOfValCATIExchangeEdge.h"
#include "CATListOfValCATIExchangeVertex.h"
#include "CATListOfValCATIExchangeWire.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDataExchangeBaseRepsItfCPP IID IID_CATIExchangeBody;
#else
extern "C" const IID IID_CATIExchangeBody ;
#endif

/**
 * Interface to exchange Brep bodies.
 * <b>Role</b>: This interface is dedicated to get Brep bodies informations and content.
 * <br>Available from CATIA V5R11.
 */
class ExportedByDataExchangeBaseRepsItfCPP CATIExchangeBody: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Returns a list of all volumes making the B-representation.
 */  
  virtual CATLISTV(CATIExchangeVolume_var)* EnumVolumes() const = 0;

/**
 * Returns a list of all free shells without volume, and federated by the body.
 */
  virtual CATLISTV(CATIExchangeShell_var)* EnumShells() const = 0;

/**
 * Returns a list of all free faces which bound the body (Non Manifold).
 */
  virtual CATLISTV(CATIExchangeFace_var)* EnumFaces() const = 0;

/**
 * Returns a list of all free edges which bound the body (Non Manifold).
 */
  virtual CATLISTV(CATIExchangeEdge_var)* EnumEdges() const = 0;

/**
 * Returns a list of all free vertices in the body (Non Manifold).
 */
  virtual CATLISTV(CATIExchangeVertex_var)* EnumVertices() const = 0;

/**
 * Returns a list of all wires in the body (Non Manifold).
 */
  virtual CATLISTV(CATIExchangeWire_var )* EnumWires() const=0;

/**
 * Retrieves the geometric properties of the body.
 * @param oCentroid
 *				Get the body's centroid.
 * @param oVolume
 *				Get the body's volume.
 * @param oWetArea
 *				Get the body's wet area.
 */ 
  virtual HRESULT GetGeometricProperties(double  oCentroid[], double & oVolume, double & oWetArea) const = 0;

};
CATDeclareHandler(CATIExchangeBody,CATBaseUnknown);

#endif
