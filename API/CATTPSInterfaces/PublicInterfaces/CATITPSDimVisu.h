#ifndef CATITPSDimVisu_H
#define CATITPSDimVisu_H

// COPYRIGHT DASSAULT SYSTEMES 2008

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATTPSItfCPP.h"
#include "CATBaseUnknown.h"

class CATITPS;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATTPSItfCPP IID IID_CATITPSDimVisu;
#else
extern "C" const IID IID_CATITPSDimVisu ;
#endif

/**
 * Interface to manage the visualization dimension feature.
 * <b>Role</b>: A visualization dimension feature is a dimension feature with no value created
 * when a datum or a geometrical tolerance is created on cylinder surface.
 * The visualization dimension feature links the datum or the geometrical tolerance to the cylinder.
 */

class ExportedByCATTPSItfCPP CATITPSDimVisu : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

     /**
     * Retrieves the annotation TPS pointing the visualization dimension feature.
     *  @param opiTPS
     *   Annotation TPS pointing this dimension.
     *  returns S_OK when the annotation has been found, 
     *  returns E_FAIL otherwise.
     */
    virtual HRESULT GetTPS (CATITPS ** opiTPS) const = 0;

};

CATDeclareHandler (CATITPSDimVisu, CATBaseUnknown);

#endif
