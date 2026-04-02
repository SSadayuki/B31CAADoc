//================================================================
//COPYRIGHT DASSAULT SYSTEMES 2001 
//================================================================

#include "GUIDVPMInterfaces.h"

/**
*   @CAA2Level L1
*   @CAA2Usage U3
*/

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATICfgUEBsf;
#else
extern "C" const IID IID_CATICfgUEBsf;
#endif


#ifndef CATICfgUEBsf_H_
#define CATICfgUEBsf_H_

#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATICfgFilter.h"

/**
 *  Implement this interface to define the content of a predefined filter.
 *  The predefined filters are defined through CATICfgMngUEBsf
 */

class ExportedByGUIDVPMInterfaces  CATICfgUEBsf : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * Get the filter definition 
     *  @param iBSFName
     *   Name of the predefined filter.
     *  @param oFilter
     *   filter.
     */
    virtual HRESULT GetBSFFilter(const CATUnicodeString &iBSFName, CATICfgFilter_var &oFilter) const=0;

};

CATDeclareHandler(CATICfgUEBsf,CATBaseUnknown);


#endif

