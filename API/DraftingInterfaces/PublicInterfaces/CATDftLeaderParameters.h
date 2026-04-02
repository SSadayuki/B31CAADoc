#ifndef CATDftLeaderParameters_H
#define CATDftLeaderParameters_H
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/

// COPYRIGHT DASSAULT SYSTEMES 1999


/**
* Global text parameters.
* Enum used to specified global text parameters.
* @param DftAnchorNone
* @param DftAnchorFlag
* @param DftAnchorContour
* @param DftAnchorFlagAndContour
* @see CATIDftElementWithLeader
*/
enum DftAnchorSymbol { DftAnchorNone           = 1  , 
                       DftAnchorFlag           = 2  ,
                       DftAnchorContour        = 3  ,
                       DftAnchorFlagAndContour = 4  };   


#endif
