/* -*-c++-*- */
#ifndef CATIGSMExtractSolideDef_H
#define CATIGSMExtractSolideDef_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

/**
 * Types for ExtractSolide propagation.
 * @param    ExtractSolide_POINT_PROPAG
 *      ExtractSolide propagation for edges on connexe point 
 * @param    ExtractSolide_TANGENT_PROPAG 
 *      ExtractSolide propagation for edges  tangent at point  breaks  
 * @param    ExtractSolide_CURVATURE_PROPAG 
 *      ExtractSolide propagation for edges  curvature continuous at point  breaks  
 * @param    ExtractSolide_NO_PROPAG     
 *      ExtractSolide not propagation from the current edge
 * @param    ExtractSolide_DEPRESSION_PROPAG     
 *      For internal use only. Do not use
 * @param    ExtractSolide_PROTRUSION_PROPAG     
 *      For internal use only. Do not use
 * 
 * Default value is ExtractSolide_NO_PROPAG
 * ----------------------------------------
 *
 * @see CATIGSMFactory
 */
typedef enum
{
   ExtractSolide_UnKnown          = 0,
   ExtractSolide_PointPropag      = 1,
   ExtractSolide_TangentPropag    = 2,
   ExtractSolide_CurvaturePropag  = 4,
   ExtractSolide_NoPropag         = 3,
   ExtractSolide_DepressionPropag = 5,
   ExtractSolide_ProtrusionPropag = 6
}
CATIGSMExtractSolidePropag;

/**
 * Constant for ExtractSolide propagation.
 * @param    CATIGSMExtractSolideNbTypePropag 
 *    Max number of propagation type 
 */
#define CATIGSMExtractSolideNbTypePropag  4
#endif
