/* -*-c++-*- */
#ifndef CATIGSMUseMaskSet_H
#define CATIGSMUseMaskSet_H

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGSMUseItfExportedBy.h"
#include "CATBaseUnknown.h"

//GSMInterfaces
class CATIGSMUseMask_var;

//ObjectSpecsModeler
class CATIMmiMechanicalFeature_var;

//System 
class CATListValCATIMmiMechanicalFeature_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID IID_CATIGSMUseMaskSet;
#else
extern "C" const IID IID_CATIGSMUseMaskSet;
#endif

/**
 * Mask set feature.
 * <b>Role</b> : allows to manipulate the masks of the model. 
 * 
 */
class ExportedByCATGSMUseItf CATIGSMUseMaskSet: public CATBaseUnknown
{
   CATDeclareInterface;
   
public:
  /**
   * Gets all the masks of the Part.
   *   @param oMasks
   *      Masks list.
   */
   virtual HRESULT GetAllMasks(CATListValCATIMmiMechanicalFeature_var& oMasks) = 0;

   /**
    *   Adds a Mask in the list.
    *   @param iMask 
    *      Mask object 
    *   @param iSetState  
    *      <br> iSetState = 1 for setting as current 
    *      <br> iSetState = 0 either
    *      <br>Note : default SetState= 1 
    */
   virtual HRESULT AppendMask(const CATIGSMUseMask_var& iMask, int iSetState=1) = 0;

  /**
   * Gets active mask of the Part.
   *   @param oMask
   *      Active Mask.
   */
   virtual HRESULT GetActiveMask(CATIMmiMechanicalFeature_var& oMask) = 0;

  /**
   * Gets masks linked to the axis system.
   *   @param iAxisSystem
   *      Axis system.
   *   @param oMasks
   *      Masks linked to the axis system.
   */
   virtual HRESULT GetMasksLinkedToAxis(const CATIMmiMechanicalFeature_var& iAxisSystem,
                                      CATListValCATIMmiMechanicalFeature_var& oMasks) = 0;

  /**
   * Activate mask. (If input NULL_var, the active one is deactivated.)
   *   @param iMask
   *      Mask to activate.
   */
   virtual HRESULT SetCurrentMask(const CATIGSMUseMask_var& iMask) = 0;
   
};

//------------------------------------------------------------------

CATDeclareHandler( CATIGSMUseMaskSet, CATBaseUnknown );

#endif

