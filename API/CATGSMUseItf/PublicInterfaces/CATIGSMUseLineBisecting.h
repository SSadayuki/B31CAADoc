/* -*-c++-*- */
#ifndef CATIGSMUseLineBisecting_H
#define CATIGSMUseLineBisecting_H

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
extern ExportedByCATGSMUseItf IID  IID_CATIGSMUseLineBisecting;
#else
extern "C" const IID IID_CATIGSMUseLineBisecting;
#endif

/**
 * Interface to create a line bisecting of two others. 
 * <b>Role</b>: Allows you to access data of the Line bisecting Feature.
 * @see CATIGSMUseFactory#CreateLine
 */
class ExportedByCATGSMUseItf CATIGSMUseLineBisecting : public CATBaseUnknown
{
   CATDeclareInterface;
public: 

	/**
	* Gets the first line.
	*   @param oLine1 
	*      first line
	*/
	virtual HRESULT GetFirstLine(CATIMmiMechanicalFeature_var& oLine1) = 0;
	/**
	* Sets the first line.
	*   @param iLine1 
	*      first line
	*/
	virtual HRESULT SetFirstLine(const CATIMmiMechanicalFeature_var& iLine1) = 0;
	/**
	* Gets the second line.
	*   @param oLine2 
	*      second line
	*/
	virtual HRESULT GetSecondLine(CATIMmiMechanicalFeature_var& oLine2) = 0;
	/**
	* Sets the second line.
	*   @param oLine2
	*      second line
	*/
	virtual HRESULT SetSecondLine(const CATIMmiMechanicalFeature_var& iLine2) = 0;
	/**
	* Gets the reference point. 
        *  <br> This data is optional, when no point is given, the intersection
        *  of both lines is taken into account.
	*   @param oPt. 
	*      Reference starting point. oPt=NULL_var is allowed
	*/
	virtual HRESULT GetStartingPoint(CATIMmiMechanicalFeature_var& oPt) = 0;
	/**
	* Sets the reference point.
	*   @param oLine2
	*      second line
	*/
	virtual HRESULT SetStartingPoint(const CATIMmiMechanicalFeature_var& iPt) = 0;
	/**
	* Gets the support surface.
	* <br>If a support surface is given, the line will lie on it.
	* <br>Can be NULL_var : this data is optional. Useful when Line1 and Line2 are curves lying on a surface
	* @param oSupport 
	*         support 
	*/
	virtual HRESULT GetSupport(CATIMmiMechanicalFeature_var& oSupport) = 0;
	/**
	* Sets the support surface.
	* <br>If a support surface is given, the line will lie on it.
	* @param iSupport 
	*         support 
	*/
	virtual HRESULT SetSupport(const CATIMmiMechanicalFeature_var& iSupport) = 0;
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
	virtual HRESULT SetLengths(const CATICkeParm_var &iStart,const CATICkeParm_var& End) = 0;
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
	* Selects the current solution.
	*  <br> 2 solutions can be computed :
    *  <ul> 
	*  <li>The first solution is computed using the half angle between first and second line.
	*       This angle is oriented using the direction of perpendicular line of first and second line.
	*  <li>Second solution is perpendicular to the first.
    *   </ul> 
	*   @param SolNo
	*		Solution number : can be 1 or 2
	*/
	virtual HRESULT SetSolution(int SolNo) = 0;
	/**
	* Gets the current solution.
	*/
	virtual int GetSolution() = 0;
 /**
  * Gets the length type : length or infinite or infinite start point or infinite end point.
  * <br> Note: Default is Length.
  * <br> 
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
CATDeclareHandler (CATIGSMUseLineBisecting, CATBaseUnknown);
#endif
