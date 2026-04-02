#ifndef CATISPPInitCreation_H
#define CATISPPInitCreation_H
// COPYRIGHT DASSAULT SYSTEMES  1999

/**
  * @CAA2Level L1
  * @CAA2Usage U5
  */

#include "ProcessInterfaces.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByProcessInterfaces IID IID_CATISPPInitCreation ;
#else
extern "C" const IID IID_CATISPPInitCreation ;
#endif
/**
* Interface to initialize anything at activity instantiation.
* <br> <b> Role : </b> the given activity has to support this interface.
*/

class ExportedByProcessInterfaces CATISPPInitCreation : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:
    
    /**
    * Called when the activity is instantiated.
    **/
    virtual void InitCreation() = 0 ;
		
};
CATDeclareHandler( CATISPPInitCreation, CATBaseUnknown);

#endif







