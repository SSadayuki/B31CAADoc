// COPYRIGHT Dassault Systemes 2003
//===================================================================
#ifndef CATIStmCatalogSHMObjectSettingAtt_H
#define CATIStmCatalogSHMObjectSettingAtt_H
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  * @deprecated V5R17 CATIStmCatalogSHMObjectSettingAtt
  */

/**
 * Interface to CATIA Sheet Metal Aerospace General setting controller object.
 * <b>Role</b>: The CATIA Sheet Metal Aerospace General setting controller is dedicated to manage the
 * setting parameters displayed in the Sheet Metal Aerospace General property page.
 * To access this property page:
 * <ul>
 *  <li>Click the <b>Options</b> command in the <b>Tools</b> menu</li>
 *  <li>Click + left of </b>Mechanical Design</b> to unfold the workbench list</li>   
 *  <li>Click <b>General</b></li>
 * </ul>
 * <p>Retrieve a pointer to CATIStmCatalogSHMObjectSettingAtt as follows:
 * <pre>
 * CATIStmCatalogSHMObjectSettingAtt * pIStmCatalogSHMObjectSettingCtrl;
 * HRESULT rc = E_FAIL;
 * rc = ::CATInstantiateComponent("CATIStmCatalogSHMObjectSettingCtrl",
 *                                IID_CATIStmCatalogSHMObjectSettingAtt,
 *                                (void**) & pIStmCatalogSHMObjectSettingCtrl);
 * </pre>
 */
#include "CATBaseUnknown.h"
#include "ExportedByCATSmInterfaces.h"

class CATSettingInfo;
class CATUnicodeString;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSmInterfaces IID IID_CATIStmCatalogSHMObjectSettingAtt;
#else
extern "C" const IID IID_CATIStmCatalogSHMObjectSettingAtt ;
#endif

class ExportedByCATSmInterfaces CATIStmCatalogSHMObjectSettingAtt : public CATBaseUnknown
  {
  CATDeclareInterface;

  public:
   
    /**
     * Retrieves the Standard Profile Catalog File setting parameter value.
     * <br><b>Role</b>: The Standard Profile Catalog File setting parameter stores the path 
     *   to the CATIA Catalog file used by the Catalog Browser whenever it is involved in
     *   Aerospace Sheet Metal commands, such as cutout or corner relief. 
     * @param oSHMStdProfPath [out]
     *   a valid path to a CATIA Catalog file
     * @return
     *   S_OK if the Standard Profile Catalog File setting parameter value
     *   is successfully retrieved, and E_FAIL otherwise   
     */
     virtual HRESULT GetSHMStdProfPath (CATUnicodeString & oSHMStdProfPath) = 0;

    /**
     * Sets the Standard Profile Catalog File setting parameter value.
     * @param iSHMStdProfPath [in]
     *   The Standard Profile Catalog File setting parameter value.
     * <br><b>Legal values</b>: a valid path to a CATIA Catalog file.
     * @return
     *   S_OK if the Standard Profile Catalog File setting parameter value
     *   is successfully set, and E_FAIL otherwise   
     */
     virtual HRESULT SetSHMStdProfPath (CATUnicodeString & iSHMStdProfPath) = 0;

    /** 
     * Retrieves information about the Standard Profile Catalog File setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetSHMStdProfPathInfo (CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the Standard Profile Catalog File parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetSHMStdProfPathLock (unsigned char iLocked) = 0;

  };

//------------------------------------------------------------------

#endif
