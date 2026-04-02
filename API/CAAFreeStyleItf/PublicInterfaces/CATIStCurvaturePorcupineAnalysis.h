#ifndef CATIStCurvaturePorcupineAnalysis_H
#define CATIStCurvaturePorcupineAnalysis_H

/**
  * @CAA2Level L0
  * @CAA2Usage U0
  */

//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2002
//==============================================================================
//
// CATIStInteractiveFactory:
//   Class defining the Curvature Porcupine Analysis interface
//
//==============================================================================
// Usage Notes :
//  --------------------------------------------------
//   IMPORTANT : DASSAULT SYSTEMES INTERNAL USE ONLY.
//  --------------------------------------------------
//
//------------------------------------------------------------------------------
//  Inheritance : CATIStCurvaturePorcupineAnalysis (CAAFreeStyleItf FW)
//                  CATBaseUnknown                 (System FW)
//==============================================================================
// Dec. 02   Creation                                     Francoise Maupain
//==============================================================================

#include "CAAFreeStyleItf.h"

#include "CATBaseUnknown.h"
#include "CATDataType.h"
#include "CATLISTV_CATISpecObject.h"

#include "CATIStCurvaturePorcupineAnalysisDef.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCAAFreeStyleItf IID IID_CATIStCurvaturePorcupineAnalysis;
#else
extern "C" const IID IID_CATIStCurvaturePorcupineAnalysis ;
#endif

/**
* @nodoc
 * Interface for FreeStyle curvature analysis feature
 * <b>Role</b>: manage FreeStyle curvature analysis
 */
class ExportedByCAAFreeStyleItf CATIStCurvaturePorcupineAnalysis: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

	/**
    * @nodoc
	* Sets the elements to be analysed
	*   @param iElements
	*      The elements to be analysed 
	*   @return HRESULT
	*      S_OK if everything is fine
	*/
    virtual HRESULT SetElementsToBeAnalysed(const CATLISTV(CATISpecObject_var) &iElements) = 0;

	/**
    * @nodoc
	* Sets the display type of the analysis
	*   @param iDisplayType
	*      Legal values are :
	*			- CATFSSPorcupine	: displays the spikes 
	*			- CATFSSEnvelop		: displays the envelop
	*	   Values can be combined using logical '|' operateur (e.g. CATFSSPorcupine | CATFSSEnvelop)
	*   @return HRESULT
	*      S_OK if everything is fine
	*/
    virtual HRESULT SetDisplayType(const CATLONG32 iDisplayType) = 0;

	/**
	* @nodoc
	* Sets the type of discretization used for the computation
	*   @param iDiscrType
	*      Legal values are :
	*			- CATFSSCurveLength
	*			- CATFSSParametric
	*   @return HRESULT
	*      S_OK if everything is fine
	*/
    virtual HRESULT SetDiscretizationType(const CATFSSCrvDiscretizationType iDiscrType) = 0;

	/**
	* @nodoc
	* Sets the quality of discretization used for the computation
	*   @param iDiscrQual
	*      Legal values are :
	*			- CATFSSLow
	*			- CATFSSMedium
	*			- CATFSSHigh
	*   @return HRESULT
	*      S_OK if everything is fine
	*/
    virtual HRESULT SetDiscretizationQuality(const CATFSSCrvDiscretizationQuality iDiscrQual) = 0;

	/**
	* @nodoc
	* Sets the way to display the result values
	*   @param iDisplay
	*      Legal values are :
	*			- CATFSSLinear
	*			- CATFSSLogarithmic
	*   @return HRESULT
	*      S_OK if everything is fine
	*/
    virtual HRESULT SetValuesDisplay(const CATFSSCrvValuesDisplay iDisplay) = 0;
};

#endif
