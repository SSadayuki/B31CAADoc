#ifndef CATIEhiBundleSegment_H
#define CATIEhiBundleSegment_H

// COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATEhiInterfaces.h"
#include "CATBooleanDef.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATEhiInterfaces IID IID_CATIEhiBundleSegment ;
#else
extern "C" const IID IID_CATIEhiBundleSegment ;
#endif

#include "CATEhiBundleSegmentDef.h"

class CATListValCATBaseUnknown_var;
class CATIGSMSpline;
class CATISweep;
class CATPathElement;
class CATBaseUnknown;
class CATIEhiBnlSegmentExtremity;
class CATIEhiPositionPoint;
class CATIGSMPointOnCurve;
class CATIEhiBundleSegment;
class CATIEhiBranchable;
class CATIProduct;

 /**
  * Interface to manage bundle segment.
  * <b>Role<b/>:A bundle segment is a subdivision of
  * geometrical bundle . Bundle segment route may be 
  * defined by electrical flexible curve ( computed 
  * under geometrical and physical constraints ).
  */

class ExportedByCATEhiInterfaces CATIEhiBundleSegment: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

  /**
  * Retrieve flexible curve of bundle segment. 
  * <br><b>Role<b/>:Flexible curve defines bundle segment route.
  * @param oFlexibleCurve
  *  Flexible curve.
  * @return
  *   An HRESULT value. 
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>The flexible curve is found . </dd>
  *     <dt>E_FAIL </dt>
  *     <dd>The curve cannot be found or bundle segment
  *         route is defined by an external curve .</dd>
  *   </dl>
  */
  virtual HRESULT GetElecCurve ( CATIGSMSpline** oFlexibleCurve ) = 0;


  /**
  * Retrieve list of support linked to bundle segment. 
  * @param oSupports
  *  List of supports linked to bundle segment.
  * <br>Method returns NULL value if no support is linked.
  * @return
  *   An HRESULT value. 
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>no error. </dd>
  *     <dt>E_FAIL </dt>
  *     <dd>Error occured while searching supports.</dd>
  *   </dl>
  */
  virtual HRESULT ListLinkedSupports ( CATListValCATBaseUnknown_var** oSupports ) = 0;


  /**
  * Retrieve geometrical representation of bundle segment. 
  * <br><b>Role<b/>:the current bundle segment representation is a part feature : Rib .
  * @param opBundleSegmentBody
  *  Bundle segment representation (Rib).
  * @return
  *   An HRESULT value. 
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>No error . </dd>
  *     <dt>E_FAIL </dt>
  *     <dd>The bundle segment representation does not exist.</dd>
  *   </dl>
  */

  virtual HRESULT GetRepresentation ( CATBaseUnknown ** opBundleSegmentBody ) = 0;

  /**
  * Retrieve bundle segment extremities ( connector points ). 
  * @param opBnlSegmentExt1
  *  connector point at extremity 1.
  * @param opBnlSegmentExt2
  *  connector point at extremity 2.
  * @return
  *   An HRESULT value. 
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>No error . </dd>
  *     <dt>E_FAIL </dt>
  *     <dd>The bundle segment representation does not exist.</dd>
  *   </dl>
  */

  virtual HRESULT GetExtremities ( CATIEhiBnlSegmentExtremity ** opBnlSegmentExt1,
                                   CATIEhiBnlSegmentExtremity ** opBnlSegmentExt2 ) = 0;


  /**
  * Create harness position point from point. 
  * <br>  . Add electrical properties to any point or external reference to point.
  * <br>  . Enable to add extra length or cancel slack between two points of bundle segment.
  * @param ipPoint
  *  The point.
  * @param opEhiPoint
  *  The harness position point.
  * @return
  *   An HRESULT value. 
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>No error . </dd>
  *     <dt>E_FAIL </dt>
  *     <dd>Creation of position point failed.</dd>
  *   </dl>
  */
  virtual HRESULT CreatePositionPoint (CATBaseUnknown * ipPoint, CATIEhiPositionPoint ** opEhiPoint) = 0;
  
  
  /**
  *Split a bundle segment.
  *@param ipGSMPoint
  *  The point of the curve where we split the bundle segment.	
  * @param opBundleSegment 
  *  The bundle segment created by split of bundle segment.		
  */
  virtual HRESULT Split(CATIGSMPointOnCurve * ipGSMPoint,CATIEhiBundleSegment *& opElecBundleSegment) = 0;
  
  /**
  *   Merge two bundle segment.
  *   @param ipBundleSegment 			 
  *      The bundle segment to merge.
  */
  virtual HRESULT Merge(CATIEhiBundleSegment * ipBundleSegment )	= 0;


  /**
    * @nodoc
    */
  virtual HRESULT IsLinkedToElecCurve() = 0;

  /**
    * @nodoc
    */
  virtual HRESULT SetMode ( const wchar_t* iMode ) =0;

  /**
    * @nodoc
    */
  virtual HRESULT GetBundleSegmentRepresentation ( CATISweep** oBundleSegmentGeometry ) = 0;

  /**
    * @nodoc
    */
  virtual HRESULT InsertSupportPart( const CATPathElement * iRefPlanePathElement, 
	                                 const CATPathElement * iProjectPlanePathElement, 
                                     const CATPathElement * iRefPointPathElement,
                                     CatEhiSupportMode iSupportMode, 
                                     int * num,
                                     CatEhiInsertMode iCurveMode  = catEhiInsertAfter,
                                     CatEhiLinkMode   iLinkMode   = catEhiKeepLink ,
                                     CATIProduct * iContextProduct = NULL,
                                     const CATPathElement * iRefBasePlanePathElement = NULL
	                                 ) = 0;

  /**
    * @nodoc
    */
  virtual HRESULT UnlinkSupport ( int * num ,CatEhiDeleteMode iDeleteMode=catEhiNoKeep )=0;

  /**
    * @nodoc
    */
  virtual HRESULT InvertOrientationOnSurface() = 0;

  /**
    * @nodoc
    */
  virtual HRESULT MarkToBeUpdated () = 0;

  /**
    * @nodoc
    */
  virtual HRESULT ComputeDiameter () = 0;

  /**
    * @nodoc
    */
  virtual HRESULT GetSegmentError (int & segment_number) = 0;

  /**
    * @nodoc
    */
  virtual HRESULT SetActivationStatus (const CATBoolean iStatus) = 0;

  /**
    * @nodoc
    */
  virtual HRESULT GetActivationStatus ( CATBoolean &oStatus) = 0;
  
  /**
    * @nodoc
    */
  virtual HRESULT ListLinkedSupportsInGbn ( CATListValCATBaseUnknown_var** oListSupports ) = 0;

  /**
    * List Protections Linked to the Bundle Segment.
    * @param oListProtections 	
    *   The list of Protections linked to the Bundle Segment
    * @return
    *   An HRESULT value. 
    *   <br><b>Legal values</b>:
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>no error. </dd>
    *     <dt>E_FAIL </dt>
    *     <dd>Error occured while searching supports.</dd>
    *   </dl>
  */
  virtual HRESULT ListLinkedProtections( CATListValCATBaseUnknown_var** opListProtections ) = 0;

  /**
    * @nodoc
    */
    virtual HRESULT GetBranchable ( CATIEhiBranchable ** opBranchable )=0;

 /**
  * Add support to bundle segment. 
  * @param iSupport
  *   The instance of the support 
  * @param iSupportMode
  *   direction of entrance of the bns in the support
  *     = catEhiDirectMode  
  *     = catEhiInvertMode
  * @param num
  *     point number on the curve
  * @param iInsertMode
  *    insertion mode
  *    = catEhiInsertBefore  :  insertion of support before the given point
  *    = catEhiInsertAfter    :  insertion of support after the given point
  * @return
  *   An HRESULT value. 
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>no error. </dd>
  *     <dt>E_FAIL </dt>
  *     <dd>Error occured while adding support.</dd>
  *   </dl>
  */
 
  virtual HRESULT AddSupport( CATIProduct * iSupport, 
							  CatEhiSupportMode iSupportMode, 
							  int * num,
							  CatEhiInsertMode iCurveMode  = catEhiInsertAfter) = 0;
 
 /**
  * Retrieve the location of the bundle segment's support. 
  * @param ipBnsExtremity
  *   The extremity of the bundle segment from where the location is computed. 
  * @param ipSupport
  *   The support from which the location is computed.
  * @param oLocationSupport
  *   The distance between the extremity chosen and the support.  
  * @return
  *   An HRESULT value. 
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>no error. </dd>
  *     <dt>E_FAIL </dt>
  *     <dd>Error occured while computing location.</dd>
  *   </dl>
  */
  virtual  HRESULT GetLocationSupport(CATIEhiBnlSegmentExtremity * ipBnsExtremity, CATIProduct * ipSupport,double & oLocationSupport) =0;

  /*
  * Retrieve the support section where the bundle segment is inserted. 
  * @param ipLinkedSupport
  *   One of supports linked to bundle segment(from ListLinkedSupports).
  * @param osection_number
  *   The section number of the support.
  * @return
  *   An HRESULT value. 
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>no error. </dd>
  *     <dt>E_FAIL </dt>
  *     <dd>Error occured while retrieving section.</dd>
  *   </dl>
  */
  virtual  HRESULT GetLinkedSupportSection(CATBaseUnknown* 	ipLinkedSupport,
                                           int & osection_number ) = 0;     // UOK

};

//------------------------------------------------------------------

CATDeclareHandler( CATIEhiBundleSegment, CATBaseUnknown );

#endif
