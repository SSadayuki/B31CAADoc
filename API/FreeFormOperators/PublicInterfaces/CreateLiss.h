#ifndef CREATELISS_H 
#define CREATELISS_H
 
// COPYRIGHT DASSAULT SYSTEMES  1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */ 

#include "FrFFitting.h"

#include "CATSkillValue.h"

class CATGeoFactory;
class CATLiss;
class CATMathSetOfPointsND;

/**
 * @deprecated V5R14 CATCreateLiss
 */
ExportedByFrFFitting
CATLiss * CreateLiss(CATGeoFactory *iFactory,
                     CATMathSetOfPointsND *iPoints,
                     double         &iTol,
                     CATSkillValue  iMode=BASIC);

/**
 * @nodoc
 */
ExportedByFrFFitting
void Remove( CATLiss *&iLiss);

#endif
