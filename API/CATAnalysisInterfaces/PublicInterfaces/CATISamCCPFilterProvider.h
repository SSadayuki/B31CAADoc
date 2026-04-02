// COPYRIGHT Dassault Systemes 2002
//===================================================================
//
// CATISamCCPFilterProvider.h
//
//===================================================================
//
// Usage notes:
// Interface used to define CCP/Delete Rules on Features 
//
//===================================================================
/**
  * @CAA2Level L1
  * @CAA2Usage U5
  */
//===================================================================
#ifndef CATISamCCPFilterProvider_H
#define CATISamCCPFilterProvider_H

#include "CATAnalysisInterface.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamCCPFilterProvider;
#else
extern "C" const IID IID_CATISamCCPFilterProvider ;
#endif

//------------------------------------------------------------------

/**
 * Interface used to define CCP/Delete Rules on features.
 * Provider declaration to a document during the workbench or 
 * AddIn initialization.
 */
class CATISpecObject;

class ExportedByCATAnalysisInterface CATISamCCPFilterProvider: public CATBaseUnknown
{
  CATDeclareInterface;

  public:
/**
 * Informs if operation is allowed. 
 * @param iSpecObject 
 * Feature to associate with a command
 * @param iHeaderID Header identifier : Cut, Copy, Paste, Delete
 * @return authorization flag.
 * <br><b>Legal values</b>: 
 * <ul>
 * <li><font color="red">1</font color="red"> iHeaderID command is allowed. </li>
 * <li><font color="red">0</font color="red"> iHeaderID command is not allowed.</li></ul>
 */
  virtual int IsFeatureAvailable(CATISpecObject * iSpecObject, const char * &iHeaderID) = 0;
};

//------------------------------------------------------------------
CATDeclareHandler( CATISamCCPFilterProvider, CATBaseUnknown );

#endif
