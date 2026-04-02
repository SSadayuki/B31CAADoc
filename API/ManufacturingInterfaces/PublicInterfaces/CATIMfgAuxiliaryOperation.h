/* -*-c++-*- */
//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2000
//=============================================================================

/**
* @CAA2Level L1
* @CAA2Usage U3
*/
#ifndef CATIMfgAuxiliaryOperation_H
#define CATIMfgAuxiliaryOperation_H

#include "CATIMfgActivity.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgAuxiliaryOperation;
#else
extern "C" const IID IID_CATIMfgAuxiliaryOperation;
#endif

/**
 * Interface to define the Auxiliary Operation type.
 * <b>Role</b>: This interface can be used to filter Auxiliary Operations : Tool Change, 
 * PP Instruction, Coordinate System, Machine Instruction, Table Head Rotation, Transition Path,
 * Marker Operation, Operator Operation. 
 */

class ExportedByMfgItfEnv CATIMfgAuxiliaryOperation : public CATIMfgActivity
{
  CATDeclareInterface ;  

  public:

};

CATDeclareHandler(CATIMfgAuxiliaryOperation, CATIMfgActivity) ;

#endif







