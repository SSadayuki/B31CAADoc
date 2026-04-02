#ifndef CATTPSAngularSizeOperatorISO_H
#define CATTPSAngularSizeOperatorISO_H

// COPYRIGHT Dassault Systemes 2018

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * List of values to read/set angular size specification operator as per ISO 14405-3:2016 Standard.
 * @param CATTPSASO_NotApplicable
 *   Value reporting erroneous usage or ISO 14405-3 Standard not supported.
 * @param CATTPSASO_None
 *   Value reporting unmatching usage of ISO 14405-3 Standard; most of the time appears when
 *   switching from ASME to ISO.
 * @param CATTPSASO_SA
 *   (SA) symbol when translated into string.
 *<br />   The specification operator is the average of the set of values of the local size specified
 *   by the two previous modifiers (average size).
 * @param CATTPSASO_SM
 *   (SM) symbol when translated into string.
 *<br />   The specification operator is the median value of the set of values of the local size
 *   specified by the two previous modifiers (median size).
 * @param CATTPSASO_SD
 *   (SD) symbol when translated into string.
 *<br />   The specification operator is the mean of the maximum and the minimum of the set of values
 *   of the local size specified by the two previous modifiers (mid-range size).
 * @param CATTPSASO_SX
 *   (SX) symbol when translated into string.
 *<br />   The specification operator is the maximum of the set of values of the local size specified
 *   by the two previous modifiers (maximum size).
 * @param CATTPSASO_SN
 *   (SN) symbol when translated into string.
 *<br />   The specification operator is the minimum of the set of values of the local size specified
 *   by the two previous modifiers (minimum size).
 * @param CATTPSASO_SR
 *   (SR) symbol when translated into string.
 *<br />   The specification operator is the upper limit of the difference between the maximum and
 *   the minimum of the set of values of the local size specified by the two previous
 *   modifiers (range of sizes).
 * @param CATTPSASO_SQ
 *   (SQ) symbol when translated into string.
 *<br />   The specification operator is the upper limit of the standard deviation of the set of values
 *   of the local size specified by the two previous modifiers (standard deviation of sizes).
 * @param CATTPSASO_GG
 *   (GG) symbol when translated into string.
 *<br />   The specification operator is the least-squares global angular size.
 *<br />   If the angular feature of size is a cone, it's the angular dimension of the associated
 *   integral feature (a cone) obtained by applying the least-squares (Gaussian) criterion without
 *   constraints.
 *<br />   If the angular feature of size is a pair of planes (a wedge) or a pair of coplanar straight
 *   lines, it's the angular dimension between the associated integral features (a pair of planes or a
 *   pair of coplanar straight lines) obtained by applying the least-squares (Gaussian) criterion without
 *   constraints (each element being associated independently)..
 * @param CATTPSASO_GC
 *   (GC) symbol when translated into string.
 *<br />   The specification operator is the minimax global angular size.
 *<br />   If the angular feature of size is a cone, it's the angular dimension of the associated integral
 *   feature (a cone) obtained by applying the minimax (Chebyshev) criterion without constraints.
 *<br />   If the angular feature of size is a pair of planes (a wedge) or a pair of coplanar straight lines,
 *   it's the angular dimension between the associated integral features (a pair of planes or a pair of coplanar
 *   straight lines) obtained by applying the minimax (Chebyshev) criterion without constraints (each element
 *   being associated independently).
 * @param CATTPSASO_LC
 *   (LC) symbol when translated into string.
 *<br />   The specification operator is the two-line angular size.
 *<br />   If no other specification operator is defined, the specification operator is the maximum of the
 *   set of two-line angular size values (the maximum two-line angular size).
 *<br />   The two-line angular size is a local size.
 *<br />   Two sequential association operations are used to define it.
 *<br />     a) To associate the real angular features of size with a feature of the same nature.
 *<br />     b) To associate the extracted lines (coming from intersection of the real angular features of size
 *   and the intersection plane) with two straight lines. 
 *<br />   For the first association (a), we use the least squares association criterion (without constraints)
 *   for the two extracted surfaces (independently of each other) in case of a prismatic feature of size (wedge),
 *   or for the extracted surface in case of a revolute feature of size (cone).
 *<br />   The first association with a least squares criterion is to establish either a stable intersection line
 *   for the prismatic feature of size, or a stable axis for the revolute feature of size.
 *<br />   For the second association (b), we use the minimax association criterion. The two lines are associated
 *   independently of each other. 
 * @param CATTPSASO_LC_SA
 *   (LC)(SA) symbol when translated into string.
 *<br />   The specification operator is the average of the set of two-line angular size values (the average
 *   two-line angular size).
 *<br />   The two-line angular size is a local size.
 *<br />   Two sequential association operations are used to define it.
 *<br />     a) To associate the real angular features of size with a feature of the same nature.
 *<br />     b) To associate the extracted lines (coming from intersection of the real angular features of size
 *   and the intersection plane) with two straight lines. 
 *<br />   For the first association (a), we use the least squares association criterion (without constraints) for
 *   the two extracted surfaces (independently of each other) in case of a prismatic feature of size (wedge), or for
 *   the extracted surface in case of a revolute feature of size (cone).
 *<br />   The first association with a least squares criterion is to establish either a stable intersection line for
 *   the prismatic feature of size, or a stable axis for the revolute feature of size.
 *<br />   For the second association (b), we use the minimax association criterion. The two lines are associated
 *   independently of each other. 
 * @param CATTPSASO_LC_SM
 *   (LC)(SM) symbol when translated into string.
 *<br />   The specification operator is the median value of the set of two-line angular size values (the median
 *   two-line angular size).
 *<br />   The two-line angular size is a local size.
 *<br />   Two sequential association operations are used to define it.
 *<br />     a) To associate the real angular features of size with a feature of the same nature.
 *<br />     b) To associate the extracted lines (coming from intersection of the real angular features of size and
 *   the intersection plane) with two straight lines. 
 *<br />   For the first association (a), we use the least squares association criterion (without constraints) for the two
 *   extracted surfaces (independently of each other) in case of a prismatic feature of size (wedge), or for the extracted
 *   surface in case of a revolute feature of size (cone).
 *<br />   The first association with a least squares criterion is to establish either a stable intersection line for the
 *   prismatic feature of size, or a stable axis for the revolute feature of size.
 *<br />   For the second association (b), we use the minimax association criterion. The two lines are associated
 *   independently of each other. 
 * @param CATTPSASO_LC_SD
 *   (LC)(SD) symbol when translated into string.
 *<br />   The specification operator is the mean of the maximum and the minimum of the set of two-line angular size values
 *   (the mid-range two-line angular size).
 *<br />   The two-line angular size is a local size.
 *<br />   Two sequential association operations are used to define it.
 *<br />     a) To associate the real angular features of size with a feature of the same nature.
 *<br />     b) To associate the extracted lines (coming from intersection of the real angular features of size and the
 *   intersection plane) with two straight lines. 
 *<br />   For the first association (a), we use the least squares association criterion (without constraints) for the two
 *   extracted surfaces (independently of each other) in case of a prismatic feature of size (wedge), or for the extracted
 *   surface in case of a revolute feature of size (cone).
 *<br />   The first association with a least squares criterion is to establish either a stable intersection line for the
 *   prismatic feature of size, or a stable axis for the revolute feature of size.
 *<br />   For the second association (b), we use the minimax association criterion. The two lines are associated independently
 *   of each other.
 * @param CATTPSASO_LC_SX
 *   (LC)(SX) symbol when translated into string.
 *<br />   The specification operator is the maximum of the set of two-line angular size values (the maximum two-line
 *   angular size).
 *<br />   The two-line angular size is a local size.
 *<br />   Two sequential association operations are used to define it.
 *<br />     a) To associate the real angular features of size with a feature of the same nature.
 *<br />     b) To associate the extracted lines (coming from intersection of the real angular features of size and the
 *   intersection plane) with two straight lines. 
 *<br />   For the first association (a), we use the least squares association criterion (without constraints) for the two
 *   extracted surfaces (independently of each other) in case of a prismatic feature of size (wedge), or for the extracted
 *   surface in case of a revolute feature of size (cone).
 *<br />   The first association with a least squares criterion is to establish either a stable intersection line for the
 *   prismatic feature of size, or a stable axis for the revolute feature of size.
 *<br />   For the second association (b), we use the minimax association criterion. The two lines are associated independently
 *   of each other. 
 * @param CATTPSASO_LC_SN
 *   (LC)(SN) symbol when translated into string.
 *<br />   The specification operator is the minimum of the set of two-line angular size values (the minimum two-line
 *   angular size).
 *<br />   The two-line angular size is a local size.
 *<br />   Two sequential association operations are used to define it.
 *<br />     a) To associate the real angular features of size with a feature of the same nature.
 *<br />     b) To associate the extracted lines (coming from intersection of the real angular features of size and the intersection
 *   plane) with two straight lines. 
 *<br />   For the first association (a), we use the least squares association criterion (without constraints) for the two extracted
 *   surfaces (independently of each other) in case of a prismatic feature of size (wedge), or for the extracted surface in case of
 *   a revolute feature of size (cone).
 *<br />   The first association with a least squares criterion is to establish either a stable intersection line for the prismatic
 *   feature of size, or a stable axis for the revolute feature of size.
 *<br />   For the second association (b), we use the minimax association criterion. The two lines are associated independently
 *   of each other. 
 * @param CATTPSASO_LC_SR
 *   (LC)(SR) symbol when translated into string.
 *<br />    The specification operator is the upper limit of the range of two-line angular sizes (i.e. the difference between
 *   the maximum of the set of two-line angular size values and the minimum of the set of two-line angular size values).
 *<br />    The two-line angular size is a local size.
 *<br />    Two sequential association operations are used to define it.
 *<br />      a) To associate the real angular features of size with a feature of the same nature.
 *<br />      b) To associate the extracted lines (coming from intersection of the real angular features of size and the
 *   intersection plane) with two straight lines. 
 *<br />   For the first association (a), we use the least squares association criterion (without constraints) for the two extracted
 *   surfaces (independently of each other) in case of a prismatic feature of size (wedge), or for the extracted surface in case of
 *   a revolute feature of size (cone).
 *<br />    The first association with a least squares criterion is to establish either a stable intersection line for the prismatic
 *   feature of size, or a stable axis for the revolute feature of size.
 *<br />   For the second association (b), we use the minimax association criterion. The two lines are associated independently of
 *   each other.
 * @param CATTPSASO_LC_SQ
 *   (LC)(SQ) symbol when translated into string.
 *<br />    The specification operator is the upper limit of the standard deviation of two-line angular sizes (i.e. the standard
 *   deviation of the set of two-line angular size values).
 *<br />    The two-line angular size is a local size.
 *<br />    Two sequential association operations are used to define it.
 *<br />       a) To associate the real angular features of size with a feature of the same nature.
 *<br />       b) To associate the extracted lines (coming from intersection of the real angular features of size and the intersection
 *   plane) with two straight lines. 
 *<br />    For the first association (a), we use the least squares association criterion (without constraints) for the two extracted
 *   surfaces (independently of each other) in case of a prismatic feature of size (wedge), or for the extracted surface in case of
 *   a revolute feature of size (cone).
 *<br />    The first association with a least squares criterion is to establish either a stable intersection line for the prismatic
 *   feature of size, or a stable axis for the revolute feature of size.
 *<br />    For the second association (b), we use the minimax association criterion. The two lines are associated independently
 *   of each other.
 * @param CATTPSASO_LG
 *   (LG) symbol when translated into string.
 *<br />    The specification operator is the two-line angular size.
 *<br />    If no other specification operator is defined, the specification operator is the maximum of the set of two-line angular
 *   size values (the maximum two-line angular size).
 *<br />    The two-line angular size is a local size.
 *<br />    Two sequential association operations are used to define it.
 *<br />      a) To associate the real angular features of size with a feature of the same nature.
 *<br />      b) To associate the extracted lines (coming from intersection of the real angular features of size and the intersection
 *   plane) with two straight lines. 
 *<br />    For the first association (a), we use the least squares association criterion (without constraints) for the two extracted
 *   surfaces (independently of each other) in case of a prismatic feature of size (wedge), or for the extracted surface in case of a
 *   revolute feature of size (cone).
 *<br />    The first association with a least squares criterion is to establish either a stable intersection line for the prismatic
 *   feature of size, or a stable axis for the revolute feature of size.
 *<br />    For the second association (b), we use the least squares association criterion (without constraints). The two lines are
 *   associated independently of each other. 
 * @param CATTPSASO_LG_SA
 *   (LG)(SA) symbol when translated into string.
 *<br />    The specification operator is the average of the set of two-line angular size values (the average two-line angular size).
 *<br />    The two-line angular size is a local size.
 *<br />    Two sequential association operations are used to define it.
 *<br />      a) To associate the real angular features of size with a feature of the same nature.
 *<br />      b) To associate the extracted lines (coming from intersection of the real angular features of size and the intersection
 *   plane) with two straight lines. 
 *<br />    For the first association (a), we use the least squares association criterion (without constraints) for the two extracted
 *   surfaces (independently of each other) in case of a prismatic feature of size (wedge), or for the extracted surface in case of
 *   a revolute feature of size (cone).
 *<br />    The first association with a least squares criterion is to establish either a stable intersection line for the prismatic
 *   feature of size, or a stable axis for the revolute feature of size.
 *<br />    For the second association (b), we use the least squares association criterion (without constraints). The two lines are
 *   associated independently of each other.
 * @param CATTPSASO_LG_SM
 *   (LG)(SM) symbol when translated into string.
 *<br />    The specification operator is the median value of the set of two-line angular size values (the median two-line angular size).
 *<br />    The two-line angular size is a local size.
 *<br />    Two sequential association operations are used to define it.
 *<br />      a) To associate the real angular features of size with a feature of the same nature.
 *<br />      b) To associate the extracted lines (coming from intersection of the real angular features of size and the intersection
 *   plane) with two straight lines. 
 *<br />    For the first association (a), we use the least squares association criterion (without constraints) for the two extracted
 *   surfaces (independently of each other) in case of a prismatic feature of size (wedge), or for the extracted surface in case of
 *   a revolute feature of size (cone).
 *<br />    The first association with a least squares criterion is to establish either a stable intersection line for the prismatic
 *   feature of size, or a stable axis for the revolute feature of size.
 *<br />    For the second association (b), we use the least squares association criterion (without constraints). The two lines are
 *   associated independently of each other. 
 * @param CATTPSASO_LG_SD
 *   (LG)(SD) symbol when translated into string.
 *<br />    The specification operator is the mean of the maximum and the minimum of the set of two-line angular size values (the
 *   mid-range two-line angular size).
 *<br />    The two-line angular size is a local size.
 *<br />    Two sequential association operations are used to define it.
 *<br />      a) To associate the real angular features of size with a feature of the same nature.
 *<br />      b) To associate the extracted lines (coming from intersection of the real angular features of size and the intersection
 *   plane) with two straight lines. 
 *<br />    For the first association (a), we use the least squares association criterion (without constraints) for the two extracted
 *   surfaces (independently of each other) in case of a prismatic feature of size (wedge), or for the extracted surface in case of
 *   a revolute feature of size (cone).
 *<br />    The first association with a least squares criterion is to establish either a stable intersection line for the prismatic
 *   feature of size, or a stable axis for the revolute feature of size.
 *<br />    For the second association (b), we use the least squares association criterion (without constraints). The two lines are
 *   associated independently of each other.
 * @param CATTPSASO_LG_SX
 *   (LG)(SX) symbol when translated into string.
 *<br />    The specification operator is the maximum of the set of two-line angular size values (the maximum two-line angular size).
 *<br />    The two-line angular size is a local size.
 *<br />    Two sequential association operations are used to define it.
 *<br />      a) To associate the real angular features of size with a feature of the same nature.
 *<br />      b) To associate the extracted lines (coming from intersection of the real angular features of size and the intersection
 *   plane) with two straight lines. 
 *<br />    For the first association (a), we use the least squares association criterion (without constraints) for the two extracted
 *   surfaces (independently of each other) in case of a prismatic feature of size (wedge), or for the extracted surface in case of
 *   a revolute feature of size (cone).
 *<br />    The first association with a least squares criterion is to establish either a stable intersection line for the prismatic
 *   feature of size, or a stable axis for the revolute feature of size.
 *<br />    For the second association (b), we use the least squares association criterion (without constraints). The two lines are
 *   associated independently of each other.
 * @param CATTPSASO_LG_SN
 *   (LG)(SN) symbol when translated into string.
 *<br />    The specification operator is the minimum of the set of two-line angular size values (the minimum two-line angular size).
 *<br />    The two-line angular size is a local size.
 *<br />    Two sequential association operations are used to define it.
 *<br />      a) To associate the real angular features of size with a feature of the same nature.
 *<br />      b) To associate the extracted lines (coming from intersection of the real angular features of size and the intersection
 *   plane) with two straight lines. 
 *<br />    For the first association (a), we use the least squares association criterion (without constraints) for the two extracted
 *   surfaces (independently of each other) in case of a prismatic feature of size (wedge), or for the extracted surface in case of
 *   a revolute feature of size (cone).
 *<br />    The first association with a least squares criterion is to establish either a stable intersection line for the prismatic
 *   feature of size, or a stable axis for the revolute feature of size.
 *<br />    For the second association (b), we use the least squares association criterion (without constraints). The two lines are
 *   associated independently of each other.
 * @param CATTPSASO_LG_SR
 *   (LG)(SR) symbol when translated into string.
 *<br />    The specification operator is the upper limit of the range of two-line angular sizes (i.e. the difference between the
 *   maximum of the set of two-line angular size values and the minimum of the set of two-line angular size values ).
 *<br />    The two-line angular size is a local size.
 *<br />    Two sequential association operations are used to define it.
 *<br />      a) To associate the real angular features of size with a feature of the same nature.
 *<br />      b) To associate the extracted lines (coming from intersection of the real angular features of size and the intersection
 *   plane) with two straight lines. 
 *<br />    For the first association (a), we use the least squares association criterion (without constraints) for the two extracted
 *   surfaces (independently of each other) in case of a prismatic feature of size (wedge), or for the extracted surface in case of
 *   a revolute feature of size (cone).
 *<br />    The first association with a least squares criterion is to establish either a stable intersection line for the prismatic
 *   feature of size, or a stable axis for the revolute feature of size.
 *<br />    For the second association (b), we use the least squares association criterion (without constraints). The two lines are
 *   associated independently of each other.
 * @param CATTPSASO_LG_SQ
 *   (LG)(SQ) symbol when translated into string.
 *<br />    The specification operator is the upper limit of the standard deviation of two-line angular sizes (i.e. the standard
 *   deviation of the set of two-line angular size values).
 *<br />    The two-line angular size is a local size.
 *<br />    Two sequential association operations are used to define it.
 *<br />    a) To associate the real angular features of size with a feature of the same nature.
 *<br />    b) To associate the extracted lines (coming from intersection of the real angular features of size and the intersection
 *   plane) with two straight lines. 
 *<br />    For the first association (a), we use the least squares association criterion (without constraints) for the two extracted
 *   surfaces (independently of each other) in case of a prismatic feature of size (wedge), or for the extracted surface in case of
 *   a revolute feature of size (cone).
 *<br />    The first association with a least squares criterion is to establish either a stable intersection line for the prismatic
 *   feature of size, or a stable axis for the revolute feature of size.
 *<br />    For the second association (b), we use the least squares association criterion (without constraints). The two lines are
 *   associated independently of each other.
 * @param CATTPSASO_Length
 *   The specification applies to any restricted portion of the considered feature of size.
 * @param CATTPSASO_Angle
 *   The specification applies to any restricted portion of the considered feature of size.
 * @param CATTPSASO_SCS
 *   The specification applies to one or several specific fixed cross sections of the complete feature of size.
 *<br />    Both the SCS modifier and the cross section identifiers are displayed in the 3D dimension.
 * @param CATTPSASO_SCSndId
 *   The specification applies to one or several specific fixed cross sections of the complete feature of size.
 *<br />    Only the SCS modifier is displayed the 3D dimension. The cross section identifiers are not displayed
 *   in the 3D dimension.
 * @param CATTPSASO_SCSnd
 *   The specification applies to one or several specific fixed cross sections of the complete feature of size.
 *<br />    The SCS modifier and the cross section identifiers are not displayed in the 3D dimension.
 */
enum CATTPSAngularSizeOperatorISO 
{
  CATTPSASO_NotApplicable = -1,
  CATTPSASO_None          = 0,
  CATTPSASO_SA            = 1,               // 3d part of operator expression
  CATTPSASO_SM            = 2,               // 3d part of operator expression
  CATTPSASO_SD            = 3,               // 3d part of operator expression
  CATTPSASO_SX            = 4,               // 3d part of operator expression
  CATTPSASO_SN            = 5,               // 3d part of operator expression
  CATTPSASO_SR            = 6,               // 3d part of operator expression
  CATTPSASO_SQ            = 7,               // 3d part of operator expression
  CATTPSASO_GG            = 30,              // Default expression or 1st part of operator expression
  CATTPSASO_GC            = 60,              // Default expression or 1st part of operator expression
  CATTPSASO_LC            = 110,             // Default expression or 1st part of operator expression
  CATTPSASO_LC_SA         = 111,             // Default expression or 1st part of operator expression
  CATTPSASO_LC_SM         = 112,             // Default expression or 1st part of operator expression
  CATTPSASO_LC_SD         = 113,             // Default expression or 1st part of operator expression
  CATTPSASO_LC_SX         = 114,             // Default expression or 1st part of operator expression
  CATTPSASO_LC_SN         = 115,             // Default expression or 1st part of operator expression
  CATTPSASO_LC_SR         = 116,             // 1st part of operator expression
  CATTPSASO_LC_SQ         = 117,             // 1st part of operator expression
  CATTPSASO_LG            = 120,             // Default expression or 1st part of operator expression
  CATTPSASO_LG_SA         = 121,             // Default expression or 1st part of operator expression
  CATTPSASO_LG_SM         = 122,             // Default expression or 1st part of operator expression
  CATTPSASO_LG_SD         = 123,             // Default expression or 1st part of operator expression
  CATTPSASO_LG_SX         = 124,             // Default expression or 1st part of operator expression
  CATTPSASO_LG_SN         = 125,             // Default expression or 1st part of operator expression
  CATTPSASO_LG_SR         = 126,             // 1st part of operator expression
  CATTPSASO_LG_SQ         = 127,             // 1st part of operator expression
  CATTPSASO_Length        = 200,             // 2nd part of operator expression (when SCS, specific cross section is requested)
  CATTPSASO_Angle         = 201,             // 2nd part of operator expression (when SCS, specific cross section is requested)
  CATTPSASO_SCS           = 212,             // 2nd part of operator expression (when SCS, specific cross section is requested)
  CATTPSASO_SCSndId       = 213,             // 2nd part of operator expression (to precise SCS, specific cross section is requested, same semantic as CATTPSASO_SCS)
  CATTPSASO_SCSnd         = 214              // 2nd part of operator expression (to precise SCS, specific cross section is requested, same semantic as CATTPSASO_SCS)
};

#endif
