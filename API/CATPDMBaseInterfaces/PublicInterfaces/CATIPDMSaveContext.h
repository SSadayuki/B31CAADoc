// ------------------------------------------------------------------  
// COPYRIGHT Dassault Systemes 2014  
//===================================================================
/**
* @CAA2Level L1
* @CAA2Usage U3
*/  
//===================================================================  //
// CATIPDMSaveContext.h  //
//===================================================================  //
// Usage notes:
//   Interface to ask information about context from which save command is called.
//   The information can be asked from save process user exits.   //
//===================================================================
//
//  Jan 14 Creation VPW / UJ2
//===================================================================
#ifndef CATIPDMSaveContext_H
#define CATIPDMSaveContext_H


#include "CATBaseUnknown.h"
#include "CATPDMBaseItfCPP.h"
#include "CATPDMSaveContextEnums.h"  

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATPDMBaseItfCPP IID IID_CATIPDMSaveContext;
#else
extern "C" const IID IID_CATIPDMSaveContext ;
#endif

class ExportedByCATPDMBaseItfCPP CATIPDMSaveContext: public CATBaseUnknown
{
    CATDeclareInterface;
public:
    /** Returns context of save process
    * 
    * @Param SaveContext
    *    (output) out parameter hold value of save context. Possible values:
    *    <ul>
    *     <li><tt>SaveContextNoSave</tt> Save process is not running.</li>
    *     <li><tt>SaveContextSetPDMProperties</tt>:  Context set PDM Properties.</li> 
    *     <li><tt>SaveContextSave</tt>: Context is save.</li> 
    *     <li><tt>SaveContextSaveAsNewVersion</tt>: Context is save as new version.</li> 
    *    </ul>

    * @return
    *   <ul>
    *     <li><tt>S_OK</tt>: API execution successful.</li> 
    *     <li><tt>E_FAIL</tt>: API execution failed.</li>
    *  </ul>

    */   
    virtual HRESULT GetContext(CATPDMSaveContext & SaveContext) = 0;
};  

CATDeclareHandler( CATIPDMSaveContext , CATBaseUnknown );

#endif
