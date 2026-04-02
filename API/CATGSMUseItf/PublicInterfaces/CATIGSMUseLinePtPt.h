/* -*-c++-*- */
#ifndef CATIGSMUseLinePtPt_H
#define CATIGSMUseLinePtPt_H
// 
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGSMUseItfExportedBy.h"
#include "CATBaseUnknown.h"


#include "CATGSMLineDef.h"

class CATICkeParm_var; 
class CATIMmiMechanicalFeature_var; 


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID  IID_CATIGSMUseLinePtPt;
#else
extern "C" const IID IID_CATIGSMUseLinePtPt;
#endif
/**
 * Interface to line point-point feature. 
 * <b>Role</b>: Allows you to access data of the line feature created between two points.
 * @see CATIGSMUseFactory#CreateLine
 */
class ExportedByCATGSMUseItf CATIGSMUseLinePtPt : public CATBaseUnknown
{
   CATDeclareInterface;
public: 

 /**
 * Gets the first point.
        *   @param oFirstPoint 
 *      first point 
 */
 virtual HRESULT GetFirstPoint(CATIMmiMechanicalFeature_var& oFirstPoint) = 0;

 /**
 * Sets the first point.
        *   @param iFirstPoint 
 *      first point 
 */
 virtual HRESULT SetFirstPoint(const CATIMmiMechanicalFeature_var iFirstPoint) = 0;

 /**
 * Gets the second point.
        *   @param oSecondPoint 
 *      second point 
 */
 virtual HRESULT GetSecondPoint(CATIMmiMechanicalFeature_var& oSecondPoint) = 0;

 /**
 * Sets the second point.
        *   @param iSecondPoint
 *      second point 
 */
 virtual HRESULT SetSecondPoint(const CATIMmiMechanicalFeature_var iSecondPoint) = 0;

 /**
 * Gets the support surface.
 * if a support surface is given, the line will lie on it.
        *   @param oSupport 
 *      support surface
 */
 virtual HRESULT GetSupport(CATIMmiMechanicalFeature_var& oSupport) = 0;

 /**
 * Sets the support surface.
 * if a support surface is given, the line will lie on it.
        *   @param iSupport 
 *      support surface
 */
 virtual HRESULT SetSupport(const CATIMmiMechanicalFeature_var iSupport) = 0;

 /**
 * Removes the support surface.
 */
 virtual HRESULT RemoveSupport() = 0;

 /**
  * Gets the start and end lengthes of the line.
  * These paramaters are optionnal.
  *   @param oStart 
  *      extension of the line, beginning at the starting point
  *   @param oEnd 
  *      extension of the line, beginning at the ending point
  */
 virtual HRESULT GetLengths(CATICkeParm_var & oStart,CATICkeParm_var & oEnd) = 0;

 /**
  * Sets the start and end lengthes of the line.
  * These paramaters are optionnal.
  *   @param iStart 
  *      extension of the line, beginning at the starting point
  *   @param iEnd 
  *      extension of the line, beginning at the ending point
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
CATDeclareHandler (CATIGSMUseLinePtPt, CATBaseUnknown);
#endif
