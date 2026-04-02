/* -*-c++-*- */
#ifndef CATDftGenBox3DDefs_H
#define CATDftGenBox3DDefs_H
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */
//=============================================================================
//                                CNEXT - CXR16
//                      COPYRIGHT DASSAULT SYSTEMES 2005
//=============================================================================

#include <stddef.h>
#include "DraftingItfCPP.h"

/**
 * Clippping box type.
 *   @param ClippingByBox
 *    Clipping by a 3D box.
 *   @param ClippingBySlice
 *    Back and Front Clipping planes.
 *   @param BackClippingPlane
 *    Back Clipping plane.
 */
ExportedByDraftingItfCPP enum CATDrwGenBox3DType { ClippingByBox, ClippingBySlice, BackClippingPlane };

/**
 * Clippping box Mode.
 *   @param Relimit
 *    3D geometry relimited.
 *   @param Filtering
 *    3D geometry filtered.
 */
ExportedByDraftingItfCPP enum CATDrwGenBox3DMode { Relimit, Filtering};

#endif

