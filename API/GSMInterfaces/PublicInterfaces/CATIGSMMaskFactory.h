/* -*-c++-*- */
#ifndef CATIGSMMaskFactory_H
#define CATIGSMMaskFactory_H

// COPYRIGHT DASSAULT SYSTEMES 2004

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGitInterfacesExportedBy.h"
#include "CATBaseUnknown.h"
#include "CATISpecObject.h"

//KnowledgeInterfaces
class CATICkeParm_var;

//GSMInterfaces
class CATIGSMMask_var;
class CATIGSMMaskSet_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID IID_CATIGSMMaskFactory ;
#else
extern "C" const IID IID_CATIGSMMaskFactory ;
#endif

//------------------------------------------------------------------

/**
 * Factory for mask objects.
 * <b>Role</b> : allows to create/get mask set and to create masks in Part. 
 */
class ExportedByCATGitInterfaces CATIGSMMaskFactory: public CATBaseUnknown
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
	virtual  CATIGSMMaskSet_var RetrieveMaskSet( const int iWithCreation = 0 ) = 0;

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
	virtual  CATIGSMMask_var CreateMaskPos(
					const CATISpecObject_var &iPoint1 = NULL_var,
					const CATISpecObject_var &iPoint2 = NULL_var,
					const CATISpecObject_var &iAxisSystem = NULL_var) = 0;

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
	virtual  CATIGSMMask_var CreateMaskPos(
					const CATICkeParm_var &iPnt1X,
					const CATICkeParm_var &iPnt1Y,
					const CATICkeParm_var &iPnt1Z,
					const CATICkeParm_var &iPnt2X,
					const CATICkeParm_var &iPnt2Y,
					const CATICkeParm_var &iPnt2Z,
					const CATISpecObject_var &iAxisSystem = NULL_var) = 0;

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
	virtual  CATIGSMMask_var CreateMaskDim(
					const CATISpecObject_var &iOrigin,
					const CATICkeParm_var &iX,
					const CATICkeParm_var &iY,
					const CATICkeParm_var &iZ,
					const CATISpecObject_var &iAxisSystem = NULL_var) = 0;

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
	virtual  CATIGSMMask_var CreateMaskDim(
					const CATICkeParm_var &iOriginX,
					const CATICkeParm_var &iOriginY,
					const CATICkeParm_var &iOriginZ,
					const CATICkeParm_var &iX,
					const CATICkeParm_var &iY,
					const CATICkeParm_var &iZ,
					const CATISpecObject_var &iAxisSystem = NULL_var) = 0;

};

//------------------------------------------------------------------

CATDeclareHandler( CATIGSMMaskFactory, CATBaseUnknown );

#endif


