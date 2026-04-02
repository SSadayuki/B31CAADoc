/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  1997
//=============================================================================
//
// CATIMfgTransitionPathMngt :
//
//=============================================================================
// Usage Notes:
//
//=============================================================================
// Jan 2005  Creation                                   SMD
//=============================================================================
#ifndef CATIMfgTransitionPathMngt_H
#define CATIMfgTransitionPathMngt_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"



#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByMfgItfEnv IID_CATIMfgTransitionPathMngt ;
#else
extern "C" const IID IID_CATIMfgTransitionPathMngt ;
#endif

/**
 * Interface to get information on Transition Path.
 * <b>Role</b>: This interface gives the machine rotations stored in a Transition Path.
 */
class ExportedByMfgItfEnv CATIMfgTransitionPathMngt : public CATBaseUnknown 
{
  CATDeclareInterface ;  

  public:

/**
 * Gets The Machine Rotations.
 * @param oMachineRotationsList   The list 
 * 
 */
		virtual HRESULT GetMachineRotations(CATListValCATBaseUnknown_var* & oMachineRotationsList)= 0;

/**
 * Gets The Machine Rotations number. 
 * @param oNbMachineRotations   The number of Machine Rotations
 * 
 */
		virtual HRESULT GetNbOfMachineRotations(int & oNbMachineRotations) = 0;

};

CATDeclareHandler(CATIMfgTransitionPathMngt,CATBaseUnknown) ;
#endif//CATIMfgTransitionPathMngt_H
