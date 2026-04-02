#ifndef CATTPSInstantiateComponent_H
#define CATTPSInstantiateComponent_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATTPSItfCPP.h"
#include "IUnknown.h"

/**
 * Enum that identify components that are provided for TPS manipulation.
 */
enum CATTPSComponent
{
  DfTPS_ItfTPSServices               =  0,     // CATITPSServices
  DfTPS_ItfTTRSServices              =  1,     // CATITPSTTRSServices
  DfTPS_ItfTPSPropTBManager          =  2,     // CATITPSPropTBManager -- Obsolete

  DfTPS_ItfPointVectorOperator       =  3,     // CATITPSOperatorPtVector
  DfTPS_ItfAnnotationPlaneOperator   =  4,     // CATITPSOperatorAnnotPlane
  DfTPS_ItfClashOperator             =  5,     // CATITPSOperatorClash
  DfTPS_ItfZDiagnostic               =  6,     // CATITPSOperatorZConv
  DfTPS_ItfAnnotationPlaneDiagnostic =  7,     // CATITPSOperatorPlaneConv
  DfTPS_ItfViewPlaneOperator         =  8,     // CATITPSOperatorViewPlane

  DfTPS_ItfTPSServicesForV4Data      =  9,     // CATITPSV4Services
  DfTPS_ItfV4SpecificServices        = 10,     // CATITPSSpecific
  DfTPS_ItfV4GeometricAccess         = 11,     // CATITPSFsurServices
  DfTPS_ItfRetrieveServices          = 12,     // CATITPSRetrieveServices
  DfTPS_ItfTPSFactoryAdvanced        = 13,     // CATITPSFactoryAdvanced

  DfTPS_ItfV4TPSServices             = 14,     // CATITPSServices
  DfTPS_ItfV5TPSServices             = 15,     // CATITPSServices
  DfTPS_ItfV4TTRSServices            = 16,     // CATITPSTTRSServices
  DfTPS_ItfV5TTRSServices            = 17,     // CATITPSTTRSServices

  DfTPS_ItfTolerancingExpert         = 18,   // CATITPSTolerancingExpert
  DfTPS_ItfExpertUpgrade             = 19,   // CATITPSExpertUpgrade
  DfTPS_ItfExpertDatum               = 20,   // CATITPSExpertDatum
  DfTPS_ItfRefFrameTTRS              = 21,   // CATITPSRefFrameTTRS
  DfTPS_ItfExpertValuateFromAnnot    = 22,   // CATITPSExpertValuateFromAnnot
  DfTPS_ItfTPSServicesContainer      = 23,   // CATITPSServicesContainers
  DfTPS_ItfTPSUpdateServices         = 24,   // CATITPSUpdateServices
  DfTPS_ItfTPSOperatorServices       = 25,   // CATITPSOperatorServices
  DfTPS_ItfTPSUIServices             = 26,   // CATITPSUIServices
  DfTPS_ItfTPSAnnotationServices     = 27,   // CATITPSAnnotationServices
  DfTPS_ItfTPSAssociativeServices    = 28,   // CATITPSAssociativeServices
  DfTPS_ItfTPSExpertAdvisor          = 29,   // CATITPSExpertAdvisor
  DfTPS_ItfTPSDuplicator             = 30,   // CATITPSDuplicator
  DfTPS_ItfTPSOperatorDistPtTTRS     = 31,   // CATITPSOperatorDistPtTTRS
  DfTPS_ItfTPSFactoryTTRS            = 32,   // CATITPSFactoryTTRS
  DfTPS_ItfTPSOperatorPlaneOfDimOnGSM= 33,   // CATITPSOperatorPlaneOfDimOnGSM
  DfTPS_ItfTPSCaptureServices        = 34,   // CATITPSCaptureServices
  DfTPS_ItfTPSClippingPlaneServices  = 35,   // CATITPSClippingPlaneServices
  DfTPS_ItfTPSAnnotDuplicatorV4      = 36,   // CATITPSAnnotDuplicatorV4
  DfTPS_ItfTPSOperatorIncludedTTRS   = 37,   // CATITPSOperatorIncludedTTRS
  DfTPS_ItfTPSOperatorPlaneOfDimOnFillet= 38,// CATITPSOperatorPlaneOfDimOnFillet
  DfTPS_ItfTPSOperatorPoint          = 39,   // CATITPSOperatorPoint
  DfTPS_ItfConstructedGeomServices   = 40,   // CATITPSConstructedGeomServices
  DfTPS_ItfTPSViewServices           = 41,   // CATITPSViewServices
  DfTPS_ItfTPSCATITPSDimServices     = 42,   // CATITPSDimServices
  DfTPS_ItfTPSOperatorDimGeomUpdate  = 43,   // CATITPSOperatorDimGeomUpdate
  DfTPS_ItfTPSDimFactoryAdvanced     = 44,   // CATITPSDimFactoryAdvanced
  DfTPS_ItfTPSExtractionViewServices = 45,   // CATITPSExtractionViewServices
  //IFB IR:- A0567364 05:02:2007 
  //For getting the Dimension Type (Linear or Angular)
  // DfTPS_ItfFTAServices            = 56,   // CATIFTAServices
  // DfTPS_ItfV4FTAServices          = 57,   // CATIFTAServices
  // DfTPS_ItfV5FTAServices          = 58,   // CATIFTAServices
  DfTPS_ItfTPSIDServices             = 59    // CATITPSIDServices
  // DfTPS_ItfFTAResultSetServices   = 60,   // CATIFTAResultSetServices
  // DfTPS_ItfFTASetCacheMngtSinglServices = 61, // CATIFTASetCacheMngtSinglServices
  // DfTPS_ItfFTAReorderServices     = 62,   // CATIFTAReorderServices
  // DfTPS_ItfFTAThumbnailServices   = 63    // CATIFTAThumbnailServices
};


/**
 * Creates a TPS component from its identificator defined as a value
 * of enum CATTPSComponent.
 * @param iComp
 *   The component identificator for which an instance is requested.
 * @param oppv
 *   The address where the returned pointer to the interface is located.
 * @return
 *   <dl>
 *   <dt><tt>S_OK</tt>          <dd>if the query succeeds
 *   <dt><tt>E_UNEXPECTED</tt>  <dd>for an unexpected failure
 *   <dt><tt>E_NOINTERFACE</tt> <dd>if the interface does not exist
 *   </dl>
 */
HRESULT ExportedByCATTPSItfCPP 
CATTPSInstantiateComponent (CATTPSComponent iComp, void ** opiComp);

#endif
