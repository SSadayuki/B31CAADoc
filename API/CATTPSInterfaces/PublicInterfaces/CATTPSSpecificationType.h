#ifndef CATTPSSpecificationType_H
#define CATTPSSpecificationType_H

// COPYRIGHT Dassault Systemes 2018

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Specification Type of annotation set.
 * @param TPSEngineeringSet  
 *   Annotations aggregated under the set are Engineering specifications;
 *   this constitutes the default value for any new annotation set.
 * @param TPSManufacturingSet
 *   Annotations aggregated under the set are Manufacturing specifications.
 */
enum CATTPSSpecificationType 
{	
  TPSEngineeringSet, 
  TPSManufacturingSet
};

#endif
