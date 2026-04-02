#ifndef CATSchGeneralEnum_H
#define CATSchGeneralEnum_H

//	COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Schematic visualization display modes. 
 * <b>Role</b>: For visualization control of components and routes.
 */

enum CATSchDisplayMode
{
  CATSchDisplayMode_Default         = 0,
	CATSchDisplayMode_Alternate       = 1
};

/**
 * Alternate Graphic styles for routes.
 * <b>Role</b>: For displaying a route under alternate display mode.
 */

enum CATSchRouteAlternateGraphicStyle
{
  CATSchRouteAlternateGraphicStyle_ellipse   = 0
};

/**
 * Schematic extension types. 
 * <b>Role</b>: For creation and modification of schematic base objects.
 */

enum CATSchExtensionType
{
  SchComponent_Extension = 0,
  SchRoute_Extension     = 1,
  SchCompConnector_Extension = 2, 
  SchRouteConnector_Extension = 3, 
  SchZone_Extension      = 4
};

/**
 * Schematic routing modes. 
 * <b>Role</b>: For creation and modification of a route.
 */

enum CATSchRouteMode
{
  SchRouteMode_Undefined                = 0,
	SchRouteMode_HorizontalVertical       = 1,
	SchRouteMode_HorizontalVertical45     = 2,
	SchRouteMode_PointToPoint             = 3,
  SchRouteMode_AroundObject             = 4
};

/**
 * Schematic internal flow types. 
 * <b>Role</b>: For inserting a component into a route.
 */
enum CATSchInternalFlowType
{
	SchInternFlowType_Undefined  = 0,
	SchInternFlowType_Corner     = 1,
	SchInternFlowType_Linear     = 2
};

/**
 * Schematic internal flow flow status. 
 * <b>Role</b>: For inserting a component into a route.
 */
enum CATSchInternalFlowStatus
{
   SchInternFlowStatus_Undefined  = 0,
   SchInternFlowStatus_Open       = 1,
   SchInternFlowStatus_Close      = 2
};

/**
 * Schematic connector flow directions. 
 * <b>Role</b>: Actual flow directions of a connector.
 */
enum CATSchCntrFlowReality
{
   SchCntrFlowReality_Undefined      = 0,
   SchCntrFlowReality_InDirection    = 1,
   SchCntrFlowReality_OutDirection   = 2,
   SchCntrFlowReality_InOutDirection = 3
};

/**
 * Schematic connector flow directions. 
 * <b>Role</b>: Possible flow directions of a connector.
 */
enum CATSchCntrFlowCapability
{
   SchCntrFlowCapability_Undefined      = 0,
   SchCntrFlowCapability_InDirection    = 1,
   SchCntrFlowCapability_OutDirection   = 2,
   SchCntrFlowCapability_InOutDirection = 3
};

/**
 * Schematic connector symbol types. 
 * <b>Role</b>: Connector symbol or graphic.
 */
enum CATSchCntrSymbolType
{
   SchCntrSymbol_Undefined    = 0,
   SchCntrSymbol_Point        = 1,
   SchCntrSymbol_PtVector     = 2,
   SchCntrSymbol_OnOffSheet   = 3,
   SchCntrSymbol_LineBoundary = 4
};

/**
 * Flag for whether or not to compress a schematic route,
 * i.e., clean up its route pts.
 * <b>Role</b>: Indicate whether or not to clean up the pts of a route.
 */
enum CATSchRouteCompressMode
{
   SchCompressOff    = 0,
   SchCompressOn     = 1
};

/**
 * Schematic route gap priority.
 * <b>Role</b>: Indicates which route to gap when 2 routes intersect.
 */
enum CATSchGapPriority
{
   SchGapThisRoute     = 0,
   SchGapInputRoute    = 1,
   SchGapNoPriority    = 2,
   SchGapHorizontalSeg = 3,
   SchGapVerticalSeg   = 4
};

/**
 * Schematic route arrow style.
 * <b>Role</b>: Indicates which flow arrow style to display on route.
 */
enum CATSchArrowStyle
{
	CATSchFillArrow     = 0,
	CATSchNotFillArrow  = 1,
	CATSchStandardArrow = 2
};

/**
 * Schematic route arrow position.
 * <b>Role</b>: Indicates position of flow arrow on route.
 */
enum CATSchArrowPosition
{
	CATSchMidSegArrow = 0,
	CATSchEndSegArrow = 1
};

/**
 * Schematic route arrow frequency.
 * <b>Role</b>: Indicates which route segments get a flow arrow display.
 */
enum CATSchArrowFrequency
{
	CATSchArrowAllSegs       = 0,
	CATSchArrowAllButLastSeg = 1,
	CATSchArrowInteriorSegs  = 2,
	CATSchArrowMiddleSeg     = 3
};

/**
 * Schematic route gap style.
 * <b>Role</b>: Indicates which gap style to display at route intersections.
 */
enum CATSchGapStyle
{
	CATSchBlankGap = 0,
	CATSchJumpGap  = 1,
	CATSchWavyGap  = 2
};

/**
 * Schematic route event type.
 * <b>Role</b>: Event type for routing to indicate the kind of 
 * the notification sent.
 */
enum CATSchEvent
{
	CATSchEvent_RouteDataChange  = 1,
	CATSchEvent_RouteTerminate   = 2
};

/**
 * Flag for whether or not to unset gaps when setting a route's path.
 * <b>Role</b>: Indicate whether or not to unset gaps in effected routes.
 */
enum CATSchRouteUnsetGapsMode
{
   SchUnsetGapsOff    = 0,
   SchUnsetGapsOn     = 1
};

/**
 * Flag for whether or not to update location of route symbols when setting a route's path.
 * <b>Role</b>: Indicate whether or not to update location of the route symbols.
 */
enum CATSchRouteSymbolUpdateMode
{
   SchSymbolUpdateOff = 0,
   SchSymbolUpdateOn  = 1
};

#endif
