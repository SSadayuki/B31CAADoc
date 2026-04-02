#ifndef CATIGSOFactoryGeo_H
#define CATIGSOFactoryGeo_H
 
// COPYRIGHT DASSAULT SYSTEMES 2002

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATBaseUnknown.h"
#include "ExportedByCATGotInterfaces.h"
#include "CATGSMDevelopDef.h"

class CATGeoFactory_var;
class CATISpecObject_var;
class CATMathAxis;
class CATMathPoint;
class CATTopData;
class CATBody_var;
class CATUnicodeString;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGotInterfaces IID IID_CATIGSOFactoryGeo;
#else
extern "C" const IID IID_CATIGSOFactoryGeo;
#endif

/**
 * Geometrical generation Generative Shape Optimizer workshop.
 * <b>Role</b>: Creation of topological results for some operators in Genarative Shape Optimizer.
 */
class ExportedByCATGotInterfaces CATIGSOFactoryGeo : public CATBaseUnknown
{

   CATDeclareInterface;

  public: 

   //==========================================================================
   // DEVELOP
   //==========================================================================
  /**
   * Generates CATBody result for given GSO Develop operator inputs.
   *<br>Inputs:
   * @param  Fac               : current geo factory
   * @param  TheTopData        : CATTopData related to the current feature beeing built
   * @param  BodyToDevelop     : CATBody of the wire to be developed (may lie on support surface,
   *    case of inversed develop)
   * @param  NameToDevelop     : name of wire to develop (used in error messages)
   * @param  BodySupport       : CATBody of support shell
   * @param  NameSupport       : name of support surface (used in error messages)
   * @param  BodyPointOnSupport: CATBody of the given point on support, if any (optional,
   *    may equal NULL_var)
   * @param  NamePointOnSupport: name of the point on support (used in error messages)
   * @param  MathPointOnSupport: CATMathPoint used as support origin (useless if BodyPointOnSupport
   *    is specfied previously)
   * @param  iComputationMode  : CATGSMDevelopMethod_DevDev or CATGSMDevelopMethod_DevProj, so far
   * @param  PlaneAxis         : planar axis system used in develop operation (plane of the wire,
   *    or target plane in case of inversed develop)
   *
   *<br>Output:
   * @param  OutputBody        : computed output wire
   *
   *<br>Optional inputs with default values:
   * @param  dRadiantness      : radiantness (ratio)
   * @param  dInclination      : inclination (in degree)
   * @param  dIntermRadiusCoeff: intermediate radius coefficient (ratio)
   * @param  iOrient           : correspond to an orientation switch to determine whether support
   *    surface mapping has to be inversed (0) or not (1);
   *    Current GSD version: computed once the first time depending on surface normal vector
   *    compared to revolution axis, then stored for update stability
   *
   */
   virtual HRESULT ComputeDevelopBody(const CATGeoFactory_var & Fac,
      CATTopData & TheTopData,
      const CATBody_var & BodyToDevelop,
      CATUnicodeString & NameToDevelop,
      const CATBody_var & BodySupport,
      CATUnicodeString & NameSupport,
      const CATBody_var & BodyPointOnSupport,
      CATUnicodeString & NamePointOnSupport,
      const CATMathPoint & MathPointOnSupport,
      const enum CATGSMDevelopMethod iComputationMode,
      const CATMathAxis & PlaneAxis,
      CATBody_var & OutputBody,
      const double & dRadiantness = 1.0,
      const double & dInclination = 0.0,
      const double & dIntermRadiusCoeff = 1.0,
      const int iOrient = 1,
			const double iLayDownTolerance = 0) = 0;

};

CATDeclareHandler(CATIGSOFactoryGeo, CATBaseUnknown);

#endif


