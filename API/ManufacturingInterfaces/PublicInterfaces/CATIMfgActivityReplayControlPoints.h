/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  2002
//=============================================================================
#ifndef CATIMfgActivityReplayControlPoints_H
#define CATIMfgActivityReplayControlPoints_H

/**
* @CAA2Level L1
* @CAA2Usage U5
*/

#include "MfgItfEnv.h"

#include "CATBaseUnknown.h"
#include "CATListOfCATUnicodeString.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgActivityReplayControlPoints;
#else
extern "C" const IID IID_CATIMfgActivityReplayControlPoints;
#endif

/**
* Interface to implement on Machining Operations.<br>
* This interface is used in the "Tool Path Replay" command to control on which specific points of the tool path the display of the tool path 
* has to be stopped.<br>
* The CAA2 developper has to implement ListOfControlSyntaxes method that returns a list of user syntaxes : "Tool Path Replay" command will
* stop the display when encountering one of these user syntaxes in the current tool path that is replayed.
*/

class ExportedByMfgItfEnv CATIMfgActivityReplayControlPoints : public CATBaseUnknown
{
  CATDeclareInterface ;
  
  public :
  /**
   *	List of control user syntaxes.
   *    @param oListOfControlUserSyntaxes
   *	  The list of control user syntaxes
   **/
	  virtual HRESULT StopOnControlUserSyntaxes (CATListValCATUnicodeString& oListOfControlUserSyntaxes) = 0;
};

CATDeclareHandler(CATIMfgActivityReplayControlPoints, CATBaseUnknown);

#endif







