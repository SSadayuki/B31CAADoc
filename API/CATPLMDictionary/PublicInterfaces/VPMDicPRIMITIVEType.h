//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================
#ifndef _VPMDicPRIMITIVEType_h
#define _VPMDicPRIMITIVEType_h
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * ENOVIA primitive types.
 * @param VPMDicUNDEFINED
 *   The ENOVIA primitive is of an undefined type
 * @param VPMDicBOOLEAN
 *   The ENOVIA primitive is a boolean
 * @param VPMDicINTEGER
 *   The ENOVIA primitive is an integer
 * @param VPMDicDOUBLE
 *   The ENOVIA primitive is a double
 * @param VPMDicSTRING
 *   The ENOVIA primitive is a character string
 * @param VPMDicBINARY
 *   The ENOVIA primitive is a binary
 * @param VPMDicDATE
 *   The ENOVIA primitive is a date
 * @param VPMDicLOGICAL
 *   The ENOVIA primitive is a logical
 * @param VPMDicURL
 *   The ENOVIA primitive is a URL
 * @param VPMDicANYOBJECT
 *   The ENOVIA primitive is a any object
 */

enum VPMDicPRIMITIVEType
{
  VPMDicUNDEFINED                 =0
 ,VPMDicBOOLEAN                   =1
 ,VPMDicINTEGER                   =2
 ,VPMDicDOUBLE                    =3
 ,VPMDicSTRING                    =4
 ,VPMDicBINARY                    =5
 ,VPMDicDATE                      =6
 ,VPMDicLOGICAL                   =7
 ,VPMDicURL                       =8
 ,VPMDicANYOBJECT                 =9
}
;
#define _VPMDicPRIMITIVETypeNumber  10
#endif
