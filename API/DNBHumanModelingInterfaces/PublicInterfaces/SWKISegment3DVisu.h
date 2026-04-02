// COPYRIGHT DASSAULT SYSTEMES 2003
#ifndef _SWKISegment3DVisu_h
#define _SWKISegment3DVisu_h

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

// *****************************************************************************
// Framework DNBHumanModelingInterfaces
// Copyright Safework (2000) Inc.
// *****************************************************************************
//  Abstract:
//  ---------
//       SWKISegment3DVisu interface.
//       This interface offers miscellaneous visualization
//       services for an SWKSegment.
// *****************************************************************************
//  Usage:
//  ------
//
// *****************************************************************************
//  Inheritance:
//  ------------
//
//  SWKI3DVisu
//
// *****************************************************************************
//  Main Methods:
//  -------------
//
//   GetMappingOperator
//   CreateGraphicMaterial
//   GetGraphicMaterial
//   GetReachEnvelopeParameter
//   SetReachEnvelopeParameter
//   ResetReachEnvelopeParameter
//   BuildReachEnvelope
//   CreateSkinGraphicMaterial
//   GetSkinMappingOperator
// *****************************************************************************
//  History
//  -------
//
//  Author: Jean-Guy AUGUSTIN
//  Date  : 27/03/00
//  Goal  : Creation
// *****************************************************************************
//
// --- DNBHumanModelingInterfaces
#include "SWKI3DVisu.h"
#include "SWShortNames.h"
//
// --- DNBHumanModelingUI
class SWKSegmentMappingOperator;
//
// --- DNBHumanModelingInterfaces
class SWKISegment;
//
// --- Visualization
class CATGraphicMaterial;


#ifdef _WINDOWS_SOURCE
#ifdef __SWKHumanModelingItf
#define ExportedBySWKHumanModelingItf __declspec(dllexport)
#else
#define ExportedBySWKHumanModelingItf __declspec(dllimport)
#endif
#else
#define ExportedBySWKHumanModelingItf
#endif


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedBySWKHumanModelingItf IID IID_SWKISegment3DVisu;
#else
extern "C" const IID IID_SWKISegment3DVisu;
#endif


/**
  * This interface offers miscellaneous visualization
  * services for a segment of the manikin.
  **/

class ExportedBySWKHumanModelingItf SWKISegment3DVisu : public SWKI3DVisu
{
	CATDeclareInterface;

  public:

	/**
	  * @return The custom mapping operator of the segment.
	  **/
	virtual SWKSegmentMappingOperator * GetMappingOperator() = 0;

	/**
	  * Create the graphic material of the segment.
	  **/
	virtual CATGraphicMaterial * CreateGraphicMaterial() = 0;

	/**
	  * Retrieve The graphic material of the segment,
	  * or <code>NULL</code>, if the graphic material has not yet been created.
	  * To create the graphic material of the segment, simply make a call
	  * to <code>CreateGraphicMaterial()</code>.
	  **/
	virtual CATGraphicMaterial * GetGraphicMaterial() = 0;

	/**
	  * @return The short name of the segment on which the reach
	  * envelope is built for this manikin.
	  **/
	virtual SWShortName GetReachEnvelopeParameter() const = 0;

	/**
	  * Set the parameter for the reach envelope construction.
	  *
	  * @param piSegment The segment on which the reach envelope must
	  * be constructed.  This segment must be a descendant of the left
	  * hand or of the right hand.
	  *
	  * @return A status code indicating success or failure.
	  **/
	virtual HRESULT SetReachEnvelopeParameter(SWKISegment * piSegment) = 0;

	/**
	  * Reset the parameter for the reach envelope construction.
	  *
	  * When this method is called, the reach envelope of this
	  * manikin will disappear on the next called to method
	  * <code>RebuildRep()</code> on the manikin.
	  *
	  * @return A status code indicating success or failure.
	  **/
	virtual HRESULT ResetReachEnvelopeParameter() = 0;

	/**
	  * Build the reach envelope from the segment parameter set in
	  * method <code>SetReachEnvelopeParameter()</code>.
	  **/
	virtual HRESULT BuildReachEnvelope() = 0;

	virtual CATGraphicMaterial * CreateSkinGraphicMaterial() = 0;
	virtual SWKSegmentMappingOperator * GetSkinMappingOperator() = 0;
};

CATDeclareHandler(SWKISegment3DVisu, SWKI3DVisu);
#endif
