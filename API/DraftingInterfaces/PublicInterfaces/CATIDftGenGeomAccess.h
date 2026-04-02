// COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#ifndef CATIDftGenGeomAccess_H
#define CATIDftGenGeomAccess_H

#include "IUnknown.h"

class CATIProduct;
class CATGeometry;
class CATIUnknownList;
class CATMathBox2D;

#include "CATDraftingInterfaces.h"
#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDftGenGeomAccess ;
#else
extern "C" const IID IID_CATIDftGenGeomAccess ;
#endif

//------------------------------------------------------------------

/**
 * Interface on the Generative View which allows to access generated Geometry
 * and to execute different query on it.
 */
class  ExportedByDraftingItfCPP CATIDftGenGeomAccess: public IUnknown
{
  public:

      /** 
      * Returns a list of GenItem which have been generated from a particular geometry in a specified product.
      * @param iIID
      *     the IID of the returned interface
      * @param iGeom
      *     the "coming from" geometry
      * @param iProd
      *     the "coming from" product in the assembly. If NULL not considered. If not NULL, must have the same size that iGeom
      * @param oList
      *     the list of GenItem.
      * @return 
      *     S_OK if found at least one GenItem. S_FALSE if not. E_FAIL if abnormal behavior. E_INVALIDARG if NULL iGeom.
      */

      virtual HRESULT GetGeneratedItemForm3DGeom(const IID & iIID, CATGeometry * iGeom, CATIProduct * iProd, CATIUnknownList ** oList) = 0;

      /** 
      * Returns a list of GenItem which have been generated from both several geometries.
      * @param iIID
      *     the IID of the returned interface
      * @param iGeom
      *     the "coming from" list of geometries
      * @param iProd
      *     the "coming from" list of products in the assembly corresponding to each geom. If NULL not considered.
      * @param oList
      *     the list of GenItem.
      * @return 
      *     S_OK if found at least one GenItem. S_FALSE if not. E_FAIL if abnormal behavior. E_INVALIDARG if NULL or empty iGeom.
      */
      virtual HRESULT GetGeneratedItemForm3DGeomList (const IID &  iIID , CATIUnknownList * iGeom , CATIUnknownList *  iProdList , CATIUnknownList ** oList) = 0;
      
      /**
      * Returns all the generated geometry accordingly to the required interface.
      * @param <tt>const IID & iIID</tt>
      * [in] The IID of the required interface
      * @param <tt>CATIUnknownList ** oList</tt>
      * [out] the list of returned pointers
      * @return
      * A <tt>HRESULT</tt>
      * <dl>
      * <dt> <tt>S_OK</tt>     <dd> Some geometry has been found
      * <dt> <tt>E_FAIL</tt>   <dd> No geometry found which implements the interface iIID
      * </dl>
      */
      virtual HRESULT GetAllGeneratedItems(const IID & iIID, CATIUnknownList ** oList) = 0;
      
      /**
      * Return the encumbrancy of all generated items in view coordinates
      * @param <tt>CATMathBox2D * oBox</tt>
      * [out] THE box
      * @return
      * A <tt>HRESULT</tt>
      * <dl>
      * <dt> <tt>S_OK</tt>     <dd> succeeded to return a non empty box
      * <dt> <tt>E_FAIL</tt>   <dd> no generated items in the view.
      * <dt> <tt>E_UNEXPECTED</tt>   <dd> internal error
      * </dl>
      */
      /** @nodoc */
      virtual HRESULT GetEncumbrancyOfGeneratedItems(CATMathBox2D * oBox) = 0;

      
      /**
      * Returns all the generated shapes accordingly to the required interface.
      * @param <tt>const IID & iIID</tt>
      * [in] The IID of the required interface
      * @param <tt>CATIUnknownList ** oList</tt>
      * [out] the list of returned pointers
      * @return
      * A <tt>HRESULT</tt>
      * <dl>
      * <dt> <tt>S_OK</tt>     <dd> Some Generative shapes has been found
      * <dt> <tt>S_FALSE</tt>   <dd> No generative shape has been found
      * <dt> <tt>E_FAIL</tt>   <dd> abnormal behavior
      * </dl>
      */
      virtual HRESULT GetAllGeneratedShapes(const IID & iIID, CATIUnknownList ** oList) = 0;
};

#endif



