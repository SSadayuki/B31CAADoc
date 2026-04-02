/* -*-c++-*- */
#ifndef CATIGSOWrapCurve_H
#define CATIGSOWrapCurve_H
//
// COPYRIGHT Dassault Systemes 2001

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

//
// CATIGSOWrapCurve.h
// Define the CATIGSOWrapCurve interface
//

#include "ExportedByCATGotInterfaces.h"
#include "CATBaseUnknown.h"
#include "CATGSOWrapCurveDef.h"
#include "CATIGSMDirection.h"


class CATISpecObject_var; 

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGotInterfaces IID IID_CATIGSOWrapCurve;
#else
extern "C" const IID IID_CATIGSOWrapCurve;
#endif

/**
 * Interface to wrap curve feature.
 * <b>Role</b>:Allows to access data of the wrap curve 
 * @see CATIGSOFactory#CreateWrapCurve
 * @see CATGSOWrapCurveSurfaceCst
 * @see CATGSOWrapCurveRefSpineType
 * @see CATGSOWrapCurveRefDirType
 */
class ExportedByCATGotInterfaces CATIGSOWrapCurve: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Sets the surface to deform to the wrap curve feature.
 * @param iSurfaceToDeform 
 *   The surface to deform. 
 */ 
      virtual HRESULT SetSurface(const CATISpecObject_var iSurfaceToDeform
         ) = 0;

/**
 * Gets the surface to deform to the wrap curve feature.
 * @param oSurfaceToDeform 
 *   The surface to deform. 
 */ 
      virtual HRESULT GetSurface(CATISpecObject_var & oSurfaceToDeform
         ) = 0;

/**
 * Inserts a couple of reference curve and target curve to the wrap curve feature.
 * @param iPosition 
 *   The position of the curves in the list of curves. 
 *   Insert at the end of the list if equal 0.
 * @param iReferenceCurve 
 *   the reference curve. 
 * @param iTargetCurve 
 *   the target curve.
 *   <br> iTargetCurve can be egal to NULL_var. In this case, the associated ref curve will be fixed 
 *   or the target curve must be set with SetReferenceCurve.
 */ 
      virtual HRESULT InsertCurves(const int iPosition
         , const CATISpecObject_var iReferenceCurve
         , const CATISpecObject_var iTargetCurve =NULL_var
         ) = 0;

/**
 * Sets a reference curve to the wrap curve feature.
 * @param iPosition 
 *   The position of the curves in the list of curves. 
 * @param iReferenceCurve 
 *   the reference curve. 
 */ 
      virtual HRESULT SetReferenceCurve(const int iPosition
         , const CATISpecObject_var iReferenceCurve
         ) = 0;

/**
 * Sets a target curve to the wrap curve feature.
 * @param iPosition 
 *   The position of the curves in the list of curves. 
 * @param iTargetCurve 
 *   the target curve. if equal NULL_var, then the associated ref curve will be fixed.
 */ 
      virtual HRESULT SetTargetCurve(const int iPosition
         , const CATISpecObject_var iTargetCurve
         ) = 0;

/**
 * Removes a couple of reference curve and target curve  from the feature.
 * @param iPosition 
 *   The position of the curves in the list of curves. 
 */ 
      virtual HRESULT RemoveCurves(const int iPosition)= 0;

 /**
 * Gets the list of reference curves and target curves.
 * @param oReferenceCurves 
 *   The list of reference curves.
 * @param oTargetCurves
 *   The list of target curves.
 *   The first curve in oTargetCurves is the target curve of the first curve in oReferenceCurves,
 *   The second curve in oTargetCurves is the target curve of the second curve in oReferenceCurves...
 */ 
      virtual HRESULT GetCurves(CATLISTV(CATISpecObject_var) & oReferenceCurves
         , CATLISTV(CATISpecObject_var) & oTargetCurves)= 0;

/**
 * Sets a surface constraint at first curves to the wrap curve feature.
 * @param iSurfaceCst 
 *   The constraint to first curves 
 *  @see CATGSOWrapCurveSurfaceCst
 */ 
      virtual HRESULT SetFirstCurvesConstraint(const CATGSOWrapCurveSurfaceCst iSurfaceCst= CATGSOWrapCurveSameCurvature
         ) = 0;

/**
 * Gets the surface constraint at first curves to the wrap curve feature.
 * @param oSurfaceCst 
 *   The constraint to first curves 
 * @see CATGSOWrapCurveSurfaceCst
 */ 
      virtual HRESULT GetFirstCurvesConstraint(CATGSOWrapCurveSurfaceCst & oSurfaceCst
         ) = 0;

/**
 * Sets a surface constraint at last curves to the wrap curve feature.
 * @param iSurfaceCst 
 *   The constraint to last curves 
 * @see CATGSOWrapCurveSurfaceCst
 */ 
      virtual HRESULT SetLastCurvesConstraint(const CATGSOWrapCurveSurfaceCst iSurfaceCst= CATGSOWrapCurveSameCurvature
         ) = 0;

/**
 * Gets the surface constraint at last curves to the wrap curve feature.
 * @param oSurfaceCst 
 *   The constraint to last curves 
 * @see CATGSOWrapCurveSurfaceCst
 */ 
      virtual HRESULT GetLastCurvesConstraint(CATGSOWrapCurveSurfaceCst & oSurfaceCst
         ) = 0;

 /**
 * Sets the reference spine to the wrap curve feature.
 *   @param iSpineType
 *      type of spine. 
 *   @param iSpine
 *      curve to be added as a spine, if iSpineType = CATGSOWrapCurveUserRefSpine
 *  @see CATGSOWrapCurveRefSpineType
 */
      virtual HRESULT SetReferenceSpine(const CATGSOWrapCurveRefSpineType iSpineType = CATGSOWrapCurveRefSpineFirstRefCurve
         , const CATISpecObject_var iSpine = NULL_var
         ) = 0;  

 /**
 * Gets the reference spine to the wrap curve feature.
 *   @param oSpineType
 *      type of spine. 
 *   @param oSpine
 *      curve read as a spine, if oSpineType = CATGSOWrapCurveUserRefSpine
 *   @see CATGSOWrapCurveRefSpineType
 */
      virtual HRESULT GetReferenceSpine(CATGSOWrapCurveRefSpineType & oSpineType 
         , CATISpecObject_var & oSpine
         ) = 0;  

 /**
 * Sets the target spine to the wrap curve feature.
 *   @param iSpineType
 *      type of spine. 
 *   @param iSpine
 *      curve to be added as a spine, if iSpineType = CATGSOWrapCurveUserTargSpine
 *   @see CATGSOWrapCurveTargSpineType
 */
      virtual HRESULT SetTargetSpine(const CATGSOWrapCurveTargSpineType iSpineType = CATGSOWrapCurveTargSpineRefSpine
         , const CATISpecObject_var iSpine = NULL_var
         ) = 0;  

 /**
 * Gets the target spine to the wrap curve feature.
 *   @param oSpineType
 *      type of spine. 
 *   @param oSpine
 *      curve read as a spine, if oSpineType = CATGSOWrapCurveUserTargSpine
 *   @see CATGSOWrapCurveTargSpineType
 */
      virtual HRESULT GetTargetSpine(CATGSOWrapCurveTargSpineType & oSpineType 
         , CATISpecObject_var & oSpine
         ) = 0;  

 /**
 * Sets the reference direction to the wrap curve feature.
 *   @param iDirectionType
 *      type of direction. 
 *   @param iDirection
 *      Direction to be added, if iDirectionType = CATGSOWrapCurveUserRefDir and
 *      if reference spine is a line.
 *   @see CATGSOWrapCurveRefDirType
 */
      virtual HRESULT SetReferenceDirection(const CATGSOWrapCurveRefDirType iDirectionType = CATGSOWrapCurveRefDirComputed
         , const CATIGSMDirection_var iDirection = NULL_var
         ) = 0;  

 /**
 * Gets the reference direction from the wrap curve feature.
 *   @param oDirectionType
 *      type of direction. 
 *   @param oDirection
 *      Reference direction , if oDirectionType = CATGSOWrapCurveUserRefDir
 *   @see CATGSOWrapCurveRefDirType
 */
      virtual HRESULT GetReferenceDirection(CATGSOWrapCurveRefDirType & oDirectionType
         , CATIGSMDirection_var & oDirection
         ) = 0;  

};
CATDeclareHandler (CATIGSOWrapCurve, CATBaseUnknown);

//------------------------------------------------------------------

#endif
