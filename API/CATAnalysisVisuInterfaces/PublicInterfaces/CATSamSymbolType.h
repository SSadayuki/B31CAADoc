#ifndef CATSamSymbolType_H
#define CATSamSymbolType_H
//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================
//
// CATSamSymbolType : les differents types de symbols
//
//=============================================================================
// Octobre 2001 Creation
//=============================================================================

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

/**
 * Analysis Images modification.
 * <b>Role: </b> Analysis <i>Images</i> have a default definition.<br> 
 * But modifications may be done using the CATISamImageAttributes interface : <br> 
 * Use this enumeration in order to choose the type of symbol visualization <br>
 * For example : <br>
 * <b>SingleArrow value</b>: is usually used for Vectors.<br>
 * <b>DoubleArrow value</b>: is usually used for EigenTensor.<br>
 * <b>Tensor value</b>: is usually used for Tensors.<br>
 * <b>Restraint value</b>: is usually used for Restraints.<br>
 * <b>Pressure value</b>: is usually used for Pressures.<br>
 * <b>Axis value</b>: is usually used for Axis Systems.<br>
 * <b>Cube or Tetra value</b>: is usually used for Scalars.<br>
 * <b>Point value</b>: may be used for any type.<br>
 * @see CATISamImageAttributes
 */ 

enum CATSamSymbolType 
{
  CATSamSymbolType_SingleArrow,
  CATSamSymbolType_DoubleArrow,
  CATSamSymbolType_Tensor,
  CATSamSymbolType_Restraint,
  CATSamSymbolType_Pressure,
  CATSamSymbolType_Axis,
  CATSamSymbolType_Cube,
  CATSamSymbolType_Tetra,
  CATSamSymbolType_Point,
  CATSamSymbolType_Ball,
  CATSamSymbolTypeLast
};
#endif
