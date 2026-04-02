// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================
//
// CATIMfgMachinableGeomMngt : Manipulation Inferface for
//                             Manufacturing Machinable Geometry Feature
//
//=============================================================================

#ifndef CATIMfgMachinableGeomMngt_H
#define CATIMfgMachinableGeomMngt_H

/**
 * @CAA2Level L1 
 * @CAA2Usage U3
 */

#include "MfgItfEnv.h"

// inheritance
#include "CATIMfgMachinableBaseMngt.h"

// System framework
#include "CATUnicodeString.h"
#include "CATBoolean.h"

// forward declaration
class CATListValCATBaseUnknown_var;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgMachinableGeomMngt;
#else
extern "C" const IID IID_CATIMfgMachinableGeomMngt;
#endif

/**
 * Interface to manage Machinable Geometry features.
 * <b>Role</b>: A Machinable Geometry feature is associated to a Machinable Feature and hold geometry.
 * Use this interface to associate geometry to Machinable Geometry features.
 */
class ExportedByMfgItfEnv CATIMfgMachinableGeomMngt : public CATIMfgMachinableBaseMngt
{
  CATDeclareInterface;

public:

  /**
   * Sets the shared attribute of a Machinable Geometry Feature.
   * @param iShared The shared attribute value
   */
  virtual HRESULT SetFeatShared(CATBoolean  iShared) = 0;

  /**
   * Gets the shared attribute of a Machinable Geometry Feature.
   * @param oShared The shared attribute value
   */
  virtual HRESULT GetFeatShared(CATBoolean& oShared) = 0;

  /**
   * Adds a geometric target to a Machinable Geometry Feature.
   * @param iItem The item to add
   * @param iNotify 
   */
  virtual HRESULT AddItem(const CATBaseUnknown_var& iItem, int iNotify) = 0;

  /**
   * Adds geometric targets to a Machinable Geometry Feature.
   * @param iListItems The list of items to add
   * @param iNotify 
   */
  virtual HRESULT AddItems(const CATListValCATBaseUnknown_var& iListItems, int iNotify) = 0;
  
  /**
   * Removes a geometric target to a Machinable Geometry Feature.
   * @param iItem The item to remove
   * @param iNotify 
   */
  virtual HRESULT RemoveItem(const CATBaseUnknown_var& iItem, int iNotify) = 0;
  
  /**
   * Removes geometric targets to a Machinable Geometry Feature.
   * @param iListItems The list of items to remove
   * @param iNotify 
   */
  virtual HRESULT RemoveItems(const CATListValCATBaseUnknown_var& iListItems, int iNotify) = 0;
    
  /**
   * Gets all the geometric targets of a Machinable Geometry Feature.
   * @param oItems The list of items 
   */
  virtual HRESULT GetAllItems(CATListValCATBaseUnknown_var& oItems) = 0;

  /**
   * Gets all the pointed geometry and the corresponding product.
   * @param oListGeom The pointed geometries
   * @param oListProducts The associated products
   */
  virtual HRESULT GetPointedGeometry(CATListValCATBaseUnknown_var& oListGeom, CATListValCATBaseUnknown_var& oListProducts) = 0;
 
  /**
   * Gets all the pointed products.
   * @param oListProducts The products
   */
  virtual HRESULT GetPointedProducts(CATListValCATBaseUnknown_var& oListProducts) = 0;
  
  /**
   * Handles Design Change.
   * @param iOldPointedFeature The previous design to be changed
   * @param iNewPointedFeature The new design replacing iOldPointedFeature
   */
  virtual HRESULT HandleDesignChange(const CATBaseUnknown_var& iOldPointedFeature, const CATBaseUnknown_var& iNewPointedFeature) = 0;

};

CATDeclareHandler(CATIMfgMachinableGeomMngt, CATBaseUnknown);

#endif
