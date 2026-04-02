#ifndef CATIEhiGeoBundle_H
#define CATIEhiGeoBundle_H

// COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATEhiInterfaces.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATEhiInterfaces IID IID_CATIEhiGeoBundle ;
#else
extern "C" const IID IID_CATIEhiGeoBundle ;
#endif

class CATListValCATBaseUnknown_var;
class CATIEhiBundleSegment;
class CATIProduct;
class CATIEhiProtection;
class CATIEhiMultiBranchable;

/**
 * Interface to manage geometrical bundle .
 * <b>Role<b/>:A geometrical bundle federates a group  
 * of bundle segments and/or devices.
 */

class ExportedByCATEhiInterfaces CATIEhiGeoBundle: public CATBaseUnknown
{
  CATDeclareInterface;

  public:


  /**
  * List electrical bundle segments contained in the geometrical bundle. 
  * @param oBundleSegments
  *  The electrical bundle segments or NULL if no bundle segment 
  *  is linked to geometrical bundle.
  * @return
  *   An HRESULT value. 
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>No error occured while searching bundle segments. </dd>
  *     <dt>E_FAIL </dt>
  *     <dd>Error. </dd>
  *   </dl>
  */
	  
  virtual HRESULT ListBundleSegments (CATListValCATBaseUnknown_var** oBundleSegments) = 0;
 
  /**
  * @deprecated V5R15
  * Use @href CATIEhiGeoBundle#CreateMultiBranchable
  *
  * Add bundle segment in geometrical bundle. 
  * New CATPart document is created and instanciated under geometrical bundle.
  * @param oBundleSegment
  *  The electrical bundle segment instance or NULL creation failed 
  * @return
  *   An HRESULT value. 
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>No error occured while creating bundle segment. </dd>
  *     <dt>E_FAIL </dt>
  *     <dd>Error. </dd>
  *   </dl>
  */
	  
  virtual HRESULT CreateBundleSegment ( CATIEhiBundleSegment ** opBundleSegment ) = 0;

	  
  
  /**
  * Create or update geometrical representation of bundle segment . 
  * <br><b>Role<b/>:the current bundle segment geometrical representation is a part feature : Rib .
  * <br>If bundle segment representation already exists, only update is performed.
  * @param opBundleSegmentBody
  *  Bundle segment representation (Rib).
  * @return
  *   An HRESULT value. 
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>No error . </dd>
  *     <dt>E_FAIL </dt>
  *     <dd>The bundle segment representation creation failed.</dd>
  *   </dl>
  */
  virtual HRESULT ComputeBundleSegment(CATIEhiBundleSegment * ipBundleSegment) = 0;


  	  
  /**
  * Add multi branchable in geometrical bundle. 
  * New CATPart document is created and instanciated under geometrical bundle. 
  * @param opMultiBranchable
  *  The multi branchable instance or NULL creation failed 
  * @return
  *   An HRESULT value. 
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>No error occured while creating multi branchable. </dd>
  *     <dt>E_FAIL </dt>
  *     <dd>Error. </dd>
  *   </dl>
  */
  virtual HRESULT CreateMultiBranchable ( CATIEhiMultiBranchable ** opMultiBranchable )  = 0;


  /**
  * Create or update geometrical representation of multi branchable. 
  * <br><b>Role<b/>:the current bundle segment geometrical representation is a part feature : Rib .
  * <br>If bundle segment representation already exists, only update is performed.
  * @param opBundleSegmentBody
  *  Bundle segment representation (Rib).
  * @return
  *   An HRESULT value. 
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>No error . </dd>
  *     <dt>E_FAIL </dt>
  *     <dd>The bundle segment representation creation failed.</dd>
  *   </dl>
  */
  virtual HRESULT ComputeMultiBranchable(CATIEhiMultiBranchable * ipMultiBranchable) = 0;

  /**
  *
  * Instantiates a Protection . 
  * <br><b>Role<b/>: CATPart document is instanciated under geometrical bundle.
  * <br>
  * @param ipRefProtection
  *  Reference of Protection to instanciate.
  * @param ipListOfBundleSegments
  *  List Of Bundle segments that we want to protect.
  * @param iRatio1
  *  ratio (distance Extremity1 of Join-Extremity1 of Split)/Length of Join
  * @param iRatio2
  *  ratio (distance Extremity1 of Join-Extremity2 of Split)/Length of Join
  * @param opProtection
  *  Protection Instance
  * @return
  *   An HRESULT value. 
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>No error . </dd>
  *     <dt>E_FAIL </dt>
  *     <dd>The bundle segment representation creation failed.</dd>
  *   </dl>
  */
  virtual HRESULT InstanciateProtection(CATIProduct * ipRefProtection,
                                        CATListValCATBaseUnknown_var * ipListOfBundleSegments,
                                        double iRatio1,
                                        double iRatio2,
                                        CATIEhiProtection *& opProtection) = 0;

};

//------------------------------------------------------------------

CATDeclareHandler( CATIEhiGeoBundle, CATBaseUnknown );

#endif
