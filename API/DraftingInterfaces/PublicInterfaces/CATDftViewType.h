#ifndef __CATDftViewType_h__
#define __CATDftViewType_h__
//=====================================================================================
//                                     CNEXT - CXR1
//                          COPYRIGHT DASSAULT SYSTEMES 1999 
//-------------------------------------------------------------------------------------
// FILENAME    :    CATDftViewType
// LOCATION    :    DraftingInterfaces
// AUTHOR      :    mmr
// GOAL        :    Enums for view type definition
// DATE        :    April 1999
//-------------------------------------------------------------------------------------
// DESCRIPTION :    
//-------------------------------------------------------------------------------------
// COMMENTS    :    
//-------------------------------------------------------------------------------------
// MODIFICATIONS     user  date        purpose
//    HISTORY        ----  ----        -------
//=====================================================================================

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


/**
 * Type of a view.
 * @param DftBackgroundView
 *   The background view is the view in the background of the sheet
 *   This view contains in general the frames and title blocks.
 *   There is a background view per sheet.
 * @param DftFrontView  
 *   The front view is a front representation of a part.
 * @param DftLeftView 
 *   The left view is a left representation of a part regarding to the current
 *   standard.
 * @param DftRightView
 *   The right view is a right representation of a part regarding to the current
 *   standard.
 * @param DftTopView  
 *   The top view is a top representation of a part regarding to the current
 *   standard.
 * @param DftBottomView
 *   The bottom view is a bottom representation of a part regarding to the current
 *   standard.
 * @param DftRearView
 *   The rear view is a rear representation of a part regarding to the current
 *   standard.
 * @param DftAuxiliaryView
 *   The auxiliary view is a representation of a part regarding to an user defined
 *   projection plane
 * @param DftIsomView
 *   The isom view is a isometric view of a part.
 * @param DftSectionView
 *   The section view is a view of a part which is first sectionned regarding to
 *   a user defined profile.
 *   The part geometry beside the section plane is visible.
 * @param DftSectionCutView
 *   The section cut view is a view of a part which is first sectionned regarding to
 *   a user defined profile.
 *   Only the geometry in the section plane is visible.
 * @param DftDetailView
 *   The detail view is a view of a local area of the part.
 *   The area boundarie may be a circle or a polyline.
 * @param DftUntypedView
 *   The untyped view is none of those typed views.
 * @param DftMainView
 *   The main view is the view suporting geometries and annotations for a sheet.
 *   In other words, the main view is the default view of a sheet.
 *   There is a main view per sheet.
 * @param DftPureSketch
 *   The pure sketch is for internal uses only.
 * @param DftUnfoldedView
 *   To specify an unfolded view of a part. 
 * @param DftAxonometricView
 *   The Axonometric view is a representation of a part regarding to an user defined
 *   projection plane
 */
enum CATDftViewType 
{	
  DftBackgroundView,   
  DftFrontView, 
  DftLeftView, 
  DftRightView, 
  DftTopView, 
  DftBottomView, 
  DftRearView,
  DftAuxiliaryView, 
  DftIsomView,
  DftSectionView, 
  DftSectionCutView, 
  DftDetailView,
  DftUntypedView, 
  DftMainView, 
  DftPureSketch,
  DftUnfoldedView,
  DftAxonometricView
};

#endif
