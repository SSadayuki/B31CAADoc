// COPYRIGHT Dassault Systemes 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */


//===================================================================
//
// CATIPDMLogObject0.h
//
//===================================================================
//
// Usage notes:
//   Interface to ask information to a record of the log
//   These records have been obtained by
//   - Querying the document for the interface CATIPDMLog0
//   - Enumerating the records by GetLogContent of CATIPDMLog0
//   The records can then be enumerated and queried for CATIPDMLogObject0
//
//===================================================================
//
//  Oct 02 Creation JRZ / AES
//===================================================================
#ifndef CATIPDMLogObject0_H
#define CATIPDMLogObject0_H

#include "CATPDMBaseItfCPP.h"
#include "CATBaseUnknown.h"
#include "sequence_octet.h"
#include "CATPDMLogEnums.h"

#include "CATIPDMId0.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATPDMBaseItfCPP IID IID_CATIPDMLogObject0;
#else
extern "C" const IID IID_CATIPDMLogObject0 ;
#endif

class CATUnicodeString;

class ExportedByCATPDMBaseItfCPP CATIPDMLogObject0: public CATBaseUnknown
{
  CATDeclareInterface;
  
public:
  /** 
   * Returns what kind of modification the log record corresponds to  
   * See CATPDMLogStatus definition for the possible retuned status
   */   
  virtual CATPDMLogStatus GetStatus() = 0;

  /** 
   * Returns the name of the feature that the record is associated to, as this feature is
   * named in the product structure tree
   * WARNING for record representing a delete operation, the name can not be returned
   *
   * @param oName the returned name
   *
   * @return
   *    S_OK:   Success 
   *    E_FAIL: No name returned (example deleted entity)
   */
  virtual HRESULT GetPSTreeName(CATUnicodeString& oName) = 0;

  /** 
   * Returns the type of the feature that the record is associated to
   * This is typically the "late type" of the entity
   * WARNING for record representing a delete operation, the type can not be returned
   *
   * @param oType the returned type
   *
   * @return
   *    S_OK:   Success 
   *    E_FAIL: No name returned (example deleted entity)
   */
  virtual HRESULT GetType(CATUnicodeString& oType) = 0;

  /** 
   * Returns the PDM identifier of the entity
   * WARNING for record representing a create operation(StatusNew), the identifier can not be returned
   * since not assigned yet
   *
   * @param oPDMId the returned PDM idendifier (after use, the returned pointer should be released)
   *
   * @return
   *    S_OK:   Success 
   *    E_FAIL: No identifier returned (example new entity)
   */
  virtual HRESULT GetPDMId(CATIPDMId0 ** oPDMId) = 0;
  

  /** 
   * For a log record that describes a modification (CATPDMLogStatusModified) 
   * returns the list of modification performed on the entity
   * @param oModSt List of modifications. Memory should be freed by calling delete[] oModSt
   * @param oNbMod Nb of modifications in the above list
   *
   * @return
   *    S_OK:   Success 
   *    E_FAIL: The log record is not modification
   */  
  virtual HRESULT GetModStatus(CATPDMModType *& oModSt, int & oNbMod) = 0;


  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

CATDeclareHandler( CATIPDMLogObject0, CATBaseUnknown );

//------------------------------------------------------------------

#endif
