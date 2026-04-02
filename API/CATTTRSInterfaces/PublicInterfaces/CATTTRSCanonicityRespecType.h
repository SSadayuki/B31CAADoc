// COPYRIGHT DASSAULT SYSTEMES  2003
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/

#ifndef CATTTRSCanonicityRespecType_H
#define CATTTRSCanonicityRespecType_H

/**
 * Types of TTRS Canonicity Respecification.
 */
enum CATTTRSCanonicityRespecType 
{
  CATTTRSRespecComputedFromGeom=0,
  CATTTRSRespecRedefinedByMath=1,
  CATTTRSRespecRedefinedByGeom=2,
  CATTTRSRespecRedefinedThread=3,
  CATTTRSRespecRedefinedSize=4
};

#endif
