#ifndef CATIBehOperationManagement_H
#define CATIBehOperationManagement_H
//
// COPYRIGHT Dassault Systemes 2002
//
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// module declaration
#include "CO0BItf.h"

// inherited from
#include "CATBaseUnknown.h"

// OLE iid
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCO0BItf IID IID_CATIBehOperationManagement;
#else
extern "C" const IID IID_CATIBehOperationManagement ;
#endif

//------------------------------------------------------------------

/**
* Interface to manage the operation states.
*/
class ExportedByCO0BItf CATIBehOperationManagement: public CATBaseUnknown
{
    CATDeclareInterface;
    
public:    
    //
    /**
    * Tell to the Behavior Engine this operation is <b>done</b>. 
    */
    
    virtual HRESULT Done()     = 0;
    /**
    * Tell to the Engine the operation has <b>begun</b>. 
    */
    virtual HRESULT Start()    = 0;
    /**
    * Tell to the Engine the operation is <b>suspended</b>. 
    */
    virtual HRESULT Suspend()  = 0;
    /**
    * Tell to the Engine the operation is <b>canceled</b>. 
    */
    virtual HRESULT Cancel()   = 0;
    
};
CATDeclareHandler(CATIBehOperationManagement, CATBaseUnknown);
//------------------------------------------------------------------

#endif
