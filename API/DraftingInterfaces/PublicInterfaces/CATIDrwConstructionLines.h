// COPYRIGHT DASSAULT SYSTEMES 2000
#ifndef CATIDrwConstructionLines_H
#define CATIDrwConstructionLines_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "DraftingItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwConstructionLines ;
#else
extern "C" const IID IID_CATIDrwConstructionLines ;
#endif

class CATIView_var;

/**
*   Interface implemented by views. 
* <b>Role</b>: It allows to build or destroy construction lines between views.
*/

class ExportedByDraftingItfCPP CATIDrwConstructionLines: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

  /**
  * Builds all construction lines between a view and an other one.
  * @param iView [in] the "other" view
  * @return
  *   S_OK : Method correctly executed. 
  *   E_FAIL : Method execution failed. (iView same as GetMyView() or not correct).
  * @see #GetMyView 
  */
  virtual HRESULT AddAuxView(const CATIView_var &iView)=0;

  /**
  * Builds construction lines between a view and a single element.
  * @param iElem [in] the single element (a geometry) 
  * @param update [in] if you have several elem to compute together , use update = 0 for all 
  * the elems except the last one. (That must be more efficient) 
  * @return
  *   S_OK : Method correctly executed. 
  *   E_FAIL : Method execution failed. (iElem not correct).
  * @see #GetMyView
  */
  virtual HRESULT AddAuxElem(const CATBaseUnknown_var &iElem, int update=1)=0;

  /**
  * Removes construction lines coming from a single element.
  * @param iElem [in] the single element (a geometry) 
  * @param update [in] if you have several elem to compute together , use update = 0 for all 
  * the elems except the last one. (That must be more efficient) 
  * @return
  *   S_OK : Method correctly executed. 
  *   E_FAIL : Method execution failed. (iElem not correct).
  */
  virtual HRESULT RemoveAuxElem(const CATBaseUnknown_var &iElem, int update=1)=0;

  /**
  * Removes all construction lines between a view and an other.
  * @param iView [in] the "other" view
  * @return
  *   S_OK : Method correctly executed. 
  *   E_FAIL : Method execution failed. (iView not already added).
  * @see #GetMyView 
  */
  virtual HRESULT RemoveAuxView(const CATIView_var &iView)=0;

  /**
  * Retrieves the main view. (should be the view that implements this interface).
  * @param oView [out] the main view 
  */
  virtual HRESULT GetMyView(CATIView_var &oView) const=0;

  /**
  *  Retrieves the auxiliary views which provide the construction lines.
  * @param oList [out] the list of other views that have construction lines 
  *  with the main view 
  *	note :the objects contained in the returned list are in fact CATIView_var.
  * @return
  *   S_OK : Method correctly executed. 
  *   E_FAIL : Method execution failed. 
  * @see #GetMyView
  */
  virtual HRESULT	GetListOfAuxiliaryViews (CATLISTV(CATBaseUnknown_var) &oList) const=0;

  /**
  *  Retrieves the list of elements belonging to a view which provide the construction lines.
  * @param iView [in] the view that contains the elements
  * @param oList [out] the list of elements (geometry) that provide construction lines 
  *	note :the objects contained in the returned list are in fact CATI2DWFGeomtry_var.
  * @return
  *   S_OK : Method correctly executed. 
  *   E_FAIL : Method execution failed. 
  */
  virtual HRESULT	GetListOfElems (const CATIView_var &iView,
								CATLISTV(CATBaseUnknown_var) &oList) const=0;

};

CATDeclareHandler( CATIDrwConstructionLines, CATBaseUnknown );

#endif
