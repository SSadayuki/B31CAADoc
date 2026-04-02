#ifndef CATTPSTTRSServicesEnum_H
#define CATTPSTTRSServicesEnum_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * TTRS scanning modes.
 * <br><b>Role</b>: Describes the list of scanning modes available
 * for retrieving TTRS components using the method @href CATITPSTTRSServices#GetComponentsList
 *  @param CATTPSScanComponentsSupport
 *    Scan all TTRS Support under a TTRS
 *  @param CATTPSScanComponentsSurface
 *    Scan all Cells under a TTRS
 *  @param CATTPSScanComponentsAllTTRS
 *    Scan all TTRS under a TTRS
 *  @param CATTPSScanComponentsAllRGE
 *    Scan all RGE under a TTRS
 *  @param CATTPSScanComponentsTopology
 *    Scan all Cells and Bodies under a TTRS
 * @see CATITPSTTRSServices
 */

enum CATTPSScanComponentsMode
{  
  CATTPSScanComponentsSupport = 0,
  CATTPSScanComponentsSurface = 1,
  CATTPSScanComponentsAllTTRS = 2,
  CATTPSScanComponentsAllRGE  = 3,
  CATTPSScanComponentsTopology = 4
};

#endif
