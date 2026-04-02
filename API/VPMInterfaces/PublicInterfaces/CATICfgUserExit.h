#ifndef CATICfgUserExit_h_
#define CATICfgUserExit_h_

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
extern ExportedByGUIDVPMInterfaces IID IID_CATICfgUserExit;
#else
extern "C" const IID IID_CATICfgUserExit;
#endif

class CATUnicodeString;
class CATICfgFilter_var;

//-----------------------------------------------
class ExportedByGUIDVPMInterfaces CATICfgUserExit : public CATBaseUnknown {

CATDeclareInterface;

    public:
    
    /**
     * Get the filter definition 
     *  @param iFilterName
     *   Name of the predefined filter.
     *  @param iListObjectToFilter
     *   List of objects that will be filtered by the configuration. This may he
lp to build a more accurate and smaller filter.
     *  @param ioFilter
     *   Configuration filter. You should use the CATICfgFilter passed as argume
nt. You are not allowed to create a new filter and return it.
     */

        virtual HRESULT BuildBSFFilter(const CATUnicodeString &iFilterName, SEQUENCE(CORBAAny) &iListObjectToFilter, CATICfgFilter_var &ioFilter) = 0;
};

CATDeclareHandler(CATICfgUserExit, CATBaseUnknown);

#endif
