#ifndef CATICciZone_H
#define CATICciZone_H

/**
* @CAA2Level L0
* @CAA2Usage U0
*/

//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2003
//==============================================================================
//
// CATICciZone :
//   Interface to manage a zone.
//
//==============================================================================
// Usage Notes :
//
//------------------------------------------------------------------------------
//  Inheritance : CATICciZone (CAACompositesItf FW)
//                  CATBaseUnknown        (System FW)
//==============================================================================

#include "CAACompositesItf.h"

#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATISpecObject.h"
#include "CATICciRosette.h"
#include "CATLISTV_CATISpecObject.h"
#include "CATLISTV_CATICciMaterialCache.h"
#include "CATIMmiMechanicalFeature.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern  ExportedByCAACompositesItf IID IID_CATICciZone;
#else
extern "C" const IID IID_CATICciZone;
#endif

class CATMathAxis;
class CATIMf3DAxisSystem_var;
class CATICciCompositesGeometry_var;

/**
 * Interface to Zone.
 * <b>Role</b>: Allows to manage a Composites Zone feature.
 */
class ExportedByCAACompositesItf CATICciZone : public CATBaseUnknown
{
   CATDeclareInterface;

public :

   /**
   * Gets the zones' geometry i.e. its contour(s).
   * @param oGeometry
   * The geometry.
   */
   virtual HRESULT GetGeometry(CATIMmiMechanicalFeature_var & oGeometry) = 0;
  
   /**
   * Gets the materials used to define the laminate (thickness law).
   * @param oMaterials
   * List of materials used in thickness law.
   */
   virtual HRESULT GetMaterials(CATLISTV(CATBaseUnknown_var)& oMaterials) = 0;

   /**
   * Gets the material caches used to define the laminate.
   * <br> WARNING: Only available for models created since V5R18
   * @param oMaterialCaches
   *    List of materials used in thickness law, each element adhere to CATICciMaterialCache.
   */
   virtual HRESULT GetMaterialCaches (CATLISTV(CATICciMaterialCache_var)& oMaterialCaches) = 0;

   /**
   * Gets the number of layers for each direction for each material defining the laminate (thickness law).
   * @param iMaterialIndex
   *     Index of the material: 0 <= iMaterialIndex < number of materials
   *     where number of materials is the size of the list obtained with GetMaterials.
   * @param oNumLayers
   *     Number of layers for each direction (see GetDirections method from CATICciReadCompositesData).
   */
   virtual HRESULT GetNumberOfLayers(int iMaterialIndex, CATListOfInt & oNumLayers) = 0;

   /**
   * Gets zone's composites geometry.
   * @param oGeometry
   *   The zone's composites geometry.
   */
   virtual HRESULT GetCompositesGeometry(CATICciCompositesGeometry_var & oGeometry) = 0;

   /**
   * Sets the materials used to define the laminate (thickness law).
   * @param iMaterials
   * List of materials used in thickness law.
   */
   virtual HRESULT SetMaterials( const CATLISTV(CATBaseUnknown_var) &iMaterials) = 0;

   /**
   * Sets the number of layers for each direction for each material defining the laminate (thickness law).
   * @param iMaterialIndex
   *     Index of the material: 0 <= iMaterialIndex < number of materials
   *     where number of materials is the size of the list obtained with GetMaterials.
   * @param iNumLayers
   *     Number of layers for each direction (see GetDirections method from CATICciReadCompositesData).
   */
   virtual HRESULT SetNumberOfLayers(int iMaterialIndex,
      const CATListOfInt &iNumLayers) = 0;


    /**
	* Returns the extended rosette of the zone.
	* @param ospRosette
	*    The CATICciRosette corresponding to the rosette.
	*/
	virtual HRESULT GetExtendedRosette (CATICciRosette_var& ospRosette) = 0;

	/**
	* Sets the extended rosette of the zone.
	* @param ispRosette
	*    The feature CATICciRosette to the rosette.
	*/
	virtual HRESULT SetExtendedRosette (const CATICciRosette_var& ispRosette) = 0;
	
    //--------------------------------------------------------------------------------------------------
    //------------------------- METHODS NOT TO BE USED: will be removed in future release --------------
    //--------------------------------------------------------------------------------------------------
	
   /**
   * @deprecated V5R26 
   * Use @see #GetGeometry(CATIMmiMechanicalFeature_var&) method instead.
   * Gets the zones' geometry i.e. its contour(s).
   * @param oGeometry
   * The geometry.
   */
   virtual HRESULT GetGeometry(CATISpecObject_var & oGeometry) = 0;
   
   /**
   * @deprecated V5R26 
   * Use @see #GetMaterialCaches(CATLISTV(CATICciMaterialCache_var)&) method instead.
   * Gets the material caches used to define the laminate.
   * <br> WARNING: Only available for models created since V5R18
   * @param oMaterialCaches
   *    List of materials used in thickness law, each element adhere to CATICciMaterialCache.
   */
   virtual HRESULT GetMaterialCaches (CATLISTV(CATISpecObject_var)& oMaterialCaches) = 0;

   /**
   * @deprecated V5R25
   * NOT USE FOR MODEL MIGRATED TO EXTENDED ROSETTE
   * Behavior for model migrated to extended rosette:
   * If an extended rosette exists with the axis system ispRosette in cartesian mode, it is setted to the grid panel, else a new extended rosette is created and setted.
   * Please use:
   * CATICciRosette_var spRosette;
   * pCciZone->GetExtendedRosette (spRosette);
   * if(NULL_var != spRosette)
   * 	spRosette->SetMainAxis (CATIMf3DAxisSystem_var& ospGeometricalRosette); ...
   * Sets the rosette of the zones.
   * @param iRosette
   *   The rosette as CATIMf3DAxisSystem.
   *   The input rosette pointer, must adhere to CATIMf3DAxisSystem interface.
   */
   virtual HRESULT SetRosette( CATISpecObject* iRosette ) = 0;

   /**
   * @deprecated V5R25
   * Please use:
   * CATICciRosette_var spRosette;
   * pCciZone->GetExtendedRosette (spRosette);
   * if(NULL_var != spRosette)
   * 	spRosette->GetMainAxis (CATIMf3DAxisSystem_var& ospGeometricalRosette); ...
   * Gets the rosette of the group of zones.
   * @param oRosette
   * The rosette.
   */
   virtual HRESULT GetRosette (CATIMf3DAxisSystem_var & oRosette) = 0;

   /**
   * @deprecated V5R18
   * Use @href #GetRosette method that returns a CATIMf3DAxisSystem feature.
   */
   virtual HRESULT GetRosette(CATMathAxis & oRosette) = 0;

   /**
   * @deprecated V5R18
   * Use @href CATICciCompositesGeometry#AddContour method instead.
   */
   virtual HRESULT AddContour( const CATBaseUnknown_var &iShell,
      const CATListValCATBaseUnknown_var &iListOfWiresOnShell ) = 0;

};

CATDeclareHandler(CATICciZone, CATBaseUnknown);

#endif
