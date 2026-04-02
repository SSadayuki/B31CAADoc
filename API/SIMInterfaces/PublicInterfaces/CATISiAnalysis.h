/* -*-c++-*- */
#ifndef CATISiAnalysis_H
#define CATISiAnalysis_H
// COPYRIGHT DASSAULT SYSTEMES 2000
/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */
#include "SIMItfCPP.h"

#include "CATUnicodeString.h"

#include <CATBaseUnknown.h>

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedBySIMItfCPP IID IID_CATISiAnalysis;
#else
extern "C" const IID IID_CATISiAnalysis;
#endif

//==========================================================================
//                    Interface  CATISiAnalysis
//==========================================================================
class ExportedBySIMItfCPP CATISiAnalysis : public CATBaseUnknown
{
  CATDeclareInterface;

  public :

  /**
   * @ To compute the analyse
   */
	  virtual void Compute()                             const =0;
  /**
   * @ To know if the condition is verified or not
   */
	  virtual void GetConditionVerification(int & State) const =0;
  /**
   * @  Action to do in case of a verified condition
   */
	  virtual void EmitWarning()                         const =0;
  /**
   * @ To clean the highlights, added objects...
   */
	  virtual void Clean()                               const =0;
  /**
   * @ To know the real object type (clash,distance...)
   */
	  virtual CATUnicodeString   GetType()               const =0;

 /**
   * @ To show/hide the element. 
   * @   iStatus = 1 -> activate the element(show it)
   * @   iStatus = 2 -> desactivate the element(hide it) 
   */
          virtual void SetGraphicActivation(int iStatus) =0;



} ; 
CATDeclareHandler(CATISiAnalysis,CATBaseUnknown);
#endif

