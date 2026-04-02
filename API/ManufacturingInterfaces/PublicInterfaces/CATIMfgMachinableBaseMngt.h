// COPYRIGHT DASSAULT SYSTEMES  2001
//=============================================================================

#ifndef CATIMfgMachinableBaseMngt_H
#define CATIMfgMachinableBaseMngt_H

/**
 * @CAA2Level L1 
 * @CAA2Usage U3
 */


#include "MfgItfEnv.h"

// inheritance
#include "CATBaseUnknown.h"

// System framework
#include "CATUnicodeString.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgMachinableBaseMngt;
#else
extern "C" const IID IID_CATIMfgMachinableBaseMngt;
#endif

/**
 * Interface to associate general information Machinable features.
 * <b>Role</b>: Use this general interface to retrieve and set information on Machinable Features.
 */
class ExportedByMfgItfEnv CATIMfgMachinableBaseMngt : public CATBaseUnknown
{
  CATDeclareInterface;

public:

  /**
   * Sets the type of the Manufacturing Machinable Feature.
   * @param iType The type
   */
  virtual HRESULT SetFeatType(const CATUnicodeString& iType) = 0;

  /**
   * Gets the type of the Manufacturing Machinable Feature.
   * @param oType The type
   */
  virtual HRESULT GetFeatType(CATUnicodeString&       oType) = 0;

  /**
   * Sets the comment of the Manufacturing Machinable Feature.
   * @param iRemark The comment
   */
  virtual HRESULT SetFeatRemark(const CATUnicodeString& iRemark) = 0;

  /**
   * Gets the comment of the Manufacturing Machinable Feature.
   * @param oRemark The comment
   */
  // 
  virtual HRESULT GetFeatRemark(CATUnicodeString&       oRemark) = 0;

};

CATDeclareHandler(CATIMfgMachinableBaseMngt, CATBaseUnknown);

#endif
