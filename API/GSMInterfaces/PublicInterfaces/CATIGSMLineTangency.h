/* -*-c++-*- */
#ifndef CATIGSMLineTangency_H
#define CATIGSMLineTangency_H
  
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGitInterfacesExportedBy.h"
#include "CATBaseUnknown.h"

#include "CATGSMLineDef.h"


class CATICkeParm_var; 
class CATISpecObject_var; 



#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMLineTangency;
#else
extern "C" const IID IID_CATIGSMLineTangency;
#endif

/**
 * Interface to line feature defined tangent to a curve. 
 * <b>Role</b>: Allows you to access data of the line feature created to
 *  be tangent to a curve at a given point.
 * @see CATIGSMFactory#CreateLineTangency
 */
class ExportedByCATGitInterfaces CATIGSMLineTangency : public CATBaseUnknown
{
   CATDeclareInterface;
public: 

 /**
  * Gets the starting point of the line.
  *   @param oPoint 
  *      starting point 
  */
 virtual HRESULT GetStartingPoint(CATISpecObject_var& oPoint) = 0;

 /**
  * Sets the starting point of the line.
  *   @param iPoint 
  *      starting point 
  */
 virtual HRESULT SetStartingPoint(const CATISpecObject_var iPoint) = 0;

 /**
  * Gets the curve to which the line will be tangent.
  *   @param oCurve 
  *      curve 
  */
 virtual HRESULT GetReferenceCurve(CATISpecObject_var& oCurve) = 0;

 /**
  * Sets the curve to which the line will be tangent.
  *   @param iCurve 
  *      curve
  */
 virtual HRESULT SetReferenceCurve(const CATISpecObject_var iCurve) = 0;

 /**
  * Gets the support surface.
  * If a support surface is given, the line will lie on it.
  *   @param oSupport 
  *      supportting surface 
  */
 virtual HRESULT GetSupport(CATISpecObject_var& oSupport) = 0;

 /**
  * Sets the support surface.
  * if a support surface is given, the line will lie on it.
  *   @param iSupport 
  *      supportting surface
  */
 virtual HRESULT SetSupport(const CATISpecObject_var iSupport) = 0;

 /**
  * Removes the support surface.
  */
 virtual HRESULT RemoveSupport() = 0;

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
};
CATDeclareHandler (CATIGSMLineTangency, CATBaseUnknown);
#endif
