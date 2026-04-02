/* -*-c++-*- */

#ifndef CATIExchangeProductInstance_H
#define CATIExchangeProductInstance_H

// COPYRIGHT 2002-2003 DASSAULT SYSTEMES PROVENCE

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

//===================================================================
//
// 30/09/02: JHH: Creation
// 21/01/03: ABM: Adaptation to XCAD
// 04/03/03: JHH: Suppression attributs Nomenclature et SourceType
// 12/03/03: JHH: Modif arguments de GetTransformation
// 17/03/03: MAX: CAA Documentation 
// 02/12/03: JHH: Eradication des long
//
//===================================================================

#include "DataExchangeBaseRepsItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATIExchangeProduct.h"
#include "CATDataType.h"

class CATIExchangeProperty_var;
class CATIExchangeTransformation_var;
// class CATUnicodeString;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDataExchangeBaseRepsItfCPP IID IID_CATIExchangeProductInstance;
#else
extern "C" const IID IID_CATIExchangeProductInstance ;
#endif

/**
 * Interface to exchange product instances.
 * <b>Role</b>: This interface describes an instance of product.
 * An instance is a space location in the context of a tree of a reference;
 * the reference is either a product, or a part, both cases are handled thru a document.
 * If available, presentation properties (color, layer, etc.) can be retrieved on the object using
 * @href CATIExchangeProperty interface (use <tt>QueryInterface</tt> on the <tt>CATIExchangeProductInstance</tt> pointer).
 * <br>Available from CATIA V5R10.
 * @see CATIExchangeProductRepresentation, CATIExchangeProduct
 */
class ExportedByDataExchangeBaseRepsItfCPP CATIExchangeProductInstance: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Retrieves the reference of this instance.
 * It's always a product.
 * @param oProduct
 *				Get the product reference.
 */
     virtual HRESULT GetReferenceProduct(CATIExchangeProduct_var& oProduct) = 0;

/**
 * Retrieves the UID associated to the instance. 
 * The UID is used as an identifier of the instance; it is a non persistent ID,
 * which lifecycle is mapped on the document lifecycle.
 * @param oInstanceUID
 *				Get the instance's UID.
 */
	 virtual HRESULT GetUID(CATLONG32& oInstanceUID) = 0;	 

/**
 * Retrieves the attributes of the instance. 
 * @param oName
 *				Get the instance's name.
 * @param oDescription
 *				Get the instance's description.
 */
     virtual HRESULT GetInstanceAttributes(CATUnicodeString& oName, CATUnicodeString& oDescription) = 0;

/**
 * Retrieves the spatial transformation of the instance.
 * The matrix must be isometric in case of conversion in V5 or V6. 
 * Includes mirroring, scaling, etc.
 * @param oRot
 *				Get the rotation parameters.
 * @param oTrans
 *				Get the translation parameters.
 */
	virtual HRESULT GetTransformation(double oRot[3][3], double oTrans[3]) = 0;

/**
 * Retrieves the instance's geometric properties.
 * @param oCentroid
 *				Get the instance's centroid.
 * @param oVolume
 *				Get the instance's volume.
 * @param oWetArea
 *				Get the instance's wet area.
 * @param oTolerance
 *				Get the tolerance used to compute wet area in the instance.
 */
	 virtual HRESULT GetGeometricProperties(double  oCentroid[], double& oVolume, double& oWetArea, double& oTolerance) = 0;
};
CATDeclareHandler(CATIExchangeProductInstance,CATBaseUnknown);

#endif
