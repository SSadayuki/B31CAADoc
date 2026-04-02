#ifndef CATDrwDimDefine_H
#define CATDrwDimDefine_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
  * Defines for dimension properties handling
  */

/**
 *  @nodoc
 *  @param CATDrwDimMultiSel  
 *   Heterogeneous Multi-Selection.
 */
#ifndef CATDrwDimMultiSel
#define CATDrwDimMultiSel 255
#endif

/**
 *  Kinds of dimension.
 *  <b>Role</b>: Define the various kinds of dimension.
 *  @param CATDrwDimLinear
 *   Linear.
 *  @param CATDrwDimAngular
 *   Angular.
 */
/**
 *  @nodoc
 */
#ifndef CATDrwDimLinear
#define CATDrwDimLinear 0
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimAngular
#define CATDrwDimAngular 1
#endif

/**
 *  Dimension dual value display.
 *  <b>Role</b>: Define the dual value display modes.
 *  @param CATDrwDimDualNone
 *   Do not display dual value.
 *  @param CATDrwDimDualBellow
 *   Display dual value bellow main value.
 *  @param CATDrwDimDualFractional
 *   Display dual value bellow main value with fractionnal display.
 *  @param CATDrwDimDualSideBySide
 *   Display dual value and main value side by side.
 */
/**
 *  @nodoc
 */
#ifndef CATDrwDimDualNone
#define CATDrwDimDualNone 0.0
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimDualBellow
#define CATDrwDimDualBellow 1.0
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimDualFractional
#define CATDrwDimDualFractional 2.0
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimDualSideBySide
#define CATDrwDimDualSideBySide 3.0
#endif


/**
 *  Dimension funnel modes.
 *  <b>Role</b>: Define the funnel extension line modes.
 *  @param CATDrwDimFunExt
 *   External.
 *  @param CATDrwDimFunInt
 *   Internal.
 */
/**
 *  @nodoc
 */
#ifndef CATDrwDimFunExt
#define CATDrwDimFunExt 0
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimFunInt
#define CATDrwDimFunInt 1
#endif


/**
 *  Dimension funnel sides.
 *  <b>Role</b>: Define the funnel extension line sides.
 *  @param CATDrwDimFunLeftOrBottom
 *   Left or Bottom.
 *  @param CATDrwDimFunRightOrTop
 *   Right or Top.
 *  @param CATDrwDimFunBoth
 *   Both sides.
 */
/**
 *  @nodoc
 */
#ifndef CATDrwDimFunLeftOrBottom
#define CATDrwDimFunLeftOrBottom 0
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimFunRightOrTop
#define CATDrwDimFunRightOrTop 1
#endif


/**
 *  @nodoc
 *
 *  Dimension funnel sides.
 *  <b>Role</b>: Define the funnel extension line sides.
 *  @param CATDrwDimFunLeftOrTop
 *   Left or Top.
 *  @param CATDrwDimFunRightOrBottom
 *   Right or bottom.
 *  @param CATDrwDimFunBoth
 *   Both sides.
 */
/**
 *  @nodoc
 */
#ifndef CATDrwDimFunLeftOrTop
#define CATDrwDimFunLeftOrTop 0
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimFunRightOrBottom
#define CATDrwDimFunRightOrBottom 1
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimFunBoth
#define CATDrwDimFunBoth 2
#endif


/**
 * @nodoc
 *  Kinds of dimension extension lines.
 *  <b>Role</b>: Define the various kinds of extension line.
 *  @param CATDrwDimRadius
 *   Radius.
 *  @param CATDrwDimDiameter
 *   Diameter.
 *  @param CATDrwDimExtLineLinear
 *   Linear.
 *  @param CATDrwDimExtLineCircular
 *   Circular.
 */
/**
 *  @nodoc
 */
#ifndef CATDrwDimRadius
#define CATDrwDimRadius 0
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimDiameter
#define CATDrwDimDiameter 1
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimExtLineLinear
#define CATDrwDimExtLineLinear 0
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimExtLineCircular
#define CATDrwDimExtLineCircular 1
#endif

/**
 *  Value location for forshortened dimension.
 *  <b>Role</b>: Define the value location on forshortened dimension line.
 *    The forshortened dimension line is made of 3 segments: 
 *    <ul>
 *    <li>the one which is near the circle center is called the first segment.
 *    <li>the one which is near the circle arc is called the second segment.
 *    <li>the one in the middle is not named.
 *    </ul>
 *  @param CATDrwDimFShortFirstSeg
 *   Located on first dimension line segment.
 *  @param CATDrwDimFShortSecondSeg
 *   Located on second dimension line segment.
 */
/**
 *  @nodoc
 */
#ifndef CATDrwDimFShortFirstSeg
#define CATDrwDimFShortFirstSeg 0
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimFShortSecondSeg
#define CATDrwDimFShortSecondSeg 1
#endif

/**
 *  Segment orientation mode for forshortened dimension.
 *  <b>Role</b>: Define the segment orientation mode for forshortened dimension line.
 *    The forshortened dimension line is made of 3 segments: 
 *    <ul>
 *    <li>the one which is near the circle center is called the first segment.
 *    <li>the one which is near the circle arc is called the second segment.
 *    <li>the one in the middle is not named.
 *    </ul>
 *  @param CATDrwDimFShortParallel
 *   Second segment is parallel to the first one.
 *  @param CATDrwDimFShortConvergent
 *   Second segment converges to the circle center.
 */
/**
 *  @nodoc
 */
#ifndef CATDrwDimFShortParallel
#define CATDrwDimFShortParallel 0
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimFShortConvergent
#define CATDrwDimFShortConvergent 1
#endif


/**
 * @nodoc
 *  Dimension line modes.
 *  <b>Role</b>: Define the dimension line modes.
 *  @param CATDrwDimLine1Part
 *   One part dimension line.
 *  @param CATDrwDimLine2Parts
 *   Two parts dimension line.
 *  @param CATDrwDimLeader1Part
 *   One part leader.
 *  @param CATDrwDimLeader2Parts
 *   Two parts leader.
 */
/**
 *  @nodoc
 */
#ifndef CATDrwDimLine1Part
#define CATDrwDimLine1Part 0
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimLine2Parts
#define CATDrwDimLine2Parts 1
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimLeader1Part 
#define CATDrwDimLeader1Part 2
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimLeader2Parts 
#define CATDrwDimLeader2Parts 3
#endif

/**
 * @nodoc
 *  Dimension line types.
 *  <b>Role</b>: Define the dimension line types.
 *  @param CATDrwDimLineLinear
 *   Linear.
 *  @param CATDrwDimLineLinearFShort
 *   Linear forshortened.
 *  @param CATDrwDimLineCircular
 *   Circular.
 *  @param CATDrwDimLineCurvilinear
 *   Curvilinear.
 */
/**
 *  @nodoc
 */
#ifndef CATDrwDimLineLinear
#define CATDrwDimLineLinear 1
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimLineLinearFShort
#define CATDrwDimLineLinearFShort 2
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimLineCircular
#define CATDrwDimLineCircular 3
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimLineCurvilinear
#define CATDrwDimLineCurvilinear 4
#endif


/**
 *  Orientation reference object.
 *  <b>Role</b>: Define the orientation reference object 
 * (used for dimension value, second part of the dimension line, ...).
 *  @param CATDrwDimRefScreen
 *   Screen.
 *  @param CATDrwDimRefView
 *   View.
 *  @param CATDrwDimRefDimLine
 *   Dimension line.
 */
/**
 *  @nodoc
 */
#ifndef CATDrwDimRefScreen
#define CATDrwDimRefScreen 0
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimRefView
#define CATDrwDimRefView 1
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimRefDimLine
#define CATDrwDimRefDimLine 2
#endif

/**
 *  Orientation display modes.
 *  <b>Role</b>: Define the orientation display modes according to the orientation reference object. 
 * (used for dimension value, second part of the dimension line, ...).
 *  @param CATDrwDimOrientHorizontal
 *   Horizontal if reference is screen or view.
 *  @param CATDrwDimOrientVertical
 *   Vertical if reference is screen or view.
 *  @param CATDrwDimOrientParallel
 *   Parallel if reference is dimension line.
 *  @param CATDrwDimOrientPerpendicular
 *   Perpendicular if reference is dimension line.
 *  @param CATDrwDimOrientFixedAngle
 *   Given angle fixed for all orientation reference.
 */
/**
 *  @nodoc
 */
#ifndef CATDrwDimOrientHorizontal
#define CATDrwDimOrientHorizontal 0
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimOrientVertical
#define CATDrwDimOrientVertical 1
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimOrientParallel
#define CATDrwDimOrientParallel 0
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimOrientPerpendicular
#define CATDrwDimOrientPerpendicular 1
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimOrientFixedAngle
#define CATDrwDimOrientFixedAngle 2
#endif

/**
 *  Extremity dimension line symbols.
 *  <b>Role</b>: Define the extremity dimension line symbol types. 
 *  @param CATDrwDimSymbNone
 *   None.
 *  @param CATDrwDimSymbOpenArrow
 *   Open arrow.
 *  @param CATDrwDimSymbClosedArrow
 *   Closed arrow.
 *  @param CATDrwDimSymbSymArrow
 *   Symetric arrow.
 *  @param CATDrwDimSymbSlash
 *   Slash.
 *  @param CATDrwDimSymbCircle
 *   Circle.
 *  @param CATDrwDimSymbFilledCircle
 *   Filled circle.
 *  @param CATDrwDimSymbScoredCircle
 *   Scored circle.
 *  @param CATDrwDimSymbCircledCross
 *   Circled cross.
 *  @param CATDrwDimSymbTriangle
 *   Triangle.
 *  @param CATDrwDimSymbFilledTriangle
 *   Filled triangle.
 *  @param CATDrwDimSymbCross
 *   Cross.
 *  @param CATDrwDimSymbXCross
 *   X cross.
 */
/**
 *  @nodoc
 */
#ifndef CATDrwDimSymbNone
#define CATDrwDimSymbNone 0
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimSymbOpenArrow
#define CATDrwDimSymbOpenArrow 1
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimSymbClosedArrow
#define CATDrwDimSymbClosedArrow 2
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimSymbFilledArrow
#define CATDrwDimSymbFilledArrow 3
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimSymbSymArrow
#define CATDrwDimSymbSymArrow 4
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimSymbSlash
#define CATDrwDimSymbSlash 5
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimSymbCircle
#define CATDrwDimSymbCircle 6
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimSymbFilledCircle
#define CATDrwDimSymbFilledCircle 7
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimSymbScoredCircle
#define CATDrwDimSymbScoredCircle 8
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimSymbCircledCross
#define CATDrwDimSymbCircledCross 9
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimSymbTriangle
#define CATDrwDimSymbTriangle 10
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimSymbFilledTriangle
#define CATDrwDimSymbFilledTriangle 11
#endif

/**
 *  @nodoc
 */
#ifndef CATDrwDimSymbCross
#define CATDrwDimSymbCross 12
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimSymbXCross
#define CATDrwDimSymbXCross 13
#endif


/**
 *  Extremity dimension line symbol display mode.
 *  <b>Role</b>: Define the extremity dimension line symbol display mode. 
 *  @param CATDrwDimSymbAuto
 *   Inside or Outside the extension lines depending on the size of the dimension.
 *  @param CATDrwDimSymbIn
 *   Inside the extension lines as: |<--10-->|.
 *  @param CATDrwDimSymbOut
 *   Outside the extension lines as: ->|10|<-.
 *  @param CATDrwDimSymbIn1Out2
 *   First symbol Inside the extension lines, second symbol Outside the extension lines.
 *  @param CATDrwDimSymbOut1In2
 *   First symbol Outside the extension lines, second symbol Inside the extension lines.
 */
/**
 *  @nodoc
 */
#ifndef CATDrwDimSymbAuto
#define CATDrwDimSymbAuto 0
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimSymbIn
#define CATDrwDimSymbIn 1
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimSymbOut
#define CATDrwDimSymbOut 2
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimSymbIn1Out2
#define CATDrwDimSymbIn1Out2 3
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimSymbOut1In2
#define CATDrwDimSymbOut1In2 4
#endif


/**
 *  Extension of dimension line.
 *  <b>Role</b>: Define if dimension line is extending till center or till value. 
 *  @param CATDrwTillCenterModeAuto
 *   Dimension line extended till center or till value depending of what set in Standard File.
 *  @param CATDrwTillCenterModeYes
 *   Dimension line extended till center.
 *  @param CATDrwTillCenterModeNo
 *   Dimension line extended till value.
 */
/**
 *  @nodoc
 */
#ifndef CATDrwTillCenterModeAuto
#define CATDrwTillCenterModeAuto 0
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwTillCenterModeYes
#define CATDrwTillCenterModeYes 1
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwTillCenterModeNo
#define CATDrwTillCenterModeNo 2
#endif


/**
 *  @nodoc
 *  Text style.
 *  <b>Role</b>: Define the text style. 
 *  @param CATDrwDimTextRegular
 *   Normal.
 *  @param CATDrwDimTextItalic
 *   Italic.
 *  @param CATDrwDimTextBold
 *   Bold.
 *  @param CATDrwDimTextBoldItalic
 *   Bold and italic.
 */
/**
 *  @nodoc
 */
#ifndef CATDrwDimTextRegular
#define CATDrwDimTextRegular 0
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimTextItalic
#define CATDrwDimTextItalic 1
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimTextBold
#define CATDrwDimTextBold 2
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimTextBoldItalic
#define CATDrwDimTextBoldItalic 3
#endif


/**
 *  Dimension scoring mode.
 *  <b>Role</b>: Define the scoring mode. 
 *  @param CATDrwDimScoreNone
 *   None.
 *  @param CATDrwDimUnderScored
 *   Underscored.
 *  @param CATDrwDimScored
 *   Scored.
 *  @param CATDrwDimOverScored
 *   Overscored.
 */
/**
 *  @nodoc
 */
#ifndef CATDrwDimScoreNone
#define CATDrwDimScoreNone 0
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimUnderScored
#define CATDrwDimUnderScored 1
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimScored
#define CATDrwDimScored 2
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimOverScored
#define CATDrwDimOverScored 3
#endif


/**
 *  Dimension scored element.
 *  <b>Role</b>: Define the scored element. 
 *  @param CATDrwDimScoreValue
 *   The scoring mode is applied to the value text only.
 *  @param CATDrwDimScoreAll
 *   The scoring mode is applied to the whole element.
 */
/**
 *  @nodoc
 */
#ifndef CATDrwDimScoreValue
#define CATDrwDimScoreValue 1
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimScoreAll
#define CATDrwDimScoreAll 2
#endif


/**
 *  Dimension frame types.
 *  <b>Role</b>: Define the frame types. 
 *  @param CATDrwDimFraNone
 *   None.
 *  @param CATDrwDimFraCircle
 *   Circle.
 *  @param CATDrwDimFraScoredCircle
 *   Scored circle.
 *  @param CATDrwDimFraDiamondShaped
 *   Diamond shaped.
 *  @param CATDrwDimFraSquare
 *   Square.
 *  @param CATDrwDimFraRectangle
 *   Rectangle.
 *  @param CATDrwDimFraOblong
 *   Oblong.
 *  @param CATDrwDimFraRightFlag
 *   Right flag.
 *  @param CATDrwDimFraRightTriangle
 *   Triangle.
 */
/**
 *  @nodoc
 */
#ifndef CATDrwDimFraNone
#define CATDrwDimFraNone 0
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimFraCircle
#define CATDrwDimFraCircle 1
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimFraScoredCircle
#define CATDrwDimFraScoredCircle 2
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimFraDiamondShaped
#define CATDrwDimFraDiamondShaped 3
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimFraSquare
#define CATDrwDimFraSquare 4
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimFraRectangle
#define CATDrwDimFraRectangle 5
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimFraOblong
#define CATDrwDimFraOblong 6
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimFraRightFlag
#define CATDrwDimFraRightFlag 7
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimFraRightTriangle
#define CATDrwDimFraRightTriangle 8
#endif

/**
 *  Dimension framed element.
 *  <b>Role</b>: Define the framed element. 
 *  @param CATDrwDimFraValue
 *   The framing mode is applied to the value only.
 *  @param CATDrwDimFraValTol
 *   The framing mode is applied to the value and the tolerance.
 *  @param CATDrwDimFraValTolText
 *   The framing mode is applied to the value, the tolerance and the text.
 */
/**
 *  @nodoc
 */
#ifndef CATDrwDimFraValue
#define CATDrwDimFraValue 0
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimFraValTol
#define CATDrwDimFraValTol 1
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimFraValTolText
#define CATDrwDimFraValTolText 2
#endif


/**
 *  Dimension framed group.
 *  <b>Role</b>: Define the framed group. 
 *  @param CATDrwDimFraMain
 *   The framing mode is applied to the main value only.
 *  @param CATDrwDimFraDual
 *   The framing mode is applied to the dual value only.
 *  @param CATDrwDimFraMainAndDual
 *   The framing mode is applied to the main and dual values (2 frames).
 *  @param CATDrwDimFraBoth
 *   The framing mode is applied globally to the main and dual values (1 frames).
 */
/**
 *  @nodoc
 */
#ifndef CATDrwDimFraMain
#define CATDrwDimFraMain 0
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimFraDual
#define CATDrwDimFraDual 1
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimFraMainAndDual
#define CATDrwDimFraMainAndDual 2
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimFraBoth
#define CATDrwDimFraBoth 3
#endif


/**
 *  Dimension value unit.
 *  <b>Role</b>: Define the unit. 
 *  @param CATDrwDimUnitNone
 *   None.
 *  @param CATDrwDimUnitMM
 *   Millimeter.
 *  @param CATDrwDimUnitINCH
 *   Inch.
 *  @param CATDrwDimUnitMETER
 *   Meter.
 *  @param CATDrwDimUnitCM
 *   Centimeter.
 *  @param CATDrwDimUnitKM
 *   Kilometer.
 *  @param CATDrwDimUnitFOOT
 *   Foot.
 *  @param CATDrwDimUnitF_I_F64
 *   Feet Inch Fraction 1/64.
 *  @param CATDrwDimUnitF_I_F16
 *   Feet Inch Fraction 1/16.
 *  @param CATDrwDimUnitF_I_DEC
 *   Feet Inch decimal.
 *  @param CATDrwDimUnitDEGREE
 *   Degree.
 *  @param CATDrwDimUnitMINUTE
 *   Minute.
 *  @param CATDrwDimUnitSECOND
 *   Second.
 *  @param CATDrwDimUnitRADIAN
 *   Radian.
 *  @param CATDrwDimUnitGRADE
 *   Grade.
 */
/**
 *  @nodoc
 */
#ifndef CATDrwDimUnitNone
#define CATDrwDimUnitNone 255
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimUnitMM
#define CATDrwDimUnitMM 0
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimUnitINCH
#define CATDrwDimUnitINCH 1
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimUnitMETER
#define CATDrwDimUnitMETER 2
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimUnitCM
#define CATDrwDimUnitCM 3
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimUnitKM
#define CATDrwDimUnitKM 4
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimUnitFOOT
#define CATDrwDimUnitFOOT 5
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimUnitF_I_F64
#define CATDrwDimUnitF_I_F64 6
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimUnitF_I_F16
#define CATDrwDimUnitF_I_F16 7
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimUnitF_I_DEC
#define CATDrwDimUnitF_I_DEC 8
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimUnitDEGREE
#define CATDrwDimUnitDEGREE 10
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimUnitMINUTE
#define CATDrwDimUnitMINUTE 101
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimUnitSECOND
#define CATDrwDimUnitSECOND 102
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimUnitRADIAN
#define CATDrwDimUnitRADIAN 11
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimUnitGRADE
#define CATDrwDimUnitGRADE 12
#endif


/**
 *  Dimension format.
 *  <b>Role</b>: Define the format of the value. 
 *  @param CATDrwDimFormatDec
 *   Decimal.
 *  @param CATDrwDimFormatFrac
 *   Fractional.
 */
/**
 *  @nodoc
 */
#ifndef CATDrwDimFormatDec
#define CATDrwDimFormatDec 1
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimFormatFrac
#define CATDrwDimFormatFrac 2
#endif



/**
 *  Tolerance types.
 *  <b>Role</b>: Define the tolerance types. 
 *  @param CATDrwDimTolNone
 *   None.
 *  @param CATDrwDimTolNumerical
 *   Numerical.
 *  @param CATDrwDimTolAlphaNumerical
 *   AlphaNumerical.
 *  @param CATDrwDimTolISOComb
 *   Multi.
 */
/**
 *  @nodoc
 */
#ifndef CATDrwDimTolNone
#define CATDrwDimTolNone 0
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimTolNumerical
#define CATDrwDimTolNumerical 1
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimTolAlphaNumerical
#define CATDrwDimTolAlphaNumerical 2
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimTolISOComb
#define CATDrwDimTolISOComb 4
#endif


/**
 *  Tolerance display modes.
 *  <b>Role</b>: Define the tolerance display modes. 
 *  @param CATDrwDimTolFractional
 *   Fractional for alphanumerical tolerance.
 *  @param CATDrwDimTolSideBySide
 *   Side by side for alphanumerical tolerance.
 *  @param CATDrwDimTolUnresolved
 *   Unresolved (ex: 10 +/-0.25) for numerical tolerance.
 *  @param CATDrwDimTolResolved
 *   Resolved (ex: 9.75 , 10.25) for numerical tolerance.
 */
/**
 *  @nodoc
 */
#ifndef CATDrwDimTolFractional
#define CATDrwDimTolFractional 0
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimTolSideBySide
#define CATDrwDimTolSideBySide 1
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimTolUnresolved
#define CATDrwDimTolUnresolved 0
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimTolResolved
#define CATDrwDimTolResolved 1
#endif


/**
 *  Multi-tolerance display modes.
 *  When computed value is outside of ABAQUE's limits, it is considered as meaningless
 *  <b>Role</b>: Define if the numerical value of a multi-tolerance is meaningfull or not.
 *  @param CATDrwDimMultiTolBoth
 *   Both main tolerance and dual tolerance are meaningfull.
 *  @param CATDrwDimMultiTolMain
 *   Only the main tolerance is valid. The dual numerical value is out of limits.
 *  @param CATDrwDimMultiTolDual
 *   Only the dual tolerance is valid. The main numerical value is out of limits.
 *  @param CATDrwDimMultiTolNone
 *   None of the two tolerances have sense in regard of ABAQUE's limits.
 */
/**
 *  @nodoc
 */
#ifndef CATDrwDimMultiTolBoth
#define CATDrwDimMultiTolBoth 0
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimMultiTolMain
#define CATDrwDimMultiTolMain 1
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimMultiTolDual
#define CATDrwDimMultiTolDual 2
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimMultiTolNone
#define CATDrwDimMultiTolNone 3
#endif


/**
 *  Dimension fake value type.
 *  <b>Role</b>: Define the fake value types. 
 *  @param CATDrwDimFakeNone
 *   None.
 *  @param CATDrwDimFakeNumValue
 *   Numerical.
 *  @param CATDrwDimFakeText
 *   AlphaNumerical.
 */
/**
 *  @nodoc
 */
#ifndef CATDrwDimFakeNone
#define CATDrwDimFakeNone 0
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimFakeNumValue
#define CATDrwDimFakeNumValue 1
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimFakeText
#define CATDrwDimFakeText 2
#endif
/**
 *  @nodoc
 */
#ifndef CATDrwDimFakeProjectedValue
#define CATDrwDimFakeProjectedValue 3
#endif



/**
 * @nodoc
 *  Associative position mode.
 *  <b>Role</b>: Define the associative position mode. 
 *  @param NORELATIVEBEHAVIOUR
 *   No relative behaviour.
 *  @param LOCALRELATIVEBEHAVIOUR
 *   Local relative behaviour.
 */
/**
 *  @nodoc
 */
#ifndef NORELATIVEBEHAVIOUR
#define NORELATIVEBEHAVIOUR      0
#endif
/**
 *  @nodoc
 */
#ifndef LOCALRELATIVEBEHAVIOUR
#define LOCALRELATIVEBEHAVIOUR   1
#endif

#endif

