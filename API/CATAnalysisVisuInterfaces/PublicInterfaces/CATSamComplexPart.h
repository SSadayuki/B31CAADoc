#ifndef CATSamComplexPart_H
#define CATSamComplexPart_H
//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================
//
// CATSamComplexPart : les differentes parties du complexe
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
 * But modifications may be done using the CATISamImageFilters interface : <br> 
 * Use this enumeration in order to choose on which part of a complex number,
 * a filter has to be applied.<br>
 * @see CATISamImageFilters
 */ 

enum CATSamComplexPart
{
  CATSamComplexPart_Real,
  CATSamComplexPart_Imaginary,
  CATSamComplexPart_Modulus,
  CATSamComplexPart_Phase,
  CATSamComplexPart_ModulusWithPhase,
  CATSamComplexPartLast
};
#endif
