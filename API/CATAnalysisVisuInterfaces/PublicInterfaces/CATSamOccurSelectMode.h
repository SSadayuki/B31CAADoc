#ifndef CATSamOccurSelectMode_H
#define CATSamOccurSelectMode_H
//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================
//
// CATSamOccurSelectMode : The differents modes to retrieve occurrences numbers
//
//
//=============================================================================
// Octobre 2001 Creation
//=============================================================================

/**
  * @CAA2Level L0
  * @CAA2Usage U1
  */

/**
 * Analysis Report.
 * <b>Role: </b> Use this enumeration in order to choose the mode to retrieve
 * the occurrence numbers <br> 
 * @see CATISamReporting
 */ 

enum CATSamOccurSelectMode
{
  CATSamOccurSelectMode_ALL,
  CATSamOccurSelectMode_CURRENT,
  CATSamOccurSelectMode_EXPLICIT,
  CATSamOccurSelectModeLast
};
#endif
