/* -*-c++-*- */

#ifndef CATIGSMUseMask_H
#define CATIGSMUseMask_H

// COPYRIGHT DASSAULT SYSTEMES 2004

/**
  * @CAA2Level L1   
  * @CAA2Usage U3
  */

#include "CATGSMUseItfExportedBy.h"
#include "CATBaseUnknown.h"

#include "CATGSMMaskDef.h"

//ObjectSpecsModeler
class CATIMmiMechanicalFeature_var;

//KnowledgeInterfaces
class CATICkeParm_var;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID IID_CATIGSMUseMask;
#else
extern "C" const IID IID_CATIGSMUseMask;
#endif

/**
 * Mask feature.
 * <b>Role</b> : allows to manipulate the masks of the model
 * 
 */
class ExportedByCATGSMUseItf CATIGSMUseMask: public CATBaseUnknown
{
   CATDeclareInterface;
   
public:
  /**
   * Gets type of the mask.
   *   @param oMaskType
   *      Type of the mask.
   */
   virtual HRESULT GetMaskType(CATGSMMaskType& oMaskType) = 0;

  /**
   * Sets type of the mask.
   *   @param iMaskType
   *      Type of the mask.
   */
   virtual HRESULT SetMaskType(const CATGSMMaskType iMaskType) = 0;

  /**
   * Gets axis system.
   *   @param oAxisSystem
   *      Axis system.
   */
   virtual HRESULT GetAxis(CATIMmiMechanicalFeature_var& oAxisSystem) = 0;

  /**
   * Sets axis system.
   *   @param iAxisSystem
   *      Axis system.
   */
   virtual HRESULT SetAxis(const CATIMmiMechanicalFeature_var& iAxisSystem) = 0;

  /**
   * Gets Point1 by object.
   *   @param oPoint1
   *      Point1.
   */
   virtual HRESULT GetRefPoint1(CATIMmiMechanicalFeature_var& oPoint1) = 0;

  /**
   * Gets Point1 by coordinate.
   *   @param oX
   *      X coordinate of Point1.
   *   @param oY
   *      Y coordinate of Point1.
   *   @param oZ
   *      Z coordinate of Point1.
   */
   virtual HRESULT GetRefPoint1(CATICkeParm_var& oX,
                                CATICkeParm_var& oY,
                                CATICkeParm_var& oZ) = 0;

  /**
   * Gets Point2 by object.
   *   @param oPoint2
   *      Point2.
   */
   virtual HRESULT GetRefPoint2(CATIMmiMechanicalFeature_var& oPoint2) = 0;

  /**
   * Gets Point2 by coordinate.
   *   @param oX
   *      X coordinate of Point2.
   *   @param oY
   *      Y coordinate of Point2.
   *   @param oZ
   *      Z coordinate of Point2.
   */
   virtual HRESULT GetRefPoint2(CATICkeParm_var& oX,
                                CATICkeParm_var& oY,
                                CATICkeParm_var& oZ) = 0;

  /**
   * Sets Point1 by object.
   *   @param iPoint1
   *      Point1.
   */
   virtual HRESULT SetRefPoint1(const CATIMmiMechanicalFeature_var& iPoint1) = 0;

  /**
   * Sets Point1 by coordinate.
   *   @param iX
   *      X coordinate of Point1.
   *   @param iY
   *      Y coordinate of Point1.
   *   @param iZ
   *      Z coordinate of Point1.
   */
   virtual HRESULT SetRefPoint1(const CATICkeParm_var& iX,
                                const CATICkeParm_var& iY,
                                const CATICkeParm_var& iZ) = 0;

  /**
   * Sets Point2 by object.
   *   @param iPoint2
   *      Point2.
   */
   virtual HRESULT SetRefPoint2(const CATIMmiMechanicalFeature_var& iPoint2) = 0;

  /**
   * Sets Point2 by coordinate.
   *   @param iX
   *      X coordinate of Point2.
   *   @param iY
   *      Y coordinate of Point2.
   *   @param iZ
   *      Z coordinate of Point2.
   */
   virtual HRESULT SetRefPoint2(const CATICkeParm_var& iX,
                                const CATICkeParm_var& iY,
                                const CATICkeParm_var& iZ) = 0;

  /**
   * Gets Origin by object.
   *   @param oOrigin
   *      Origin of mask box.
   */
   virtual HRESULT GetOrigin(CATIMmiMechanicalFeature_var& oOrigin) = 0;

  /**
   * Gets Origin by coordinate.
   *   @param oX
   *      X coordinate of origin of mask box.
   *   @param oY
   *      Y coordinate of origin of mask box.
   *   @param oZ
   *      Z coordinate of origin of mask box.
   */
   virtual HRESULT GetOrigin(CATICkeParm_var& oX,
                             CATICkeParm_var& oY,
                             CATICkeParm_var& oZ) = 0;

  /**
   * Sets Origin by object.
   *   @param iOrigin
   *      Origin of mask box.
   */
   virtual HRESULT SetOrigin(const CATIMmiMechanicalFeature_var& iOrigin) = 0;

  /**
   * Sets Origin by coordinate.
   *   @param iX
   *      X coordinate of origin of mask box.
   *   @param iY
   *      Y coordinate of origin of mask box.
   *   @param iZ
   *      Z coordinate of origin of mask box.
   */
   virtual HRESULT SetOrigin(const CATICkeParm_var& iX,
                             const CATICkeParm_var& iY,
                             const CATICkeParm_var& iZ) = 0;

  /**
   * Sets mask size.
   *   @param iX
   *      Size of x direction (Length).
   *   @param iY
   *      Size of y direction (Width).
   *   @param iZ
   *      Size of z direction (Hight).
   */
   virtual HRESULT SetSize(const CATICkeParm_var& iX,
                           const CATICkeParm_var& iY,
                           const CATICkeParm_var& iZ) = 0;

  /**
   * Gets mask size.
   *   @param oX
   *      Size of x direction (Length).
   *   @param oY
   *      Size of y direction (Width).
   *   @param oZ
   *      Size of z direction (Hight).
   */
   virtual HRESULT GetSize(CATICkeParm_var& oX,
                           CATICkeParm_var& oY,
                           CATICkeParm_var& oZ) = 0;

  /**
   * Sets datum mode for mask .
   *   @param iMode
   *      Datum mode 1: ON  0: OFF
   */
   virtual HRESULT SetDatumMode(const int iMode) = 0;

  /**
   * Gets datum mode for mask .
   *   @param oMode
   *      Datum mode 1: ON 0: OFF
   */
   virtual HRESULT GetDatumMode(int &oMode) = 0;

};

//------------------------------------------------------------------

CATDeclareHandler( CATIGSMUseMask, CATBaseUnknown );

#endif

