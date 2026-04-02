#ifndef CATArrAlignmentConnectorTypeEnum_H
#define CATArrAlignmentConnectorTypeEnum_H
// COPYRIGHT DASSAULT SYSTEMES 2000
/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

/**
 * Alignment connector types.
 * <b>Role</b>:  Description 
 * A spatial connector has three CATGeometry it points to to make up the connector.
 * The first CATGeometry is labeled with the types CATArrFaceConnectorTypeEnum
 * The second CATGeometry is labeled with the types CATArrAlignmentConnectorTypeEnum
 * The third CATGeometry is labeled with the types CATArrOrientationConnectorTypeEnum
 *
 * The alignment indicates how to position the part on the run profile.
 * 
 * @param CatArrAlignmentCtrTypeCenter
 *     Use this type for the following scenarios:
 *     1) When the part connector is placed at the center and when placed on the run it will
 *        align with the center profile of the run.  
 *        For most cases use this option.
 * @param CatArrAlignmentCtrTypeTop
 *     Use this type for the following scenarios:
 *     1) When the part connector is placed at the top and when placed on the run it will
 *        align with the top profile of the run.
 * @param CatArrAlignmentCtrTypeBottom
 *     Use this type for the following scenarios:
 *     1) When the part connector is placed at the bottom and when placed on the run it will
 *        align with the bottom profile of the run.
 * @param CatArrAlignmentCtrTypeLeft
 *     Use this type for the following scenarios:
 *     1) When the part connector is placed at the Left and when placed on the run it will
 *        align with the Left profile of the run.
 * @param CatArrAlignmentCtrTypeRight
 *     Use this type for the following scenarios:
 *     1) When the part connector is placed at the Right and when placed on the run it will
 *        align with the Right profile of the run.
 * @param CatArrAlignmentCtrTypeTopLeft
 *     Use this type for the following scenarios:
 *     1) When the part connector is placed at the TopLeft and when placed on the run it will
 *        align with the TopLeft profile of the run.
 * @param CatArrAlignmentCtrTypeTopRight
 *     Use this type for the following scenarios:
 *     1) When the part connector is placed at the TopRight and when placed on the run it will
 *        align with the TopRight profile of the run.
 * @param CatArrAlignmentCtrTypeBottomLeft
 *     Use this type for the following scenarios:
 *     1) When the part connector is placed at the BottomLeft and when placed on the run it will
 *        align with the BottomLeft profile of the run.
 * @param CatArrAlignmentCtrTypeBottomRight
 *     Use this type for the following scenarios:
 *     1) When the part connector is placed at the BottomRight and when placed on the run it will
 *        align with the BottomRight profile of the run.
 */

enum CATArrAlignmentConnectorTypeEnum 
{
  CatArrAlignmentCtrTypeCenter, CatArrAlignmentCtrTypeTop, CatArrAlignmentCtrTypeBottom, CatArrAlignmentCtrTypeLeft, 
  CatArrAlignmentCtrTypeRight, CatArrAlignmentCtrTypeTopLeft, CatArrAlignmentCtrTypeTopRight, 
  CatArrAlignmentCtrTypeBottomLeft, CatArrAlignmentCtrTypeBottomRight, 
};

#endif
