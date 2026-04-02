//===================================================================
// COPYRIGHT DASSAULT SYSTEMES 2004
//===================================================================
//
// CATIMfgMultiAxisContourDriven.h
//
//===================================================================

#ifndef CATIMfgMultiAxisContourDriven_H
#define CATIMfgMultiAxisContourDriven_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "SmgItfEnv.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedBySmgItfEnv IID IID_CATIMfgMultiAxisContourDriven;
#else
extern "C" const IID IID_CATIMfgMultiAxisContourDriven ;
#endif

/**
 * Interface for multi axis contour driven operations.
 */
class ExportedBySmgItfEnv CATIMfgMultiAxisContourDriven: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Adds geometry to the first guide of a multi axis contour driven.
 * @param iReference
 *   The geometric element to set.
 *
 * @param iProduct
 *   The associated product of the referenced geometry.
 *
 * @param iPosition
 *   The position where to set the geometry in the geometry list (optional). 
 *   If not set, iReference is added at the end of the list.
 *
 * @return
 *    <dl>
 *      <dt><tt>S_OK</tt>    <dd>if the method succeeds
 *      <dt><tt>E_FAIL</tt>  <dd>if iReference is not valid
 *    </dl>
 */
   virtual HRESULT SetFirstGuideGeometries (const CATBaseUnknown_var& iReference, const CATBaseUnknown_var& iProduct, const int iPosition=0)=0;

/**
 * Removes all geometries of the first guide of a multi axis contour driven.
 * @return
 *    <dl>
 *      <dt><tt>S_OK</tt>    <dd>if the method succeeds
 *    </dl>
 */
   virtual HRESULT RemoveFirstGuideGeometries ()=0;

/**
 * Adds geometry to the second guide of a multi axis contour driven.
 * @param iReference
 *   The geometric element to set.
 *
 * @param iProduct
 *   The associated product of the referenced geometry.
 *
 * @param iPosition
 *   The position where to set the geometry in the geometry list (optional). 
 *   If not set, iReference is added at the end of the list.
 *
 * @return
 *    <dl>
 *      <dt><tt>S_OK</tt>    <dd>if the method succeeds
 *      <dt><tt>E_FAIL</tt>  <dd>if iReference is not valid
 *    </dl>
 */
   virtual HRESULT SetSecondGuideGeometries (const CATBaseUnknown_var& iReference, const CATBaseUnknown_var& iProduct, const int iPosition=0)=0;

/**
 * Removes all geometries of the second guide of a multi axis contour driven.
 * @return
 *    <dl>
 *      <dt><tt>S_OK</tt>    <dd>if the method succeeds
 *    </dl>
 */
   virtual HRESULT RemoveSecondGuideGeometries ()=0;

/**
 * Adds geometry to the first stop of a multi axis contour driven.
 * @param iReference
 *   The geometric element to set.
 *
 * @param iProduct
 *   The associated product of the referenced geometry.
 *
 * @param iPosition
 *   The position where to set the geometry in the geometry list (optional). 
 *   If not set, iReference is added at the end of the list.
 *
 * @return
 *    <dl>
 *      <dt><tt>S_OK</tt>    <dd>if the method succeeds
 *      <dt><tt>E_FAIL</tt>  <dd>if iReference is not valid
 *    </dl>
 */
   virtual HRESULT SetFirstStopGeometries (const CATBaseUnknown_var& iReference, const CATBaseUnknown_var& iProduct, const int iPosition=0)=0;

/**
 * Removes all geometries of the first stop of a multi axis contour driven.
 * @return
 *    <dl>
 *      <dt><tt>S_OK</tt>    <dd>if the method succeeds
 *    </dl>
 */
   virtual HRESULT RemoveFirstStopGeometries ()=0;

/**
 * Adds geometry to the second stop of a multi axis contour driven.
 * @param iReference
 *   The geometric element to set.
 *
 * @param iProduct
 *   The associated product of the referenced geometry.
 *
 * @param iPosition
 *   The position where to set the geometry in the geometry list (optional). 
 *   If not set, iReference is added at the end of the list.
 *
 * @return
 *    <dl>
 *      <dt><tt>S_OK</tt>    <dd>if the method succeeds
 *      <dt><tt>E_FAIL</tt>  <dd>if iReference is not valid
 *    </dl>
 */
   virtual HRESULT SetSecondStopGeometries (const CATBaseUnknown_var& iReference, const CATBaseUnknown_var& iProduct, const int iPosition=0)=0;

/**
 * Removes all geometries of the second stop of a multi axis contour driven.
 * @return
 *    <dl>
 *      <dt><tt>S_OK</tt>    <dd>if the method succeeds
 *    </dl>
 */
   virtual HRESULT RemoveSecondStopGeometries ()=0;

/**
 * Sets 'View Direction' geometry to the operation.
 * <br> Usually the part surface normal is used as the view direction.
 * @param iReference
 *   The geometric element to set.
 *
 * @param iProduct
 *   The associated product of the referenced geometry.
 *
 * @return
 *    <dl>
 *      <dt><tt>S_OK</tt>    <dd>if the method succeeds
 *      <dt><tt>E_FAIL</tt>  <dd>if iReference is not valid
 *    </dl>
 */
    virtual HRESULT SetViewDirectionGeometry(const CATBaseUnknown_var & iReference, const CATBaseUnknown_var & iProduct) =0;
     
/**
 * Removes 'View Direction' geometry from the operation.
 * @return
 *    <dl>
 *      <dt><tt>S_OK</tt>    <dd>if the method succeeds
 *    </dl>
 */
    virtual HRESULT RemoveViewDirectionGeometry() =0;

/**
 * Sets start direction of the operation.
 * @param iSide
 *   <br><b>Legal values</b>:
 *   <dl>
 *     <dt><tt>-1</tt>  <dd> To start at the end of the first guide
 *     <dt><tt>1</tt>   <dd> To start at the beginning of the first guide
 *   </dl>
 *
 * @return
 *    <dl>
 *      <dt><tt>S_OK</tt>    <dd>if the method succeeds
 *      <dt><tt>E_FAIL</tt>  <dd>if iSide is not valid
 *    </dl>
 */
    virtual HRESULT SetStartDirection(const int iSide) =0;

};

CATDeclareHandler(CATIMfgMultiAxisContourDriven, CATBaseUnknown) ;

#endif
