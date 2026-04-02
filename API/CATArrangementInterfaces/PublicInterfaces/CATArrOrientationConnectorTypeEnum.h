#ifndef CATArrOrientationConnectorTypeEnum_H
#define CATArrOrientationConnectorTypeEnum_H
// COPYRIGHT DASSAULT SYSTEMES 2000
/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

/**
 * Orientation connector types.
 * <b>Role</b>:  Description 
 * A spatial connector has three CATGeometry it points to to make up the connector.
 * The first CATGeometry is labeled with the types CATArrFaceConnectorTypeEnum
 * The second CATGeometry is labeled with the types CATArrAlignmentConnectorTypeEnum
 * The third CATGeometry is labeled with the types CATArrOrientationConnectorTypeEnum
 * 
 * @param CatArrOrientationCtrTypeCircular
 *     Use this type for the following scenarios:
 *     1) When placing the part on the run and it does not matter how it is clocked on the run.
 *        For example for a symetrical round part on a round run.
 *        For most scenarios use this option.
 * @param CatArrOrientationCtrTypeRectangular
 *     Use this type for the following scenarios:
 *     1) When your part is rectangular and should be oriented either up or down.
 *        For example your part is symetrical and rectangular.
 * @param CatArrOrientationCtrTypeUpOnly
 *     Use this type for the following scenarios:
 *     1) When your part is rectangular and should be oriented up.
 *        For example your part is not symetrical and rectangular as in the case for a raceway.
 */
enum CATArrOrientationConnectorTypeEnum 
{
  CatArrOrientationCtrTypeCircular, CatArrOrientationCtrTypeRectangular, CatArrOrientationCtrTypeUpOnly  
};

#endif
