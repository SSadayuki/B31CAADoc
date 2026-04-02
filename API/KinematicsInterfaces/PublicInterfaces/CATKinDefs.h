#ifndef CATKinDefs_h
#define CATKinDefs_h
//
// COPYRIGHT DASSAULT SYSTEMES 2000
//===================================================================
// 
// CATIKinMechanism.h
//   This header defines the basic types of kinematic joints and commands.
//
//===================================================================
//
// Organization : dg/rddfl/mps/mam
//
//===================================================================

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "KinematicsItf.h"
/**
 *
 * Definition of kinematic joints types
 *
 */

/**
 * @param CATKinPrismaticJoint
 *   The joint is prismatic.
 */
ExportedByKinematicsItf extern const char* CATKinPrismaticJoint;

/**
 * @param CATKinRevoluteJoint
 *   The joint is revolute.
 */
ExportedByKinematicsItf extern const char* CATKinRevoluteJoint;

/**
 * @param CATKinCoupledRevoluteJoint
 *   The joint is revolute coupled with another joint.
 */
ExportedByKinematicsItf extern const char* CATKinCoupledRevoluteJoint;
 
/**
 * @param CATKinSpecialistJoint
 *   The joint is specialist.
 */
ExportedByKinematicsItf extern const char* CATKinSpecialistJoint;

/**
 * @param CATKinRigidJoint
 *   The joint is fully restricted or rigid (no degree of freedom).
 */
ExportedByKinematicsItf extern const char* CATKinRigidJoint;

/**
 * @param CATKinSphericalJoint
 *   The joint is spherical.
 */
ExportedByKinematicsItf extern const char* CATKinSphericalJoint;

/**
 * @param CATKinPointCurveJoint
 *   The joint is made of a point on a curve.
 */
ExportedByKinematicsItf extern const char* CATKinPointCurveJoint;

/**
 * @param CATKinSlideCurveJoint
 *   The joint is made of two sliding curves.
 */
ExportedByKinematicsItf extern const char* CATKinSlideCurveJoint;

/**
 * @param CATKinRollCurveJoint
 *   The joint is made of two rolling curves.
 */
ExportedByKinematicsItf extern const char* CATKinRollCurveJoint;

/**
 * @param CATKinCylindricalJoint
 *   The joint is cylindrical.
 */
ExportedByKinematicsItf extern const char* CATKinCylindricalJoint;

/**
 * @param CATKinUJoint
 *   The joint is a universal joint.
 */
ExportedByKinematicsItf extern const char* CATKinUJoint;

/**
 * @param CATKinCVJoint
 *   The joint is a coupled universal joint.
 */
ExportedByKinematicsItf extern const char* CATKinCVJoint;

/**
 * @param CATKinGearJoint
 *   The joint is a gear.
 */
ExportedByKinematicsItf extern const char* CATKinGearJoint;

/**
 * @param CATKinRackJoint
 *   The joint is a rack.
 */
ExportedByKinematicsItf extern const char* CATKinRackJoint;

/**
 * @param CATKinCableJoint
 *   The joint is a cable.
 */
ExportedByKinematicsItf extern const char* CATKinCableJoint;

/**
 * @param CATKinScrewJoint
 *   The joint is a screw.
 */
ExportedByKinematicsItf extern const char* CATKinScrewJoint;

/**
 * @param CATKinPointSurfaceJoint
 *   The joint is made of a point on a surface.
 */
ExportedByKinematicsItf extern const char* CATKinPointSurfaceJoint;

/**
 * @param CATKinPlanarSurfaceJoint
 *   The joint is planar.
 */
ExportedByKinematicsItf extern const char* CATKinPlanarSurfaceJoint;


/**
 *
 * Definition of kinematic commands types.
 *
 */

/**
 * @param CATKinEmptyCmd
 *   There is no command.
 */
ExportedByKinematicsItf extern const char* CATKinEmptyCmd;

/**
 * @param CATKinAngleCmd
 *   The command is rotational.
 */
ExportedByKinematicsItf extern const char* CATKinAngleCmd;

/**
 * @param CATKinLengthCmd
 *   The command is translational.
 */
ExportedByKinematicsItf extern const char* CATKinLengthCmd;

/**
 * @param CATKinAngle1Cmd
 *   The command is rotational (special case).
 */
ExportedByKinematicsItf extern const char* CATKinAngle1Cmd;

/**
 * @param CATKinLength1Cmd
 *   The command is translational (special case).
 */
ExportedByKinematicsItf extern const char* CATKinLength1Cmd;

/**
 * @param CATKinAngle2Cmd
 *   The command is rotational (special case).
 */
ExportedByKinematicsItf extern const char* CATKinAngle2Cmd;

/**
 * @param CATKinLength2Cmd
 *   The command is translational (special case).
 */
ExportedByKinematicsItf extern const char* CATKinLength2Cmd;

#endif

