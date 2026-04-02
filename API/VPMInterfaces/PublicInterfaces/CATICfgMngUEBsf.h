/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  1999
//=============================================================================
//
// CATICfgMngUEBsf
// Config User Exit Interface
//
//=============================================================================
// Usage Notes:
//
//=============================================================================
// Nov 99                              Creation                             JPP
//=============================================================================

#include "GUIDVPMInterfaces.h"

/**
*   @CAA2Level L1
*   @CAA2Usage U4
*/

/**
 *  Implement this interface to define:
 *        - List of predefined BSF filters
 *        - List of existing domains
 */

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATICfgMngUEBsf;
#else
extern "C" const IID IID_CATICfgMngUEBsf;
#endif

#ifndef CATICfgMngUEBsf_H_
#define CATICfgMngUEBsf_H_

#include "CATBaseUnknown.h"
#include "CATListOfCATUnicodeString.h"

//
// -----------------
// Interface Definition
// -----------------
//

class ExportedByGUIDVPMInterfaces  CATICfgMngUEBsf : public CATBaseUnknown
{
  //
  CATDeclareInterface;
  //

  public:

/**
 * Get the list of available BSF filters. You will to implement
 * the definition of these filters through CATICfgUEBsf.h .
 *  @param iBSFNames
 *    List of filters.
 */
virtual HRESULT GetBSFNames(CATListOfCATUnicodeString &iBSFNames)=0;

/**
 * Get the list of available domains.
 *  @param oDomainList
 *    List of domains.
 */
virtual HRESULT GetDomainList(CATListOfCATUnicodeString & oDomainList) =0;

};

CATDeclareHandler(CATICfgMngUEBsf,CATBaseUnknown);

//
// --------------------------------------------------------------
// Fin de la macro
// --------------------------------------------------------------

#endif

