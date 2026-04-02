/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  2004
//=============================================================================
#ifndef CATIMfgActivityWorkpiecePosition_H
#define CATIMfgActivityWorkpiecePosition_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"

#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgActivityWorkpiecePosition;
#else
extern "C" const IID IID_CATIMfgActivityWorkpiecePosition;
#endif

/**
*    Interface implemented on the activity. <br>
*    The method InitProductPosition should be called before assigning tool path to activity in order to 
*       have a correct behaviour when mounting the workpiece on the machine (transformation of tool path)
*/

class ExportedByMfgItfEnv CATIMfgActivityWorkpiecePosition : public CATBaseUnknown
{
  CATDeclareInterface ;
  
  public :

	/**
	*   Initializes the current position of the workpiece.<br>
	**/
	  virtual void InitWorkpiecePosition () = 0;	
};

CATDeclareHandler(CATIMfgActivityWorkpiecePosition, CATBaseUnknown);

#endif







