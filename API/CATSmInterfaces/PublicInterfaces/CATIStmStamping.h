#ifndef CATIStmStamping_H
#define CATIStmStamping_H

// COPYRIGHT Dassault Systemes 2004

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

#include "ExportedByCATSmInterfaces.h"
#include "CATIStmTechnologicalProcess.h"
#include "CATTopDefine.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSmInterfaces IID IID_CATIStmStamping;
#else
extern "C" const IID IID_CATIStmStamping ;
#endif

//------------------------------------------------------------------

/**
 * Interface holding the technological data of stamping process.
 * <b>Role</b>:This interface is available for the technological feature
 * dedicated for Sheetmetal application. You can retrieve these features
 * thanks to the @href CATIStmTechnologicalRequest interface.
 */
class ExportedByCATSmInterfaces CATIStmStamping: public CATIStmTechnologicalProcess
{
    CATDeclareInterface;

public:

    /**
     * Gets the relative orientation of stamping compared to the reference plane.
     * @param   oUpDown
     *      A reference to <tt>CATOrientation</tt> instance.
     *      <br><b>Legal values</b>: 
     *      <ul>
     *      <li><b>CATOrientationNegative</b>: The orientations are opposite,</li>
     *      <li><b>CATOrientationPositive</b>: The orientations are the same,</li>
     *      <li><b>CATOrientationUnknown</b>: The orientation is unknown,</li>
     *      </ul>
     */
    virtual HRESULT __stdcall GetOrientation( CATOrientation & oUpDown ) const = 0;
};

CATDeclareHandler( CATIStmStamping, CATIStmTechnologicalProcess );

//------------------------------------------------------------------

#endif
