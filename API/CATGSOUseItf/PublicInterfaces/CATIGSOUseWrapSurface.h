/* -*-c++-*- */
#ifndef CATIGSOUseWrapSurface_H
#define CATIGSOUseWrapSurface_H
//
// COPYRIGHT Dassault Systemes 2002

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

//
// CATIGSOUseWrapSurface.h
// Define the CATIGSOUseWrapSurface interface
//

#include "ExportedByCATGSOUseItf.h"
#include "CATBaseUnknown.h"
#include "CATGSOWrapSurfaceDef.h"
#include "CATIGSMUseDirection.h"


class CATIMmiMechanicalFeature_var; 

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSOUseItf IID IID_CATIGSOUseWrapSurface;
#else
extern "C" const IID IID_CATIGSOUseWrapSurface;
#endif

/**
 * Interface to wrap Surface feature.
 * <b>Role</b>:Allows to access data of the wrap Surface 
 * @see CATIGSOUseFactory#CreateWrapSurface
 */
class ExportedByCATGSOUseItf CATIGSOUseWrapSurface: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Sets the surface to deform to the wrap Surface feature.
 * @param iSurfaceToDeform 
 *   The surface to deform. 
 */ 
      virtual HRESULT SetSurface(const CATIMmiMechanicalFeature_var iSurfaceToDeform
         ) = 0;

/**
 * Gets the surface to deform to the wrap Surface feature.
 * @param oSurfaceToDeform 
 *   The surface to deform. 
 */ 
      virtual HRESULT GetSurface(CATIMmiMechanicalFeature_var & oSurfaceToDeform
         ) = 0;

/**
 * Sets the reference surface to the wrap Surface feature.
 * @param iReferenceSurface 
 *   The Reference surface. 
 */ 
      virtual HRESULT SetReferenceSurface(const CATIMmiMechanicalFeature_var iReferenceSurface
         ) = 0;

/**
 * Gets the Reference surface to the wrap Surface feature.
 * @param oReferenceSurface 
 *   The Reference surfacem. 
 */ 
      virtual HRESULT GetReferenceSurface(CATIMmiMechanicalFeature_var & oReferenceSurface
         ) = 0;  

/**
 * Sets the target surface to the wrap Surface feature.
 * @param iTargetSurface 
 *   The Target surface. 
 */ 
      virtual HRESULT SetTargetSurface(const CATIMmiMechanicalFeature_var iTargetSurface
         ) = 0;

/**
 * Gets the target surface to the wrap Surface feature.
 * @param oTargetSurface 
 *   The Target surfacem. 
 */ 
      virtual HRESULT GetTargetSurface(CATIMmiMechanicalFeature_var & oTargetSurface
         ) = 0;  

  /**
    * Sets the Deformation Mode. 
    * <br> It modifies the wrap surface deformation mode either "Normal" or "3D"
    * <br> Note: 
    * <br>  - If wrap surface deformation mode selected is 3D, the wrap surface is the usual wrap surface.
    * <br>  - If Normal is selected, the wrap surface is a Normal one.
    *   @param iType
    *      Deformation Mode
    *       : CATGSOWrapSurface3D (=1) -> '3D' mode
    *       : CATGSOWrapSurfaceNormal  (=2) -> 'Normal' mode
    *       : CATGSOWrapSurfaceDirection (=3) -> 'With direction' mode
    * @see CATGSOWrapSurfaceRefDirType
    */
	  virtual    HRESULT SetDeformationMode(CATGSOWrapSurfaceRefDirType iType) = 0;

  /**
    * Gets Deformation Mode.
    * <br>
    * Normal or 3D mode.
    *   @param oType
    *      Deformation Mode
    *       : CATGSOWrapSurface3D (=1) -> '3D' mode
    *       : CATGSOWrapSurfaceNormal  (=2) -> 'Normal' mode
    *       : CATGSOWrapSurfaceDirection (=3) -> 'With direction' mode
    * @see CATGSOWrapSurfaceRefDirType
      */
      virtual    HRESULT GetDeformationMode(CATGSOWrapSurfaceRefDirType & oType) = 0;
      
    /**
    * Sets the deformation direction to the wrap surface feature.
    * Used only if deformation mode is set to CATGSOWrapSurfaceDirection
    *   @param iDirection
    *      deformation direction. 
    *   @see CATGSOWrapSurfaceRefDirType, CATIGSMUseDirection
    */
      virtual HRESULT SetDeformationDirection(const CATIGSMUseDirection_var & iDirection) = 0;  
      
    /**
    * Gets the deformation direction to the wrap surface feature.
    * Used only if deformation mode is set to CATGSOWrapSurfaceDirection
    *   @param oDirection
    *      deformation direction. 
    *   @see CATGSOWrapSurfaceRefDirType, CATIGSMUseDirection
    */
      virtual HRESULT GetDeformationDirection(CATIGSMUseDirection_var & oDirection) = 0;  
      
      
};
CATDeclareHandler (CATIGSOUseWrapSurface, CATBaseUnknown);

//------------------------------------------------------------------

#endif
