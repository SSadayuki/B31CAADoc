#ifndef CATICfgUserExit2_h_
#define CATICfgUserExit2_h_

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

//System
#include "CATBaseUnknown.h"
#include "sequence_CORBAAny.h"

//Interface ID
#include "GUIDVPMInterfaces.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATICfgUserExit2;
#else
extern "C" const IID IID_CATICfgUserExit2;
#endif

class CATUnicodeString;
class CATICfgFilter_var;

//-----------------------------------------------
class ExportedByGUIDVPMInterfaces CATICfgUserExit2 : public CATBaseUnknown {

CATDeclareInterface;

    public:
    
    /**
     * Get the filter definition 
     *  @param iFilterName
     *   Name of the predefined filter.
     *  @param ioFilter
     *   Configuration filter. You should use the CATICfgFilter passed as argume
nt. You are not allowed to create a new filter and return it.
     */

        virtual HRESULT BuildBSFFilterAND(const CATUnicodeString &iFilterName, CATICfgFilter_var &ioFilter) = 0;
};

CATDeclareHandler(CATICfgUserExit2, CATBaseUnknown);

#endif
