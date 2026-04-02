#ifndef CreateEdgeCurveComputation_H
#define CreateEdgeCurveComputation_H

// COPYRIGHT DASSAULT SYSTEMES  1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */ 

#include "Y300IINT.h"

#include "CATSkillValue.h"

class CATEdgeCurveComputation;
class CATGeoFactory;
class CATCurve;
/**
 * @deprecated V5R13 CATCreateEdgeCurveComputation
 */
ExportedByY300IINT CATEdgeCurveComputation * 
CreateEdgeCurveComputation(CATGeoFactory * iWhere,
                           CATCurve *iCurve1, 
                           CATCurve *iCurve2,
                           CATSkillValue iMode=BASIC);
/**
 * @nodoc
 * Removes a CATEdgeCurveComputation operator from memory.
 */
ExportedByY300IINT void Remove(CATEdgeCurveComputation * iConfusionOperator);


#endif

