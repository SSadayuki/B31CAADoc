#ifndef CreateConvertCrvToNurbsCrv_h
#define CreateConvertCrvToNurbsCrv_h

// COPYRIGHT DASSAULT SYSTEMES 2010 

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */ 

/**
 * @deprecated  V5R10 CATCGMCreateCrvFittingToNurbsCrv 
 * Do not use this header. To convert a curve into NURBS, use CATICGMCrvFittingToNurbsCrv.
 * The current header is intended to be deleted.
 */

#include "CATGMOperatorsInterfaces.h"
#include "CATSkillValue.h"

class CATConvertCrvToNurbsCrv;
class CATCurve;
class CATGeoFactory;

/**
 * Ascending compatibility for client frameworks. This inline function must be deleted once clients call
 * CATPGMCreateConvertCrvToNurbsCrv.
 */
ExportedByCATGMOperatorsInterfaces CATConvertCrvToNurbsCrv *CreateConvertCrvToNurbsCrv(
  CATGeoFactory *iFactory,
  const CATCurve &iCurve,
  CATSkillValue iMode = BASIC);

#ifndef CATConvertCrvToNurbsCrv_Remove
#define CATConvertCrvToNurbsCrv_Remove

/**
 * @nodoc
 */
ExportedByCATGMOperatorsInterfaces
void Remove( CATConvertCrvToNurbsCrv *&iCATConvertCrvToNurbsCrv );

#endif

#endif
