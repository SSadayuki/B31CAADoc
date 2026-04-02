/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================

#ifndef CATIMfgMappingRuleName_H
#define CATIMfgMappingRuleName_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATUnicodeString.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgMappingRuleName;
#else
extern "C" const IID IID_CATIMfgMappingRuleName;
#endif

/**
* Interface to read the geometrical mapping rule name defined in a Machining Operation and
* for a dedicated Design Feature.
* <br><b>Role</b>: CATIMfgMappingRuleName has a method to read the mapping rule name.
**/

class ExportedByMfgItfEnv CATIMfgMappingRuleName : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:  

  /**
   * Read the Geometrical Mapping Rule Name. 
   **/
  virtual CATUnicodeString GetMappingRuleName() = 0;
  
  /**
   * @nodoc
   **/
  virtual void PutMappingRuleName (CATUnicodeString & iMappingRuleName) = 0;

};

CATDeclareHandler(CATIMfgMappingRuleName, CATBaseUnknown);

#endif


