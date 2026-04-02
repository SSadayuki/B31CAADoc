/* -*-c++-*- */

#ifndef CATIExchangeBoundaryRepresentation_H
#define CATIExchangeBoundaryRepresentation_H

// COPYRIGHT DASSAULT SYSTEMES PROVENCE 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

//===================================================================
//
// 03/12/02 : ABM: Creation
// 17/03/03 : MAX: CAA Documentation 
// 01/04/03 : MAX: Chgt de classe mere : CATIExchangeRepresentation -> CATBaseUnknown
//
//===================================================================

#include "DataExchangeBaseRepsItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATListOfValCATIExchangeBody.h"
#include "CATIExchangeTransformation.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDataExchangeBaseRepsItfCPP IID IID_CATIExchangeBoundaryRepresentation;
#else
extern "C" const IID IID_CATIExchangeBoundaryRepresentation ;
#endif

// String to be returned by implementations on method CATIExchangeRepresentation::GetRepresentationType
// and to give to CATIExchangeInputDocument::GetRepresentation
#define XCAD_BOUNDARY_REPRESENTATION "BoundaryRepresentation"

/**
 * Interface to exchange Boundary representations.
 * <b>Role</b>: This interface provides a view on a XCAD document as a Brep and
 * retrieves the top bodies of the representation.
 * <br>Available from CATIA V5R11.
 */ 
class ExportedByDataExchangeBaseRepsItfCPP CATIExchangeBoundaryRepresentation: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Returns a list of all bodies making the B-representation.
 * @param iTransf
 *				Transformation to be applied to all elements before retrieval
 *				(usually the transformation is used to relocate the geometry of the representation in a GCS).
 */  
  virtual CATLISTV(CATIExchangeBody_var)* EnumBodies(CATIExchangeTransformation* iTransf =NULL ) const = 0;

/**
 * Returns a list of all elements set aside of the "pure" Brep of a document representing a part,
 * and that are not retrieved as bodies.
 * This method usage is restricted to construction types that correspond to this domain and that are not strictly under a body
 * @href CATIExchangeCld, @href CATIExchangeCoordinateSystem, @href CATIExchangePlane, @href CATIExchangeDitto.
 * @param iTransf
 *				Transformation to be applied to all elements before retrieval
 *				(usually the transformation is used to relocate the geometry of the representation in a GCS).
 */
  virtual CATLISTV(CATBaseUnknown_var)* EnumGeometricalElements(CATIExchangeTransformation* iTransf =NULL ) const = 0;
// CATIExchangeInputElement_var has been replaced by CATBaseUnknown_var, the list being intended however to be made of interface pointers.
// this allows a mapping implementation that avoids multiple QueryInterface.
// The CATMetaclass::GetID  in each element of the list will return the actual interface ID of one of the following CATIExchangeCld, CATIExchangeCoordinateSystem, CATIExchangePlane, CATIExchangeDitto,
// which will facilitate the switch on the creation of the corresponding translated elements.  

};
CATDeclareHandler(CATIExchangeBoundaryRepresentation,CATBaseUnknown);

#endif
