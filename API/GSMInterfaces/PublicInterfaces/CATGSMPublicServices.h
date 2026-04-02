#ifndef CATGSMPublicServices_H
#define CATGSMPublicServices_H
/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2002
//==============================================================================
//
//CATGSMPublicServices :
//
//==============================================================================
// Usage Notes :
//==============================================================================

#include "CATGitInterfacesExportedBy.h"
#include "IUnknown.h"

class CATISpecObject_var;


/** 
 * Class of public services for Generative Shape Design.
 * <b>Role</b>: Allows you to get generic information on Shape design features 
 * @see CATIGSMFactory
 */

class ExportedByCATGitInterfaces CATGSMPublicServices
{    
public:

    /** 
    * Is a feature is a Gsd Multisel feature like.
    * @param  iSpec 
    *    Feature to analyse 
    * @param  oDiag 
    *     0: Not a multisel feature / 1: multisel feature 
    * @see CATIGSMMultiSelManager, CATIGSMMultiSelAccess
    */ 
    static HRESULT IsAMultiSelFeature (const CATISpecObject_var iSpec,  int& oDiag);

};


#endif
