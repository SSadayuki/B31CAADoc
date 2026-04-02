#ifndef CATMfDefs_h
#define CATMfDefs_h

// COPYRIGHT DASSAULT SYSTEMES 1999
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */
#include "CATMfDefsBase.h"
#include "CATMfReportDefs.h"
#include "MecModItfCPP.h"

class CATUnicodeString;

/**
 * This header is used to define aliases.
 * <b>Role</b>: This header allows users to define alias strings.
 */

/**
 * This string stands for the solid feature name.
 */
ExportedByMecModItfCPP extern const CATUnicodeString MfShapeFeature;

/**
 * This string stands for the form feature name.
 */
ExportedByMecModItfCPP extern const CATUnicodeString MfFormFeature;

/**
 * This string stands for the contextual feature name.
 */
ExportedByMecModItfCPP extern const CATUnicodeString MfContextualFeature;

/**
 * This string stands for the 3D geometrical element name.
 */
ExportedByMecModItfCPP extern const CATUnicodeString MfGeom3D;

#endif

