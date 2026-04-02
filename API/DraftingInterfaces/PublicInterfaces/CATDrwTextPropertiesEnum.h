#ifndef CATIDrwTextPropertiesEnum_H
#define CATIDrwTextPropertiesEnum_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
* @deprecated V5R31 replacement CATIDftTextProperties
* @CAA2Level L1
* @CAA2Usage U1
*/

/**
* Justification of a text block.
* @param CATDrwLeft
*   Align all the lines of a text block to its left side.
* @param CATDrwCenter
*   Align all the lines of a text block to its center.
* @param CATDrwRight
*   Align all the lines of a text block to its right side.
* @param CATDrwJustified
* @deprecated V5R18
*   Align all the lines of a text block to both sides (Not Implemented).
* @see CATIDrwTextProperties
*/
enum CATDrwJustification{ CATDrwLeft = 1, CATDrwCenter = 2, CATDrwRight = 3, CATDrwJustified = 4};

/**
* Anchor point of a text block.
* @param CATDrwTopLeft
*   Anchor point is at the top left of the text box. 
* @param CATDrwMiddleLeft
*   Anchor point is at the middle left of the text box. 
* @param CATDrwBottomLeft
*   Anchor point is at the bottom left of the text box. 
* @param CATDrwTopCenter
*   Anchor point is at the top center of the text box. 
* @param CATDrwMiddleCenter
*   Anchor point is at the middle center of the text box. 
* @param CATDrwBottomCenter
*   Anchor point is at the bottom center of the text box. 
* @param CATDrwTopRight
*   Anchor point is at the top right of the text box. 
* @param CATDrwMiddleRight
*   Anchor point is at the middle right of the text box. 
* @param CATDrwBottomRight
*   Anchor point is at the bottom right of the text box. 
* @param CATDrwCapLeft
*   Anchor point is on the left of the cap line of text block first line. 
* @param CATDrwHalfLeft
*   Anchor point is at the middle left of the text box.
* @param CATDrwBaseLeft
*   Anchor point is on the left of the base line of text block last line. 
* @param CATDrwCapCenter
*   Anchor point is at the center of the cap line of text block first line. 
* @param CATDrwHalfCenter
*   Anchor point is at the middle center of the text box. 
* @param CATDrwBaseCenter
*   Anchor point is at the center of the base line of text block last line. 
* @param CATDrwCapRight
*   Anchor point is on the right of the cap line of text block first line. 
* @param CATDrwHalfRight
*   Anchor point is at the middle right of the text box. 
* @param CATDrwBaseRight
*   Anchor point is on the right of the base line of text block last line. 
* @see CATIDrwTextProperties
*/
enum CATDrwAnchorPoint{ CATDrwTopLeft          =  1, CATDrwTopCenter          =  4, CATDrwTopRight          =  7,   
                        CATDrwMiddleLeft       =  2, CATDrwMiddleCenter       =  5, CATDrwMiddleRight       =  8,   
                        CATDrwBottomLeft       =  3, CATDrwBottomCenter       =  6, CATDrwBottomRight       =  9,   
                        CATDrwCapLeft          = 11, CATDrwCapCenter          = 14, CATDrwCapRight          = 17,   
                        CATDrwHalfLeft         = 12, CATDrwHalfCenter         = 15, CATDrwHalfRight         = 18,   
                        CATDrwBaseLeft         = 13, CATDrwBaseCenter         = 16, CATDrwBaseRight         = 19,
                        CATDrwFrameTopLeft     = 21, CATDrwFrameTopCenter     = 24, CATDrwFrameTopRight     = 27,   
                        CATDrwFrameMiddleLeft  = 22, CATDrwFrameMiddleCenter  = 25, CATDrwFrameMiddleRight  = 28,   
                        CATDrwFrameBottomLeft  = 23, CATDrwFrameBottomCenter  = 26, CATDrwFrameBottomRight  = 29,
                        CATDrwSymbolTopLeft    = 31, CATDrwSymbolTopCenter    = 34, CATDrwSymbolTopRight    = 37,   
                        CATDrwSymbolMiddleLeft = 32, CATDrwSymbolMiddleCenter = 35, CATDrwSymbolMiddleRight = 38,   
                        CATDrwSymbolBottomLeft = 33, CATDrwSymbolBottomCenter = 36, CATDrwSymbolBottomRight = 39
                      };

/**
* @nodoc
* Type of anchor points.
* @param CATDrwDefaultType
*   Text is an unlinked text
* @param CATDrwTextWithAttributeLink
*   Text contains Attribute links
* @param CATDrwTextWithATSDefinition
*   The Text contains ATS Definitions
* @param CATDrwTextWithMixedATSDefinitionAndAttributeLink  
*   The Text contains ATS Definitions and Attribute links
*/
enum CATDrwAnchorType{ CATDrwBottomTopAnchorPoint =  0, CATDrwBaseCapAnchorPoint = 10,
                       CATDrwFrameAnchorPoint     = 20, CATDrwSymbolAnchorPoint  = 30 };

/**
* Shape of the frame around a text block.
* @param CATDrwNone
*   No frame.
* @param CATDrwRectangle
*   Rectangle shaped frame.
* @param CATDrwSquare
*   Square shaped frame.
* @param CATDrwCircle
*   Circle shaped frame.
* @param CATDrwScoredCircle
*   Circle shaped frame, horizontaly cut in half by a straight line.
*   This kind of frame is used for Datum Target features.
* @param CATDrwDiamond
*   Diamond shaped frame.
* @param CATDrwTriangle
*   Triangle shaped frame.
* @param CATDrwRightFlag
*   Flag shaped frame, flag pointing to the right.
* @param CATDrwLeftFlag
*   Flag shaped frame, flag pointing to the left.
* @param CATDrwBothFlag
*   Flag shaped frame, flag pointing to both sides.
* @param CATDrwOblong
*   Oblong shaped frame.
* @param CATDrwEllipse
*   Ellipse shaped frame.
* @param CATDrwRightOblong
*   Oblong shaped frame, oblong pointing to the right.
* @param CATDrwLeftOblong
*   Oblong shaped frame, oblong pointing to the left.
* @param CATDrwCustom
*   The frame is not a basic one. It's a special frame, defined by the application.
* @see CATIDrwTextProperties
*/
enum CATDrwFrameType{ CATDrwNone         =   0,    CATDrwRectangle  = 1,     CATDrwSquare   =  2,    CATDrwCircle    =  3,
                      CATDrwScoredCircle =   4,    CATDrwDiamond    = 5,     CATDrwTriangle =  6,    CATDrwRightFlag =  7, 
                      CATDrwLeftFlag     =   8,    CATDrwBothFlag   = 9,     CATDrwOblong   = 10,    CATDrwEllipse   = 11,
                      CATDrwRightOblong  =  12,    CATDrwLeftOblong = 13,    CATDrwSticking = 14,    CATDrwSet       = 15,
                      CATDrwFixedSupport =  16,    CATDrwNota       = 17,    CATDrwSymPart  = 18,    CATDrwSymSet    = 19,
					            CATDrwScoredRectangle = 20,  CATDrwParallelogram = 21,

                      CATDrwFixRectangle  = 51, CATDrwFixSquare   = 52, CATDrwFixCircle    = 53,
                      CATDrwFixScoredCircle =  54, CATDrwFixDiamond    = 55, CATDrwFixTriangle = 56, CATDrwFixRightFlag = 57, 
                      CATDrwFixLeftFlag     =  58, CATDrwFixBothFlag   = 59, CATDrwFixOblong   = 60, CATDrwFixEllipse   = 61,
                      CATDrwFixRightOblong  =  62, CATDrwFixLeftOblong = 63, CATDrwFixSticking = 64, CATDrwFixSet       = 65,
                      CATDrwFixFixedSupport =  66, CATDrwFixNota       = 67, CATDrwFixSymPart  = 68, CATDrwFixSymSet    = 69, 
					            CATDrwFixScoredRectangle =  70, CATDrwFixParallelogram = 71,

					            CATDrwCustom = 255
                    };

/**
* List of standard engineering symbols.
* @param CATDrwSymbolNone 
*    No Symbol.               
* @param CATDrwDiameter                  
*    Diameter symbol.
* @param CATDrwPosition
*    Position symbol.                  
* @param CATDrwPlusMinus
*    Plus-minus mathematical symbol.                 
* @param CATDrwDegree                
*    Degree unit symbol.    
* @param CATDrwMicron    
*    Micron unit symbol.                
* @param CATDrwAngularity
*    Angularity symbol.                
* @param CATDrwCircularity               
*    Circularity symbol.
* @param CATDrwConcentricity             
*    Concentricity symbol.
* @param CATDrwCylindricity
*    Cylindricity symbol.              
* @param CATDrwParallelism
*    Parallelism symbol.               
* @param CATDrwPerpendicularity          
*    Perpendicularity symbol.
* @param CATDrwSymmetry       
*    Symmetry symbol.           
* @param CATDrwTotalRunout               
*    Total run out symbol.
* @param CATDrwStraightness              
*    Straightness symbol.
* @param CATDrwFlatness   
*    Flatness symbol.               
* @param CATDrwProfileOfALine            
*    Profile of a line symbol.
* @param CATDrwProfileOfASurface
*    Profile of a surface symbol.         
* @param CATDrwCircularRunout     
*    Circular run out symbol.       
* @param CATDrwCounterSunk    
*    Counter sunk symbol.           
* @param CATDrwCounterBore
*    Counter bore symbol.               
* @param CATDrwDepth      
*    Depth symbol.               
* @param CATDrwCenterLine                
*    Center line symbol.
* @param CATDrwOhm       
*    Ohm unit symbol.                
* @param CATDrwEnvelope
*    Envelope symbol.
* @param CATDrwFreeState                 
*    Free state symbol.
* @param CATDrwAtLeastMaterialCondition  
*    At least material condition symbol.
* @param CATDrwAtMaximumMaterialCondition
*    At maximum material condition symbol.
* @param CATDrwProjectedToleranceZone    
*    Project tolerance zone symbol.
* @param CATDrwRegardlessOfTheActualSize 
*    Regardless of the actual size symbol.
* @param CATDrwTangentPlane              
*    Tangent plane symbol.
* @param CATDrwLowerOrEqual
*    Lower or equal mathematical symbol.              
* @param CATDrwGreaterOrEqual            
*    Greater or equal mathematical symbol.
* @param CATDrwThreadPrefix            
*    Thread prefix symbol.
* @param CATDrwSlope            
*    Slope symbol.
* @param CATDrwConicalTaper            
*    ConicalTaper symbol.
* @param CATDrwUpTriangle            
*    UpTriangle symbol.
* @param CATDrwSquareForTol            
*    Square symbol.
* @param CATDrwStatisticalTolerance            
*    Statistical Tolerance symbol.
* @param CATDrwBetween            
*    Length between symbol.
* @see CATIDrwTextProperties
*/
enum CATDrwSymbol{ CATDrwSymbolNone                  = -1, 
                   CATDrwDiameter                    =  0, CATDrwPosition                    =  1, 
                   CATDrwPlusMinus                   =  2, CATDrwDegree                      =  3, 
                   CATDrwMicron                      =  4, CATDrwAngularity                  =  5, 
                   CATDrwCircularity                 =  6, CATDrwConcentricity               =  7, 
                   CATDrwCylindricity                =  8, CATDrwParallelism                 =  9, 
                   CATDrwPerpendicularity            = 10, CATDrwSymmetry                    = 11, 
                   CATDrwTotalRunout                 = 12, CATDrwStraightness                = 13, 
                   CATDrwFlatness                    = 14, CATDrwProfileOfALine              = 15, 
                   CATDrwProfileOfASurface           = 16, CATDrwCircularRunout              = 17, 
                   CATDrwCounterSunk                 = 18, CATDrwCounterBore                 = 19, 
                   CATDrwDepth                       = 20, CATDrwCenterLine                  = 21, 
                   CATDrwOhm                         = 22, CATDrwEnvelope                    = 23,
                   CATDrwFreeState                   = 24, CATDrwAtLeastMaterialCondition    = 25,
                   CATDrwAtMaximumMaterialCondition  = 26, CATDrwProjectedToleranceZone      = 27,
                   CATDrwRegardlessOfTheActualSize   = 28, CATDrwTangentPlane                = 29,
                   CATDrwLowerOrEqual                = 30, CATDrwGreaterOrEqual              = 31,
                   CATDrwThreadPrefix                = 32, CATDrwSlope                       = 33,
                   CATDrwConicalTaper                = 34, CATDrwUpTriangle                  = 35,
                   CATDrwSquareForTol                = 36, CATDrwStatisticalTolerance        = 37,
                   CATDrwBetween                     = 38
                 };           

/**
* Mode used to define the line spacing.
* @param CATDrwBottomToTop
*   Line spacing is the distance between a bottom line and the top line bellow it.
* @param CATDrwBaseToCap
*   Line spacing is the distance between a base line and the cap line bellow it.
* @param CATDrwBaseToBase
*   Line spacing is the distance between a base line and the base line bellow it.
* @see CATIDrwTextProperties
*/
enum CATDrwLineSpacingDefinition{ CATDrwBottomToTop = 1, CATDrwBaseToCap = 2, CATDrwBaseToBase = 3 };


/**
* Mirroring of a text block.
* @param CATDrwNoFlip
*   No mirroring : the text is not flipped horizontally nor vertically.
* @param CATDrwFlipHorizontal
*   The text is flipped horizontally.
* @param CATDrwFlipVertical
*   The text is flipped vertically.
* @param CATDrwFlipHorizontalAndVertical
*   The text is flipped both horizontally and vertically.
* @param CATDrwFlipAutomatic
*   The text is automatically flipped.
* @see CATIDrwTextProperties
*/
enum CATDrwMirroringDefinition{ CATDrwNoFlip = 1, CATDrwFlipHorizontal = 2, CATDrwFlipVertical = 3, CATDrwFlipHorizontalAndVertical = 4, CATDrwFlipAutomatic = 5 };

/**
* Pitch of a font.
* @param CATDrwPitchFixed
*   The pitch is fixed.
* @param CATDrwPitchVariable
*   The pitch is variable.
* @param CATDrwPitchFixedFull
*   The pitch is fixed for all stroke fonts.
* @see CATIDrwTextProperties
*/
enum CATDrwPitchDefinition{ CATDrwPitchFixed = 0, CATDrwPitchVariable = 1};

/**
* The display mode of units in a text (if the text contains (a) parameter(s) with unit(s)).
* @param CATDrwUnitDisplayNone
*   Do not display any unit.
* @param CATDrwUnitDisplayAll
*   Display all units.
* @see CATIDrwTextProperties
*/
enum CATDrwUnitDisplayMode{ CATDrwUnitDisplayNone = 0, CATDrwUnitDisplayAll = 1 };

/**
* Scale behaviour.
* @param CATDrwFreeScale
*   Independant scale. 
* @param CATDrwLinkedScale
*   Scale depends on the view scale.
* @see CATIDrwTextProperties
*/
enum CATDrwScaleMode{ CATDrwFreeScale = 0, CATDrwScaleLinkedToView = 1 };

/**
* @nodoc
* Type of a text.
* @param CATDrwDefaultType
*   Text is an unlinked text
* @param CATDrwTextWithAttributeLink
*   Text contains Attribute links
* @param CATDrwTextWithATSDefinition
*   The Text contains ATS Definitions
* @param CATDrwTextWithMixedATSDefinitionAndAttributeLink  
*   The Text contains ATS Definitions and Attribute links
*/
enum CATDrwTextType{ CATDrwDefaultType = 0, CATDrwTextWithAttributeLink = 1, CATDrwTextWithATSDefinition = 2, CATDrwTextWithMixedATSDefinitionAndAttributeLink = 3 };

/**
* @nodoc
* @param CATDrwBlankingInactive
*   Blank background is inactive
* @param CATDrwBlankingActive
*   Blank background is active and overlap only Area Fill
* @param CATDrwBlankingOnGeom
*   Blank background is active and overlap Area Fill and 2D Geometry
*/
enum CATDrwBlankingMode{ CATDrwBlankingInactive = 0, CATDrwBlankingActive = 1, CATDrwBlankingOnGeom = 2 };

#endif

//=====================================================================================
//
// Include for macro MAKE_HRESULT
#include "CATErrorDef.h"
//
// MAKE_HRESULT( SEVERITY CODE, FACILITY CODE, INFORMATION CODE )
// --------------------------------------------------------------
// SEVERITY CODE    : As HRESULTs defined bellow are success, we use SEVERITY_SUCCESS.
// FACILITY CODE    : FACILITY_ITF is the only legal facility code for user-defined HRESULTs.
//                    FACILITY_ITF values need only be unique in the context of a particular interface.
// INFORMATION CODE : The convention for user-defined HRESULTS is to select values above 0x200
//                    to avoid reusing values already used by system HRESULTS.
//
/**
* Returned value cannot be modified, it's read-only.
* @param S_READONLY  
*/
#ifndef S_READONLY
#define S_READONLY MAKE_HRESULT( SEVERITY_SUCCESS, FACILITY_ITF, 0x200 + 01 )
#endif
/**
* Returned value is undefined.
* @param S_UNDEFINED  
*/
#ifndef S_UNDEFINED
#define S_UNDEFINED MAKE_HRESULT( SEVERITY_SUCCESS, FACILITY_ITF, 0x200 + 02 )
#endif
//
//=====================================================================================

