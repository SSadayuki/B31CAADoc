#ifndef CATMmrTTRSAssociationCase_H
#define CATMmrTTRSAssociationCase_H

// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

/**
 * Typedef to describe the kind of associative case for TTRS.
 */

enum CATMmrTTRSAssociationCase
{
  CATMmrTTRSAssociationUnknown = 0,
  CATMmrTTRSAssociationUndefined = 1,
  CATMmrTTRSAssociationSSC = 111,            //Spherical-Spherical Coincident
  CATMmrTTRSAssociationSSA = 110,            //Spherical-Spherical non Coincident
  CATMmrTTRSAssociationSPC = 121,            //Spherical-Planar Coincident
  CATMmrTTRSAssociationSPA = 120,            //Spherical-Planar Not Coincident 
  CATMmrTTRSAssociationSCC = 131,            //Spherical-Cylindrical Coincident
  CATMmrTTRSAssociationSCA = 130,            //Spherical-Cylindrical Not Coincident
  CATMmrTTRSAssociationSRC = 151,            //Spherical-Revolute Coincident
  CATMmrTTRSAssociationSRA = 150,            //Spherical-Revolute Not Coincident
  CATMmrTTRSAssociationSIA = 160,           //Spherical-Prismatic Not Coincident
  CATMmrTTRSAssociationSQA = 170,           //Spherical-Complex Not Coincident
  CATMmrTTRSAssociationPPC = 221,           //Planar-Planar Coincident
  CATMmrTTRSAssociationPPP = 222,           //Planar-Planar Parallel
  CATMmrTTRSAssociationPPO = 223,           //Planar-Planar Orthogonal
  CATMmrTTRSAssociationPPA = 220,           //Planar-Planar Prismatic
  CATMmrTTRSAssociationPCC = 231,           //Planar-Cylindrical Coincident
  CATMmrTTRSAssociationPCP = 232,           //Planar-Cylindrical Parallel
  CATMmrTTRSAssociationPCO = 233,           //Planar-Cylindrical Orthogonal
  CATMmrTTRSAssociationPCA = 230,           //Planar-Cylindrical Complexee
  CATMmrTTRSAssociationPRO = 253,           //Planar-Revolute Orthogonal
  CATMmrTTRSAssociationPRA = 250,           //Planar-Revolute Complexe
  CATMmrTTRSAssociationPIP = 262,           //PLanar-Prismatic Parallel
  CATMmrTTRSAssociationPIO = 263,           //Planar-Prismatic Orthogonal
  CATMmrTTRSAssociationPIA = 260,           //Planar-Prismatic Complexe
  CATMmrTTRSAssociationPQA = 270,           //Planar-Complex Complexe
  CATMmrTTRSAssociationCCC = 331,           //Cylindrical-Cylindrical Coincident
  CATMmrTTRSAssociationCCP = 332,           //Cylindrical-Cylindrical Parallel
  CATMmrTTRSAssociationCCO = 335,           //Cylindrical-Cylindrical Orthogonal Coplanar
  CATMmrTTRSAssociationCCL = 334,           //Cylindrical-Cylindrical Coplanar
  CATMmrTTRSAssociationCCR = 333,           //Cylindrical-Cylindrical Perpendicular
  CATMmrTTRSAssociationCCA = 330,           //Cylindrical-Cylindrical Complexe
  CATMmrTTRSAssociationCRC = 351,           //Cylindrical-Revolute Coincident
  CATMmrTTRSAssociationCRP = 352,           //Cylindrical-Revolute Parallel
  CATMmrTTRSAssociationCRA = 350,           //Cylindrical-Revolute Complexe
  CATMmrTTRSAssociationCIP = 362,           //Cylindrical-Prismatic Parallel
  CATMmrTTRSAssociationCIA = 360,           //Cylindrical-Prismatic Complexe
  CATMmrTTRSAssociationCQA = 370,           //Cylindrical-Complex Complexe
  CATMmrTTRSAssociationRRC = 551,           //Revolute-Revolute Coincident
  CATMmrTTRSAssociationRRP = 552,           //Revolute-Revolute Parallel
  CATMmrTTRSAssociationRRA = 550,           //Revolute-Revolute Complexe
  CATMmrTTRSAssociationRIP = 562,           //Revolute-Prismatic Parallel
  CATMmrTTRSAssociationRIA = 560,           //Revolute-Prismatic Complexe
  CATMmrTTRSAssociationRQA = 570,           //Revolute-Complex Complexe
  CATMmrTTRSAssociationIIP = 662,           //Prismatic-Prismatic Parallel
  CATMmrTTRSAssociationIIA = 660,           //Prismatic-Prismatic Complexe
  CATMmrTTRSAssociationIQA = 670,           //Prismatic-Complex Complexe
  CATMmrTTRSAssociationQQA = 770            //Complex-Complex Complexe
};

#endif
