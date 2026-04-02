// COPYRIGHT DASSAULT SYSTEMES PROVENCE 2004

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

//===================================================================
//
// 10/06/04: MAX: Creation
//
//===================================================================
// You can find below a description of each option supported by XCAD mechanisms.
#ifndef XCADOptions_H
#define XCADOptions_H


// HERE ARE THE DIFFERENT RETURN CODES AVAILABLE FOR AN OPTION REQUEST
typedef enum {
	STATUS_UNKNOWN = 1,				// Option not managed already
	STATUS_OPTION_NOT_SUPPORTED,	// Current document doesn't support this option name at all
	STATUS_VALUE_NOT_AUTHORIZED,	// The value set is not authorized by the XCAD options mechanism
	STATUS_VALUE_NOT_SUPPORTED,		// Current document doesn't support this value for this known option
	STATUS_VALUE_SUPPORTED			// Current document supports this value for this known option
} XCADOptionStatus;

// For binary options TRUE / FALSE
#define XCAD_TRUE						"True"
#define XCAD_FALSE						"False"


// #####################
// # Mandatory options #
// #####################
// WARNING : The conversion fails if the application doesn't set these options !!!


/** 1
 * Type of geometry to generate
 * ============================
 * Sets if the output document must generate exact or tessellated geometry.
 * This option must be managed by the XCAD Output document itself.
 */
// Option name :
#define XCAD_GEOMETRY_TYPE				"Geometry_type"
// authorized values MANDATORY
#define XCAD_EXACT						"Exact"
#define XCAD_TESSELLATED				"Tessellated"
//===========================================


/** 2
 * Directory of data generation
 * ============================
 * Directory where all generated data must be created.
 * This option must be managed by the XCAD Output document itself.
 */
// Option name :
#define XCAD_GENERATED_DATA_DIRECTORY	"Generated_data_directory"
// authorized values MANDATORY
// A valid file path
//===========================================


// #########################
// # Not mandatory options #
// #########################
// The conversion can occur if the application doesn't set these options.
// (Default values are taken into account)


/** 3
 * Coordinate system conversion in tessellated mode
 * ================================================
 * Sets if coordinate systems must be converted or not in tessellated mode.
 * This option must be managed by the XCAD Output document itself.
 */
// Option name :
#define XCAD_COORDSYS_IN_TESS_MODE		"Coordsys_in_tess_mode"
// authorized values
// XCAD_TRUE / XCAD_FALSE
// default value :
// XCAD_FALSE
//===========================================


/** 4
 * Levels of details conversion in tessellated mode
 * ===============================================
 * Sets if LODs are to be generated during the conversion.
 * This option must be managed by the XCAD Output document itself.
 */
// Option name :
#define XCAD_LOD_IN_TESS_MODE			"Lod_in_tess_mode"
// authorized values
// XCAD_TRUE / XCAD_FALSE
// default value :
// XCAD_TRUE
//===========================================


/** 5
 * Open surfaces
 * =============
 * Sets if the open surfaces must be converted or not.
 * This option must be transmitted to the XCAD Input document.
 * Behaviour of the connector if this option isn't specified :
 * Open surfaces are not converted.
 */
// Option name :
#define XCAD_OPEN_SURFACES				"Open_surfaces"
// authorized values
// XCAD_TRUE / XCAD_FALSE
// default value :
// XCAD_FALSE
//===========================================


/** 6
 * Layers to convert
 * =================
 * Sets which layers are to be converted (identified by theirs numbers).
 * This option must be transmitted to the XCAD Input document.
 * Behaviour of the connector if this option isn't specified :
 * All layers must be converted.
 */
// Option name :
#define XCAD_LAYERS_TO_CONVERT			"Layers_to_convert"
// authorized values
// A combination of values like 1,3-5,7
// default value :
// *
//===========================================


/** 7
 * Active layers only
 * ==================
 * Filters the layers to convert (see option 6), taking into account either only active layers or all of them.
 * This option must be transmitted to the XCAD Input document.
 */
// Option name :
#define XCAD_ACTIVE_LAYERS_ONLY			"Active_layers_only"
// authorized values
// XCAD_TRUE / XCAD_FALSE
// default value :
// XCAD_TRUE
//===========================================


/** 8
 * Reference set
 * =============
 * Sets which reference set must be taken into account during the conversion.
 * This option must be transmitted to the XCAD Input document.
 * Behaviour of the connector if this option isn't specified :
 * The active reference set must be converted.
 */
// Option name :
#define XCAD_REFERENCE_SET				"Reference_set"
// authorized values
// A valid reference set ID
// default value :
// the active reference set
//===========================================

// The following options have been added and are supported by XCAD components :
/*
// options related to output document
XCAD_OUTPUT_DATA_FORMAT             "Output_data_format"
Supported values :   "3dxml" (for .3dxml output)
                     "V5" (by default)
                     Any other string (for specific needs)

// options related to input document
XCAD_INPUT_TESS_PARAMETER           "Input_tess_parameter"
Any float value

XCAD_SIMPLIFIED_REP                 "Simplified_rep"
Any string

XCAD_INSTANCE_NAME                  "Instance_name"
Any string

XCAD_PROJECT_NAME                   "Project_name"
Any string

XCAD_LIBRARY_NAME                   "Library_name"
Any string

XCAD_PART_NUMBER                    "Part_number"
Any string

XCAD_REVISION_NUMBER                "Revision_number"
Any string

XCAD_3D_ANNOTATIONS                 "3D_annotations"
"True" or "False"

*/
#endif
