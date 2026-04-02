// COPYRIGHT Dassault Systemes 2002
//===================================================================
//
// CATIPDMLog0.h
//

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

//===================================================================
//
// Usage notes:
//  This interface is designed to browse the content of the PDMLog of a document
//  The document being QIed for CATIPDMLog0
//
//===================================================================
//
//  Oct 02  Creation JRZ / AES
//===================================================================
#ifndef CATIPDMLog0_H
#define CATIPDMLog0_H

#include "CATLISTV_CATBaseUnknown.h"
#include "CATPDMBaseItfCPP.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATPDMBaseItfCPP IID IID_CATIPDMLog0;
#else
extern "C" const IID IID_CATIPDMLog0;
#endif

//------------------------------------------------------------------
class ExportedByCATPDMBaseItfCPP CATIPDMLog0: public CATBaseUnknown
{
  CATDeclareInterface;
  
public:
  
  /** 
   * Returns the content of the log
   * @param oList What the log header contains. 
   *              A list of log records is returned
   *              Each records can be for the modification that it represent Qying it for the intf CATIPDMLogObject0
   *              and using then the member function of that intf
   * @return
   *    S_OK:   Success 
   *    E_FAIL: No List returned (list empty or Log container not created yet)
   */
  virtual HRESULT GetLogContent(CATLISTV(CATBaseUnknown_var)& oList)= 0;

};

CATDeclareHandler( CATIPDMLog0, CATBaseUnknown );
//------------------------------------------------------------------

#endif
