#ifndef __CATDrwViewType_h__
#define __CATDrwViewType_h__
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Type of a view.
 * @param Background_View
 *   The background view is the view in the background of the sheet
 *   This view contains in general the frames and title blocks.
 *   There is a background view per sheet.
 * @param FrontView  
 *   The front view is a front representation of a part.
 * @param LeftView 
 *   The left view is a left representation of a part regarding to the current
 *   standard.
 * @param RightView
 *   The right view is a right representation of a part regarding to the current
 *   standard.
 * @param TopView  
 *   The top view is a top representation of a part regarding to the current
 *   standard.
 * @param BottomView
 *   The bottom view is a bottom representation of a part regarding to the current
 *   standard.
 * @param RearView
 *   The rear view is a rear representation of a part regarding to the current
 *   standard.
 * @param AuxiliaryView
 *   The auxiliary view is a representation of a part regarding to an user defined
 *   projection plane
 * @param IsomView
 *   The isom view is a isometric view of a part.
 * @param SectionView
 *   The section view is a view of a part which is first sectionned regarding to
 *   a user defined profile.
 *   The part geometry beside the section plane is visible.
 * @param SectionCutView
 *   The section cut view is a view of a part which is first sectionned regarding to
 *   a user defined profile.
 *   Only the geometry in the section plane is visible.
 * @param DetailView
 *   The detail view is a view of a local area of the part.
 *   The area boundarie may be a circle or a polyline.
 * @param UntypedView
 *   The untyped view is none of those typed views.
 * @param Main_View
 *   The main view is the view suporting geometries and annotations for a sheet.
 *   In other words, the main view is the default view of a sheet.
 *   There is a main view per sheet.
 * @param Pure_Sketch
 *   The pure sketch is for internal uses only.
 * @param UnfoldedView
 *   To specify an unfolded view of a part. 
 * @param  AxonometricView  
 *   The  Axonometric  view  is  a  representation  of  a  part  regarding  to  an  user  defined  
 *   projection  plane      
 */

enum CATDrwViewType {	Background_View,   
                      FrontView, 
                      LeftView, 
                      RightView, 
                      TopView, 
                      BottomView, 
                      RearView,
                      AuxiliaryView, 
                      IsomView,
                      SectionView, 
                      SectionCutView, 
                      DetailView,
                      UntypedView, 
                      Main_View, 
                      Pure_Sketch,
                      UnfoldedView,
                      AxonometricView};

#endif
