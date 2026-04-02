//===================================================================
// COPYRIGHT Dassault Systemes 2021
//===================================================================
// CATICciCompositesMaterial.cpp
// Header definition of class CATICciCompositesMaterial
//===================================================================
//
// Usage notes:
//   This class manage definition of composites material
//   It is implmented on MaterialFeature feature
//
//===================================================================
//  2021 Creation
//===================================================================
#ifndef CATICciCompositesMaterial_H
#define CATICciCompositesMaterial_H
/**
* @CAA2Level L0
* @CAA2Usage U3
*/

#include "CAACompositesItf.h"
#include "CATBaseUnknown.h"
#include "CATBoolean.h"
#include "CATListOfCATUnicodeString.h"
#include "CATLISTV_CATISpecObject.h"



extern ExportedByCAACompositesItf  IID IID_CATICciCompositesMaterial ;
class ExportedByCAACompositesItf CATICciCompositesMaterial: public CATBaseUnknown
{
CATDeclareInterface;

public:

	/**
	* Test if a composites domain exists on the current material.
	* @param oHasDomain
	*    The result of the  test. CATTrue is there is a composite domain.
	*/
	virtual HRESULT HasCompositeDomain(CATBoolean& oHasDomain) = 0;

	/**
	* Create a default composites domain on the current material.
	*/
	virtual HRESULT CreateCompositesDomain() = 0;
 
	/**
	* Define composite properties.
	* Create composite domain if it don't exist.
	* For NCF, layers must be defined separatly using DefineNCFLayers method.
	* @param iMaterialType
	*    The material type.
	* @param iUncuredThickness
	*    The uncured thickness.
	* @param iCuredThickness
	*    The cured thickness.
	* @param iMaxDeformation
	*    The maximum deformation
	* @param iLimitDeformation
	*    The limit deformation.
	* @param iFabricWidth
	*    The fabric width.
	* @param iSurfacicWeigth
	*    The surfacic weigth.
	* @param iMassCost
	*    The cost per mass.
	*/
	virtual HRESULT DefineCompositesProperties(int iMaterialType, double iUncuredThickness, double iCuredThickness, double iMaxDeformation, double iLimitDeformation, double iFabricWidth, double iSurfacicWeigth, double iMassCost) = 0;

	/**
	* Get composite properties.
	* For NCF, layers must be recovered separatly using GetNCFLayers method.
	* @param oMaterialType
	*    The material type.
	* @param oUncuredThickness
	*    The uncured thickness.
	* @param oCuredThickness
	*    The cured thickness.
	* @param oMaxDeformation
	*    The maximum deformation
	* @param oLimitDeformation
	*    The limit deformation.
	* @param oFabricWidth
	*    The fabric width.
	* @param oSurfacicWeigth
	*    The surfacic weigth.
	* @param oMassCost
	*    The cost per mass.
	*/
	virtual HRESULT GetCompositesProperties(int &oMaterialType, double &oUncuredThickness, double &ooCuredThickness, double &oMaxDeformation, double &oLimitDeformation, double &oFabricWidth, double &oSurfacicWeigth, double &oMassCost) = 0;
	
	/**
	* Define the NCF Layers.
	* Call of this method switch Material Type to NCF.
	* The three list must be define in same oder that NCF Layer
	* @param MaterialListForNCFLayers
	*    list with material of each layer of NCF - Input is a MaterialFeature casted in CATISpecObject_var ( for example CATICciCompositesMaterial_var or CATIMaterialFeature* ).
	* @param ListOfDirections
	*    list of value of Directions. 
	* @param ListOfDirNames
	*    list of name of Directions.
	*/
	virtual HRESULT DefineNCFLayers(CATLISTV(CATISpecObject_var)& MaterialListForNCFLayers, CATListOfDouble& ListOfDirections, CATListOfCATUnicodeString& ListOfDirNames) = 0;

	/**
	* Get the NCF Layers.
	* If type is not NCF, list will be empty.
	* @param MaterialListForNCFLayers
	*    list with material of each layer of NCF - Data aare MaterialFeature casted in CATISpecObject_var ( for example CATICciCompositesMaterial_var or CATIMaterialFeature* ).
	* @param ListOfDirections
	*    list of value of Directions.
	* @param ListOfDirNames
	*    list of name of Directions.
	*/
	virtual HRESULT GetNCFLayers(CATLISTV(CATISpecObject_var)& MaterialListForNCFLayers, CATListOfDouble& ListOfDirections, CATListOfCATUnicodeString& ListOfDirNames) = 0;

	/**
	 * Get the material type defined in Composites tab.
	 * Value is the following:
	 * 1 for Undefined
	 * 2 for Uni-directional
	 * 3 for Bi-directional
	 * 4 for NCF (Non Crimp Fabric)
	 * 5 for Non Structural
	 * @param oMaterialType
	 *    The material type.
	 */
	virtual HRESULT GetMaterialType(int& oMaterialType) = 0;

	/**
	 * Set the material type defined in Composites tab.
	 * Value is the following:
	 * 1 for Undefined
	 * 2 for Uni-directional
	 * 3 for Bi-directional
	 * 4 for NCF (Non Crimp Fabric)
	 * 5 for Non Structural
	 * @param iMaterialType
	 *    The material type.
	 */
	virtual HRESULT SetMaterialType(int iMaterialType) = 0;


	/**
	 * Get the uncured thicknes defined in Composites tab in mm.
	 * @param oUncuredThickness
	 *    The uncured thickness.
	 */
	virtual HRESULT GetUncuredThickness( double& oUncuredThickness) = 0;

	/**
	 * Set the uncured thicknes defined in Composites tab in mm.
	 * @param iUncuredThickness
	 *    The uncured thickness.
	 */
	virtual HRESULT SetUncuredThickness( double iUncuredThickness) = 0;


	/**
	 * Get the cured thicknes defined in Composites tab in mm.
	 * @param oCuredThickness
	 *    The cured thickness.
	 */
	virtual HRESULT GetCuredThickness( double& oCuredThickness) = 0;

	/**
	 * Set the cured thicknes defined in Composites tab in mm.
	 * @param iCuredThickness
	 *    The cured thickness.
	 */
	virtual HRESULT SetCuredThickness( double iCuredThickness) = 0;


	/**
	 * Get the maximum deformation defined in Composites tab in radian.
	 * @param oMaxDeformation
	 *    The maximum deformation.
	 */
	virtual HRESULT GetMaxDeformation( double& oMaxDeformation) = 0;

	/**
	 * Set the maximum deformation defined in Composites tab in radian.
	 * @param iMaxDeformation
	 *    The maximum deformation.
	 */
	virtual HRESULT SetMaxDeformation( double iMaxDeformation) = 0;


	/**
	 * Get the limit deformation defined in Composites tab in radian.
	 * @param oLimitDeformation
	 *    The limit deformation.
	 */
	virtual HRESULT GetLimitDeformation( double& oLimitDeformation) = 0;

	/**
	 * Set the limit deformation defined in Composites tab in radian.
	 * @param iLimitDeformation
	 *    The limit deformation.
	 */
	virtual HRESULT SetLimitDeformation( double iLimitDeformation) = 0;

	/**
	 * Get the fabric width defined in Composites tab in mm.
	 * @param oFabricWidth
	 *    The fabric width.
	 */
	virtual HRESULT GetFabricWidth( double& oFabricWidth) = 0;

	/**
	 * Set the fabric width defined in Composites tab in mm.
	 * @param iFabricWidth
	 *    The fabric width.
	 */
	virtual HRESULT SetFabricWidth( double iFabricWidth) = 0;


	/**
	 * Get the surfacic weigth defined in Composites tab in kg per m2.
	 * @param oSurfacicWeigth
	 *    The surfacic weigth.
	 */
	virtual HRESULT GetSurfacicWeigth( double& oSurfacicWeigth) = 0;

	/**
	 * Set the surfacic weigth defined in Composites tab in kg per m2.
	 * @param iSurfacicWeigth
	 *    The surfacic weigth.
	 */
	virtual HRESULT SetSurfacicWeigth( double iSurfacicWeigth) = 0;


	/**
	 * returns the cost per mass defined in Composites tab in $ per kg.
	 * @param oMassCost
	 *    The cost per mass.
	 */
	virtual HRESULT GetMassCost(double& oMassCost) = 0;

	/**
	 * Set the cost per mass defined in Composites tab in $ per kg.
	 * @param iMassCost
	 *    The cost per mass.
	 */
	virtual HRESULT SetMassCost( double iMassCost) = 0;




};

//-----------------------------------------------------------------------
CATDeclareHandler( CATICciCompositesMaterial, CATBaseUnknown );

#endif
