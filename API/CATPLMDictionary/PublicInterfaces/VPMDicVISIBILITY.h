//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================
#ifndef _VPMDicVISIBILITY_h
#define _VPMDicVISIBILITY_h

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * ENOVIA relationship visibility types.
 * @param VPMDicPUBLIC
 *   The ENOVIA relationship is public
 * @param VPMDicPROTECTED
 *   The ENOVIA relationship is protected
 * @param VPMDicPRIVATE
 *   The ENOVIA relationship is private
 */
enum VPMDicVISIBILITY
{
  VPMDicPUBLIC=1
 ,VPMDicPROTECTED=2
 ,VPMDicPRIVATE=3
}
;
#endif
