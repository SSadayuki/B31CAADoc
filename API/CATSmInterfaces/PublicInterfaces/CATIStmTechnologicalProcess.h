#ifndef CATIStmTechnologicalProcess_H
#define CATIStmTechnologicalProcess_H

// COPYRIGHT Dassault Systemes 2004

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

#include "ExportedByCATSmInterfaces.h"
#include "CATBaseUnknown.h"
#include "ListPOfCATCell.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSmInterfaces IID IID_CATIStmTechnologicalProcess;
#else
extern "C" const IID IID_CATIStmTechnologicalProcess ;
#endif

//------------------------------------------------------------------

class CATUnicodeString;

/**
 * Base interface holding the technological data process.
 * <b>Role</b>:This interface is available for the technological feature
 * dedicated for Sheetmetal application. You can retrieve these features
 * thanks to the @href CATIStmTechnologicalRequest interface. 
 * <p>This interface is the base interface for any specific technological
 * data associated to bending, stamping, or cutting process for example.</p>
 */
class ExportedByCATSmInterfaces CATIStmTechnologicalProcess: public CATBaseUnknown
{
    CATDeclareInterface;

public:

    /**
     * Gets the process identifier.
     * @param   oId
     *      A reference to <tt>CATUnicodeString</tt> instance.
     * @return <tt>S_OK</tt>.
     *      The process identifier is successfully valuated.
     * @return <tt>E_FAIL</tt>.
     *      The process identifier cannot be valuated. Use CATError::CATGetLastError()
     *      to retrieve the error by the <tt>HRESULT</tt> value. @see CATError.
     */
    virtual HRESULT __stdcall GetProcessId( CATUnicodeString & oId ) const = 0;

    /**
     * Gets all topological cells, included the topological body of the 
     * resulting feature, associated to this technological process.
     * @param   iView
     *      A reference on <tt>CATUnicodeString</tt> instance.
     *      <br><b>Legal values</b>: 
     *      <ul>
     *      <li><b>"MfUnfoldedView"</b> or <b>"Unfolded"</b>: for an unfolded,</li>
     *      <li><b>"MfDefault3DView"</b>: for the default 3D view,</li>
     *      <li>otherwise: the default 3D view.</li>
     *      </ul>
     * @param   oCells
     *      A reference to list of topological cell.
     * @return <tt>S_OK</tt>.
     *      The list of cell is successfully valuated.
     * @return <tt>E_FAIL</tt>.
     *      The list of cell cannot be valuated. Use CATError::CATGetLastError()
     *      to retrieve the error by the <tt>HRESULT</tt> value. @see CATError.
     */
    virtual HRESULT __stdcall GetCells( const CATUnicodeString & iView, 
                                        CATLISTP( CATCell ) & oCells ) const = 0;

};

CATDeclareHandler( CATIStmTechnologicalProcess, CATBaseUnknown );

//------------------------------------------------------------------

#endif
