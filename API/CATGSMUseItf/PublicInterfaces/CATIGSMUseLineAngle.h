/* -*-c++-*- */
#ifndef CATIGSMUseLineAngle_H
#define CATIGSMUseLineAngle_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGSMUseItfExportedBy.h"
#include "CATBaseUnknown.h"

#include "CATGSMLineDef.h"

class CATMathVector;
class CATICkeParm_var; 
class CATIMmiMechanicalFeature_var; 

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID  IID_CATIGSMUseLineAngle;
#else
extern "C" const IID IID_CATIGSMUseLineAngle;
#endif
/**
 * Interface to line feature defined from a reference curve, a plane, a point and an angle.
 * <b>Role</b>: Allows you to access data of the the line feature created with 
 * an angle to a curve.
 * @see CATIGSMUseFactory#CreateLine
 */
class ExportedByCATGSMUseItf CATIGSMUseLineAngle : public CATBaseUnknown
{
   CATDeclareInterface;
public: 

 /**
  * Gets the starting point of the line.
  *   @param oPoint 
  *      starting point 
  */
 virtual HRESULT GetStartingPoint(CATIMmiMechanicalFeature_var& oPoint) = 0;

 /**
  * Sets the starting point of the line.
  *   @param iPoint 
  *      starting point 
  */
 virtual HRESULT SetStartingPoint(const CATIMmiMechanicalFeature_var iPoint) = 0;

 /**
  * Gets the reference curve.
  *   @param oCurve 
  *      reference curve 
  */
 virtual HRESULT GetReferenceCurve(CATIMmiMechanicalFeature_var& oCurve) = 0;

 /**
  * Sets the reference curve.
  *   @param iCurve 
  *      reference curve 
  */
 virtual HRESULT SetReferenceCurve(const CATIMmiMechanicalFeature_var iCurve) = 0;

 /**
  * Gets the support surface.
  *   @param oSupport 
  *      support surface
  */
 virtual HRESULT GetSupport(CATIMmiMechanicalFeature_var& oSupport) = 0;

 /**
  * Sets the support surface.
  *   @param iSupport 
  *      support surface
  */
 virtual HRESULT SetSupport(const CATIMmiMechanicalFeature_var iSupport) = 0;

 /**
  * Gets the start and end lengthes of the line.
  *   @param oStart 
  *      start length 
  *   @param oEnd 
  *      end length 
  */
 virtual HRESULT GetLengths(CATICkeParm_var & oStart,CATICkeParm_var & oEnd) = 0;

 /**
  * Sets the start and end lengthes of the line.
  *   @param iStart 
  *      start length 
  *   @param iEnd 
  *      end length 
  */
 virtual HRESULT SetLengths(const CATICkeParm_var iStart,const CATICkeParm_var iEnd) = 0;

 /**
  * Gets the angle.
  *   @param oAngle 
  *      angle value
  */
 virtual HRESULT GetAngle(CATICkeParm_var& oAngle) = 0;

 /**
  * Sets the angle.
  *   @param iAngle 
  *      angle value
  */
 virtual HRESULT SetAngle(const CATICkeParm_var iAngle) = 0;

 /**
  * Sets geodesic mode.
  * <br> If geodesic, the line lies on the support surface, otherwise
  * the surface is only used to compute the line direction.
  */
 virtual HRESULT SetGeodesic() = 0;

 /**
  * Inactivates geodesic mode.
  * If geodesic, the line lies on the support surface, otherwise
  * the surface is only used to compute the line direction.
  */
 virtual HRESULT UnsetGeodesic() = 0;

 /**
  * Queries geodesic mode.
  *   @param oGeod 
  *      geodesic mode on (TRUE) or not (FALSE) 
  */
 virtual HRESULT IsGeodesic(CATBoolean & oGeod) = 0;

 /**
  * Sets the line normal to the curve on the surface.
  * Same as Angle = 90deg.
  */
 virtual HRESULT SetNormal() = 0;

 /**
  * Sets the symmetrical extension of the line (start = -end).
  *   @param iSym
  *       Symetry flag  
  */
 virtual HRESULT SetSymmetricalExtension(CATBoolean iSym) = 0;

 /**
  * Gets whether the symmetrical extension of the line is active.
  *   @param oSym
  *       Symetry flag  
  */
 virtual HRESULT GetSymmetricalExtension(CATBoolean& oSym) = 0;
 /**
  * Gets the length type : length or infinite or infinite start point or infinite end point.
  * Default is Length.
  * Length means that the line is limited by its extremities
  * Infinite means that the line is infinite
  * InfStartPoint means that the line is infinite on the side of the start point
  * InfEndPoint means that the line is infinite on the side of the end point
  *   @param oType
  *    distance type  enum {Length, Infinite, InfStartPoint, InfEndPoint}
  */
 virtual HRESULT GetLengthType(CATGSMLineLengthType & oType) = 0;

 /**
  * Sets the length type : length or infinite or infinite start point or infinite end point.
  *   @param iType
  *    length type:   enum {Length, Infinite, InfStartPoint, InfEndPoint}
  */
 virtual HRESULT SetLengthType(CATGSMLineLengthType iType) = 0;

 /**
  * Get the Normal of the plane created when the Support of the curve is not specified.
  *   @param oNormal
  *    CATMathVector
  */

 virtual    HRESULT  GetPlaneNormal (CATMathVector & oNormal) = 0;

 /**
  * Set the Normal of the plane created when the Support of the curve is not specified.
  *   @param iNormal
  *    CATMathVector
  */
 virtual    HRESULT  SetPlaneNormal (const CATMathVector & iNormal) = 0;

 /**
  *  Sets a solution number which corresponds to the desired solution from list of multiple solutions.
  *   @param iSolNo, number which corresponds to the desired solution. 
  */

 virtual HRESULT SetSolution(const int iSolNo) = 0;

 /**
 * Gets a solution number which corresponds to the current solution/result.
 *    @param oSolNo, number which identifies current solution
 */
 virtual HRESULT GetSolution(int & oSolNo) = 0;

 
};
CATDeclareHandler (CATIGSMUseLineAngle, CATBaseUnknown);
#endif


