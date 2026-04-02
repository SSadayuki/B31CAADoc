// COPYRIGHT DASSAULT SYSTEMES 2006
/**
* @CAA2Level L1
* @CAA2Usage U1
*/

#ifndef    CATCreateCATIPrtThreadStandardServices_H      
#define    CATCreateCATIPrtThreadStandardServices_H      

#include  "PartItf.h"  
#include  "CATErrorDef.h"  
class    CATIPrtThreadStandardServices;      

/**      
*  Creates a service component that implements CATIPrtThreadStandardServices.      
*  @param  opiServices [out, IUnknown#Release]   
*   The interface pointer on the service component.      
*/      
HRESULT  ExportedByPartItf    
CATCreateCATIPrtThreadStandardServices(CATIPrtThreadStandardServices  **opiServices);    

#endif      
