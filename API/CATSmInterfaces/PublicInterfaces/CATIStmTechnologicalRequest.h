#ifndef CATIStmTechnologicalRequest_H
#define CATIStmTechnologicalRequest_H

// COPYRIGHT Dassault Systemes 2004

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

#include "ExportedByCATSmInterfaces.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSmInterfaces IID IID_CATIStmTechnologicalRequest;
#else
extern "C" const IID IID_CATIStmTechnologicalRequest ;
#endif

//------------------------------------------------------------------

class CATICkeParm;
class CATMathPlane;
class CATISpecObject;
class CATStmTechnologicalIterator;

/**
 * Interface to retrieve any technological process of a body.
 * <b>Role</b>:This interface is available for the MechanicalTool 
 * (PartBody/Body) features. You can retrieve these features thanks 
 * to the @href CATIPartRequest interface. 
 * <p>The method, @href #CreateIterator, enables you to create an 
 * iterator to retrieve all technological information present on the 
 * resulting feature. Refer to the @href CATIBodyRequest interface
 * for explanation about the resulting feature.</p>
 */
class ExportedByCATSmInterfaces CATIStmTechnologicalRequest: public CATBaseUnknown
{
    CATDeclareInterface;

public:

    /**
     * Gives the reference plane of the unfolded view. The plane is located on
     * the bottom skin and its normal is oriented to inside matter.
     * @param   oMathPlane
     *      A reference to a <tt>CATMathPlane</tt> object.
     * @return <tt>S_OK</tt>.
     *      The reference plane is successfully created.
     * @return <tt>E_FAIL</tt>.
     *      The reference plane cannot be created. Use CATError::CATGetLastError()
     *      to retrieve the error by the <tt>HRESULT</tt> value. @see CATError.
     */
    virtual HRESULT __stdcall GetUnfoldPlane( CATMathPlane & oMathPlane ) const = 0;
    
    /**
     * Gives the access to the knowledgeware parameter associated to the thickness.
     * @param   opiThickness
     *      The address where the returned pointer to the parameter is located.
     *      if not <tt>NULL</tt>, you must <tt>Release</tt> if after use. Refer 
     *      to the @href CATICkeParm interface for more details about this object.
     * @return <tt>S_OK</tt>.
     *      The pointer is successfully valuated.
     * @return <tt>E_FAIL</tt>.
     *      The pointer cannot be valuated. Use CATError::CATGetLastError() to 
     *      retrieve the error by the <tt>HRESULT</tt> value. @see CATError.
     */
    virtual HRESULT __stdcall GetThickness( CATICkeParm ** opiThickness ) const = 0;

    /**
     * Creates an iterator on technological process present on the resulting feature.
     * You can specified your own resulting feature (context for iteration).
     * @param   opIterator
     *      The address where the returned pointer to the iterator is located.
     *      if not <tt>NULL</tt>, you must <tt>Release</tt> if after use. Refer 
     *      to the @href CATStmTechnologicalIterator class for more details about 
     *      this object.
     * @param   ipContext
     *      An interface pointer to the resulting feature.
     * @return <tt>S_OK</tt>.
     *      The iterator is successfully created.
     * @return <tt>E_FAIL</tt>.
     *      The iterator cannot be created. Use CATError::CATGetLastError() to 
     *      retrieve the error by the <tt>HRESULT</tt> value. @see CATError.
	 * @error CATInputError CATStmTechERR_0010
     *      No Sheetmetal feature under the MechanicalTool.
     * @error CATInputError CATStmTechERR_0020
     *      Resulting feature is not a Sheetmetal feature.
     * @error CATInputError CATStmTechERR_0030
     *      The specified resulting feature does not belong to the MechanicalTool.
     */
    virtual HRESULT __stdcall CreateIterator( CATStmTechnologicalIterator ** opIterator,
                                              const CATISpecObject * ipContext = NULL ) const = 0;

    /**
     * Creates an iterator on technological process present on the resulting feature.
     * You can specified your own resulting feature (context for iteration).
     * @param   iIID
     *      The interface identifier of the technological process.
     * @param   opIterator
     *      The address where the returned pointer to the iterator is located.
     *      if not <tt>NULL</tt>, you must <tt>Release</tt> if after use. Refer 
     *      to the @href CATStmTechnologicalIterator class for more details about 
     *      this object.
     * @param   ipContext
     *      An interface pointer to the resulting feature.
     * @return <tt>S_OK</tt>.
     *      The iterator is successfully created.
     * @return <tt>E_FAIL</tt>.
     *      The iterator cannot be created. Use CATError::CATGetLastError() to 
     *      retrieve the error by the <tt>HRESULT</tt> value. @see CATError.
	 * @error CATInputError CATStmTechERR_0010
     *      No Sheetmetal feature under the MechanicalTool.
     * @error CATInputError CATStmTechERR_0020
     *      Resulting feature is not a Sheetmetal feature.
     * @error CATInputError CATStmTechERR_0030
     *      The specified resulting feature does not belong to the MechanicalTool.
     */
    virtual HRESULT __stdcall CreateIterator( const IID & iIID, 
                                              CATStmTechnologicalIterator ** opIterator,
                                              const CATISpecObject * ipContext = NULL ) const = 0;
};

CATDeclareHandler( CATIStmTechnologicalRequest, CATBaseUnknown );

//------------------------------------------------------------------

#endif
