/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  2002
//=============================================================================
#ifndef CATIMfgReplayToolPathCustom_H
#define CATIMfgReplayToolPathCustom_H

/**
* @CAA2Level L1
* @CAA2Usage U5
*/

#include "MfgItfEnv.h"

#include "CATBaseUnknown.h"

class CATRep;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgReplayToolPathCustom;
#else
extern "C" const IID IID_CATIMfgReplayToolPathCustom;
#endif

/**
* Interface useful to customize visualization of tool path
* in Replay Tool Path command.<br>
* This interface contains a method which allows to create a customized
* graphic representation which is added to the standard graphic representation .<br>
* This interface must be implemented on MfgTPMultipleMotion object.<br>
*
* @see CATIMfgTPMultipleMotion
*/

class ExportedByMfgItfEnv CATIMfgReplayToolPathCustom : public CATBaseUnknown
{
  CATDeclareInterface ;
  
  public :
  /**
   *	Creates customized graphic representation.
   *    @param iOperation
   *	  The current machining operation
   *    @param iStartPoint
   *	  The index of start point
   *    @param iEndPoint
   *	  The index of end point
   *    @return
   *      The graphic representation to add to the standard graphic representation
   **/
	  virtual CATRep* CustomizeToolPathRep (const CATBaseUnknown_var& iOperation,int iStartPoint,int iEndPoint) = 0;
};

CATDeclareHandler(CATIMfgReplayToolPathCustom, CATBaseUnknown);

#endif







