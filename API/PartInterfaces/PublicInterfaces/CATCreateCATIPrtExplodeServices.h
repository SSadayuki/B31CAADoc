//    COPYRIGHT    DASSAULT    SYSTEMES    2006    
//===================================================================  

#ifndef    CATCreateCATIPrtExplodeServices_H      
#define    CATCreateCATIPrtExplodeServices_H      

#include  "PartItf.h"  
#include  "CATErrorDef.h"  
class    CATIPrtExplodeServices;      

/**      
*  Creates a service component that implements CATIPrtExplodeServices.      
*  @param  opiServices [out, CATBaseUnknown#Release]   
*   The interface pointer on the service component.      
*/      
HRESULT  ExportedByPartItf    
CATCreateCATIPrtExplodeServices(CATIPrtExplodeServices  **opiServices);    

#endif      
