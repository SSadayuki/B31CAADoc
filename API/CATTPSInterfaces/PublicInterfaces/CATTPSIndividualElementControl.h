#ifndef CATTPSIndividualElementControl_H
#define CATTPSIndividualElementControl_H

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

// COPYRIGHT Dassault Systemes 2012
//===================================================================
//
// CATITPSIndividualElementControl.h interface
    /**
     * Enum to describe the control of individual elements of the surface.
     * @param EachElement  
     *   represent  element on a plane.
     * @param EachRadialElement  
     *   represent element on a line, edge.
     */
//===================================================================

enum CATTPSIndividualElementControl 
{
  CATTPSIndiElemUndefined = 0,
  CATTPSIndiElemEachElement = 1,
  CATTPSIndiElemEachRadialElement = 2
};

#endif
