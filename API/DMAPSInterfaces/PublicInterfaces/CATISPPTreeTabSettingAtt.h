#ifndef CATISPPTreeTabSettingAtt_H
#define CATISPPTreeTabSettingAtt_H

// COPYRIGHT DASSAULT SYSTEMES  2003

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "ProcessInterfaces.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByProcessInterfaces IID IID_CATISPPTreeTabSettingAtt;
#else
extern "C" const IID IID_CATISPPTreeTabSettingAtt ;
#endif

class CATSettingInfo;
class CATUnicodeString;

//------------------------------------------------------------------

/**
* Interface to handle the parameters of the Tree Tab page for Visualization.
* <b>Role</b>: This interface is implemented by a component which
* represents the controller of the Tree. 
* <br>This interface defines:
* <ul>
* <li>A method to set each parameter</li>
* <li>A method to get the value of each parameter</li>
* <li>A method to lock/unlock each parameter</li>
* <li>A method to retrieve the informations concerning each parameter</li>
* </ul>
*/
class ExportedByProcessInterfaces CATISPPTreeTabSettingAtt: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
* Retrieves the value of the 'Resource Filter'.
* <br><b>Role</b>: Retrieves the value of the 'Resource Folder' to signify whether
*  the Assigned Resources would be visible in the PPR tree
* @param ioResFilter
*	The Value to say whether it is a 'Show' or 'Hide' ( Show = 0, Hide = 1 )
* @return
*	<b>Legal values</b>:
*	<br><tt>S_OK :</tt>   on Success
* 	<br><tt>E_FAIL:</tt>  on failure
*/
     virtual HRESULT GetResourceFilter( int & ioResFilter) = 0;

     /**
     * Sets the value of the 'Resource Filter'.
     * <br><b>Role</b>: Sets the value of the 'Resource Folder' to signify whether
     *  the Assigned Resources would be visible in the PPR tree or not
     * @param iResFilter
     *	The Value to say whether it is a 'Show' or 'Hide' ( Show = 0, Hide = 1 )
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetResourceFilter(const int & iResFilter) = 0;

    /**
     * Retrieves the state of the 'Resource Folder' parameter.
     * @param oInfo
     *	Address of an object CATSettingInfo.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT GetResourceFilterInfo( CATSettingInfo*  oInfo ) = 0;

    /** 
     * Locks or unlocks the 'Resource Folder' parameter.
     * <br><b>Role</b>: Locks or unlocks the 'ResourceFilter' parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *	the locking operation to be performed
     *	<b>Legal values</b>:
     *	<br><tt>1 :</tt>   to lock the parameter.
     * 	<br><tt>0:</tt>   to unlock the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetResourceFilterLock( unsigned char  iLocked ) = 0;

//-------------------------------------------------------------------------------------------
/**
* Retrieves the value to signify the visualization of Assigned Items in the PPR tree.
* <br><b>Role</b>: Retrieves the value of the 'Items Folder' to signify whether
*  the Assigned Items would be visible in the PPR tree
* @param ioItemsFilter
*	The Value to say whether it is a 'Show' or 'Hide'( Show = 0, Hide = 1 )
* @return
*	<b>Legal values</b>:
*	<br><tt>S_OK :</tt>   on Success
* 	<br><tt>E_FAIL:</tt>  on failure
*/
     virtual HRESULT GetItemsFilter( int & ioItemsFilter) = 0;

     /**
     * Sets the value to signify the visualization of Assigned Items in the PPR tree.
     * <br><b>Role</b>: Sets the value of the 'Items Folder' to signify whether
     *  the Assigned Items would be visible in the PPR tree or not.
     * @param iItemsFilter
     *	The Value to say whether it is a 'Show' or 'Hide'( Show = 0, Hide = 1 )
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetItemsFilter(const int & iItemsFilter) = 0;

    /**
     * Retrieves the state of the 'Items Folder' parameter.
     * @param oInfo
     *	Address of an object CATSettingInfo.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT GetItemsFilterInfo( CATSettingInfo*  oInfo ) = 0;

    /** 
     * Locks or unlocks the 'Resource Filter' parameter.
     * <br><b>Role</b>: Locks or unlocks the 'ResourceFilter' parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *	the locking operation to be performed
     *	<b>Legal values</b>:
     *	<br><tt>1 :</tt>   to lock the parameter.
     * 	<br><tt>0:</tt>   to unlock the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetItemsFilterLock( unsigned char  iLocked ) = 0;

//-------------------------------------------------------------------------------------------
/**
 * Retrieves the value to signify the visualization of Assigned Items with its type 
 * of Relation.
 * <br><b>Role</b>: Retrieves the value of the 'Items Folder (per Relation Type)' to signify whether
 *  the Assigned Items with different relations ( like First Processes Product) would be visible in the PPR tree
 * @param ioItemsRelFilter
 *	The Value to say whether it is a 'Show' or 'Hide'( Show = 0, Hide = 1 )
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
 */
     virtual HRESULT GetItemsPerRelationFilter( int & ioItemsRelFilter) = 0;

     /**
     * Sets the value to signify the visualization of Assigned Items with it's type of Relation.
     * <br><b>Role</b>: Sets the value of the 'Items Folder (per Relation Type)' to signify whether
     *  the Assigned Items with different relations ( like First Processes Product) would be visible in the PPR tree or not.
     * @param iItemsRelFilter
     *	The Value to say whether it is a 'Show' or 'Hide'( Show = 0, Hide = 1 )
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetItemsPerRelationFilter(const int & iItemsRelFilter) = 0;

    /**
     * Retrieves the state of the 'Items Folder( per Relation Type)' parameter.
     * @param oInfo
     *	Address of an object CATSettingInfo.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT GetItemsPerRelationFilterInfo( CATSettingInfo*  oInfo ) = 0;

    /** 
     * Locks or unlocks the 'Items Folder( per Relation Type)' parameter.
     * <br><b>Role</b>: Locks or unlocks the 'ResourceFilter' parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *	the locking operation to be performed
     *	<b>Legal values</b>:
     *	<br><tt>1 :</tt>   to lock the parameter.
     * 	<br><tt>0:</tt>   to unlock the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetItemsPerRelationFilterLock( unsigned char  iLocked ) = 0;

//-------------------------------------------------------------------------------------------
/**
 * Retrieves the value to signify Whether "Attributes" of an activity are visible in PPR tree.
 * <br><b>Role</b>: Retrieves the value of the "Attributes" option to signify whether
 *  the user attributes of a Process are visible in the PPR tree
 * @param ioAttFilter
 *	   The Value to say whether it is a 'Show' or 'Hide'( Show = 0, Hide = 1 )
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
 */
     virtual HRESULT GetAttributesFilter( int & ioAttFilter) = 0;

     /**
     * Sets the value to signify Whether "Attributes" of an activity are visible in PPR tree.
     * <br><b>Role</b>: Sets the value of the "Attributes" option to signify whether
     *  the user attributes of a Process would be visible in the PPR tree
     * @param iAttFilter
     *	The Value to say whether it is a 'Show' or 'Hide'( Show = 0, Hide = 1 )
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetAttributesFilter(const int & iAttFilter) = 0;

    /**
     * Retrieves the state of the "Attributes" option.
     * @param oInfo
     *	Address of an object CATSettingInfo.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT GetAttributesFilterInfo( CATSettingInfo*  oInfo ) = 0;

    /** 
     * Locks or unlocks the "Attributes" option.
     * <br><b>Role</b>: Locks or unlocks the "Attributes" parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *	the locking operation to be performed
     *	<b>Legal values</b>:
     *	<br><tt>1 :</tt>   to lock the parameter.
     * 	<br><tt>0:</tt>   to unlock the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetAttributesFilterLock( unsigned char  iLocked ) = 0;

//-------------------------------------------------------------------------------------------
/**
 * Retrieves the value to signify Whether "Applicative Data" created by an application
 * is visible in the PPR tree.
 * <br><b>Role</b>: Retrieves the value of the "Applicative Data" option to signify whether
 *  the "Applicative Containers" are visible in the PPR tree
 * @param ioAppFilter
 *	   The Value to say whether it is a 'Show' or 'Hide'( Show = 0, Hide = 1 )
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
 */
     virtual HRESULT GetApplicativeDataFilter( int & ioAppFilter) = 0;

     /**
     * Sets the value to signify Whether "Applicative Data" created by an application 
     * is visible in the PPR tree.
     * <br><b>Role</b>: Sets the value of the "Applicative Data" option to signify whether
     *  the "Applicative Containers" are visible in the PPR tree
     * @param iAppFilter
     *	The Value to say whether it is a 'Show' or 'Hide'( Show = 0, Hide = 1 )
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetApplicativeDataFilter(const int & iAppFilter) = 0;

    /**
     * Retrieves the state of the "Applicative Data" option.
     * @param oInfo
     *	Address of an object CATSettingInfo.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT GetApplicativeDataFilterInfo( CATSettingInfo*  oInfo ) = 0;

    /** 
     * Locks or unlocks the "Attributes" option.
     * <br><b>Role</b>: Locks or unlocks the "Attributes" parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *	the locking operation to be performed
     *	<b>Legal values</b>:
     *	<br><tt>1 :</tt>   to lock the parameter.
     * 	<br><tt>0:</tt>   to unlock the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetApplicativeDataFilterLock( unsigned char  iLocked ) = 0;

//-------------------------------------------------------------------------------------------
/**
 * Retrieves the value to signify Whether "Output Products" associated with an activity
 * are visible or not.
 * <br><b>Role</b>: Retrieves the value of the "Output Product Folder" option to signify whether
 *  the assigned output products of an activity are visible in the PPR tree
 * @param ioPrdFilter
 *	   The Value to say whether it is a 'Show' or 'Hide'( Show = 0, Hide = 1 )
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
 */
     virtual HRESULT GetOutputProductFilter( int & ioPrdFilter) = 0;

     /**
     * Sets the value to signify Whether Output Products associated with an activity 
     * is visible in the PPR tree.
     * <br><b>Role</b>: Sets the value of the "Output Product Folder" option to signify whether
     *  the assigned output products for an activity would be visible in the PPR tree
     * @param iAppFilter
     *	The Value to say whether it is a 'Show' or 'Hide'( Show = 0, Hide = 1 )
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetOutputProductFilter(const int & iPrdFilter) = 0;

    /**
     * Retrieves the state of the "Output Product Folder" option.
     * @param oInfo
     *	Address of an object CATSettingInfo.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT GetOutputProductFilterInfo( CATSettingInfo*  oInfo ) = 0;

    /** 
     * Locks or unlocks the "Output Product Folder" option.
     * <br><b>Role</b>: Locks or unlocks the "Output Product Folder" parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *	the locking operation to be performed
     *	<b>Legal values</b>:
     *	<br><tt>1 :</tt>   to lock the parameter.
     * 	<br><tt>0:</tt>   to unlock the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetOutputProductFilterLock( unsigned char  iLocked ) = 0;

//-------------------------------------------------------------------------------------------
/**
 * Retrieves the value to signify Whether the logical activites are visible in the PPR tree.
 * <br><b>Role</b>: Retrieves the value of the "Logical Activities" option to signify whether
 *  the logical activities are visible in the PPR tree
 * @param ioLogActFilter
 *	   The Value to say whether it is a 'Show' or 'Hide'( Show = 0, Hide = 1 )
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
 */
     virtual HRESULT GetLogicalActFilter( int & ioLogActFilter) = 0;

     /**
     * Sets the value to signify Whether the logical activites are visible in the PPR tree.
     * <br><b>Role</b>: Sets the value of the "Logical Activities" option to signify whether
     *  the logical activities are visible in the PPR tree
     * @param iLogActFilter
     *	The Value to say whether it is a 'Show' or 'Hide'( Show = 0, Hide = 1 )
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetLogicalActFilter(const int & iLogActFilter) = 0;

    /**
     * Retrieves the state of the "Logical Activities" option.
     * @param oInfo
     *	Address of an object CATSettingInfo.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT GetLogicalActFilterInfo( CATSettingInfo*  oInfo ) = 0;

    /** 
     * Locks or unlocks the "Logical Activities" option.
     * <br><b>Role</b>: Locks or unlocks the "Logical Activities" parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *	the locking operation to be performed
     *	<b>Legal values</b>:
     *	<br><tt>1 :</tt>   to lock the parameter.
     * 	<br><tt>0:</tt>   to unlock the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetLogicalActFilterLock( unsigned char  iLocked ) = 0;

//-------------------------------------------------------------------------------------------
/**
 * Retrieves the value to signify Whether double clicking on an activity expands/collapses
 * a given activity in the PPR tree.
 * <br><b>Role</b>: Retrieves the value of the "Disable Collapse/Expand" option to signify 
 * whether double clicking on an activity expands/collapses the PPr tree
 * @param ioCollapseFilter
 *	   The Value to say whether it is a 'Show' or 'Hide'( Show = 0, Hide = 1 )
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
 */
     virtual HRESULT GetCollapseExpandFilter( int & ioCollapseFilter) = 0;

     /**
     * Sets the value to signify Whether the double clicking on an activity expands/collapses
     * a given activity in the PPR tree.
     * <br><b>Role</b>: Sets the value of the "Disable Collapse/Expand" option to signify 
     * whether double clicking on an activity expands/collapses the PPr tree
     * @param iCollapseFilter
     *	The Value to say whether it is a 'Show' or 'Hide'( Show = 0, Hide = 1 )
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetCollapseExpandFilter(const int & iCollapseFilter) = 0;

    /**
     * Retrieves the state of the "Disable Collapse/Expand" option.
     * @param oInfo
     *	Address of an object CATSettingInfo.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT GetCollapseExpandFilterInfo( CATSettingInfo*  oInfo ) = 0;

    /** 
     * Locks or unlocks the "Disable Collapse/Expand" option.
     * <br><b>Role</b>: Locks or unlocks the "Disable Collapse/Expand" parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *	the locking operation to be performed
     *	<b>Legal values</b>:
     *	<br><tt>1 :</tt>   to lock the parameter.
     * 	<br><tt>0:</tt>   to unlock the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetCollapseExpandFilterLock( unsigned char  iLocked ) = 0;


//-------------------------------------------------------------------------------------------
/**
 * Retrieves the value to signify whether the default viewer is the 3D Assigned Viewer or not.
 * <br><b>Role</b>: Retrieves the value of the "Assigned Viewer" option to signify 
 * whether the 3D Assigned Viewer is the default viewer or not.
 * @param ioAssignedViewer
 *	   The value to say whether 3D Assigned Viewer is default or not
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
 */
     virtual HRESULT GetAssignedViewer( int & ioAssignedViewer) = 0;

     /**
     * Sets the value to signify whether the default viewer is the 3D Assigned Viewer or not.
     * <br><b>Role</b>: Sets the value of the "Assigned Viewer" option to signify 
     * whether the 3D Assigned Viewer is the default viewer or not.
     * @param iAssignedViewer
     *	The value to say whether 3D Assigned Viewer is default or not
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetAssignedViewer(const int & iAssignedViewer) = 0;

    /**
     * Retrieves the state of the "Assigned Viewer" option.
     * @param oInfo
     *	Address of an object CATSettingInfo.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT GetAssignedViewerInfo( CATSettingInfo*  oInfo ) = 0;

    /** 
     * Locks or unlocks the "Assigned Viewer" option.
     * <br><b>Role</b>: Locks or unlocks the "Assigned Viewer" parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *	the locking operation to be performed
     *	<b>Legal values</b>:
     *	<br><tt>1 :</tt>   to lock the parameter.
     * 	<br><tt>0:</tt>   to unlock the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetAssignedViewerLock( unsigned char  iLocked ) = 0;

//-------------------------------------------------------------------------------------------
     /**
     * Retrieves the value to signify whether to display the Label or the E5 Configured Name
     * <br><b>Role</b>: Retrieves the value to signify whether to display the Label or the E5 Configured Name
     * @param ioDisplayNameMode
     *	   The value to say whether the E5 Configured Name is to be displayed
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT GetDisplayNameMode( int & ioDisplayNameMode) = 0;

     /**
     * Sets the value to signify whether the E5 Configured Name is to be displayed
     * <br><b>Role</b>: Sets the value to signify whether the E5 Configured Name is to be displayed
     * @param iDisplayNameMode
     *	The value to say whether E5 Configured Name is to be displayed
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetDisplayNameMode(const int & iDisplayNameMode) = 0;

    /**
     * Retrieves the state of the "Display E5 Configured Name" option.
     * @param oInfo
     *	Address of an object CATSettingInfo.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT GetDisplayNameModeInfo( CATSettingInfo*  oInfo ) = 0;

    /** 
     * Locks or unlocks the "Display E5 Configured Name" option.
     * <br><b>Role</b>: Locks or unlocks the "Display E5 Configured Name" parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *	the locking operation to be performed
     *	<b>Legal values</b>:
     *	<br><tt>1 :</tt>   to lock the parameter.
     * 	<br><tt>0:</tt>   to unlock the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetDisplayNameModeLock( unsigned char  iLocked ) = 0;
//-------------------------------------------------------------------------------------------
/**
 * Retrieves the value to signify whether the default render style should be
 * Parallel or Perspective
 * <br><b>Role</b>: Retrieves the value of the "Render Style" option to signify 
 * whether the 3D Render Style should be Parallel or Perspective
 * @param ioRenderStyle
 *	   The value to say whether 3D Render Style should be Parallel or Perspective
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
 */
     virtual HRESULT GetRenderStyle( int & ioRenderStyle) = 0;

     /**
     * Sets the value to signify whether the default viewer is the 3D Assigned Viewer or not.
     * <br><b>Role</b>: Sets the value of the "Render Style" option to signify 
     * whether the 3D Render Style should be Parallel or Perspective
     * @param iAssignedViewer
     *	The value to say whether 3D Render Style should be Parallel or Perspective
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetRenderStyle(const int & iRenderStyle) = 0;

    /**
     * Retrieves the state of the "Render Style" option.
     * @param oInfo
     *	Address of an object CATSettingInfo.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT GetRenderStyleInfo( CATSettingInfo*  oInfo ) = 0;

    /** 
     * Locks or unlocks the "Render Style" option.
     * <br><b>Role</b>: Locks or unlocks the "Render Style" parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *	the locking operation to be performed
     *	<b>Legal values</b>:
     *	<br><tt>1 :</tt>   to lock the parameter.
     * 	<br><tt>0:</tt>   to unlock the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetRenderStyleLock( unsigned char  iLocked ) = 0;

};

//------------------------------------------------------------------

CATDeclareHandler( CATISPPTreeTabSettingAtt, CATBaseUnknown) ;

#endif
