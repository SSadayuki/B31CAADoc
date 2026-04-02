// COPYRIGHT DASSAULT SYSTEMES  2006
/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */
//=============================================================================
//
// CATPspValidationDeclarations  
//
//=============================================================================

#ifndef CATPspValidationDeclarations_H
#define CATPspValidationDeclarations_H

/**
 * Validation check classifications.
 */

/**
 * Validation check object classification
 *   Validation check examines one object.
 */
#define Validation_Object                  "ValidationObject"

/**
 * Validation check connection classification
 *   Validation check examines related objects.
 */
#define Validation_Connection              "ValidationConnection"

/**
 * Validation check context classification
 *   Validation check examines entire context. 
 *   Because of performance issues this type of validation check cannot be implemented by the user.
 */
#define Validation_Context                 "ValidationContext"

/**
 * Validation check document classification
 *   Validation check examines a document.
 */
#define Validation_Document                "ValidationDocument"

/**
 * Validation check group members classification
 *   Validation check examines members of a group.
 */
#define Validation_GroupMembers            "ValidationGroupMembers"

/**
 * Validation check function classification
 *   Validation check examines a functional object in integration type checks.
 */
#define Validation_Function                "ValidationFunction"

/**
 * Validation check integration classification
 *   Validation check examines integration issues.
 */
#define Validation_Integration             "ValidationIntegration"

/**
 * Validation check physical integration classification
 *   Validation check examines physical integration issues.
 */
#define Validation_PhysicalIntegration     "ValidationPhysIntegration"

/**
 * Validation check from/to classification
 *   Validation check examines the continuity from one schematic-driven part to another.
 */
#define Validation_FromTo                  "ValidationFromTo"

/**
 * Validation check from/to function classification
 *   Validation check examines the continuity from one schematic function to another.
 */
#define Validation_FromToFunction          "ValidationFromToFunction"

/**
 * Validation check object classification
 *   Validation check only examines Root object.
 *   Individual checks if so desire must iterate through all children.
 */
#define Validation_RootObject              "ValidationRootObject"


/**
 * Violation Object Types.
 */

/**
 * Violation object product type.
 *   Violation object is refers to a product.
 */
#define ViolationObject_Product            "ViolationProduct"

/**
 * Violation object function type.
 *   Violation object refers to a function.
 */
#define ViolationObject_Function           "ViolationFunction"

/**
 * Violation object from/to type.
 *   Violation object refers to a from/to situation.
 */
#define ViolationObject_FromTo             "ViolationFromTo"

/**
 * Violation Workpackage object type.
 *   Violation Workpackage object refers to a product/object under a workpackage.
 *   Used in conjunction with Classification Validation_RootObject for perpormance improvement 
 */
#define Violation_WPObject "ViolationWPObject" 

/**
 * Violation Data.
 */

/**
 * Violation not applicable data.
 *   Violation data does not apply.
 */
#define Violation_NotApplicable            "na"

/**
 * Violation not unset data.
 *   Violation data is not set.
 */
#define Violation_Unset                    "<unset>"



#endif
