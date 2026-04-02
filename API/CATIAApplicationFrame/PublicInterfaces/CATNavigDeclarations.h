#ifndef CATNavigDeclarations_H_
#define CATNavigDeclarations_H_

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
* Graph style.
* @param Indented
*      Each node is indented. Usual style for CATIA
* @param Normal
*      All is linear.
* @param SelfPosition
*      do not used
*/

enum CATGraphStyle {
	Indented=0,
	Normal=1,
	SelfPosition=2
};


#endif

