// COPYRIGHT DASSAULT SYSTEMES 2000
//===================================================================
//
// CATIOptFactory.h
// Define the CATIOptFactory interface
//
//===================================================================
/** 
* @CAA2Level L1
* @CAA2Usage U3
*/

#ifndef CATIOptFactory_H
#define CATIOptFactory_H

#include "OptimizationItfCPP.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByOptimizationItfCPP IID IID_CATIOptFactory ;
#else
extern "C" const IID IID_CATIOptFactory ;
#endif

//------------------------------------------------------------------

/**
* This interface is the factory of optimization features. 
* Retrieved by Queryinterface on feature constainers (CATFeatCont late type).
*
* An optimization problem has the following form:
* <pre>
*   Min f(X) where X is a vector {x0, .. , xN}
*   Subject to:
*        Gi(X) >= 0; 0 <= i <= Ng    inequality constaints
*        Hj(X) == 0; 0 <= j <= Nh    equality constraints
*        Lowerboundk <= xk <= Upperboundk 0<= xk <= N
* </pre>  
*<br>
*   f is called an objective function.<br>
*   xk are called the variables (free parameters).<br>
*   Gi and Hj are the constraints. Note that they are optional.<br>
*   Lowerboundk, Upperboundk are the bounds for each free parameter.<br>
*
* From an optimization (CATIOptOptimization), one can retrieve the major components
* necessary to solve an optimization problem.
* <li> The problem description itself (CATIOptProblem).</li>
* <li> The free parameters used by the optimization algorithm (CATIOptProblem).</li>
* <li> An algorithm i.e. a procedure to solve the problem (CATIOptAlgorithm).</li>
* <li> The optimization log (CATIOptimizationLog).</li>
*
*
*   @see CATIOptProblem, CATIOptFreeParameter, CATIOptAlgorithm, CATIOptimizationLog
*/

class CATIOptAlgorithm_var;
class CATIOptProblem_var;
class CATIOptFreeParameter_var;
class CATIOptGoal_var;
class CATIOptOptimization_var;
class CATIOptimizationLog_var;
class CATIOptConstraint_var;
class CATICkeParm_var;
//class CATIOptValuesAndDerivativesAccess_var;
class CATUnicodeString;

class ExportedByOptimizationItfCPP CATIOptFactory: public CATBaseUnknown
{
    CATDeclareInterface;
    
public:
    
    /**
    * Creates a GradientAlgorithm.
    */
    virtual CATIOptAlgorithm_var CreateGradient() = 0;
    /**
    * Creates a Simulated Annealing algorithm.
    */
    virtual CATIOptAlgorithm_var CreateSimulatedAnnealing() = 0;
    /**
    * @nodoc
    * Creates a Genetic Algorithmh.
    */
    virtual CATIOptAlgorithm_var CreateGeneticAlgorithm() = 0;
    
    /**
    * @nodoc
    * Creates a GradientAlgorithm.
    */	  virtual CATIOptAlgorithm_var CreateApproximationGradient() = 0;
    
    /**
    * @nodoc
    * Creates a GradientAlgorithm.
    */
    virtual CATIOptAlgorithm_var CreatePOE() = 0;
    
    
    /**
    * Creates an optimization.
    */
    virtual CATIOptOptimization_var CreateOptimization() = 0;
    /**
    * Creates an optimization problem.
    */    
    virtual CATIOptProblem_var CreateProblem() = 0;
    /**
    * Creates a goal for the optimization problem.
    */        
    virtual CATIOptGoal_var CreateGoal() = 0;
    /**
    * Creates a free parameter for the optimization problem.
    */            
    virtual CATIOptFreeParameter_var CreateFreeParameter() = 0;
    /**
    * Creates an optimization log for the optimization problem.
    */                
    virtual CATIOptimizationLog_var CreateOptimizationLog() = 0;

    /**
    * @nodoc
    * Creates a GradientAlgorithm.
    */	  
	virtual CATIOptAlgorithm_var CreateOptLocalWithPriorities() = 0;

    /**
    * @nodoc
    * Creates a GradientAlgorithm.
    */	  
	virtual CATIOptAlgorithm_var CreateOptApprox() = 0;

    /**
    * @nodoc
    * Creates a CreateOptCstGradient.
    */	  
	virtual CATIOptAlgorithm_var CreateOptCstGradient() = 0;
    
	 /**
	 * @nodoc
	 * Creates an Optimization Constraint that spports CATIOptValuesAndDerivativesAccess in order to access
	 * derivatives through this interface.
	 * @param name contraint name.
	 * @param iReferencedFeature the feature that implements CATIOptValuesAndDerivativesAccess.
	 * @param iConstraintType 1 for >, 2 for <.
	 */
	 virtual CATIOptConstraint_var CreateOptDiffConstraint (CATUnicodeString& iName,  CATICkeParm_var& iReferencedFeature,
		 int iConstraintType,
		 CATICkeParm_var& iBoundRef,
		 CATUnicodeString& iComment) = 0;									  

    // No constructors or destructors on this pure virtual base class
};

CATDeclareHandler( CATIOptFactory, CATBaseUnknown );

#endif
