// COPYRIGHT DASSAULT SYSTEMES  2001
//=============================================================================
//
// CATSamGroupTypes
//
//=============================================================================
//
// Usage Notes: definition of Goup types
//
//=============================================================================
// Octobre 2000 Creation                                                    FEI
//=============================================================================
#ifndef CATSamGroupTypes_H
#define CATSamGroupTypes_H

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * The types which are used to identify an analysis group.
 * @param CATSamGroupTypeImplicit
 * @param CATSamGroupTypeSpecified
 * @param CATSamGroupTypeFiltered
 * @param CATSamGroupTypeFree
 * @param CATSamGroupTypeAssembly
 * @param CATSamGroupTypeCombined
 */

enum CATSamGroupType
{
	CATSamGroupTypeImplicit  ,
	CATSamGroupTypeSpecified ,
	CATSamGroupTypeFiltered  ,
	CATSamGroupTypeFree      ,
	CATSamGroupTypeAssembly  ,
	CATSamGroupTypeCombined
} ;

#endif
