#ifndef CATSamElementVisuState_H
#define CATSamElementVisuState_H
//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2003
//=============================================================================
//
// CATSamElementVisuState : Faces and egdes visualization for an element.
//
//

/**
  * @CAA2Level L0
  * @CAA2Usage U1
  */

/**
 * Element visualization state.
 * <b>Role: </b> This struct is used to define the visualization state for
 * a given element. Which faces and which edges of the element have to be
 * displayed.
 * @see CATISamImageTesselation
 */ 

struct CATSamElementVisuState
{
  int ElementNumber;
  int FacesState;
  int EdgesState;
};

#endif
