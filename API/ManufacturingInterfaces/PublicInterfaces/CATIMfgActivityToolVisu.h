#ifndef CATIMfgActivityToolVisu_H
#define CATIMfgActivityToolVisu_H
//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES  1998
//=============================================================================

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

// module
#include "MfgItfEnv.h"

#include "CATMathDirection.h"

// inheritance
#include "CATBaseUnknown.h"

// OLE iid
#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByMfgItfEnv IID_CATIMfgActivityToolVisu ;
#else
extern "C" const IID IID_CATIMfgActivityToolVisu ;
#endif

/**
 * Interface to define the tool orientation during the Tool Path Replay command.
 * <b>Role</b>: This interface allows to specifiy the orientation of the tool in the Tool Path Replay command.<br>
 * Standard behaviour is to display the tool with its axis along the machine spindle axis, and its radial axis
 * perpendicular to the spindle axis and perpendicular to the tangent of the tool path.<br>
 * This interface has to be implemented on a Manufacturing Operation if the standard behaviour is not the expected one.
 */
class ExportedByMfgItfEnv CATIMfgActivityToolVisu : public CATBaseUnknown
{
    CATDeclareInterface ;

    public :

    /**
     * Gives the tool orientation used in Tool Path Replay command. 2 vectors define the tool orientation.
     * @param oSpindleAxis This axis will be mapped with the machine spindle axis.
     * @param oRadialAxis  This axis will be mapped with a perpendicular to the machine spindle axis.
     */
    virtual HRESULT GetDirections(CATMathDirection &oSpindleAxis, CATMathDirection &oRadialAxis) = 0;


};

CATDeclareHandler(CATIMfgActivityToolVisu, CATBaseUnknown) ;

#endif

