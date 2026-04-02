// COPYRIGHT Dassault Systemes 2007
#ifndef __CATTPSViewType_h__
#define __CATTPSViewType_h__
//-------------------------------------------------------------------------------------
// FILENAME    :    CATTPSViewType
// LOCATION    :    CATTPSInterfaces
// AUTHOR      :    ptk
// GOAL        :    Enums for view type definition
// DATE        :    Mar 2007
//-------------------------------------------------------------------------------------
// DESCRIPTION :    The handle the Data Size Limitation we use the TPS view type
//                  the drafting view type.
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
 * @param TPSFrontView  
 *   The front view is a front representation of a part.
 * @param TPSSectionView
 *   The section view is a view of a part which is first sectionned regarding to
 *   a user defined profile.
 *   The part geometry beside the section plane is visible.
 * @param TPSSectionCutView
 *   The section cut view is a view of a part which is first sectionned regarding to
 *   a user defined profile.
 *   Only the geometry in the section plane is visible.
 * @param TPSAxonometricView
 *   The  Axonometric  view  is  a  representation  of  a  part  regarding  to  an
 *   user  defined  projection  plane 
 */
enum CATTPSViewType 
{	
  TPSFrontView, 
  TPSSectionView, 
  TPSSectionCutView,
  TPSAxonometricView
};

#endif
