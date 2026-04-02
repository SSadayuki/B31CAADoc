// COPYRIGHT Dassault Systemes 2002
#ifndef CATIEhiBnlSegmentExtremity_H
#define CATIEhiBnlSegmentExtremity_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATEhiInterfaces.h"
#include "CATBaseUnknown.h"


class CATListValCATBaseUnknown_var;
class CATIElbBundleCnctPt;
class CATIEhiBundleSegment;
/**
 * Interface to manage connector points of bundle segment.
 */

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATEhiInterfaces IID IID_CATIEhiBnlSegmentExtremity;
#else
extern "C" const IID IID_CATIEhiBnlSegmentExtremity ;
#endif

class ExportedByCATEhiInterfaces CATIEhiBnlSegmentExtremity: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

  /**
  * Connect Bundle Segment Extremity to another Bundle Segment Extremity.
  * @param ipExtremity
  *  Bundle segment extremity to be connected.
  * @return
  *   An HRESULT value. 
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>no error. </dd>
  *     <dt>E_FAIL </dt>
  *     <dd>connection failed.</dd>
  *   </dl>
  */
  virtual HRESULT Connect ( CATIEhiBnlSegmentExtremity * iBnsExtremity ) = 0;

  /**
  * Connect Bundle Segment Extremity to a Bundle Connection Point (Electrical Device).
  * @param iBundleCnctPt
  *  Bundle Connection Point to be connected.
  * @return
  *   An HRESULT value. 
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>no error. </dd>
  *     <dt>E_FAIL </dt>
  *     <dd>connection failed.</dd>
  *   </dl>
  */
  virtual HRESULT Connect ( CATIElbBundleCnctPt * iBundleCnctPt ) = 0;

  /**
  * Disconnect the bundle segment extremity.
  * @return
  *   An HRESULT value. 
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>no error. </dd>
  *     <dt>E_FAIL </dt>
  *     <dd>disconnection failed.</dd>
  *   </dl>
  */
  virtual HRESULT Disconnect ()  = 0;

  /**
  * Retrieve bundle segment extremity geometrical representation.
  * @return
  *   An HRESULT value. 
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>no error. </dd>
  *     <dt>E_FAIL </dt>
  *     <dd>.search failed</dd>
  *   </dl>
  */
  virtual HRESULT GetRepresentation ( CATBaseUnknown ** opPoint )  = 0;

  /**
  * @nodoc
  * Retrieve list of internal splices linked to bundle segment extremity
  * @param oSplices
  *  List of IS linked to bundle segment extremity
  * <br>Method returns NULL value if no support is linked.
  * @return
  *   An HRESULT value. 
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>no error. </dd>
  *     <dt>E_FAIL </dt>
  *     <dd>Error occured while searching IS</dd>
  *   </dl>
  */
  virtual HRESULT ListInternalSplices ( CATListValCATBaseUnknown_var** oSplices ) = 0;

  /**
  *  Get Bundle Segment of Bundle Segment Extremity.	
  *  @param ipBnsExtremity
  *  The Bundle Segment that aggregate the Bundle Segment Extremity
  * @return
  *   An HRESULT value. 
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>no error. </dd>
  *     <dt>E_FAIL </dt>
  *     <dd>Error occured while searching bundle segment</dd>
  *   </dl>
  */

  virtual HRESULT GetBundleSegment (CATIEhiBundleSegment*& opBundleSegment) =0;



};

#endif
