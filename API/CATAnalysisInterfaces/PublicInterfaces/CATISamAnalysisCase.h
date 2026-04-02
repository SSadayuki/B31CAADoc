#ifndef CATISamAnalysisCase_h
#define CATISamAnalysisCase_h
//==================================================================================
// COPYRIGHT DASSAULT SYSTEMES 1999  
//==================================================================================
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */
//==================================================================================
#include "CATAnalysisInterface.h"

#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATBoolean.h"

class CATISamAnalysisSet_var;
class CATISamAnalysisSet;
class CATISpecObject;
class CATString;
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamAnalysisCase;
#else
extern "C" const IID IID_CATISamAnalysisCase;
#endif

/**
 * Management of the Analysis Case behavior.
 * <b>Role:</b> Interface designed to manage <b>Analysis Case behavior</b>.<br>
 * <p>
 * In the Analysis Document, an <b>Analysis Case</b> is the data 
 * dedicated to define and manage the environment necessary to run 
 * a computation. <p> The interface allows to :
 * <ul><li>Set or Retrieve the solver name associated to a case</li>
 *     <li>Set of retrieve the Finite element Model on which the Case is defined</li>
 * </ul>
 */ 

class ExportedByCATAnalysisInterface CATISamAnalysisCase : public CATBaseUnknown
{
	CATDeclareInterface;

	public:
/**
 * Associate a Finite Element Model with a Case.
 * @param iModel
 * Finite Element Model to be associated with an analysis case.
 */
		virtual HRESULT SetWorkingModel(const CATISpecObject* iModel) = 0;
/**
 * Retrieve the Finite Element Model associated with an Case.
 * @param oModel  [out , CATBaseUnknown#Release]
 * Finite Element Model associated with the case. 
 * This Spec object may implement:CATISamAnalysisModel interface.
 */
		virtual HRESULT GetWorkingModel(CATISpecObject*& oModel) const = 0;
/**
 * Set the solver chosen for the computation.
 * @param iSolverName 
 * Name of the solver.
 */
		virtual HRESULT SetSolver(const CATString& iSolverName) = 0;
/**
 * Retrieve the solver chosen for the computation.
 * @param oSolverName
 * Name of the solver.
 */
		virtual HRESULT GetSolver(CATString& oSolverName) const = 0;
/**
 * Returns the rights on this analysis case.
 * <b>Legal values</b>:
 * <tt>TRUE</tt> The analysis case is "locked".
 * <tt>FALSE</tt>  The Analysis case can be modified.
 */
  virtual CATBoolean IsReadOnly () const = 0;

/**
 * Sets the rights on this analysis case. This attribue will be propagated 
 * to analysis sets and entities that are referenced by the case.
 * @param iRights: 
 * <b>Legal values</b>:
 * <tt>TRUE</tt> The analysis case is locked..
 * <tt>FALSE</tt>  The analysis case can be modified.
 */
  virtual void SetReadOnly (const CATBoolean iRights) = 0; 
};

CATDeclareHandler(CATISamAnalysisCase,CATBaseUnknown);

#endif
