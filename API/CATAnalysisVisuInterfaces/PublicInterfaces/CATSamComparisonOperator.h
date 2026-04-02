#ifndef CATSamComparisonOperator_H
#define CATSamComparisonOperator_H
//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================
//
// CATSamComparisonOperator : Different operators for comparision of values
//
//=============================================================================
// April 2005 Creation
//=============================================================================

/**
* @CAA2Level L1
* @CAA2Usage U1
*/

/**
* Analysis image values modification
* <b>Role: </b> Analysis <i>Images</i> have a default definition.<br> 
* But modifications may be done using the CATISamImageFilters interface : <br> 
* Use this enumeration in order to choose the values of image based on the specified crietria<br>
* @see CATISamImageFilters
*/ 

enum CATSamComparisonOperator
{
  CATSamOperator_GreaterThan,
  CATSamOperator_LessThan,
  CATSamOperator_GreaterThanOrEqualTo,
  CATSamOperator_LessThanOrEqualTo,
  CATSamOperator_Between,
  CATSamOperator_NotBetween,
  CATSamOperator_EqualTo,
  CATSamOperator_NotEqualTo,
  CATSamOperator_Last
};
#endif
