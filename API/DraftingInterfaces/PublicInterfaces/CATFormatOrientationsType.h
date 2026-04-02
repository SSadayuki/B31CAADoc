#ifndef CATFormatOrientationType_H
#define CATFormatOrientationType_H

// COPYRIGHT Dassault Systemes 2003
//===================================================================
//
// CATFormatOrientationType.h
//
//===================================================================

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Orientation type for DrwStdFormats. 
 *
 *  -FmtPortraitByDefault: a sheet associated with this format is allowed to have a portrait or a landscape orientation.
 *                         any newly created sheet associated with this format will start with a portrait orientation.
 *
 *  -FmtPortraitOnly     : a sheet associated with this format is allowed to have only a Portrait orientation.
 *
 *  -FmtLandscapeByDefault: a sheet associated with this format is allowed to have a portrait or a landscape orientation.
 *                          any newly created sheet associated with this format will start with a landscape orientation.
 *
 *  -FmtLandscapeOnly     : a sheet associated with this format is allowed to have only a landscape orientation. 
 *
 */
enum CATFormatOrientationsType { FmtLandscapeByDefault, FmtPortraitByDefault, FmtPortraitOnly, FmtLandscapeOnly };


#endif
