/**
* @CAA2Level L0
* @CAA2Usage U3
*/

//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2013
//==============================================================================
//
// CATICciRosette :
//   Interface to manage a composites Rosette and its properties.
//
//==============================================================================
// Usage Notes :
//
//------------------------------------------------------------------------------
//  Inheritance : CATICciRosette (CAACompositesItf FW)
//                  CATBaseUnknown        (System FW)
//==============================================================================
#ifndef CATICciRosette_H
#define CATICciRosette_H

#include "CAACompositesItf.h"

#include "CATBaseUnknown.h"
#include "CATIMf3DAxisSystem.h"
#include "CATICciRosetteTransferType.h"
#include "CATBody.h"
#include "CATListOfDouble.h"
#include "CATIMfMonoDimResult.h"
#include "CATMathAxis.h"
#include "CATICciRosetteTransferTypeFactoryServices.h"
#include "CATLISTV_CATMathAxis.h"

extern ExportedByCAACompositesItf  IID IID_CATICciRosette ;

/**
* Interface to manage a composites Rosette feature.
* <b>Role</b>: Allows to access data of composites Rosette feature.
*/
class ExportedByCAACompositesItf CATICciRosette: public CATBaseUnknown
{
CATDeclareInterface;

public:
   
	/**
	* Returns the geometrical rosette.
	* @param ospGeometricalRosette
	*    The feature corresponding to the geometrical rosette.
	*/
    virtual HRESULT GetMainAxis (CATIMf3DAxisSystem_var& ospGeometricalRosette) = 0;

	/**
	* Sets the geometrical rosette.
	* @param ispGeometricalRosette
	*    The feature corresponding to the geometrical rosette.
	*/
    virtual HRESULT SetMainAxis (const CATIMf3DAxisSystem_var& ispGeometricalRosette) = 0;

	/**
	* Returns the rosette transfer type object.
	* @param ospRosetteTransferType
	*    The type of the rosette transfer.
	*/
    virtual HRESULT GetRosetteTransferType (CATICciRosetteTransferType_var& oRosetteTransferType) = 0;

	/**
	* Sets the rosette transfer type object.
	* @param ispGeometricalRosette
	*    The feature corresponding to the geometrical rosette.
	*/
    virtual HRESULT ReplaceRosetteTransferType (CATICciRosetteTransferType_var &iRosetteTransferType) = 0;

	/**
	* Gets the rosette transfer result.
	* @param ispSurface
	*	The surface where the transfer will be done.
	* @param iCoordPoints
	*	The list of points (Appends X,Y,Z) where the transfer will be done.
	* @param oListTransferedAxisSystem
	*	The list of CATMathAxis corresponding of the result in each transfer point.
	* @param ipConfiguration
	*	The pointer to the configuration. Can be <tt>NULL</tt>.
	* 
	*/
	virtual HRESULT GetTransferedRosette(const CATBody_var &ispSurface, CATListOfDouble &iCoordPoints, CATLISTV(CATMathAxis) &oListTransferedAxisSystem, CATSoftwareConfiguration *ipConfiguration = NULL) = 0;


	/**
	* Gets the default rosette transfer factory service to create Cartesian or cylindrical rosette transfer.
	* @param opFactoryService
	*	The default rosette transfer factory.
	* 
	*/
	virtual HRESULT GetRosetteTransferFactoryService(CATICciRosetteTransferTypeFactoryServices_var &opFactoryService) = 0;
};

//-----------------------------------------------------------------------
CATDeclareHandler( CATICciRosette, CATBaseUnknown );

#endif
