#ifndef CATIMfgFormulaManagement_H
#define CATIMfgFormulaManagement_H

//===================================================================
// COPYRIGHT Dassault Systemes 2001
//===================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U3
*/

//
#include "MfgItfEnv.h"
#include "CATICkeRelation.h"
#include "CATBaseUnknown.h"

//
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgFormulaManagement;
#else
extern "C" const IID IID_CATIMfgFormulaManagement;
#endif

//------------------------------------------------------------------

/**
 * Describe the functionality of your interface here
 * <p>
 * Using this prefered syntax will enable mkdoc to document your class.
 */
class ExportedByMfgItfEnv CATIMfgFormulaManagement: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Solve the parametrization Set of a NC manufacturing object.
 * Returns HRESULT.
 */
  virtual HRESULT SolveParametrization () = 0;
	  
/**
 * Solve and Get the parametrization Set of a resource requirement of a NC manufacturing object.
 * Returns HRESULT.
 * @param oListOfCondition: value as CATListOfCATUnicodeString
 * @param oListOfParm: value as CATCkeListOf(Parm)
 */
  virtual HRESULT GetSolvedParametrizationForResourceReq (CATListOfCATUnicodeString &oListOfCondition,
												   	      CATCkeListOf(Parm) &oListOfParm, CATListOfInt &oListOfLogicalOper) = 0;

/**
 * Read the parametrization Set of the Activity object.
 * Returns HRESULT.
 * @param oValue: value as CATlistOfCATUnicodeString
 */
  virtual HRESULT GetParametrization  (CATListOfCATUnicodeString   &oValue) =0;

/**
 * Set the parametrization Set of the Activity object.
 * Returns HRESULT.
 * @param iValue: value as CATlistOfCATUnicodeString 
 */
  virtual HRESULT SetParametrization  (const CATListOfCATUnicodeString &iValue) =0;

};
CATDeclareHandler(CATIMfgFormulaManagement, CATBaseUnknown);

//------------------------------------------------------------------

#endif
