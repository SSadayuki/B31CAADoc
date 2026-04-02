/* -*-c++-*- */

#ifndef _CATIExchangeShell_H
#define _CATIExchangeShell_H

//  COPYRIGHT DASSAULT SYSTEMES PROVENCE 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

#include "CATBaseUnknown.h"
#include "DataExchangeBaseRepsItfCPP.h"
#include "CATListOfValCATIExchangeFace.h"
#include "CATListOfInt.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDataExchangeBaseRepsItfCPP IID IID_CATIExchangeShell;
#else
extern "C" const IID IID_CATIExchangeShell;
#endif

/**
 * Interface to exchange shells.
 * <b>Role</b>: This interface is dedicated to get shells properties.
 * <br>A shell is a 3D domain made of faces.
 * <br>Available from CATIA V5R10.
 */
class ExportedByDataExchangeBaseRepsItfCPP CATIExchangeShell : public CATBaseUnknown
{
  CATDeclareInterface;

public:

/**
 * Returns a list of all faces of the shell.
 */
  virtual CATLISTV(CATIExchangeFace_var)* EnumFaces() const = 0;

/**
 * Retrieves the faces' orientations in the shell.
 * @param oOrient
 *				Get the faces' orientations.
 */
  virtual HRESULT GetFacesOrientations(CATListOfInt*& oOrient) const = 0;

 /**
  * Returns S_OK if the shell orientation is the opposite of the faces orientation.
  */
  virtual HRESULT IsReversed() const = 0;

 /**
  * Returns S_OK if the shell is closed.
  */
  virtual HRESULT IsClosed() const = 0;

/**
 * Retrieves the geometric properties of the shell.
 * @param oCentroid
 *				Get the shell's centroid.
 * @param oWetArea
 *				Get the shell's wet area.
 */ 
  virtual HRESULT GetGeometricProperties
               (double oCentroid[], double & oWetArea) const = 0;

};
CATDeclareHandler(CATIExchangeShell,CATBaseUnknown);

#endif
