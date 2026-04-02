/* -*-c++-*- */
#ifndef CATIGSMUseMaskFactory_H
#define CATIGSMUseMaskFactory_H

// COPYRIGHT DASSAULT SYSTEMES 2004

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGSMUseItfExportedBy.h"
#include "CATBaseUnknown.h"
#include "CATIMmiMechanicalFeature.h"

//KnowledgeInterfaces
class CATICkeParm_var;

//GSMInterfaces
class CATIGSMUseMask_var;
class CATIGSMUseMaskSet_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID IID_CATIGSMUseMaskFactory ;
#else
extern "C" const IID IID_CATIGSMUseMaskFactory ;
#endif

//------------------------------------------------------------------

/**
 * Factory for mask objects.
 * <b>Role</b> : allows to create/get mask set and to create masks in Part. 
 */
class ExportedByCATGSMUseItf CATIGSMUseMaskFactory: public CATBaseUnknown
{
   CATDeclareInterface;
   
public:

  /**
   * Retrieve or create mask set.
   *   @param iWithCreation
   *      Tells if the set has to be created when it does not exist
   *      <br> Note: Only one mask set is created by Part document
   *   @return
   *      The mask set when it exists or has been created, NULL_var otherwise
   */
	virtual  CATIGSMUseMaskSet_var RetrieveMaskSet( const int iWithCreation = 0 ) = 0;

  /**
   * Create Mask which is type "2Position"
   *   @param iPoint1
   *      First point
   *   @param iPoint2
   *      Second point
   *   @param iAxisSystem
   *      Axis system. NULL_var : Global axis system
   *   @return
   *      The created mask, NULL_var otherwise
   */
	virtual  CATIGSMUseMask_var CreateMaskPos(
					const CATIMmiMechanicalFeature_var &iPoint1 = NULL_var,
					const CATIMmiMechanicalFeature_var &iPoint2 = NULL_var,
					const CATIMmiMechanicalFeature_var &iAxisSystem = NULL_var) = 0;

  /**
   * Create Mask which is type "2Position".
   *   @param iPnt1X
   *      X coordinate of the first point
   *   @param iPnt1Y
   *      Y coordinate of the first point
   *   @param iPnt1Z
   *      Z coordinate of the first point
   *   @param iPnt2X
   *      X coordinate of the first point
   *   @param iPnt2Y
   *      Y coordinate of the first point
   *   @param iPnt2Z
   *      Z coordinate of the first point
   *   @param iAxisSystem
   *      Axis system. NULL_var : Global axis system
   *   @return
   *      The created mask, NULL_var otherwise
   */
	virtual  CATIGSMUseMask_var CreateMaskPos(
					const CATICkeParm_var &iPnt1X,
					const CATICkeParm_var &iPnt1Y,
					const CATICkeParm_var &iPnt1Z,
					const CATICkeParm_var &iPnt2X,
					const CATICkeParm_var &iPnt2Y,
					const CATICkeParm_var &iPnt2Z,
					const CATIMmiMechanicalFeature_var &iAxisSystem = NULL_var) = 0;

  /**
   * Create Mask which is type "Position & Dimension".
   *   @param iOrigin
   *      Center point of mask
   *   @param iX
   *      Mask size of x direction (Length).
   *   @param iY
   *      Mask size of y direction (Width).
   *   @param iZ
   *      Mask size of z direction (Hight).
   *   @return
   *      The created mask, NULL_var otherwise
   */
	virtual  CATIGSMUseMask_var CreateMaskDim(
					const CATIMmiMechanicalFeature_var &iOrigin,
					const CATICkeParm_var &iX,
					const CATICkeParm_var &iY,
					const CATICkeParm_var &iZ,
					const CATIMmiMechanicalFeature_var &iAxisSystem = NULL_var) = 0;

  /**
   * Create Mask which is type "Position & Dimension".
   *   @param iOriginX
   *      X coordinate of the origin
   *   @param iOriginY
   *      Y coordinate of the origin
   *   @param iOriginZ
   *      Z coordinate of the origin
   *   @param iX
   *      Mask size of x direction (Length).
   *   @param iY
   *      Mask size of y direction (Width).
   *   @param iZ
   *      Mask size of z direction (Hight).
   *   @return
   *      The created mask, NULL_var otherwise
   */
	virtual  CATIGSMUseMask_var CreateMaskDim(
					const CATICkeParm_var &iOriginX,
					const CATICkeParm_var &iOriginY,
					const CATICkeParm_var &iOriginZ,
					const CATICkeParm_var &iX,
					const CATICkeParm_var &iY,
					const CATICkeParm_var &iZ,
					const CATIMmiMechanicalFeature_var &iAxisSystem = NULL_var) = 0;

};

//------------------------------------------------------------------

CATDeclareHandler( CATIGSMUseMaskFactory, CATBaseUnknown );

#endif


