/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  2002
//=============================================================================
#ifndef CATIMfgTPReplaySelectedPosition_H
#define CATIMfgTPReplaySelectedPosition_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"

#include "CATBaseUnknown.h"

class CATIMfgTPMultipleMotion_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgTPReplaySelectedPosition;
#else
extern "C" const IID IID_CATIMfgTPReplaySelectedPosition;
#endif

/**
*  Interface on the tool path to store and retrieve characteristics of the last point
*  selected on the tool path in the "Tool Path Replay" command.<br>
*/

class ExportedByMfgItfEnv CATIMfgTPReplaySelectedPosition : public CATBaseUnknown
{
  CATDeclareInterface ;
  
  public :

/**
*   Retrieves characteristics of the last point selected on the tool path in 
*     the "Tool Path Replay" command.<br>
*   @param oMultipleMotion
*     The handler on the @href CATIMfgTPMultipleMotion object where is located the point
*   @param oNumberOfSubMotion
*     The sub-motion of the @href CATIMfgTPMultipleMotion object where is located the point
*   @param oNumberOfPoint
*     The number of the selected point in the @href CATIMfgTPMultipleMotion object
*/  
  virtual HRESULT GetSelectedPosition (CATIMfgTPMultipleMotion_var& oMultipleMotion,
									   int&                         oNumberOfSubMotion,
									   int&                         oNumberOfPoint) = 0 ;

/**
* @nodoc
*/
  virtual HRESULT SetSelectedPosition (int iElement,int iNumberOfSubMotion, int iNumberOfPoint) = 0 ;

};

CATDeclareHandler(CATIMfgTPReplaySelectedPosition, CATBaseUnknown);

#endif
