#ifndef CATIMfgMachinableAreaMngt_H
#define CATIMfgMachinableAreaMngt_H

//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES  2004
//=============================================================================

/**
 * @CAA2Level L1 
 * @CAA2Usage U3
 */


#include "MfgItfEnv.h"

#include "CATIMfgMachinableBaseMngt.h"

#include "CATUnicodeString.h"

class CATListValCATBaseUnknown_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgMachinableAreaMngt;
#else
extern "C" const IID IID_CATIMfgMachinableAreaMngt;
#endif


/**   
 * Interface dedicated to machinable area feature managment.
 * <b>Role</b>: This interface delivers services on machinable area features <br>
 */
class ExportedByMfgItfEnv CATIMfgMachinableAreaMngt : public CATIMfgMachinableBaseMngt
{
  CATDeclareInterface;

public:

   /**
	* Set the visibility of the Manufacturing Machinable Feature in the MfgView.
    * @param iVisible
	*       if Machinable Area Feature is visible or not in the Manufacturing View
	*/

	virtual HRESULT SetFeatVisibility(CATBoolean  iVisible) = 0;

   /**
	* .Get the visibility of the Manufacturing Machinable Feature in the MfgView.
    * @param oVisible
	*       if Machinable Area Feature is visible or not in the Manufacturing View
	*/

  virtual HRESULT GetFeatVisibility(CATBoolean& oVisible) = 0;

   /**
	*  Set the dynamic state of the Manufacturing Machinable Feature.
    * @param iFreeze
	*       if Machinable Area Feature is frozen or not
	*/

  virtual HRESULT SetFeatFreezed(CATBoolean  iFreeze) = 0;

   /**
	*  Get the dynamic state of the Manufacturing Machinable Feature.
    * @param oFreeze
	*       if Machinable Area Feature is frozen or not
	*/
  
  virtual HRESULT GetFeatFreezed(CATBoolean& oFreeze) = 0;

   /**
	*  Get the referenced geometry of a Machinable Area Feature.
    * @param iGeomType
	*       the type of geometry
	* @param oGEom
	*       the referenced geometric element
	*/

  virtual HRESULT GetGeometry(const CATUnicodeString& iGeomType, CATBaseUnknown_var& oGeom) = 0;

   /**
	*  Add geometry to a Machinable Area Feature.
    * @param iGeomeType
	*       the type of geometry
	* @param iGeom
	*       the added geometry
	* @param iNotify
	*		the notification
  */
  
  virtual HRESULT AddGeometry(const CATUnicodeString& iGeomType, CATBaseUnknown_var& iGeom, int iNotify) = 0;

  /**
	*  Remove geometry from a Machinable Area Feature.
    * @param iGeomType
	*		the type of geometry
	* @param iNotify
	*		the notification
	*/
  
  virtual HRESULT RemoveGeometry(const CATUnicodeString& iGeomType, int iNotify) = 0;

  /**
	*  Remove geometry from a Machinable Area Feature.
    * @param iGeom
	*       the geometry to remove
	* @param iNotify
	*		the notification
	*/
  
  virtual HRESULT RemoveGeometry(const CATBaseUnknown_var& iGeom, int iNotify) = 0;

   /**
    * Use @href #GetAllGeometry(CATListValCATBaseUnknown_var&) instead.
	*/
  //virtual CATListValCATBaseUnknown_var* GetAllGeometry(void) = 0;

   /**
	*  Retrieves all geometries from a Machinable Area Feature.
    * @param oGeometries The list of geometries
	*/
  virtual HRESULT GetAllGeometry (CATListValCATBaseUnknown_var& oGeometries) = 0;

   /**
	*  Add a data in the Manufacturing Machinable Feature.
    * @param iData
	*       the Data to add
	* @param iNotify
	*		the notification
	*/
   
  virtual HRESULT AddData(const CATBaseUnknown_var& iData, int iNotify) = 0;

   /**
	*  Remove a data in the Manufacturing Machinable Feature.
    * @param iData
	*       the data to remove
	* @param iNotify
	*		the notification
	*/
  
  virtual HRESULT RemoveData(const CATBaseUnknown_var& iData, int iNotify) = 0;
  
   /**
    * Use @href #GetAllDatas(CATListValCATBaseUnknown_var&) instead.
	*/  
  //virtual CATListValCATBaseUnknown_var* GetAllDatas(void) = 0;
 
   /**
	*  Gets all the data in the Manufacturing Machinable Feature.
    * @param oDatas The list of data
	*/  
  virtual HRESULT GetAllDatas (CATListValCATBaseUnknown_var& oDatas) = 0;

   /**
	*  Get all the pointed geometry.
    * @param oListGeom
	*       the list of geometries
    * @param oListProducts
	*       the list of related products
	*/

  virtual HRESULT GetPointedGeometry(CATListValCATBaseUnknown_var& oListGeom, CATListValCATBaseUnknown_var& oListProducts) = 0;

   /**
	*  Get all the pointed products.
    * @param oListProducts
	*       the list of related products
	*/

  virtual HRESULT GetPointedProducts(CATListValCATBaseUnknown_var& oListProducts) = 0;

   /**
	*  Get all the connected manufacturing activities.
    * @param oListMfgActvity
	*       the list of related manufacturing activities
	*/
 
  virtual HRESULT GetConnectedManufacturingActivity(CATListValCATBaseUnknown_var& oListMfgActivity) = 0;

};

CATDeclareHandler(CATIMfgMachinableAreaMngt, CATBaseUnknown);

#endif
