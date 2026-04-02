#ifndef CATITPSTextVisu_H
#define CATITPSTextVisu_H

// COPYRIGHT DASSAULT SYSTEMES 2012

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATTPSItfCPP.h"

class CATITPS;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATTPSItfCPP IID IID_CATITPSTextVisu;
#else
extern "C" const IID IID_CATITPSTextVisu ;
#endif

/**
 * This interface is implemented by CATTPSText features ONLY.
 * Interface to manage the visualization Text feature.
 * <b>Role</b>: A visualization Text feature is a Text feature with no specification tree entry created
 * when a datum or a geometrical tolerance is created on Thread CG.
 * The visualization Text feature links with the datum or the geometrical tolerance.
 */

class ExportedByCATTPSItfCPP CATITPSTextVisu : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

     /**
     * Retrieves the annotation TPS pointing the visualization Text feature.
     *  @param opiTPS
     *   Annotation TPS pointed by this text.
     *  returns S_OK when the annotation(Datum or GDT) has been found, 
     *  returns E_FAIL otherwise.
     */
    virtual HRESULT GetTPS (CATITPS ** opiTPS) const = 0;

};

CATDeclareHandler (CATITPSTextVisu, CATBaseUnknown);

#endif
