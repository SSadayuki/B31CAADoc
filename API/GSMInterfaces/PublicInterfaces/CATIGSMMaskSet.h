/* -*-c++-*- */
#ifndef CATIGSMMaskSet_H
#define CATIGSMMaskSet_H

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGitInterfacesExportedBy.h"
#include "CATBaseUnknown.h"

//GSMInterfaces
class CATIGSMMask_var;

//ObjectSpecsModeler
class CATISpecObject_var;

//System 
class CATListValCATISpecObject_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID IID_CATIGSMMaskSet;
#else
extern "C" const IID IID_CATIGSMMaskSet;
#endif

/**
 * Mask set feature.
 * <b>Role</b> : allows to manipulate the masks of the model. 
 * 
 */
class ExportedByCATGitInterfaces CATIGSMMaskSet: public CATBaseUnknown
{
   CATDeclareInterface;
   
public:
  /**
   * Gets all the masks of the Part.
   *   @param oMasks
   *      Masks list.
   */
   virtual HRESULT GetAllMasks(CATListValCATISpecObject_var& oMasks) = 0;

   /**
    *   Adds a Mask in the list.
    *   @param iMask 
    *      Mask object 
    *   @param iSetState  
    *      <br> iSetState = 1 for setting as current 
    *      <br> iSetState = 0 either
    *      <br>Note : default SetState= 1 
    */
   virtual HRESULT AppendMask(const CATIGSMMask_var& iMask, int iSetState=1) = 0;

  /**
   * Gets active mask of the Part.
   *   @param oMask
   *      Active Mask.
   */
   virtual HRESULT GetActiveMask(CATISpecObject_var& oMask) = 0;

  /**
   * Gets masks linked to the axis system.
   *   @param iAxisSystem
   *      Axis system.
   *   @param oMasks
   *      Masks linked to the axis system.
   */
   virtual HRESULT GetMasksLinkedToAxis(const CATISpecObject_var& iAxisSystem,
                                      CATListValCATISpecObject_var& oMasks) = 0;

  /**
   * Activate mask. (If input NULL_var, the active one is deactivated.)
   *   @param iMask
   *      Mask to activate.
   */
   virtual HRESULT SetCurrentMask(const CATIGSMMask_var& iMask) = 0;
   
};

//------------------------------------------------------------------

CATDeclareHandler( CATIGSMMaskSet, CATBaseUnknown );

#endif

