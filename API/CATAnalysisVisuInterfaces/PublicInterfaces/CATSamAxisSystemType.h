#ifndef CATSamAxisSystemType_H
#define CATSamAxisSystemType_H
//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================
//
// CATSamAxisSystemType : les differents mode de definition des reperes
//
//
//=============================================================================
// 14/11/01 Creation
//=============================================================================

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

/**
 * Analysis Images modification.
 * <b>Role: </b> Analysis <i>Images</i> have a default definition.<br> 
 * But modifications may be done using the CATISamImage interface : <br> 
 * Use this enumeration in order to define the definition type of the current axis system.<br>
 * @see CATISamImage
 */ 

enum CATSamAxisSystemType
{
  CATSamAxisSystemType_None     = 0,
  CATSamAxisSystemType_Global   = (1<<0),
  CATSamAxisSystemType_User     = (1<<1),
  CATSamAxisSystemType_Manual   = (1<<3),
  CATSamAxisSystemType_Local    = (1<<4),
  CATSamAxisSystemType_Last     = (1<<5)
};
#endif
