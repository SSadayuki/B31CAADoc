// COPYRIGHT DASSAULT SYSTEMES 2002


/** 
 * @CAA2Level L1
 * @CAA2Usage U1
 */


#ifndef CATOptAddTypeLibraryDefines_H
#define CATOptAddTypeLibraryDefines_H

/**
* The name of the NLS file.
*/  
#define OPTNLSFileName							"CATCkeOptimizationSearchNLS"

/**
* The name of the optimization package for type descriptions.
* A user algorithm will be appended to this package.
*/  
#define CATOptOptimizationPackageName			"Optimization"

/**
* @nodoc
*/  
#define CATOptOptimizationAttributeAccessName	"CATOptOptimizationAttributeAccess"

/**
* @nodoc
*/  
#define CATOptDelegateInstanciationName			"CATOptDelegateInstanciation"
/**
* @nodoc
* The type of the Optimization feature
*/  
#define CATOptFeatureCATIType					"OptFeature"

// Attention : OptOptimizationSet adhere a CATICkeType
// et le nom de type est    "OptOptimizationSet". Donc pour ne
// pas se melanger, je mets "OptOptimizationsSet" (avec
// Optimizations au pluriel !!)
/**
* @nodoc
* The type of the Optimization set.
*
*/  
#define CATOptOptimizationSetCATIType				"OptOptimizationsSet"
/**
* @nodoc
*/  
#define CATOptOptimizationSetOptimizationsAttribute	"Optimizations"
/**
* @nodoc
* The type of the OptOptimization feature.
*/  
#define CATOptOptimizationCATIType					"OptOptimization"
/**
* @nodoc
*/  
#define CATOptOptimizationProblemAttribute			"Problem"
/**
* @nodoc
*/  
#define CATOptOptimizationFreeParametersAttribute	"FreeParameters"
/**
* @nodoc
*/  
#define CATOptOptimizationAlgorithmAttribute		"Algorithm"
// SOC - 27/09/02
/**
* @nodoc
*/  
#define CATOptOptimizationUpdateVisuAttribute		"UpdateVisualization"
// SOC - 08/10/02
/**
* @nodoc
*/  
#define CATOptOptimizationOptimizationLogAttribute	"OptimizationLog"
/**
* @nodoc
* The type of the OptProblem feature.
*/  
#define CATOptProblemCATIType				"OptProblem"
/**
* @nodoc
*/  
#define CATOptProblemAttributeAccessName	"CATOptProblemAttributeAccess"
/**
* @nodoc
*/  
#define CATOptProblemGoalsAttribute			"Goals"
/**
* @nodoc
*/  
#define CATOptProblemConstraintsAttribute	"Constraints"
// SOC - 27/09/02
/**
* @nodoc
*/  
#define CATOptProblemCommentAttribute		"ProblemComment"

/**
* @nodoc
* The type of the OptGoal feature.
*/  
#define CATOptGoalCATIType					"OptGoal"
/**
* @nodoc
*/  
#define CATOptGoalAttributeAccessName		"CATOptGoalAttributeAccess"
/**
* @nodoc
*/
#define CATOptGoalGoalTypeAttribute			"GoalType"
/**
* @nodoc
*/
#define CATOptGoalTargetValueAttribute		"TargetValue"
/**
* @nodoc
*/
#define CATOptGoalPrecisionAttribute		"Precision"
/**
* @nodoc
*/
#define CATOptGoalPriorityAttribute			"Priority"
/**
* @nodoc
*/
#define CATOptGoalParameterAttribute		"GoalParameter"
// SOC - 27/09/02
/**
* @nodoc
*/
#define CATOptGoalCommentAttribute			"GoalComment"

/**
* @nodoc
* The type of the FreeParameter  feature.
*/  
#define CATOptFreeParameterCATIType					"OptFreeParameter"
/**
* @nodoc
*/
#define CATOptFreeParameterAttributeAccessName		"CATOptFreeParameterAttributeAccess"
/**
* @nodoc
*/
#define CATOptFreeParameterParmAttribute			"Parameter"
/**
* @nodoc
*/
#define CATOptFreeParameterValueAttribute			"Value"
/**
* @nodoc
*/
#define CATOptFreeParameterInfRangeAttribute		"InfRange"
/**
* @nodoc
*/
#define CATOptFreeParameterSupRangeAttribute		"SupRange"
/**
* @nodoc
*/
#define CATOptFreeParameterStepAttribute			"Step"
// SOC - 27/09/02
/**
* @nodoc
*/
#define CATOptFreeParameterHasRangesStepAttribute	"HasRangesStep"


// Attention : OptimizationConstraint adhere a CATICkeType
// et le nom de type est    "OptimizationConstraint". Donc pour ne
// pas se melanger, je mets "OptConstraint"
/**
* @nodoc
* The type of the OptConstraint feature.
*/  
#define CATOptConstraintCATIType				"OptConstraint"
/**
* @nodoc
*/
#define CATOptConstraintAttributeAccessName		"CATOptConstraintAttributeAccess"
/**
* @nodoc
*/
#define CATOptConstraintSatisfactionAttribute	"Satisfaction"
/**
* @nodoc
*/
#define CATOptConstraintPrecisionAttribute		"Precision"
/**
* @nodoc
*/
#define CATOptConstraintDistanceAttribute		"Distance"
// SOC - 27/09/02
/**
* @nodoc
*/
#define CATOptConstraintPriorityAttribute		"Priority"

//PPG 26/11/2003 R14
//#define CATMVOptConstraintCATIType				"OptMVConstraint"
//#define CATMVOptConstraintAttributeAccessName		"CATOptConstraintAttributeAccess"
//#define CATMVOptConstraintSatisfactionAttribute	"Satisfaction"
//#define CATMVOptConstraintPrecisionAttribute		"Precision"
//#define CATMVOptConstraintDistanceAttribute		"Distance"
//#define CATMVOptConstraintPriorityAttribute		"Priority"

// Generic algorithm types
/**
* The type of the OptGenericAlgorithm feature.
* A new algorithm type must derive from this type.
*/  
#define CATOptGenericAlgorithmCATIType						"OptGenericAlgorithm"		// derives from OptFeature type
/**
* @nodoc
*/
#define CATOptGenericAlgorithmAttributeAccessName			"CATOptGenericAlgorithmAttributeAccess"
/**
* @nodoc
*/
#define CATOptGenericAlgorithmNbUpdatesMaxAttribute			"NbUpdatesMax"
/**
* @nodoc
*/
#define CATOptGenericAlgorithmMaxTimeAttribute				"MaxTime"
/**
* @nodoc
*/
#define CATOptGenericAlgorithmMaxWoImprovementAttribute		"MaxWoImprovement"
/**
* @nodoc
*/
#define CATOptGenericAlgorithmStoppingCriterionAttribute	"StoppingCriterion"

//PPG 19/11/2003 R14
/**
* @nodoc
*/  
#define CATOptGenericAlgorithmStopCHGOBJAttribute	"StopRelativeObjectiveChange"
/**
* @nodoc
*/  
#define CATOptGenericAlgorithmStopACHOBJAttribute	"StopAbsoluteObjectiveChange"
/**
* @nodoc
*/  
#define CATOptGenericAlgorithmStopCHGDVAttribute	"StopAbsoluteVariablesChange"
/**
* @nodoc
*/  
#define CATOptGenericAlgorithmStopACHCSTAttribute	"StopAbsoluteConstraintsChange"
/**
* @nodoc
*/  
#define CATOptGenericAlgorithmStopCHGCSTAttribute	"StopRelativeConstraintsChange"
/**
* @nodoc
*/  
#define CATOptGenericAlgorithmStopWindowAttribute	"StopWindowChange"
/**
* @nodoc
*/  
#define CATOptGenericOptimAlgorithmCATIType		"OptGenericOptimAlgorithm"	// derives from OptGenericAlgorithm type
/**
* @nodoc
*/  
#define CATOptGenericDoeAlgorithmCATIType		"OptGenericDoeAlgorithm"	// derives from OptGenericAlgorithm type

/**
* @nodoc
* The type of the OptSimmulatedAnnealing feature.
*/  
#define CATOptSimAnnealingAlgorithmCATIType						"OptSimAnnealingAlgorithm"	// derives from OptGenericOptimAlgorithm type
/**
* @nodoc
*/
#define CATOptSimAnnealingAlgorithmAttributeAccessName			"CATOptSimAnnealingAlgorithmAttributeAccess"
/**
* @nodoc
*/
#define CATOptSimAnnealingAlgorithmConvergenceSpeedAttribute	"ConvergenceSpeed"
/**
* @nodoc
*/  
#define CATOptGradientAlgorithmCATIType							"OptGradientAlgorithm"		// derives from OptGenericOptimAlgorithm type

/**
* @nodoc
*/
#define CATOptGradientAlgorithmAttributeAccessName				"CATOptGradientAlgorithmAttributeAccess"
/**
* @nodoc
*/
#define CATOptGradientAlgorithmConvergenceSpeedAttribute		"ConvergenceSpeed"
/**
* @nodoc
* The type of the OptGradient feature.
*/  
#define CATOptApproximationGradientAlgorithmCATIType						"OptApproximationGradientAlgorithm"	// derives from OptGenericOptimAlgorithm type
/**
* @nodoc
*/
#define CATOptApproximationGradientAlgorithmAttributeAccessName				"CATOptApproximationGradientAlgorithmAttributeAccess"
/**
* @nodoc
*/
#define CATOptApproximationGradientAlgorithmConvergenceSpeedAttribute		"ConvergenceSpeed"

//PPG 24/03/03
/**
* @nodoc
*/  
#define CATOptApproxAlgorithmCATIType						"OptApproximationAlgorithm"	// derives from OptGenericOptimAlgorithm type
/**
* @nodoc
*/
#define CATOptApproxAlgorithmAttributeAccessName				"CATOptApproximationAlgorithmAttributeAccess"
/**
* @nodoc
*/
#define CATOptLocalWPrioritiesAlgorithmCATIType						"CATOptLocalWPrioritiesAlgorithmCATIType"	// derives from OptGenericOptimAlgorithm type
/**
* @nodoc
*/
#define CATOptLocalWPrioritiesAlgorithmAttributeAccessName				"CATOptLocalWPrioritiesAlgorithmAttributeAccess"

//PPG 19/11/03
/**
* @nodoc
*/  
#define CATOptCstGradientAlgorithmCATIType						"OptCstGradientAlgorithm"	// derives from OptGenericOptimAlgorithm type
/**
* @nodoc
*/
#define CATOptCstGradientAlgorithmAttributeAccessName				"CATOptCstGradientAlgorithmAttributeAccess"
/**
* @nodoc
*/
#define CATOptApproximationGradientAlgorithmConvergenceSpeedAttribute		"ConvergenceSpeed"

/**
* @nodoc
* The type of the OptDoeAlgorithm feature.
*/  
#define CATOptFullDoeAlgorithmCATIType				"FullDoeAlgorithm"			// derives from OptGenericDoeAlgorithm type	
/**
* @nodoc
*/
#define CATOptFullDoeAlgorithmAttributeAccessName	"CATOptFullDoeAlgorithmAttributeAccess"
/**
* @nodoc
*/
#define CATOptFullDoeAlgorithmListOfLevelsAttribute			"ListOfLevels"		
/**
* @nodoc
*/
#define CATOptFullDoeAlgorithmLastDoneExperimentNbAttribute	"LastDoneExperimentNb"


/**
* @nodoc
* The type of the OptimizationLog feature.
*/  
#define CATOptimizationLogCATIType							"OptimizationLog"
/**
* @nodoc
*/
#define CATOptimizationLogAttributeAccessName				"CATOptimizationLogAttributeAccess"
/**
* @nodoc
*/
#define CATOptimizationLogPointsDTAttribute					"PointsDT"
/**
* @nodoc
*/
#define CATOptimizationLogIndexOfBestSolInDTAttribute		"IndexOfBestSolInDT"
//#define CATOptimizationLogCommentAttribute					"Comment"
/**
* @nodoc
*/
#define CATOptimizationLogBestParmAttribute					"BestParm"
/**
* @nodoc
*/
#define CATOptimizationLogNbEvalParmAttribute				"NbEvalParm"

// Constraint Satisfaction
// SOC - 06/11/02

/**
* @nodoc
* The type of the ConstraintSatisfaction feature.
*/  
#define CATOptConstraintSatisfactionCATIType				"OptConstraintSatisfaction"

#endif
