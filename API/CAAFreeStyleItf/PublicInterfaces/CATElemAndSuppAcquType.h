#ifndef CATElemAndSuppAcquType_H
#define CATElemAndSuppAcquType_H

/**
  * @CAA2Level L0
  * @CAA2Usage U0
  */

//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2002
//==============================================================================
//
// CATElemAndSuppAcquType :
//
//==============================================================================
// Usage Notes :
//  --------------------------------------------------
//   IMPORTANT : DASSAULT SYSTEMES INTERNAL USE ONLY.
//  --------------------------------------------------
//
//==============================================================================
// Dec. 02   Creation                                     Jean-Michel PLOUHINEC
//==============================================================================

#include "CATDataType.h"

/**
 * The dimension of the element of CATElementAndSupportSelAgent and all of its component
 * POINT_ACQ : The agent select any element of dimension zero 
 *             and look for its monodimensionnal support(s)
 * CURVE_ACQ : The agent select any element of dimension one 
 *             and look for its bidimensionnal support(s)
 */
enum CATElemAndSuppAcquType{POINT_ACQ,CURVE_ACQ};

/** 
 * The support parsing behavior of CATElementAndSupportSelAgent.
 * CATSuppSelAgFeatureSupport :
 *      To allow feature support (this is set by default)
 * CATSuppSelAgSubElementSupport
 *      To allow subelement (BRep) support (Only available for CURVE_ACQ mode for surface borders acquisition)
 * CATSuppSelAgGeometricSupport
 *      To allow support of CATGeometry type (CATSurface or CATWire)
 * CATSuppSelAgWithExplicitSelection
 *      To allow to choose a support explicitely, by clicking on it. 
 * CATSuppSelAgNoSupportInNoShow (NOT IMPLEMENTED YET)
 *      If a support is in the NoShow space, it is not considered as a support
 *      (Useless if not used with CATSuppSelAgFeatureSupport) 
 * CATSuppSelAgShapeBodyMode
 *      If a support(s) is a feature, it is replaced by the last modifiying feature 
 */
typedef CATULONG32 CATEltAndSuppAgentBehavior;
#define CATSuppSelAgFeatureSupport        (1<<0)
#define CATSuppSelAgSubElementSupport     (1<<1)
#define CATSuppSelAgGeometricSupport      (1<<2)
#define CATSuppSelAgWithExplicitSelection (1<<3)
#define CATSuppSelAgNoSupportInNoShow     (1<<4)
#define CATSuppSelAgShapeBodyMode         (1<<5)

#endif

