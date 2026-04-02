/* -*-c++-*- */
#ifndef CATIGSMLineNormal_H
#define CATIGSMLineNormal_H
// 
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
extern ExportedByCATGitInterfaces IID  IID_CATIGSMLineNormal;
#else
extern "C" const IID IID_CATIGSMLineNormal;
#endif
/**
 * Interface to line feature defined as normal to a surface.
 * <b>Role</b>: Allows you to access data of the line feature created by using 
 * the normal direction of a surface
 * @see CATIGSMFactory#CreateLineNormal
 */
class ExportedByCATGitInterfaces CATIGSMLineNormal : public CATBaseUnknown
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
  * Gets the surface to which the line will be normal.
  *   @param oSupport 
  *      reference surface 
  */
 virtual HRESULT GetReferenceSkin(CATISpecObject_var& oSupport) = 0;

 /**
  * Sets the surface to which the line will be normal.
  *   @param iSupport 
  *      reference surface 
  */
 virtual HRESULT SetReferenceSkin(const CATISpecObject_var iSupport) = 0;

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
CATDeclareHandler (CATIGSMLineNormal, CATBaseUnknown);
#endif

