#ifndef CATDftTextParameters_H
#define CATDftTextParameters_H
//==============================================================================
//                                   CATIA - Version 5
//	COPYRIGHT DASSAULT SYSTEMES 1999
//------------------------------------------------------------------------------
// FILENAME    :    CATDftTextParameters.h
// LOCATION    :    DraftingInterfaces\PublicInterfaces
// AUTHOR      :    XJT
// DATE        :    April 1999
//------------------------------------------------------------------------------
// DESCRIPTION :    Enums for Text
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
* Global text parameters.
* Enum used to specified global text parameters.
* @see CATIDftText
*/
enum DftTextSetting { 
  DftBorderMode  = 0  , // INTEGER
  DftAutoFlip    = 1  , // INTEGER
  DftLineSpacing = 2  , // DOUBLE
  DftCharSlant   = 3  , // DOUBLE
  DftCharSpacing = 4 }; // DOUBLE 

/**
* Wrapping mode.
* Enum used to specified wrapping behaviour.
* @see CATIDftText
*/
enum DftWrappingMode { 
  DftWrappingOff  = 0 ,
  DftWrappingOn   = 1 ,
  DftWrappingAuto = 2};

/**
* Justification of a text block.
* @param DftLeft
*   Align all the lines of a text block to its left side.
* @param DftCenter
*   Align all the lines of a text block to its center.
* @param DftRight
*   Align all the lines of a text block to its right side.
* @param DftJustified
* @deprecated V5R18
*   Align all the lines of a text block to both sides (Not Implemented).
* @see CATIDftTextProperties
*/
enum DftJustification {  
  DftLeft = 1, 
  DftCenter = 2, 
  DftRight = 3, 
  DftJustified = 4 };

/**
* Anchor point of a text block.
* @param DftTopLeft
*   Anchor point is at the top left of the text box.
* @param DftMiddleLeft
*   Anchor point is at the middle left of the text box.
* @param DftBottomLeft
*   Anchor point is at the bottom left of the text box.
* @param DftTopCenter
*   Anchor point is at the top center of the text box.
* @param DftMiddleCenter
*   Anchor point is at the middle center of the text box.
* @param DftBottomCenter
*   Anchor point is at the bottom center of the text box.
* @param DftTopRight
*   Anchor point is at the top right of the text box.
* @param DftMiddleRight
*   Anchor point is at the middle right of the text box.
* @param DftBottomRight
*   Anchor point is at the bottom right of the text box.
* @param DftCapLeft
*   Anchor point is on the left of the cap line of text block first line.
* @param DftHalfLeft
*   Anchor point is at the middle left of the text box.
* @param DftBaseLeft
*   Anchor point is on the left of the base line of text block last line.
* @param DftCapCenter
*   Anchor point is at the center of the cap line of text block first line.
* @param DftHalfCenter
*   Anchor point is at the middle center of the text box.
* @param DftBaseCenter
*   Anchor point is at the center of the base line of text block last line.
* @param DftCapRight
*   Anchor point is on the right of the cap line of text block first line.
* @param DftHalfRight
*   Anchor point is at the middle right of the text box.
* @param DftBaseRight
*   Anchor point is on the right of the base line of text block last line.
* @see CATIDftTextProperties
*/
enum DftAnchorPoint { DftTopLeft          = 1, DftTopCenter           = 4, DftTopRight           = 7,
                      DftMiddleLeft       = 2, DftMiddleCenter        = 5, DftMiddleRight        = 8,
                      DftBottomLeft       = 3, DftBottomCenter        = 6, DftBottomRight        = 9,
                      DftCapLeft          = 11, DftCapCenter          = 14, DftCapRight          = 17,
                      DftHalfLeft         = 12, DftHalfCenter         = 15, DftHalfRight         = 18,
                      DftBaseLeft         = 13, DftBaseCenter         = 16, DftBaseRight         = 19,
                      DftFrameTopLeft     = 21, DftFrameTopCenter     = 24, DftFrameTopRight     = 27,
                      DftFrameMiddleLeft  = 22, DftFrameMiddleCenter  = 25, DftFrameMiddleRight  = 28,
                      DftFrameBottomLeft  = 23, DftFrameBottomCenter  = 26, DftFrameBottomRight  = 29,
                      DftSymbolTopLeft    = 31, DftSymbolTopCenter    = 34, DftSymbolTopRight    = 37,
                      DftSymbolMiddleLeft = 32, DftSymbolMiddleCenter = 35, DftSymbolMiddleRight = 38,
                      DftSymbolBottomLeft = 33, DftSymbolBottomCenter = 36, DftSymbolBottomRight = 39
                     };

/**
* Frame type. 
* Enum used to specified text frame type.
* @see CATIDftTextProperties
*/
enum DftFrameType{ 
  DftNone         = 0, 
  DftRectangle    = 1, 
  DftSquare       = 2, 
  DftCircle       = 3,
  DftScoredCircle = 4, 
  DftDiamond      = 5, 
  DftTriangle     = 6, 
  DftRightFlag    = 7, 
  DftLeftFlag     = 8, 
  DftBothFlag     = 9, 
  DftOblong       = 10, 
  DftEllipse         = 11,
  DftRightOblong     = 12,
  DftLeftOblong      = 13,
  DftSticking        = 14,
  DftSet             = 15,
  DftFixedSupport    = 16,
  DftNota            = 17,
  DftSymPart         = 18,
  DftSymSet          = 19,
  DftScoredRectangle = 20,
  DftParallelogram   = 21,
  DftFixRectangle    = 51, 
  DftFixSquare       = 52, 
  DftFixCircle       = 53,
  DftFixScoredCircle = 54, 
  DftFixDiamond      = 55, 
  DftFixTriangle     = 56, 
  DftFixRightFlag    = 57, 
  DftFixLeftFlag     = 58, 
  DftFixBothFlag     = 59, 
  DftFixOblong       = 60, 
  DftFixEllipse         = 61,
  DftFixRightOblong     = 62,
  DftFixLeftOblong      = 63,
  DftFixSticking        = 64,
  DftFixSet             = 65,
  DftFixFixedSupport    = 66,
  DftFixNota            = 67,
  DftFixSymPart         = 68,
  DftFixSymSet          = 69,
  DftFixScoredRectangle = 70,
  DftFixParallelogram   = 71,
  DftCustom       = 255 };  

/**
* Mode used to define the line spacing.
* @param DftBottomToTop
*   Line spacing is the distance between a bottom line and the top line bellow it.
* @param DftBaseToCap
*   Line spacing is the distance between a base line and the cap line bellow it.
* @param DftBaseToBase
*   Line spacing is the distance between a base line and the base line bellow it.
* @see CATIDrwTextProperties
*/
enum DftLineSpacingDefinition { DftBottomToTop = 1, DftBaseToCap = 2, DftBaseToBase = 3 };

/**
* Mirroring of a text block.
* @param DftNoFlip
*   No mirroring : the text is not flipped horizontally nor vertically.
* @param DftFlipHorizontal
*   The text is flipped horizontally.
* @param DftFlipVertical
*   The text is flipped vertically.
* @param DftFlipHorizontalAndVertical
*   The text is flipped both horizontally and vertically.
* @param DftFlipAutomatic
*   The text is automatically flipped.
* @see CATIDrwTextProperties
*/
enum DftMirroringDefinition { DftNoFlip = 1, DftFlipHorizontal = 2, DftFlipVertical = 3, DftFlipHorizontalAndVertical = 4, DftFlipAutomatic = 5 };

/**
* Pitch of a font.
* @param DftPitchFixed
*   The pitch is fixed.
* @param DftPitchVariable
*   The pitch is variable.
* @param DftPitchFixedFull
*   The pitch is fixed for all stroke fonts.
* @see CATIDrwTextProperties
*/
enum DftPitchDefinition { DftPitchFixed = 0, DftPitchVariable = 1 };

/**
* The display mode of units in a text (if the text contains (a) parameter(s) with unit(s)).
* @param DftUnitDisplayNone
*   Do not display any unit.
* @param DftUnitDisplayAll
*   Display all units.
* @see CATIDrwTextProperties
*/
enum DftUnitDisplayMode { DftUnitDisplayNone = 0, DftUnitDisplayAll = 1 };

/**
* Scale behaviour.
* @param DftFreeScale
*   Independant scale.
* @param DftLinkedScale
*   Scale depends on the view scale.
* @see CATIDrwTextProperties
*/
enum DftScaleMode { DftFreeScale = 0, DftScaleLinkedToView = 1 };

/**
* @param DftBlankingInactive
*   Blank background is inactive
* @param DftBlankingActive
*   Blank background is active and overlap only Area Fill
* @param DftBlankingOnGeom
*   Blank background is active and overlap Area Fill and 2D Geometry
*/
enum DftBlankingMode { DftBlankingInactive = 0, DftBlankingActive = 1, DftBlankingOnGeom = 2 };

/** 
* GDT tolerance symbols.
* @see CATIDftGDT
*/
enum DftGDTSymbol { 
  DFT_GDT_NOSYMBOL ,
  DFT_GDT_STRAIGHTNESS ,
  DFT_GDT_FLATNESS ,
  DFT_GDT_CIRCULARITY ,
  DFT_GDT_CYLINDRICITY ,
  DFT_GDT_LINEPROFILE ,
  DFT_GDT_SURFACEPROFILE ,
  DFT_GDT_ANGULARITY ,
  DFT_GDT_PERPENDICULARITY ,
  DFT_GDT_PARALLELISM ,
  DFT_GDT_POSITION ,
  DFT_GDT_CONCENTRICITY ,
  DFT_GDT_SYMMETRY ,
  DFT_GDT_CIRCULARRUNOUT ,
  DFT_GDT_TOTALRUNOUT };					

/** 
* GDT modification symbols.
* @see CATIDftGDT
*/
enum DftGDTModifier { 
  DFT_GDT_NOMODIFIER ,
  DFT_GDT_MAX ,
  DFT_GDT_MIN ,
  DFT_GDT_PROJ ,
  DFT_GDT_FREE ,
  DFT_GDT_TFU ,
  DFT_GDT_TANGENT,
  DFT_GDT_ST,
  DFT_GDT_ARROW };

/** 
* GDT modification symbols.
* @see CATIDftGDT
*/
enum DftGDTModifiers { 
  Dft_None = -1,
  Dft_Diameter = 0,
  Dft_Free = 24,
  Dft_Least = 25,
  Dft_Max = 26,
  Dft_Proj = 27,
  Dft_Nas = 28,
  Dft_Tangent = 29,
  Dft_ST = 37,
  Dft_Arrow = 38,
  Dft_Unequally = 39
};

/** 
* GDT value types.
* @see CATIDftGDT
*/
enum DftGDTValueType {
  DFT_GDT_NOVALUETYPE ,
  DFT_GDT_DIAMETER ,
  DFT_GDT_RADIUS };

/**
* Defines behaviour of an associativity.
* Override  : Overrides the associativity to match the new position.
* Recompute : Keep the delta information of the associativity (the position given is only an indication).
* Delete    : Deletes the associativity.
* @see CATIDftAnnotation
*/
enum DftAssociativityMode {
  Override  = 0,
  Recompute = 1,
  Delete    = 2};

/** Define the possible orientation reference of an annotation.
* Sheet   : the angle of the annotation is given in the sheet.<BR>
* View    : the angle of the annotation is given in its view.<BR>
* Element : the angle of the annotation is given associatively to an element.
* @see CATIDftAnnotation
*/
enum DftOrientationReference {
  DftOrientSheet  = 0,
  DftOrientView   = 1,
  DftOrientElement= 2};
  
/**
*                    4
*             7   /-------
*             8  /    3
*            \  / 6   1
*           5 \/      2.
*/
enum DftRoughnessText
{
	Rough_FirstRequirement   = 1,
  Rough_SecondRequirement  = 2,
	Rough_OtherRequirement   = 3,
  Rough_ProductionMethod   = 4,
	Rough_MachiningAllowance = 5,
	Rough_CutOff             = 6,
	Rough_Max                = 7,
  Rough_Min                = 8
};

/**
* Kind of roughness specification for machining process.
*/
enum DftRoughType
{
	Rough_Basic,
	Rough_RemovalRequired,
	Rough_RemovalProhibited
};

/**
* Kind of roughness specification for surface lay.
*/
enum DftRoughSurfaceLay
{
	RoughMode_None,
	RoughMode_Parallel,
	RoughMode_Perpendicular,
	RoughMode_Crossed,
	RoughMode_Multidirection,
	RoughMode_Circular,
	RoughMode_Radial,
	RoughMode_Particulate
};

/** 
* Thread types.
*/
enum DftThreadType { 
  DftThreaded, 
  DftTaped 
};

#endif
