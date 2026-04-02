#ifndef CATSamColorType_H
#define CATSamColorType_H
//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================
//
// CATSamColorType : les differents mode de couleur
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
 * Use this enumeration in order to choose the type of color used in symbol visualization <br>
 * @see CATISamImageAttributes
 */ 

enum CATSamColorType
{
  CATSamColorType_Fixed,
  CATSamColorType_Variable,
  CATSamColorTypeLast
};
#endif
