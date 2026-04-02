#ifndef CATSamVisuTypeName_H
#define CATSamVisuTypeName_H
//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================
//
// CATSamVisuTypeName : les differents types de visu
//
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
 * But modifications may be done using the CATISamImage interface : <br> 
 * Use this enumeration in order to choose which type of visualisation
 * you may apply.<br>
 * @see CATISamImage
 */ 

enum CATSamVisuTypeName
{
  CATSamVisuTypeName_AVERAGEISO,
  CATSamVisuTypeName_DISCONTINUOUSISO,
  CATSamVisuTypeName_SYMBOL,
  CATSamVisuTypeName_TEXT,
  CATSamVisuTypeName_FRINGE,
  CATSamVisuTypeName_MESH,
	CATSamVisuTypeName_PATHLINE,
  CATSamVisuTypeNameLast
};
#endif
