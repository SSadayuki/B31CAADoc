#ifndef CATIStAgentExtraFilter_H
#define CATIStAgentExtraFilter_H

/**
 * @CAA2Level L0
 * @CAA2Usage U5
 */

//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2003
//==============================================================================
//
// CATIStAgentExtraFilter :
//   
//
//==============================================================================
// Usage Notes :
//  --------------------------------------------------
//   IMPORTANT : DASSAULT SYSTEMES INTERNAL USE ONLY.
//  --------------------------------------------------
//
//------------------------------------------------------------------------------
//  Inheritance : CATIStAgentExtraFilter  (CAAFreeStyleItf FW)
//                  CATBaseUnknown              (System FW)
//==============================================================================
// May. 03   Creation                                          Guillaume BOUDIER
//==============================================================================

#include "CAAFreeStyleItf.h"

#include "CATBaseUnknown.h"

class CATPathElement;
class CATSO;

#ifndef LOCAL_DEFINITION_FOR_IID
extern  ExportedByCAAFreeStyleItf IID IID_CATIStAgentExtraFilter;
#else
extern "C" const IID IID_CATIStAgentExtraFilter;
#endif


/**
 * @nodoc
 * 
 * <ul>
 * <li> 
 * <li> 
 * <li> 
 * <li> 
 * <li> 
 */ 
class ExportedByCAAFreeStyleItf CATIStAgentExtraFilter : public CATBaseUnknown
{
    CATDeclareInterface;

public :

    /**
	 * @nodoc
     * This method is called before the 
     * 
     * Use it to filter the elements that has to be analysed in the support searching process
     */
    virtual HRESULT PreCheckPath(CATPathElement * iPath, CATPathElement *& oPath) = 0;

    /**
	 * @nodoc
     * This method is called after the agent's owns 
     *
     * Use it to filter the support found in the support searching process
     */
    virtual HRESULT ExtraCheckPath(CATPathElement * iPath, CATPathElement *& oPath) = 0;

};

CATDeclareHandler(CATIStAgentExtraFilter, CATBaseUnknown);

#endif



