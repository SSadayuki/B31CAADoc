#ifndef CATArrFaceConnectorTypeEnum_H
#define CATArrFaceConnectorTypeEnum_H
// COPYRIGHT DASSAULT SYSTEMES 2000
/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

/**
 * Face connector types.
 * <b>Role</b>:  Description 
 * A spatial connector has three CATGeometry it points to to make up the connector.
 * The first CATGeometry is labeled with the types CATArrFaceConnectorTypeEnum
 * The second CATGeometry is labeled with the types CATArrAlignmentConnectorTypeEnum
 * The third CATGeometry is labeled with the types CATArrOrientationConnectorTypeEnum
 * 
 * @param CatArrFaceCtrTypeFace
 *     Use this type for the following scenarios:
 *     1) When part is placed on a run and a bendable is placed next to it, the bendable will terminate or stop at the face connector.
 *     2) When routing to this connector the run will terminate at this connector
 * @param CatArrFaceCtrTypeHole
 *     Use this type for the following scenarios:
 *     1) When part is placed on a run and a bendable is placed next to it, the bendable will go through the part.
 *     2) When routing to this connector the run will continue and go through this connector
 */
enum CATArrFaceConnectorTypeEnum 
{
  CatArrFaceCtrTypeFace, CatArrFaceCtrTypeHole 
};

#endif
