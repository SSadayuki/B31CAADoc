#ifndef CATSamFilterDomain_H
#define CATSamFilterDomain_H
//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================
//
// CATSamFilterDomain : les differents domaines du model
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
 * Use this enumeration in order to choose on which part of the model,
 * a filter has to be applied.<br>
 * @see CATISamImageFilters
 */ 

enum CATSamFilterDomain
{
  CATSamFilterDomain_Line,
  CATSamFilterDomain_Surface,
  CATSamFilterDomain_Volume,
  CATSamFilterDomainLast
};
#endif
