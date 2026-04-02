// -*-C++-*-

#ifndef _ENOVIUERunInteropServerCode_H
#define _ENOVIUERunInteropServerCode_H

// COPYRIGHT DASSAULT SYSTEMES 2003

/*
 * This interface should be implemented by ENOVIA late type
 * in order to execute on server customer code as support of user exit coded in CATIA
 * Please refer to CATIPDMReferenceNaming1 and CATIPDMReferenceInfo for additional information
 */

/**
 *      @CAA2Level L1
 *      @CAA2Usage U5
 */

#include "CATBaseUnknown.h"
#include "GUIDVPMInterfaces.h"
#include "CATVariant.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_ENOVIUERunInteropServerCode;
#else
extern "C" const IID IID_ENOVIUERunInteropServerCode;
#endif

//------------------------------------------------------------------
/**
 * Interface to manage Relationships between Objects.
 */
class ExportedByGUIDVPMInterfaces ENOVIUERunInteropServerCode : public CATBaseUnknown
{

    CATDeclareInterface;

    public:

/**
 * Requests from the client side to run code on the server side.
 * @param  iInput [in]
 *   Information provided by the client CATIA side, that is marshalled to the server and passed in
 *   as input to the customer code on server side
 * @param  oOuput [out]
 *   Information returned by the customer code from server side. It is marshalled back to CATIA
 *   and returned to the CATIA user exit caller
 * @return
 *    S_OK if the server code has run successfully, and E_FAIL otherwise
 */


      virtual HRESULT RunServerCode (const CATVariant& iInput, CATVariant& oOutput ) = 0;

};

CATDeclareHandler(ENOVIUERunInteropServerCode, CATBaseUnknown);

#endif














































