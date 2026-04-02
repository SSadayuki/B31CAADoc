#ifndef CATDftGenViewsPosMode_H
#define CATDftGenViewsPosMode_H
//==============================================================================
//                                   CATIA - Version 5
//	COPYRIGHT DASSAULT SYSTEMES 2003
//------------------------------------------------------------------------------
// FILENAME    :    CATDftGenViewsPosMode_H.h
// LOCATION    :    DraftingInterfaces\PublicInterfaces
// AUTHOR      :    LVA 
// DATE        :    04.06.2003
//------------------------------------------------------------------------------
// DESCRIPTION :    Enums for generative views position stability mode.
//
//------------------------------------------------------------------------------
// COMMENTS    :    
//                  
//------------------------------------------------------------------------------
// MODIFICATIONS    user       date      purpose
//------------------------------------------------------------------------------

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Positioning mode values for generative views inside the sheet.
 * The positioning mode for a given sheet determines the generative views position behavior when an update is requested.
 * Notice: 
 * the position of generative views is usually the position of the image of the center of gravity of the 3D data.
 * <dl>
 * <dt> <tt>catFixedCG</tt>     <dd> the position of the image of the center of gravity of the 3D data remains the same after an update.
 * <dt> <tt>catFixedAxis</tt>   <dd> the position of the image of the center of gravity is modified so that existing geometries don't move after an update.
 * </dl>
 */
enum CATDftGenViewsPosMode { CATFixedCG, CATFixedAxis };

#endif
