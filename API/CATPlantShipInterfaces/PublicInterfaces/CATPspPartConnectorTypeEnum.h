#ifndef CATPspPartConnectorTypeEnum_H
#define CATPspPartConnectorTypeEnum_H
// COPYRIGHT DASSAULT SYSTEMES 2000
/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

/**
 * Part connector types.
 */

enum CATPspPartConnectorTypeEnum 
{
  CatPspPartCtrTypeNotRecognized = 0, 
  CatPspPartCtrTypeFace=1, CatPspPartCtrTypeSupport=4, 
  CatPspPartCtrTypeCenter=5, CatPspPartCtrTypeTop, CatPspPartCtrTypeBottom, CatPspPartCtrTypeLeft, CatPspPartCtrTypeRight, CatPspPartCtrTypeTopLeft, CatPspPartCtrTypeTopRight, CatPspPartCtrTypeBottomLeft, CatPspPartCtrTypeBottomRight, 
  CatPspPartCtrTypeCircular, CatPspPartCtrTypeRectangular, CatPspPartCtrTypeUpOnly  
};

#endif
