#ifndef CATITPSTTRSServices_H
#define CATITPSTTRSServices_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"
#include "CATBoolean.h"
#include "CATTPSScanComponentsMode.h"
#include "CATTPSScanComposedOfMode.h"
#include "CATTTRSCanonicityRespecType.h"
#include "CATMmrTTRSClass.h"
#include "CATMathPoint.h"
#include "CATMathDirection.h"
#include "CATListPV.h"
#include "CATListOfInt.h"

class CATBaseUnknown;
class CATIRGE;
class CATITTRS;
class CATITTRSList;
class CATITPSList;
class CATIUnknownList;
class CATITPS;
class CATITPSReferenceFrame;
class CATISpecObject;
class CATIProduct;
class CATPathElement;

extern "C" const IID IID_CATITPSTTRSServices;

/**
 * Interface that support some services around the TTRS modeler.
 * There is no context. The methods signatures give the object.
 */
class CATITPSTTRSServices : public IUnknown
{
  public:

    /**
     * Retrieves the NLS class of a TTRS. 
     */
    virtual HRESULT GetNLSClass (const CATITTRS* iTTRS,
                                 CATUnicodeString& oClass) = 0;

    /**
     * Retrieves the NLS type of a TTRS. 
     */
    virtual HRESULT GetNLSType (const CATITTRS* iTTRS,
                                CATUnicodeString& oType) = 0;

    /**
     * Retrieves the TPSs which reference the iTTRS for a user point of view.
     * That is to say the same result as GetTPSLinkedToTTRS, except in the case
     * of semantic TPSs which are linked to datums. In this case the TPSs 
     * are returned by the TTRS of the positionned surface.
     * The *oOutput must be initialize to NULL if a new list is required.
     */
    virtual HRESULT GetUserTPSs (const CATITTRS * iTTRS,
                                 CATITPSList ** oOutput) = 0;

    /**
     * Retrieves the Components of a TTRS. 
     * The iTTRS is not included in the oList.
     * The *oList must be initialize to NULL if a new list is required;
     * In other case, *oList has been already allocated, all found TTRS
     * are append to the content of this list.
     */
    virtual HRESULT GetComponentsList (CATITTRS* iTTRS,
                                       CATTPSScanComponentsMode  iMode,
                                       CATIUnknownList ** oList,
                                       CATIUnknownList ** oBodyList = NULL) = 0;

    /**
     * Retrieves the parents of a TTRS. the iTTRS is included in the
     * oList if boolean iAddInList is TRUE (Default case); otherwise,
     * iTTRS is skipped in the returned list.
     * The *oList must be initialize to NULL if a new list is required.
     * In other case, *oList has been already allocated, all found TTRS
     * are append to the content of this list.
     */
    virtual HRESULT RetrieveParentTTRS (CATITTRS * iTTRS,
                                        CATITTRSList ** oOutput,
                                        const CATBoolean iAddInList = TRUE) = 0;

    /**
     * Retrieves the TPS which TTRS uses iGeom as component.
     * The *oOutput must be initialize to NULL if a new list is required.
     */
    virtual HRESULT GetTPSLinkedToGeom (CATBaseUnknown * iGeom,
                                        CATITPSList   ** oOutput,
                                        CATListOfInt   * ipIdList = NULL) = 0;

    /**
     * Retrieves the TTRS which uses iGeom as final component.
     * The *oOutput must be initialize to NULL if a new list is required.
     */
    virtual HRESULT GetTTRSLinkedToGeom (CATBaseUnknown         * iGeom,
                                         CATTPSScanComposedOfMode iMode,
                                         CATITTRSList          ** oOutput,
                                         CATListOfInt           * ipIdList = NULL) = 0;

    /**
     * Retrieves the EGRs of the TTRSs which uses iGeom as final component
     * or as EGRs. Except TTRSs which results of a Reference Frame construction
     * which are not returned.
     * The *oList must be initialize to NULL if a new list is required.
     */
    virtual HRESULT GetEGRLinkedToGeom (CATBaseUnknown  *  iGeom,
                                        CATIUnknownList ** oList) = 0;

    /**
     * Retrieves the Geometry referenced by the TTRS of iEGR.
     * The *oList must be initialize to NULL if a new list is required.
     */
    virtual HRESULT GetGeomLinkedToEGR (CATBaseUnknown* iEGR,
                                        CATIUnknownList ** oList) = 0;

    /**
     * Retrieves the TPSs which reference the iTTRS.
     * The *oOutput must be initialize to NULL if a new list is required.
     */
    virtual HRESULT GetTPSLinkedToTTRS (CATITTRS * iTTRS,
                                        CATITPSList ** oOutput) = 0;

    /**
     * Retrieves TTRS which reference the iRGE. 
     * Remark:: V5 use since you can'thave V4 RGE except from its TTRS.
     * The *oTTRSList must be initialize to NULL if a new list is required.
     */
    virtual HRESULT GetPointingTTRS (CATIRGE* iRGE,
                                     CATITTRSList ** oOutput) = 0;

    /**
     * Retrieves the TTRS which uses iTTRS as a component.
     * Be Careful : Only at the first level.
     * The *oOutput must be initialize to NULL if a new list is required.
     */
    virtual HRESULT GetTTRSComposedOfTTRS (CATITTRS * iTTRS,
                                           CATITTRSList ** oOutput) = 0;
    /**
     * Removes the iTTRS from the document if no TPS references it.
     */
    virtual HRESULT RemoveTTRSIfPossible (CATITTRS* iTTRS) = 0 ;

    /**
     * Retrieves direct and/or indirect representing TTRSs as far as
     * represented link is concerned.
     * Usage: iMode depends on CATTPSScanRepresentingMode
     *   CATTPSScanDirect             => Get direct representing TTRSs.
     *   CATTPSScanIndirect           => Get indirect representing TTRSs.
     *   CATTPSScanDirectComponents   => Get direct representing of TTRS
     *                                   components.
     *   CATTPSScanIndirectComponents => Get indirect representing of TTRS
     *                                   components.
     *   ibAvoidUserOfComp will lock search on direct and indirect representing
     *   for elements and sub-elements using the context (composed of).
     */
    virtual HRESULT GetRepresentingTTRS (
                                CATITTRS      * ipiTTRS,
                                int             iMode,
                                CATITTRSList ** opiOutput,
                                CATBoolean      ibAvoidUserOfComp = FALSE) = 0;

    /**
     * @nodoc
     * Change the properties of a TTRS.
     */
    virtual HRESULT ChangeTTRSProperties ( CATITTRS* ipTTRS, 
                                           const CATTTRSCanonicityRespecType iType, 
                                           const CATMmrTTRSClass iClass, 
                                           CATBoolean ibFeatureOfSize ) = 0;

    /**
     * @nodoc
     * Respecifies th Mathematic Bloc of the TTRS.
     */
    virtual HRESULT ChangeTTRSBlocMath ( CATITTRS* ipTTRS, 
                                         const CATMathPoint iPoint, 
                                         const CATMathDirection iDirection, 
                                         const double iDiameter ) = 0;

    /**
     * @nodoc
     * Create a curve that passes through the TTRS's geometries. The curve
     * is calculated by a component whose name is given by ipOperatorName
     * argument and which implements interface CATITPSCreateCurve
     */
    virtual HRESULT CreateCurve ( CATITTRS* ipiTTRS, 
                                  const char *ipOperatorName,
                                  int * oPointCount,
                                  CATMathPoint ** opArrPt,
                                  CATMathVector ** opArrTgtVec,
                                  CATMathVector ** opArrCurvVec,
                                  CATLONG32 ** opArrImposition,
                                  double * oFakeLength,
                                  CATBoolean * oFakeValue,
                                  CATBoolean iSelFilter) = 0;

    /**
     * Get the constructed geometry from a TTRS that is created on it
     * level.
     *   @param ipiTTRS
     *     the TTRS that is created on the constructed geometry.
     *   @param opiGeometry
     *     the constructed geometry.
     */
    virtual HRESULT GetConstructedGeomFromTTRS(
                                   CATITTRS *  ipiTTRS,
                                   CATISpecObject ** opiGeometry) = 0;

    /**
     * @nodoc
     *   Retrieve the reference product where there is the TTRS.
     *   @param ipiTTRS
     *     the TTRS from which we are searching the reference product.
     *   @param opiProd
     *     the reference product.
     */
    virtual HRESULT GetRefProduct (CATITTRS    *  ipiTTRS,
                                   CATIProduct ** opiProd) = 0;

    /**
     * @nodoc
     *   Retrieve the cgm path id  where there is the RGE.
     *   @param ipiRGE
     *     the RGE from which we are searching the geometry Id.
     *   @param oPathId
     *     the list of CATListOfInt.
     */
    virtual HRESULT GetCGMIdPath ( CATIRGE* ipiRGE, 
                                   CATPathElement* ipPath, 
                                   CATListPV* oPathId ) = 0;
};
#endif
