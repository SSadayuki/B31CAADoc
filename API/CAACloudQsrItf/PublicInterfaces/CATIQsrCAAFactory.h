#ifndef CATIQsrCAAFactory_H
#define CATIQsrCAAFactory_H

// COPYRIGHT Dassault Systemes 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */ 

#include "CATBaseUnknown.h"
#include "CATIQsrCAAPowerFit.h"

#include "CATCldQsrCAAItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATCldQsrCAAItfCPP IID IID_CATIQsrCAAFactory;
#else
extern "C" const IID IID_CATIQsrCAAFactory ;
#endif

class CATGeoFactory ;

/**
 * Interface representing the factory of Digitized Shape Editor and Quick Surface Reconstruction elements.
 *<br><b>Role</b>: The CATIQsrCAAFactory creates the elements.
 * To suppress an element, you must use <tt>CATIQsrCAAFactory::Remove</tt> method.
 */

class ExportedByCATCldQsrCAAItfCPP CATIQsrCAAFactory: public CATBaseUnknown
{
  CATDeclareInterface;

  public:
 
/**
 * Creates a Powerfit.
 * @param iGeoFactory
 *   The factory.
 * @return
 *   The CATIQsrCAAPowerFit interface.
 */
    virtual CATIQsrCAAPowerFit * CreatePowerFit (CATGeoFactory * iGeoFactory) = 0 ;

/**
 * Removes an object from <tt>this</tt> CATIQsrCAAFactory.
 * @param iObjectToRemove
 *   A pointer to the object to remove from the factory. 
 */
    virtual void Remove( CATIQsrCAAPowerFit * iObjectToRemove) = 0 ;

};

CATDeclareHandler(CATIQsrCAAFactory, CATBaseUnknown) ;

#endif
