#ifndef CATITPSServices_H
#define CATITPSServices_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBoolean.h"
#include "IUnknown.h"
#include "CATTPSGraphicUpdateMode.h"

class CATUnicodeString;
class CAT2DRep;
class CATITTRS;
class CATITPS;
class CATITPSList;
class CATITPSSet;
class CATPathElement;
class CAT3DBagRep;
class CATITPSView;

extern "C" const IID IID_CATITPSServices;

/**
 * Interface that support some services that are not object behaviours.
 * As a consequence there is no context. The methods signatures give the 
 * object.
 */
class CATITPSServices : public IUnknown
{
  public:

    /**
     * Retrieves the NLS type of a TPS.
     */
    virtual HRESULT GetNLSType (const CATITPS* iTPS, 
                                CATUnicodeString& oType) = 0;

    /**
     * Retrieves the NLS supertype of a TPS.
     */
    virtual HRESULT GetNLSSuperType (const CATITPS* iTPS,
                                     CATUnicodeString& oSuperType) = 0;

    /**
     * Retrieves the NLS icon of a TPS.
     */
    virtual HRESULT GetNLSIcon (const IUnknown * ipiSpec, 
                                CATUnicodeString &oIcon) = 0;

    /**
     * Build a Representation of the TPS to be drawn in the
     * Edit Properties panel.
     */
    virtual HRESULT GetPropertyRep (const CATITPS* iTPS,
                                    CAT2DRep ** oPropertyRep) = 0;

    /**
     * Updates visualization of the Tolerancing Sets.
     * If iBrowserContext == -1 : utilize its current context; otherwise
     * updating will not be done if iBrowserContext is not the same as 
     * the current context.
     */
    virtual HRESULT UpdateTolerancingSets(
                                       CATTPSGraphicUpdateMode iUpdateMode,
                                       int iBrowserContext = -1) = 0;

    /**
     * Set the visu 3d mode of all Tolerancing sets in the documents.
     * if iBrowserContext == -1 : utilize its current context
     */
    virtual HRESULT SetVisu3dModeForAllTPSSets (CATBoolean iVisu,
                                                int iBrowserContext = -1) = 0;

    /**
     * Set the browser context of all Tolerancing sets in the documents.
     */
    virtual HRESULT SetWorkbenchContextForAllTPSSets (int iBrowserContext) = 0;

    /**
     *  Check if the active editor represents the Workbench passed
     *  as the 1st parameter
     */
    virtual HRESULT EvaluateWorkbenchContext(const char *iWorkbenchName,
                                             CATBoolean *oWorkbenchActive ) = 0;

     /**
     *  Retrieves the context Path
     */
    virtual HRESULT GetContextPath (CATITPSSet* ipiTPSSet,
                                    CATPathElement ** opContextPath) = 0;
    /**
     * @nodoc
     */
    virtual HRESULT ConvertToParallelOnScreen (CATITPSSet * ipiTPSSet,
                                               CATBoolean   ibParallel,
                                               CATBoolean   ibSave) = 0;

    /**
     *  Convert a Value (in milimeters) and a Tabulated Value.
     *  @param iValue
     *    Value to convert
     *  @param iTol
     *    Tabulated Value
     *  @param iStandard
     *    Standard to use
     *  @param oValueInf
     *    Minimal Value
     *  @param oValueSup
     *    Maximal Value
     */
    virtual HRESULT ConvertTolerance (double    iValue,
                                      wchar_t * iTol,
                                      wchar_t * iStandard,
                                      double  * oValueInf,
                                      double  * oValueSup) = 0;

    /**
     * @nodoc
     * Build a clash rep.
     */
    virtual HRESULT GetRepClash ( CATITPSView* ipiTPS,
                                  CAT3DBagRep ** opBagRep ) = 0;

};
#endif
