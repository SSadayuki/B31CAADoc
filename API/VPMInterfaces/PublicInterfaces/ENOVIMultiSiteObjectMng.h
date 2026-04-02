//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2007
//=============================================================================
//
// ENOVIMultiSiteObjectMng.h
//=============================================================================
// Content: Services to get the replication information on an object.
//
//=============================================================================
// History
//
// 18/12/2007     Creation                  WPU
//=============================================================================
#ifndef ENOVIMultiSiteObjectMng_h
#define ENOVIMultiSiteObjectMng_h

#include "CATDbBinary.h"
#include "CATUnicodeString.h"
#include "CATBaseUnknown.h"
#include "GUIDVPMInterfaces.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_ENOVIMultiSiteObjectMng;
#else
extern "C" const IID IID_ENOVIMultiSiteObjectMng;
#endif
//
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
 
/**
 * Interface to access services for getting the replication information on an object.
 * <br><b>Role</b>:Class to be used by a client who wants replication information on an object.
 */

class ExportedByGUIDVPMInterfaces ENOVIMultiSiteObjectMng : public CATBaseUnknown
{
  CATDeclareInterface;
  
  public :
  /**
   *   Get the name of Site owning the object.
   *   @param oSiteOwner [out]
   *   A CATUnicodeString.
   *   @return
   *   An HRESULT value. 
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>the site owner has been successfully retrieved</dd>
   *     <dt>E_FAIL</dt>
   *     <dd>An error occured during the process</dd>
   *   </dl>		
   */
  virtual HRESULT GetSiteOwner    (CATUnicodeString&       oSiteOwner)=0;
 
  /**
   *   Get the ID of Site owning the object.
   *   @param oSiteID [out]
   *   a CATDbBinary.  
   *   @return
   *   An HRESULT value. 
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>the site owner has been successfully retrieved</dd>
   *     <dt>E_FAIL</dt>
   *     <dd>An error occured during the process</dd>
   *   </dl>		
   */
  virtual HRESULT GetSiteOwner    (CATDbBinary&            oSiteId)=0;

  /**
   *   Checks to see if the object is owned by the local site
   *   @return
   *   An HRESULT value. 
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The object is owned by local site</dd>
   *     <dt>E_FAIL</dt>
   *     <dd>The object is owned by a remote site</dd>
   *   </dl>		
   */
  virtual HRESULT IsOwnedByLocalSite ()=0;

 /**
   *   Checks to see if the object is owned by the site identified by SiteId
   *   @param iSiteId [in]. 
   *   @return
   *   An HRESULT value. 
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The object is owned by iSiteId</dd>
   *     <dt>E_FAIL</dt>
   *     <dd>The object is not owned by iSiteId</dd>
   *   </dl>		
   */
  virtual HRESULT IsOwnedByTargetSite(const CATDbBinary& iSiteId) =0;
  
};

CATDeclareHandler(ENOVIMultiSiteObjectMng, CATBaseUnknown); 

#endif 
