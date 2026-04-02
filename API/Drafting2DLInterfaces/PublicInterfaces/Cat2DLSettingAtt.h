#ifndef Cat2DLSettingAtt_H
#define Cat2DLSettingAtt_H

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

// COPYRIGHT DASSAULT SYSTEMES 2005
//--------------------------------------------------------------------------
// Enums for 2D Layout For 3D Design settings
//--------------------------------------------------------------------------

/**
* The way the background of a view is displayed at creation.
* @param catInvisible
*   Background not display
* @param catStandard
*   Background pickable and not in low intensity
* @param catUnpickable
*   Background unpickable and not in low intensity
* @param catLowIntensity
*   Background pickable and in low intensity
* @param catUnpickableLowIntensity
*   Background unpickable and in low intensity
*/
enum CatViewBackgroundMode{ catStandard=0, catInvisible=1, catUnpickable=2, catLowIntensity=3, catUnpickableLowIntensity=4};

/**
* At creation of a view, this enum defines how the filter of this view is configured.
* @param catDefaultFilter
*   A default filter is used (the first in the list)
* @param catDedicatedFilter
*   A filter is created for the view
* @param catDisplayFilterDialogBox
*   Filter dialog box is displayed after the creation of the view to assign a filter
*/
enum CatViewFilterCreationMode{catDefaultFilter=0, catDisplayFilterDialogBox=1, catDedicatedFilter=2};

/**
* Specifies if the dedicated filter mask or not the background.
* @param catDisplayInBackground
*   View is diplayed in background
* @param catMaskInBackground
*   View is masked in background
*/
enum CatDedicatedFilterType{catDisplayInBackground=0, catMaskInBackground=1};

/**
* At creation of a view the clipping frame is reframed on.
* @param catViewContent
*   Reframe on view content
* @param catViewBackground
*   Reframe on view background
*/
enum CatClippingFrameReframeOnMode{catOnViewContent=0, catOnViewBackground=1};

/**
* Insures view names uniqueness.
* @param catInSheet
*   Inside sheet
* @param catInLayout
*   Inside Layout 
*/
enum CatInsureViewNamesUniquenessScope{catInSheet=0, catInLayout=1};


#endif
