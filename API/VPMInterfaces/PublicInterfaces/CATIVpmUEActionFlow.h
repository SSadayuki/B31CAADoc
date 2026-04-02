/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES	1998
//=============================================================================
//
// CATIVpmUEActionFlow
// Action Flow User Exit Interface
//
//=============================================================================
// Usage Notes:
//
//=============================================================================
// Nov 98       Creation                                             C.CRESSEND
// March 01     Modif                                                S. DAMI
//              Insert CAA2 documentation                
//=============================================================================


/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

#include "GUIDVPMInterfaces.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIVpmUEActionFlow;
#else
extern "C" const IID IID_CATIVpmUEActionFlow;
#endif

//
// -------------------------------
// Definition de la classe Interface
// -------------------------------
//

#ifndef CATIVpmUEActionFlow_H
#define CATIVpmUEActionFlow_H

#include "CATBaseUnknown.h"
#include "CATListOfCATUnicodeString.h"

/**
 * Basic interface for ActionFlow user-exits  
 */
class ExportedByGUIDVPMInterfaces  CATIVpmUEActionFlow : public CATBaseUnknown
{    
  //
  CATDeclareInterface;
  //
  
  public:

  /**
   * The method which has to be implemented to run the user-exit.
   * @param ioList
   *   May hold the parameters to be passed to the user-exit, and returned values as well. 
   *   VPMObjectPool is used to transfer other parameters.
   */
  virtual HRESULT  Run(CATListOfCATUnicodeString& ioList) = 0 ;

};

CATDeclareHandler(CATIVpmUEActionFlow,CATBaseUnknown);

//
// --------------------------------------------------------------
// Fin de la macro                                                    
// --------------------------------------------------------------       

#endif
