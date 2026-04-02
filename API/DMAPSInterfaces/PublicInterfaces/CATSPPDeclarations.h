#ifndef CATSPPDeclarations_H
#define CATSPPDeclarations_H

// COPYRIGHT DASSAULT SYSTEMES  1999

/**
* @CAA2Level L1
* @CAA2Usage U1
*/

// real include for TCKind
//#include "CATWinCORBA.h"

#include "CATIAV5Level.h"


/** @nodoc */
#ifndef NULL_string
#define NULL_string CATUnicodeString()
#endif



/**
* Defines kind of data valuating an attribute.
* @param tk_double    
*        to specify a double C++ type 
* @param tk_boolean   
*        to specify a DASSAULT SYSTEMES boolean typedef 
* @param tk_octet     
*        to specify an unsigned char C++ type 
* @param tk_string    
*        to specify a string C++ type. 
* @param tk_specobject
*        to specify a feature 
* @param tk_list     
*        to specify a list of any other types 
* @param tk_external  
*        to specify an object to be linked to another one by a symbolic link.
* @param tk_component 
*        to specify a component, i.e. a feature that can be aggregated only 
*        once to a parent feature 
* @param tk_integer 
*        to specify an integer C++ type 
*/
#define CATSPPAttrKind TCKind

/**
* @nodoc
*/
enum CATSPPLibraryMode { Create, UseDefault } ;

/**
* @nodoc
*/
enum CATSPPLinkMode { OneLevel , AllLevel } ;

/**
* @nodoc
*/
enum CATSPPCreateMode { Hierarchy , Sequential } ;

/**
* @nodoc
*/
enum CATSPPConditionFilter { ShowCondition , HideCondition } ;

/**
* Specification on resource to define if it is visualized or not.
* @param ShowResource
*        the resource will be visualized.
* @param HideResource
*        the resource will not be visualized.
*/
enum CATSPPResourceFilter { ShowResource , HideResource } ;

/**
* Specification on attribute to define if it is visualized or not.
* @param ShowAttribute
*        the attribute will be visualized.
* @param HideAttribute
*        the attribute will not be visualized.
*/
enum CATSPPAttributeFilter { ShowAttribute , HideAttribute } ;

/**
* @nodoc
*/
enum CATSPPConnectorFilter { ShowConnector , HideConnector } ;


/**
* Specification on logical activitites to define if they are visualized or not.
* @param ShowLogicalActivities
*        the logical activitites will be visualized.
* @param HideLogicalActivities 
*        the logical activitites will not be visualized.
*/
enum CATSPPLogicalActivitiesFilter { ShowLogicalActivities, HideLogicalActivities } ;


/**
* Specification on item to define if it is visualized or not.
* @param ShowItem
*        the item will be visualized.
* @param HideItem
*        the item will not be visualized.
*/
enum CATSPPItemFilter { ShowItem , HideItem } ;



/**
* Specification on "First Process processing Product"
* to define if it is visualized or not.
* @param ShowFPPItem
*        the item will be visualized.
* @param HideFPPItem
*        the item will not be visualized.
*/
enum CATSPPFirstPPItemFilter { ShowFPPItem , HideFPPItem } ;




/**
* Specification on compound container to define if it is visualized or not.
* @param ShowFilter
*        the filter will be visualized.
* @param HideItem
*        the filter will not be visualized.
*/
enum CATSPPFilter { ShowFilter , HideFilter } ;

/**
* Specification on activities to define if collapse/expand is actived by double-clicking.
* @param EnableExpandCollapse
*        collapse/expand is actived.
* @param DisableExpandCollapse
*        collapse/expand is not actived.
*/
enum CATSPPExpandCollapseActivation { EnableExpandCollapse , DisableExpandCollapse } ;

/**
* Specification of the default viewer type to be used in 3D process views
* @param StandardViewer
*        use the Standard 3D Viewer
* @param AssignedViewer
*        use the old Assigned 3D Viewer (displays assignments, is slower)
*/

enum CATPcs3DViewerType { StandardViewer, AssignedViewer };


/**
* Specification of the display-name mode
* @param HideConfigName
*        Only the process label will be displayed.
* @param ShowConfigName
*        Both the Process Label and the E5 configured name will be displayed.
* @param ShowConfigNameOnly
*        Only the E5 configured name will be displayed
*/
enum CATSPPDisplayNameMode { HideConfigName, ShowConfigName, ShowConfigNameOnly } ;

/**
* Specification of the default render style to be used in 3D process views
* @param Parallel
*        render 3D in a parallel style
* @param Perspective
*        render 3D in a perspective style
*/

enum CATSPP3DRenderStyle { SPP3DParallel, SPP3DPerspective };

/**
* @nodoc
*/
enum CATPcsNavigProvider { AllPcsProvider, ItemPcsProvider, ResourcePcsProvider, AttributePcsProvider, LogicalActivitiesPcsProvider, ConditionPcsProvider, ConnectorPcsProvider};

/** VDR : R20 change - moved back here from ProcessPlatformVisu\SP0VVUST.m\LocalInterfaces\CATSPPFilterSettingsFrame.h
* Specification of the default display order to be used in PPR tree
* @param Alphanumeric
*        Order product/resource list in alphanumeric order
* @param Loaded
*        Order product/resource list in the loaded order
* @param MfgHub
*        Order product/resource list as per the existing order in E5
*/
enum CATSPPListDisplayOrder { LoadedOrder, AlphaNumericOrder, MfgHubOrder };

#include "CATSPPDeclarations.idl"

#endif

