//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2007
//==============================================================================
//
// CATICciPhysicalEntity :
//   Interface to manage a Composite physical entity.
//
//==============================================================================
// Usage Notes :
//
//------------------------------------------------------------------------------
//  Inheritance : CATICciPhysicalEntity (CAACompositesItf FW)
//                  CATBaseUnknown        (System FW)
//==============================================================================
#ifndef CATICciPhysicalEntity_H
#define CATICciPhysicalEntity_H
/**
  * @CAA2Level L0
  * @CAA2Usage U0
  */

#include "CAACompositesItf.h"
#include "CATUnicodeString.h"
#include "CATIMf3DAxisSystem.h"
#include "CATICkeParm.h"
#include "CATIMaterialFeature.h"
#include "CATICciMaterialCache.h"
#include "CATICciProducibility.h"
#include "CATICciRosette.h"
#include "CATLISTV_CATISpecObject.h"
#include "CATLISTV_CATICciProducibility.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCAACompositesItf IID IID_CATICciPhysicalEntity;
#else
extern "C" const IID IID_CATICciPhysicalEntity ;
#endif

class CATMathAxis;
class CATUnicodeString; 
/**
 * The physical entity type.
 * <b>Role:</b> This type defines the type of a Composites physical entity 
 * created by the @href CATICciCompositesDataFactory or @href CATICciTapeFactory 
 * interfaces.
 * @param CATCciPhysicalEntityPly
 *    The physical entity adheres to @href CATICciPly interface.   
 *
 * @param CATCciPhysicalEntityCore
 *    The physical entity adheres to @href CATICciCore interface.   
 *
 * @param CATCciPhysicalEntityCutPiece
 *    The physical entity adheres to @href CATICciCutPiece interface.   
 *
 * @param CATCciPhysicalEntityTape
 *    The physical entity adheres to @href CATICciTape interface.   
 *
 */
enum CATCciPhysicalEntityType
{
   CATCciPhysicalEntityPly          = 0,  
   CATCciPhysicalEntityCore         = 1, 
   CATCciPhysicalEntityCutPiece     = 2, 
   CATCciPhysicalEntityTape         = 3 
};


enum CATCciProducibilityFilter
{
   CATCciProducibilityAll                  = 0,  
   CATCciProducibilityCurrent              = 1,  
   CATCciProducibilityConsumableForManuf   = 2,
};

/**
 * Types for flatten geometry.
 * <b>Role</b>: Defines the different values of the CATCciFlattenMode used to create flatten genometry.
 * @param CATCciStandard   Standard 
 * @param CATCciUnfold     Unfold 
 * @see CATICciPly, CATICciCutPiece
 */
enum  CATCciFlattenMode   
{  
	CATCciStandard                =  0,      
	CATCciUnfold                  =  1  
};  

/**
 * Rotation types for flatten geometry.
 * <b>Role</b>: Defines the different values of the CATCciRotation used to create flatten genometry.
 * @param CATCciMaterialRoll   Material roll 
 * @param CATCciUnfoldAssembly     Unfold assembly
 * @see CATICciPly, CATICciCutPiece
 */
enum  CATCciRotation  
{  
	CATCciMaterialRoll            =  1,      
	CATCciUnfoldAssembly          =  2  
};

/**
 * Draping direction of flatten geometry.
 * <b>Role</b>: Defines the different values of the CATCciFlattenDrapingDirection used to create flatten genometry.
 * @param CATCciDrapingDirectionUnCheck    Flatten geometry draping direction is not normal to plane.
 * @param CATCciDrapingDirectionNormalToPlane     draping direction normal to plane(preferred value). 
 * @see CATICciPly, CATICciCutPiece
 */
enum CATCciFlattenDrapingDirection
{
	CATCciDrapingDirectionUnCheck			= 0,
	CATCciDrapingDirectionNormalToPlane	= 1
};

/**
 * Interface to manage a Composite physical entity.
 * <b>Role</b>: Allows you to access data of Ply, Core, CutPiece or Tape feature
 */
//------------------------------------------------------------------
class ExportedByCAACompositesItf CATICciPhysicalEntity: public CATBaseUnknown
{
  CATDeclareInterface;

  public:
     
     /**
     * Gets the name of the physical entity.
     * <br> WARNING: Only available for models created since V5R15.
     * @param oName
     *   The physical entity name.
     */
     virtual HRESULT GetName(CATUnicodeString & oName) = 0;

     /**
     * Gets the type of the physical entity as @href CATCciPhysicalEntityType enumerate value.
     * <br> WARNING: Only available for models created since V5R15.
     * @param oType
     *   The physical entity type.
     */
     virtual HRESULT GetType(CATCciPhysicalEntityType & oType) = 0;
    
     /**
     * Gets the cache material of the physical entity.
     * <br> WARNING: Only available for models created since V5R18
     * @param oMaterial
     *   The cache material feature.
     */
     virtual HRESULT GetMaterialCache(CATICciMaterialCache_var & oMaterialCache) = 0;
     
     /**
     * Gets the direction of the physical entity as Knowledge parameter.
     * <br> WARNING: Only available for models created since V5R15
     * @param oDirection
     *   The direction knowledge parameter.
     */
     virtual HRESULT GetDirection (CATICkeParm_var & oDirection) = 0;

     
     /**
     * Gets the producibility of the physical entity (not available for Core).
     * <br> WARNING: Only available for models created since V5R15
     * <br> REMARK: returns the producibility under the physical entity. For multiproducibility infrastructure mode, the  "so called"  "active" producibility under Ply or CutPiece is retrived.  
     * @param oProducibility
     *   The producibility feature.
     * <br> (Note: For additionnal informations on multiproducibility infrastructure, please contact DS support to access to this mode). 
     */
     virtual HRESULT GetProducibility(CATICciProducibility_var & oProducibility) = 0;

     /** 
     * Gets the list of producibility of the physical entity (multiproducibility infrastructure).
     * <br> Note: by default, producibility APIs and Composites UI manage only one producibility under a physical entity (Ply or CutPiece). 
     * With multiproducibility infrastructure several producibility can be stored under the physical entity in order to have and illustrate several producibility scenario at enginneering design phase  
     * @param oListOfProducibility
     *    producibility List features under Ply or CutPiece.
     * <br> (Note: For additionnal informations on multiproducibility infrastructure, please contact DS support to access to this mode). 
     */
     virtual HRESULT GetListOfProducibility(CATLISTV(CATICciProducibility_var) & oProducibilityList, CATCciProducibilityFilter Prodfilter = CATCciProducibilityAll) = 0;

     /**
     * Sets the name of the physical entity.
     * <br> WARNING: Only available for models created since V5R15
     * @param iName
     *   The physical entity name.
     */
     virtual HRESULT SetName(const CATUnicodeString & iName) = 0;
     
     /**
     * Sets the cache material of the physical entity (not available for CutPiece or Tape).
     * <br> WARNING: Only available for models created since V5R18
     * @param iMaterial
     *   The cache material feature.
     */
     virtual HRESULT SetMaterial(const CATICciMaterialCache_var & iMaterial) = 0;

     /**
     * Sets the direction of the physical entity.
     * <br> WARNING: Only available for models created since V5R15
     * @param iDirection
     *   The direction knowledge parameter value.
     */
     virtual HRESULT SetDirection(const CATICkeParm_var & iDirection) = 0;

	 /**
	* Returns the extended rosette of the physical entity.
	* @param ospRosette
	*    The CATICciRosette corresponding to the rosette.
	*/
	virtual HRESULT GetExtendedRosette (CATICciRosette_var& ospRosette) = 0;

	/**
	* Sets the extended rosette of the physical entity.
	* @param ispRosette
	*    The feature CATICciRosette to the rosette.
	*/
	virtual HRESULT SetExtendedRosette (const CATICciRosette_var& ispRosette) = 0;

	/**
	* @deprecated V5R28
	* Use @see #GetListOfProducibility overloaded method instead.
	* Gets the list of producibility of the physical entity (multiproducibility infrastructure).
	* <br> Note: by default, producibility APIs and Composites UI manage only one producibility under a physical entity (Ply or CutPiece).
	* With multiproducibility infrastructure several producibility can be stored under the physical entity in order to have and illustrate several producibility scenario at enginneering design phase
	* @param oListOfProducibility
	*    producibility List features under Ply or CutPiece.
	* <br> (Note: For additionnal informations on multiproducibility infrastructure, please contact DS support to access to this mode).
	*/
	virtual HRESULT GetListOfProducibility(CATLISTV(CATISpecObject_var) & oProducibilityList, CATCciProducibilityFilter Prodfilter = CATCciProducibilityAll) = 0;

     /**
	 * @deprecated V5R25
	 * NOT USE FOR MODEL MIGRATED TO EXTENDED ROSETTE
	 * Behavior for model migrated to extended rosette:
	 * If an extended rosette exists with the axis system ispRosette in cartesian mode, it is setted to the grid panel, else a new extended rosette is created and setted.
	 * Please use:
	 * CATICciRosette_var spRosette;
	 * pPhysicalEntity->GetExtendedRosette (spRosette);
	 * if(NULL_var != spRosette)
	 * 	spRosette->SetMainAxis (CATIMf3DAxisSystem_var& ospGeometricalRosette); ...
     * Sets the rosette of the physical entity.
     * @param iRosette
     *   The rosette as CATIMf3DAxisSystem.
     *   The input rosette pointer, must adhere to CATIMf3DAxisSystem interface.
     */
     virtual HRESULT SetRosette(CATISpecObject * iRosette) = 0;

	  /**
	  * @deprecated V5R25
	  * Please use:
	 * CATICciRosette_var spRosette;
	 * pPhysicalEntity->GetExtendedRosette (spRosette);
	 * if(NULL_var != spRosette)
	 * 	spRosette->GetMainAxis (CATIMf3DAxisSystem_var& ospGeometricalRosette); ...
     * Gets the rosette of the physical entity as CATIMf3DAxisSystem.
     * <br> WARNING: Only available for models created since V5R15
     * @param oRosette
     *   The rosette as CATIMf3DAxisSystem.
     */
     virtual HRESULT GetRosette (CATIMf3DAxisSystem_var & oRosette) = 0;

     /**
     * @deprecated V5R18
     * Use @href CATICciMaterialCache#GetMaterial method instead.
     */
     virtual HRESULT GetMaterial(CATIMaterialFeature_var & oMaterial) = 0;
     /**
     * @deprecated V5R18
     * Use @href #GetRosette method that returns a CATIMf3DAxisSystem feature.
     */
     virtual HRESULT GetRosette (CATMathAxis & oRosette) = 0;
     /**
     * @deprecated V5R18
     * Use @href #GetMaterial method that returns direction knowledge parameter.
     */
     virtual HRESULT GetDirection (double & oDirection) = 0;
     /**
     * @deprecated V5R18
     * Use @href #SetMaterial method instead with CATICciMaterialCache interface.
     */
     virtual HRESULT SetMaterial(CATIMaterialFeature* iMaterial) = 0;
     /**
     * @deprecated V5R18
     * Use @href #SetDirection method with input direction as knowledge parameter.
     */
     virtual HRESULT SetDirection(const double iDirection) = 0;

     // No constructors or destructors on this pure virtual base class
     // --------------------------------------------------------------
};

CATDeclareHandler(CATICciPhysicalEntity, CATBaseUnknown);
//------------------------------------------------------------------

#endif
