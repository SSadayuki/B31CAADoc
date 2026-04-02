/* -*-c++-*- */
#ifndef CAT2DCstDiag_h
#define CAT2DCstDiag_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

enum CAT2DCstDiag
{
  Cst2DDiag_Unknown       = 0,
  Cst2DDiag_OverDefined   = 1,
  Cst2DDiag_NotConsistent = 2,
  Cst2DDiag_NotChanged    = 3,
  Cst2DDiag_WellDefined   = 4,
  Cst2DDiag_UnderDefined  = 5,
  Cst2DDiag_Ignored       = 6
};

#endif
