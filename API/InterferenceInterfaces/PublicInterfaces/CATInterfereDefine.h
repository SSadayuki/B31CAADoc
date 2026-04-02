#ifndef CATInterfereDefine_H
#define CATInterfereDefine_H
//----------------------------------------------------------------------------
// CATIA Version 5 Release R201 Framework Interference
// Copyright Dassault Systemes 2005
//----------------------------------------------------------------------------
//
// Creation: 
// ---------
//
//        12-2004 - DBS
//
//----------------------------------------------------------------------------

/**
 * @CAA2Level L0
 * @CAA2Usage U1
 */

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------
//        Mode of Calculation --> To use for ModeOfCalc in CATIntSpecDef class (encoding : first octet of a [int] = 8 bits )
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------
/**
 * Mode of Calculation --> One Result with couple of MODEL (only the first interference we find for ALL couple of model in interference)
 */
#define CAT_INTERFERE_MODELIGHT                 0x1
/**
 * Mode of Calculation --> Results with couple of MODEL (only one  interference for one couple of model in interference)
 */
#define CAT_INTERFERE_MODELOW                   0x2
/**
 * Mode of Calculation --> Results with couple of ELEMENT (one or several sub-interference for one couple of model in interference)
 */
#define CAT_INTERFERE_MODEHIGH                  0x4

//-------------------------------------------------------------------------------------------------------------------------------------
//        Case of Calculation --> To use for CaseOfCalc in CATSiInSpecDef class (encoding : second to three octet of a [int] = 16 bits)
//-------------------------------------------------------------------------------------------------------------------------------------
/**
 * Case of Calculation --> none interference
 */
#define CAT_INTERFERE_NONE                      0x100
/**
 * Case of Calculation --> simple clash
 */
#define CAT_INTERFERE_CLASH                     0x200
/**
 * Case of Calculation --> clash + contact
 */
#define CAT_INTERFERE_CONTACT                   0x400
/**
 * Case of Calculation --> clash + contact + clearance
 */
#define CAT_INTERFERE_CLEARANCE                 0x800
/** @nodoc
 * Case of Calculation --> band analysis
 */
#define CAT_INTERFERE_BAND_ANALYSIS             0x1000
/**
 * Case of Calculation --> minimal distance
 */
#define CAT_INTERFERE_DISTANCE_MIN              0x2000

//---------------------------------------------------------------------------------------------------------------------------
//        Level Of Detail --> To use for LevelOfDetail in CATIntSpecDef class (encoding : last octet of a [int] = 8 bits)
//---------------------------------------------------------------------------------------------------------------------------
/**
 * Level Of Detail --> default level (element)
 */
#define CAT_INTERFERE_LEVEL_DETAIL_DEFAULT      0x1000000  
/**
 * Level Of Detail --> element level
 */
#define CAT_INTERFERE_LEVEL_DETAIL_ELEMENT      0x2000000  
/**
 * Level Of Detail --> model level
 */
#define CAT_INTERFERE_LEVEL_DETAIL_MODEL        0x4000000  

// ---------------------------------
//        geometric result
// ---------------------------------

//----------------------------------------------------------------------------------------------------------------------------------------
//        Level Of Clash Result --> To use for LevelOfClashResult in CATIntSpecDef class (encoding : first octet of a [int] = 8 bits )
//----------------------------------------------------------------------------------------------------------------------------------------
// In case of CLASH
/**
 * Level Of Clash Result --> to have none geometric result in case of clash
 */
#define CAT_INTERFERE_LEVEL_CLASH_RESULT_NO     0x1 
/**
 * Level Of Clash Result --> to have curve result in case of clash
 */
#define CAT_INTERFERE_LEVEL_CLASH_RESULT_CURVE  0x2 

//------------------------------------------------------------------------------------------------------------------------------------------
//        Level Of Contact Result --> To use for LevelOfContResult in CATIntSpecDef class (encoding : second octet of a [int] = 8 bits )
//------------------------------------------------------------------------------------------------------------------------------------------
// In case of CONTACT or CLEARANCE
/**
 * Level Of Contact Result --> to have none geometric result in case of contact and clearance
 */
#define CAT_INTERFERE_LEVEL_CONT_RESULT_NO      0x100 
/**
 * Level Of Contact Result --> to have triangle result in case of contact and clearance
 */
#define CAT_INTERFERE_LEVEL_CONT_RESULT_TRI     0x200
/**
 * Level Of Contact Result --> to have surface result in case of contact and clearance
 */
#define CAT_INTERFERE_LEVEL_CONT_RESULT_SURF    0x400


//-------------------------------------------------------------------------------------------------------------------------------------
//        Level of Penetration --> To use for ModeOfPenetration in CATIntSpecDef class (encoding : third octet of a [int] = 8 bits )
//-------------------------------------------------------------------------------------------------------------------------------------
/**
 * Mode of Penetration --> no penetration compute
 */
#define CAT_INTERFERE_LEVEL_PENETR_NO                 0x10000
/**
 * Mode of Penetration --> penetration at element level
 */
#define CAT_INTERFERE_LEVEL_PENETR_ELEMENT            0x20000
/**
 * Mode of Penetration --> penetration at model level
 */
#define CAT_INTERFERE_LEVEL_PENETR_MODEL              0x40000

//----------------------------------------------------------------------------------------------------------------------------
//        Level Of Distance --> To use for ModeOfDist in CATIntSpecDef class (encoding : fourth octet of a [int] = 8 bits )
//----------------------------------------------------------------------------------------------------------------------------
/**
 * Mode Of Distance --> no distance compute
 */
#define CAT_INTERFERE_LEVEL_DIST_NO                   0x1000000
/**
 * Mode Of Distance --> distance at model level
 */
#define CAT_INTERFERE_LEVEL_DIST_MODEL                0x2000000

//----------------------------------------------------------------------------------------------------------------------------
//        Level Of Geometry --> Type of geometry to include in computing (encoding : first octet of a [int] = 8 bits )
//----------------------------------------------------------------------------------------------------------------------------
/**
 * Level Of Geometry --> to include curve in computing
 */
#define CAT_INTERFERE_LEVEL_GEO_CURVE                   0x1
/**
 * Level Of Geometry --> to include surface in computing
 */
#define CAT_INTERFERE_LEVEL_GEO_SURFACE                 0x2
/**
 * Level Of Geometry --> to include volume in computing
 */
#define CAT_INTERFERE_LEVEL_GEO_VOLUME                  0x4


#endif // CATInterfereDefine
