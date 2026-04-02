#ifndef  CATMSHAssociativityStruct_h
#define  CATMSHAssociativityStruct_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1 
 * @CAA2Usage U1 
 */

class CATMSHElement;

/**
 * Structure representing a finite element's face.
 */
struct CATMSHAssElementFace
{
  /**
   * Pointer to the finite element. 
   */
  CATMSHElement * _Element;
  /**
   * Face number: from 0 to n-1, where n is the total number of faces in <b>_Element</b> connectivity. 
   */
  unsigned        _FaceNumber;
};

/**
 * Structure representing a finite element's edge. 
 */
struct CATMSHAssElementEdge
{
  /**
   * Pointer to the finite element. 
   */
  CATMSHElement * _Element;
  /**
   * Edge number: from 0 to n-1, where n is the total number of edges in <b>_Element</b> connectivity. 
   */
  unsigned        _EdgeNumber;
};
#endif
