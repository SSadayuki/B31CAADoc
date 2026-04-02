#ifndef CATPRINTLINEATTRIBUTE_H
#define CATPRINTLINEATTRIBUTE_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Line attribute.
 * <br>The pattern of the line is defined by [a:b:...] where "a" is the length in
 * mm of the line drawn, "b" is the length in mm of the space, etc ...
 * <br>The different lengths are given first in ISO/ANSI standard and second in JIS 
 * standard.
 * @param CATPRINTLINE_SOLID
 *   The drawing style of lines is solid ([],[]).
 * @param CATPRINTLINE_DOT
 *   The drawing style of lines is dotted ([1:1],[1:1]).
 * @param CATPRINTLINE_DASH
 *   The drawing style of lines is dashed ([4:1.5],[3:1]).
 * @param CATPRINTLINE_DASHDOT
 *   The drawing style of lines is dash-dot ([7:1:1:1],[9:1:1:1]).
 * @param CATPRINTLINE_PHANTOM
 *   The drawing style of lines is dash-dot-dot ([7:1:1:1:1:1],[15:1:1:1:1:1]).
 * @param CATPRINTLINE_DOT2
 *   The drawing style of lines is dotted ([0.5:0.5],[0.5:0.5]).
 * @param CATPRINTLINE_DASHDOT2
 *   The drawing style of lines is dash-dot ([2:1:10:1],[2:1:10:1]).
 * @param CATPRINTLINE_USER
 *   The drawing style of lines is defined by the user.
 * @param CATPRINTLINE_CONTINUE
 *   The drawing style is not centered between the two ends of the line.
 * @param CATPRINTLINE_ADAPTATIVE_CONTINUE
 *   The drawing style is centered between the two ends of the line.
 * @param CATPRINTLINE_ENCAP_FLAT
 *   The line ends are flat.
 * @param CATPRINTLINE_ENCAP_SQUARE
 *   The line ends are squared.
 * @param CATPRINTLINE_ENCAP_ROUND
 *   The line ends are round.
 * @param CATPRINTLINE_JOIN_MITER
 *   The line joins are miter.
 * @param CATPRINTLINE_JOIN_ROUND
 *   The line joins are round.
 * @param CATPRINTLINE_JOIN_BEVEL
 *   The line joins are bevel.
 */
enum CATPrintLineAttribute
{
    CATPRINTLINE_SOLID,
    CATPRINTLINE_DOT,
    CATPRINTLINE_DASH,
    CATPRINTLINE_DASHDOT,
    CATPRINTLINE_PHANTOM,
    CATPRINTLINE_DOT2,     
    CATPRINTLINE_DASHDOT2, 
    CATPRINTLINE_USER,

    CATPRINTLINE_CONTINUE,
    CATPRINTLINE_ADAPTATIVE_CONTINUE,

    CATPRINTLINE_ENCAP_FLAT,
    CATPRINTLINE_ENCAP_SQUARE,
    CATPRINTLINE_ENCAP_ROUND,

    CATPRINTLINE_JOIN_MITER,
    CATPRINTLINE_JOIN_ROUND,
    CATPRINTLINE_JOIN_BEVEL
};	

#endif
