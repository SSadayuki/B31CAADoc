/* -*-c++-*- */
#ifndef CATIGSMLinePtDir_H
#define CATIGSMLinePtDir_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGitInterfacesExportedBy.h"
#include "CATBaseUnknown.h"

#include "CATGSMLineDef.h"

class CATIGSMDirection_var;
class CATICkeParm_var; 
class CATISpecObject_var; 

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMLinePtDir;
#else
extern "C" const IID IID_CATIGSMLinePtDir;
#endif
/**
 * Interface to line feature defined by a point and a direction.
 * <b>Role</b>: Allows you to access data of the line feature created by using 
 * a passing point and a direction.
 * @see CATIGSMFactory#CreateLine
 */
class ExportedByCATGitInterfaces CATIGSMLinePtDir : public CATBaseUnknown
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
  *   @param oPoint 
  *      starting point 
  */
 virtual HRESULT SetStartingPoint(const CATISpecObject_var iPoint) = 0;

 /**
  * Gets the direction of the line.
  * @param oDirection
  *         direction
  * @see CATIGSMDirection
  */
 virtual HRESULT GetDirection(CATIGSMDirection_var& oDirection) = 0;

 /**
  * Sets the direction of the line.
  * @param iDirection
  *         direction
  * @see CATIGSMDirection
  */
 virtual HRESULT SetDirection(const CATIGSMDirection_var iDirection) = 0;

 /**
  * Gets the support surface.
  * If a support surface is given, the line will lie on it.
  * @param oSupport 
  *         support 
  */
 virtual HRESULT GetSupport(CATISpecObject_var& oSupport) = 0;

 /**
  * Sets the support surface.
  * If a support surface is given, the line will lie on it.
  * @param iSupport 
  *         support 
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
CATDeclareHandler (CATIGSMLinePtDir, CATBaseUnknown);
#endif


