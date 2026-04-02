// COPYRIGHT DASSAULT SYSTEMES 2008
//===================================================================
//
// CATIPDMUELoadProcess.h
// This interface provides user-exit that is triguered at loading data from ENOVIA V5 to CATIA V5. 
// 
//
//===================================================================
//
//===================================================================
//  Sept-2008   Creation by SDM
//===================================================================

/**
* @CAA2Level L1
* @CAA2Usage U5
*/

#ifndef CATIPDMUELoadProcess_H
#define CATIPDMUELoadProcess_H

#include "CATPDMBaseItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATPDMBaseItfCPP IID IID_CATIPDMUELoadProcess;
#else
extern "C" const IID IID_CATIPDMUELoadProcess;
#endif

/** 
*  This interface provides user-exit to be triguered at loading data from ENOVIA V5 into CATIA V5.
*  <b>Role</b>: The interface gives methods wich are executed during loading data from ENOVIA V5 into CATIA V5.  
*  <br>The user-exit should be implemented on the <tt>CATUEPDMLoadProcess</tt> component by using 
*  the CATObject mechanism.
*/
class ExportedByCATPDMBaseItfCPP CATIPDMUELoadProcess: public CATBaseUnknown
{
  CATDeclareInterface;
  
public:
  
/** 
*  The method is called at the completion of the loading process 
*  <b>Role</b>: The method is intended to run applicative code at the end of the loading process.
*  Whether the method succeeds or fail will not affect the loading process. 
*  <br>The method must be implement on the <tt>CATUEPDMLoadProcess</tt> component by using the CATObject mechanism.
*
*  @param iListOfLoadedObj
*         The list of objects already loaed in CATIA session. They are of type Instance, Reference or Document.
*
* @return
*    S_OK:   The method is executed successfully
*    E_FAIL: Method has failed and in this case, a warning will be displayed.
*/
  virtual HRESULT Finalize(const CATListValCATBaseUnknown_var& iListOfLoadedObj) = 0;

  
  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

//------------------------------------------------------------------

CATDeclareHandler( CATIPDMUELoadProcess, CATBaseUnknown );

#endif
