#ifndef CATTPSLinearSizeOperatorISO_H
#define CATTPSLinearSizeOperatorISO_H

// COPYRIGHT Dassault Systemes 2018

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * List of values to read/set linear size specification operator as per ISO 14405-1:2016 Standard.
 * @param CATTPSLSO_NotApplicable
 *   Value reporting erroneous usage or ISO 14405-1 Standard not supported.
 * @param CATTPSLSO_None
 *   Value reporting unmatching usage of ISO 14405-1 Standard; most of the time appears when
 *   switching from ASME to ISO.
 * @param CATTPSLSO_SA
 *   (SA) symbol when translated into string.
 *<br />   The specification operator is the average of the set of values of the local size specified
 *   by the two previous modifiers (average size).
 * @param CATTPSLSO_SM
 *   (SM) symbol when translated into string.
 *<br />   The specification operator is the median value of the set of values of the local size
 *   specified by the two previous modifiers (median size).
 * @param CATTPSLSO_SD
 *   (SD) symbol when translated into string.
 *<br />   The specification operator is the mean of the maximum and the minimum of the set of values
 *   of the local size specified by the two previous modifiers (mid-range size).
 * @param CATTPSLSO_SX
 *   (SX) symbol when translated into string.
 *<br />   The specification operator is the maximum of the set of values of the local size specified
 *   by the two previous modifiers (maximum size).
 * @param CATTPSLSO_SN
 *   (SN) symbol when translated into string.
 *<br />   The specification operator is the minimum of the set of values of the local size specified
 *   by the two previous modifiers (minimum size).
 * @param CATTPSLSO_SR
 *   (SR) symbol when translated into string.
 *<br />   The specification operator is the upper limit of the difference between the maximum and
 *   the minimum of the set of values of the local size specified by the two previous
 *   modifiers (range of sizes).
 * @param CATTPSLSO_SQ
 *   (SQ) symbol when translated into string.
 *<br />   The specification operator is the upper limit of the standard deviation of the set of values
 *   of the local size specified by the two previous modifiers (standard deviation of sizes).
 * @param CATTPSLSO_LP
 *   (LP) symbol when translated into string.
 *<br />   The specification operator is the two-point size.
 *<br />   If no other specification operator is defined, the specification operator is the maximum of
 *   the set of two-point size values (the maximum two-point size).
 *<br />   The two-point size is a local size which corresponds to the distance between two opposite points.
 * @param CATTPSLSO_LP_SA
 *   (LP)(SA) symbol when translated into string.
 *<br />   The specification operator is the average of the set of two-point size values (the average
 *   two-point size).
 *<br />   The two-point size is a local size which corresponds to the distance between two opposite points.
 * @param CATTPSLSO_LP_SM
 *   (LP)(SM) symbol when translated into string.
 *<br />   The default specification operator for linear sizes is the median value of the set of two-point
 *   size values (median size).
 *<br />   The two-point size is a local size which corresponds to the distance between two opposite points.
 * @param CATTPSLSO_LP_SD
 *   (LP)(SD) symbol when translated into string.
 *<br />   The default specification operator for linear sizes is the mean of the maximum and the minimum
 *   of the set of two-point size values (mid-range size).
 *<br />   The two-point size is a local size which corresponds to the distance between two opposite points.
 * @param CATTPSLSO_LP_SX
 *   (LP)(SX) symbol when translated into string.
 *<br />   The default specification operator for linear sizes is the maximum of the set of two-point
 *   size values (maximum size).
 *<br />   The two-point size is a local size which corresponds to the distance between two opposite points.
 * @param CATTPSLSO_LP_SN
 *   (LP)(SN) symbol when translated into string.
 *<br />   The default specification operator for linear sizes is the minimum of the set of two-point
 *   size values (minimum size).
 *<br />   The two-point size is a local size which corresponds to the distance between two opposite points.
 * @param CATTPSLSO_LS
 *   (LS) symbol when translated into string.
 *<br />   The specification operator is the spherical size.
 *<br />   If no other specification operator is defined, the specification operator is the maximum of the set
 *   of spherical size values (the maximum spherical size).
 *<br />   The spherical size is a local size which corresponds to the diameter of the maximum inscribed sphere.
 * @param CATTPSLSO_LS_SA
 *   (LS)(SA) symbol when translated into string.
 *<br />   The specification operator is the average of the set of spherical size values (the average spherical size).
 *<br />   The spherical size is a local size which corresponds to the diameter of the maximum inscribed sphere.
 * @param CATTPSLSO_LS_SM
 *   (LS)(SM) symbol when translated into string.
 *<br />   The specification operator is the median value of the set of spherical size values (the median spherical size).
 *<br />   The spherical size is a local size which corresponds to the diameter of the maximum inscribed sphere.
 * @param CATTPSLSO_LS_SD
 *   (LS)(SD) symbol when translated into string.
 *<br />   The specification operator is the mean of the maximum and the minimum of the set of spherical
 *   size values (the mid-range spherical size).
 *<br />   The spherical size is a local size which corresponds to the diameter of the maximum inscribed sphere.
 * @param CATTPSLSO_LS_SX
 *   (LS)(SX) symbol when translated into string.
 *<br />   The specification operator is the maximum of the set of spherical size values (the maximum spherical size).
 *<br />   The spherical size is a local size which corresponds to the diameter of the maximum inscribed sphere.
 * @param CATTPSLSO_LS_SN
 *   (LS)(SN) symbol when translated into string.
 *<br />   The specification operator is the minimum of the set of spherical size values (the minimum spherical size).
 *<br />   The spherical size is a local size which corresponds to the diameter of the maximum inscribed sphere.
 * @param CATTPSLSO_GG
 *   (GG) symbol when translated into string.
 *<br />   The default specification operator for linear sizes is the maximum inscribed size (i.e. the
 *   size of the associated integral feature obtained by applying the maximum inscribed criterion).
 * @param CATTPSLSO_GX
 *   (GX) symbol when translated into string.
 *<br />   The specification operator is the maximum inscribed size (i.e. the size of the associated integral
 *   feature obtained by applying the maximum inscribed criterion).
 * @param CATTPSLSO_GN
 *   (GN) symbol when translated into string.
 *<br />   The specification operator is the minimum circumscribed size (i.e. the size of the associated integral
 *   feature obtained by applying the minimum circumscribed criterion).
 * @param CATTPSLSO_GC
 *   (GC) symbol when translated into string.
 *<br />   The specification operator is the minimax size (i.e. the size of the associated integral feature obtained
 *   by applying the minimax (Chebyshev) criterion without constraints).
 * @param CATTPSLSO_E
 *   (E) symbol when translated into string.
 *   The specification operator is the envelope requirement.
 *<br />   For external (male) features of size, it corresponds to the combination of the two-point size applied
 *   for the lower limit of size and the minimum circumscribed size applied for the upper limit of size. 
 *<br />   For internal (female) features of size, it corresponds to the combination of the two-point size applied
 *   for the upper limit of size and the maximum inscribed size applied for the lower limit of size. 
 * @param CATTPSLSO_CC
 *   (CC) symbol when translated into string.
 *<br />   The specification operator is the circumference diameter.
 *<br />   If no other specification operator is defined, the specification operator is the maximum of the set of
 *   circumference diameters (the maximum circumference diameter).
 *<br />   The circumference diameter is a calculated size which corresponds to the diameter d, obtained from the
 *   formula d=C/PI, where C is the length of the integral extracted line in a cross section normal to the axis
 *   of the least-squares associated cylinder.
 * @param CATTPSLSO_CC_SA
 *   (CC)(SA) symbol when translated into string.
 *<br />   The specification operator is the average of the set of circumference diameters (the average
 *   circumference diameter).
 *<br />   The circumference diameter is a calculated size which corresponds to the diameter d, obtained from the
 *   formula d=C/PI, where C is the length of the integral extracted line in a cross section normal to the axis
 *   of the least-squares associated cylinder.
 * @param CATTPSLSO_CC_SM
 *   (CC)(SM) symbol when translated into string.
 *<br />   The specification operator is the median value of the set of circumference diameters (the median
 *   circumference diameter).
 *<br />   The circumference diameter is a calculated size which corresponds to the diameter d, obtained from the
 *   formula d=C/PI, where C is the length of the integral extracted line in a cross section normal to the axis
 *   of the least-squares associated cylinder.
 * @param CATTPSLSO_CC_SD
 *   (CC)(SD) symbol when translated into string.
 *<br />   The specification operator is the mean of the maximum and the minimum of the set of area diameters
 *   (the mid-range area diameter).
 *<br />   The area diameter is a calculated size which corresponds to the diameter d, obtained from the formula
 *   d=SQRT(4*A/PI), where A is the area limited by the integral extracted line of a cross section normal to
 *   the axis of the least-squares associated cylinder, and SQRT is the square root function.
 * @param CATTPSLSO_CC_SX
 *   (CC)(SX) symbol when translated into string.
 *<br />   The specification operator is the maximum of the set of area diameters (the maximum area diameter).
 *<br />   The area diameter is a calculated size which corresponds to the diameter d, obtained from the formula
 *   d=SQRT(4*A/PI), where A is the area limited by the integral extracted line of a cross section normal
 *   to the axis of the least-squares associated cylinder, and SQRT is the square root function.
 * @param CATTPSLSO_CC_SN
 *   (CC)(SN) symbol when translated into string.
 *<br />   The specification operator is the minimum of the set of area diameters (the minimum area diameter).
 *<br />   The area diameter is a calculated size which corresponds to the diameter d, obtained from the formula
 *   d=SQRT(4*A/PI), where A is the area limited by the integral extracted line of a cross section normal
 *   to the axis of the least-squares associated cylinder, and SQRT is the square root function.
 * @param CATTPSLSO_CC_SR
 *   (CC)(SR) symbol when translated into string.
 *<br />   The specification operator is the upper limit of the range of circumference diameters
 *   (i.e. the difference between the maximum of the set of circumference diameter values and the minimum
 *   of the set of circumference diameter values).
 *<br />   The circumference diameter is a calculated size which corresponds to the diameter d, obtained from the
 *   formula d=C/PI, where C is the length of the integral extracted line in a cross section normal to
 *   the axis of the least-squares associated cylinder.
 * @param CATTPSLSO_CC_SQ
 *   (CC)(SQ) symbol when translated into string.
 *<br />   The specification operator is the upper limit of the standard deviation of area diameters
 *   (i.e. the standard deviation of the set of area diameter values).
 *<br />   The area diameter is a calculated size which corresponds to the diameter d, obtained from the formula
 *   d=SQRT(4*A/PI), where A is the area limited by the integral extracted line of a cross section normal
 *   to the axis of the least-squares associated cylinder, and SQRT is the square root function.
 * @param CATTPSLSO_CA
 *   (CA) symbol when translated into string.
 *<br />   The specification operator is the area diameter.
 *<br />   If no other specification operator is defined, the specification operator is the maximum of the set
 *   of area diameters (the maximum area diameter).
 *<br />   The area diameter is a calculated size which corresponds to the diameter d, obtained from the formula
 *   d=SQRT(4*A/PI), where A is the area limited by the integral extracted line of a cross section normal
 *   to the axis of the least-squares associated cylinder, and SQRT is the square root function.
 * @param CATTPSLSO_CA_SA
 *   (CA)(SA) symbol when translated into string.
 *<br />   The specification operator is the average of the set of area diameters (the average area diameter).
 *<br />   The area diameter is a calculated size which corresponds to the diameter d, obtained from the formula
 *   d=SQRT(4*A/PI), where A is the area limited by the integral extracted line of a cross section normal
 *   to the axis of the least-squares associated cylinder, and SQRT is the square root function.
 * @param CATTPSLSO_CA_SM
 *   (CA)(SM) symbol when translated into string.
 *<br />   The specification operator is the median value of the set of area diameters (the median area diameter).
 *<br />   The area diameter is a calculated size which corresponds to the diameter d, obtained from the formula
 *   d=SQRT(4*A/PI), where A is the area limited by the integral extracted line of a cross section normal
 *   to the axis of the least-squares associated cylinder, and SQRT is the square root function.
 * @param CATTPSLSO_CA_SD
 *   (CA)(SD) symbol when translated into string.
 *<br />   The specification operator is the mean of the maximum and the minimum of the set of area
 *   diameters (the mid-range area diameter).
 *<br />   The area diameter is a calculated size which corresponds to the diameter d, obtained from the formula
 *   d=SQRT(4*A/PI), where A is the area limited by the integral extracted line of a cross section normal
 *   to the axis of the least-squares associated cylinder, and SQRT is the square root function.
 * @param CATTPSLSO_CA_SX
 *   (CA)(SX) symbol when translated into string.
 *<br />   The specification operator is the maximum of the set of area diameters (the maximum area diameter).
 *<br />   The area diameter is a calculated size which corresponds to the diameter d, obtained from the formula
 *   d=SQRT(4*A/PI), where A is the area limited by the integral extracted line of a cross section normal
 *   to the axis of the least-squares associated cylinder, and SQRT is the square root function.
 * @param CATTPSLSO_CA_SN
 *   (CA)(SN) symbol when translated into string.
 *<br />   The specification operator is the minimum of the set of area diameters (the minimum area diameter).
 *<br />   The area diameter is a calculated size which corresponds to the diameter d, obtained from the formula
 *   d=SQRT(4*A/PI), where A is the area limited by the integral extracted line of a cross section normal
 *   to the axis of the least-squares associated cylinder, and SQRT is the square root function.
 * @param CATTPSLSO_CA_SR
 *   (CA)(SR) symbol when translated into string.
 *<br />   The specification operator is the upper limit of the range of area diameters (i.e. the difference
 *   between the maximum of the set of area diameter values and the minimum of the set of area diameter values).
 *<br />   The area diameter is a calculated size which corresponds to the diameter d, obtained from the formula
 *   d=SQRT(4*A/PI), where A is the area limited by the integral extracted line of a cross section normal
 *   to the axis of the least-squares associated cylinder, and SQRT is the square root function.
 * @param CATTPSLSO_CA_SQ
 *   (CA)(SQ) symbol when translated into string.
 *<br />   The specification operator is the upper limit of the standard deviation of area diameters
 *   (i.e. the standard deviation of the set of area diameter values).
 *<br />   The area diameter is a calculated size which corresponds to the diameter d, obtained from the formula
 *   d=SQRT(4*A/PI), where A is the area limited by the integral extracted line of a cross section normal
 *   to the axis of the least-squares associated cylinder, and SQRT is the square root function.
 * @param CATTPSLSO_CV
 *   (CV) symbol when translated into string.
 *<br />   The specification operator is the volume diameter (i.e. the calculated size corresponding to
 *   the diameter d, obtained from the formula d=SQRT(4*V/(PI*L)), where V is the volume limited by the
 *   integral extracted cylinder, L is the height of the cylinder taken between two parallel planes perpendicular
 *   to the axis of the least-squares associated cylinder with the maximum distance between them
 *   and containing a complete section of the feature, and SQRT is the square root function).
 * @param CATTPSLSO_Length
 *   The specification applies to any restricted portion of the considered feature of size.
 * @param CATTPSLSO_ACS
 *   The specification applies to any cross section of the considered feature of size.
 * @param CATTPSLSO_ALS
 *   The specification applies to any longitudinal section of the considered feature of size.
 * @param CATTPSLSO_SCS
 *   The specification applies to one or several specific fixed cross sections of the complete feature of size.
 *<br />Both the SCS modifier and the cross section identifiers are displayed in the 3D dimension (example: Phi 10 H7 SCS [A, B]).
 * @param CATTPSLSO_SCSndId
 *   The specification applies to one or several specific fixed cross sections of the complete feature of size.
 *<br />Only the SCS modifier is displayed the 3D dimension. The cross section identifiers are not displayed in the 3D dimension (example: Phi 10 H7 SCS).
 * @param CATTPSLSO_SCSnd
 *   The specification applies to one or several specific fixed cross sections of the complete feature of size.
 *<br />The SCS modifier and the cross section identifiers are not displayed in the 3D dimension (example: Phi 10 H7).
 */
enum CATTPSLinearSizeOperatorISO 
{
  CATTPSLSO_NotApplicable = -1,
  CATTPSLSO_None          = 0,
  CATTPSLSO_SA            = 1,               // 3d part of operator expression
  CATTPSLSO_SM            = 2,               // 3d part of operator expression
  CATTPSLSO_SD            = 3,               // 3d part of operator expression
  CATTPSLSO_SX            = 4,               // 3d part of operator expression
  CATTPSLSO_SN            = 5,               // 3d part of operator expression
  CATTPSLSO_SR            = 6,               // 3d part of operator expression
  CATTPSLSO_SQ            = 7,               // 3d part of operator expression
  CATTPSLSO_LP            = 10,              // Default expression or 1st part of operator expression
  CATTPSLSO_LP_SA         = 11,              // Default expression or 1st part of operator expression
  CATTPSLSO_LP_SM         = 12,              // Default expression or 1st part of operator expression
  CATTPSLSO_LP_SD         = 13,              // Default expression or 1st part of operator expression
  CATTPSLSO_LP_SX         = 14,              // Default expression or 1st part of operator expression
  CATTPSLSO_LP_SN         = 15,              // Default expression or 1st part of operator expression
  CATTPSLSO_LP_SR         = 16,              // 1st part of operator expression
  CATTPSLSO_LP_SQ         = 17,              // 1st part of operator expression
  CATTPSLSO_LS            = 20,              // Default expression or 1st part of operator expression
  CATTPSLSO_LS_SA         = 21,              // Default expression or 1st part of operator expression
  CATTPSLSO_LS_SM         = 22,              // Default expression or 1st part of operator expression
  CATTPSLSO_LS_SD         = 23,              // Default expression or 1st part of operator expression
  CATTPSLSO_LS_SX         = 24,              // Default expression or 1st part of operator expression
  CATTPSLSO_LS_SN         = 25,              // Default expression or 1st part of operator expression
  CATTPSLSO_LS_SR         = 26,              // 1st part of operator expression
  CATTPSLSO_LS_SQ         = 27,              // 1st part of operator expression
  CATTPSLSO_GG            = 30,              // Default expression or 1st part of operator expression
  CATTPSLSO_GX            = 40,              // Default expression or 1st part of operator expression
  CATTPSLSO_GN            = 50,              // Default expression or 1st part of operator expression
  CATTPSLSO_GC            = 60,              // Default expression or 1st part of operator expression
  CATTPSLSO_E             = 70,              // 1st part of operator expression
  CATTPSLSO_CC            = 80,              // 1st part of operator expression
  CATTPSLSO_CC_SA         = 81,              // 1st part of operator expression
  CATTPSLSO_CC_SM         = 82,              // 1st part of operator expression
  CATTPSLSO_CC_SD         = 83,              // 1st part of operator expression
  CATTPSLSO_CC_SX         = 84,              // 1st part of operator expression
  CATTPSLSO_CC_SN         = 85,              // 1st part of operator expression
  CATTPSLSO_CC_SR         = 86,              // 1st part of operator expression
  CATTPSLSO_CC_SQ         = 87,              // 1st part of operator expression
  CATTPSLSO_CA            = 90,              // 1st part of operator expression
  CATTPSLSO_CA_SA         = 91,              // 1st part of operator expression
  CATTPSLSO_CA_SM         = 92,              // 1st part of operator expression
  CATTPSLSO_CA_SD         = 93,              // 1st part of operator expression
  CATTPSLSO_CA_SX         = 94,              // 1st part of operator expression
  CATTPSLSO_CA_SN         = 95,              // 1st part of operator expression
  CATTPSLSO_CA_SR         = 96,              // 1st part of operator expression
  CATTPSLSO_CA_SQ         = 97,              // 1st part of operator expression
  CATTPSLSO_CV            = 100,             // 1st part of operator expression
  CATTPSLSO_Length        = 200,             // 2nd part of operator expression (to precise SCS, specific cross section is requested)
  CATTPSLSO_ACS           = 210,             // 2nd part of operator expression (to precise SCS, specific cross section is requested)
  CATTPSLSO_ALS           = 211,             // 2nd part of operator expression (to precise SCS, specific cross section is requested)
  CATTPSLSO_SCS           = 212,             // 2nd part of operator expression (to precise SCS, specific cross section is requested)
  CATTPSLSO_SCSndId       = 213,             // 2nd part of operator expression (to precise SCS, specific cross section is requested, same semantic as CATTPSLSO_SCS)
  CATTPSLSO_SCSnd         = 214              // 2nd part of operator expression (to precise SCS, specific cross section is requested, same semantic as CATTPSLSO_SCS)
};

#endif
