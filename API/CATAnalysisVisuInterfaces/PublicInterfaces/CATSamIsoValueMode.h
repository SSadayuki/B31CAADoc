#ifndef CATSamIsoValueMode_H
#define CATSamIsoValueMode_H
//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================
//
// CATSamIsoValueMode : les differents type d'iso valeurs
//
//=============================================================================
// Octobre 2001 Creation
//=============================================================================

/**
  * @CAA2Level L0
  * @CAA2Usage U1
  */

/**
 * Analysis Images modification.
 * <b>Role: </b> Analysis <i>Images</i> have a default definition.<br> 
 * But modifications may be done using the CATISamImageAttributes interface : <br> 
 * Use this enumeration in order to choose the mode of iso visualization <br>
 * @see CATISamImageAttributes
 */ 

enum CATSamIsoValueMode
{
  CATSamIsoValueMode_IsoContour,
  CATSamIsoValueMode_IsoSurface,
  CATSamIsoValueModeLast
};
#endif
