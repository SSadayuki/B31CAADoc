#ifndef CATIStCurvaturePorcupineAnalysisDef_H
#define CATIStCurvaturePorcupineAnalysisDef_H

/**
  * @CAA2Level L0
  * @CAA2Usage U0
  */

// COPYRIGHT Dassault Systemes 2002
//===================================================================
//
// CATIStPorcupineCurvatureDef.h
// Define the Defined value used in CATIStCurvaturePorcupineAnalysis 
//
//===================================================================
//
// Usage notes:
//  --------------------------------------------------
//   IMPORTANT : DASSAULT SYSTEMES INTERNAL USE ONLY.
//  --------------------------------------------------
//
//===================================================================
//
//  Dec 2002  Creation:                                
//===================================================================

#include "CAAFreeStyleItf.h"



	/**
    * @nodoc
	* the display type of the analysis
	*      Legal values are :
	*			- CATFSSPorcupine	: displays the spikes 
	*			- CATFSSEnvelop		: displays the envelop
	*	   Values can be combined using logical '|' operateur (e.g. CATFSSPorcupine | CATFSSEnvelop)
	*/
 
enum CATFSSCrvDisplayType	{
							CATFSSPorcupine	= 1<<1,
							CATFSSEnvelop	= 1<<2
							};
	/**
    * @nodoc
	* the type of discretization used for the computation
	*      Legal values are :
	*			- CATFSSCurveLength
	*			- CATFSSParametric
	*/
enum CATFSSCrvDiscretizationType
							{
							CATFSSCurveLength,
							CATFSSCurveParametric
							};
	/**
    * @nodoc
	* the quality of discretization used for the computation	
	*      Legal values are :
	*			- CATFSSLow
	*			- CATFSSMedium
	*			- CATFSSHigh
	*/
enum CATFSSCrvDiscretizationQuality
							{
							CATFSSLow,
							CATFSSMedium,
							CATFSSHigh
							};
	/**
    * @nodoc
	* the way to display the result values
	*      Legal values are :
	*			- CATFSSLinear
	*			- CATFSSLogarithmic
	*/
enum CATFSSCrvValuesDisplay
							{
							CATFSSLinear,
							CATFSSLogarithmic
							};

#endif

