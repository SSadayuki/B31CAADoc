#ifndef CATISchAppCCPCGCntrInfo_H
#define CATISchAppCCPCGCntrInfo_H

//	COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U4 CATEASchAppCCPCGCntrInfo
 */

// System
#include "IUnknown.h"
#include "CATUnicodeString.h"
#include "CATListOfCATUnicodeString.h"

class CATISchAppConnector;
class CATIUnknownList;
class CATICStringList;


extern "C" const IID IID_CATISchAppCCPCGCntrInfo ;

/**
 * Interface to manage an application component group connector during placement.
 * Application must derived implementation of this interface 
 * from CATEASchAppCCPCGCntrInfo.
 * <b>Role</b>: Customize component group placement behaviors.
 * <p><b>BOA information</b>: this interface CANNOT be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */

class CATISchAppCCPCGCntrInfo : public IUnknown
{
  public:  

  /**
  * @deprecated V5R15 
  * Use @href CATISchAppCCPCGCntrInfo#AppGetCGConnectInfo2 instead.
  * Store appropriate information as attributes of iCompGroup.
  * @param iCntrSrcOfThis
  *   The connector that is a counterpart of this connector in the 
  *   source component. It provides connectivity information of the
  *   connector in the source component (this connector is in the target
  *   component. Terminology as used in cut-copy-paste architecture).
  * @param oLConCntrNeedsMapping
  *   A list of connector interfaces. These are the connectors that
  *   are connected to iCntrSrcOfThis. The caller needs to find the
  *   corresponding copies under the CCP architecture.
  * @param oLCStrConMainCntrName
  *   A list of names of connectors. These connectors will be used
  *   used to identify the reference connection (such as cable connection)
  *   when the pin/wire connections are made in AppPostCGPlacementConnect.
  */
  virtual HRESULT AppGetCGConnectInfo(
    const CATISchAppConnector *iCntrSrcOfThis,
    CATIUnknownList **oLConCntrNeedsMapping,
    CATICStringList **oLCStrConMainCntrName)= 0;

  /**
  * @deprecated V5R15 
  * Use @href CATISchAppCCPCGCntrInfo#AppPostCGPlacementConnect2 instead.
  * Post process after placing this connector whoes owner is a component group.
  * Through this method application will make use of the information 
  * stored by AppGetCGConnectInfo to connect this connector to the input
  * connector.
  * @param iCntrToConnect
  *   The connector to connect to. 
  * @param iConMainCntrName
  *   The name of the connector. The owner of this connector is connected
  *   to the owner of iCntrToConnect (for .e.g. if iCntrToConnect is a wire 
  *   connector, the iConMainCntrName is the name of a cable-extremity 
  *   connector).
  */
  virtual HRESULT AppPostCGPlacementConnect (
    const CATISchAppConnector *iCntrToConnect,
    const char *iConMainCntrName) = 0;

  /**
  * Store appropriate information as attributes of iCompGroup.
  * @param iCntrSrcOfThis
  *   The connector that is a counterpart of this connector in the 
  *   source component. It provides connectivity information of the
  *   connector in the source component (this connector is in the target
  *   component. Terminology as used in cut-copy-paste architecture).
  * @param oLConCntrNeedsMapping
  *   A list of connector interfaces. These are the connectors that
  *   are connected to iCntrSrcOfThis. The caller needs to find the
  *   corresponding copies under the CCP architecture.
  * @param oLUStrConMainCntrName
  *   A list of names of connectors. These connectors will be used
  *   used to identify the reference connection (such as cable connection)
  *   when the pin/wire connections are made in AppPostCGPlacementConnect.
  */
  virtual HRESULT AppGetCGConnectInfo2(
    const CATISchAppConnector *iCntrSrcOfThis,
    CATIUnknownList **oLConCntrNeedsMapping,
    CATListOfCATUnicodeString &oLUStrConMainCntrName)= 0;

  /**
  * Post process after placing this connector whoes owner is a component group.
  * Through this method application will make use of the information 
  * stored by AppGetCGConnectInfo to connect this connector to the input
  * connector.
  * @param iCntrToConnect
  *   The connector to connect to. 
  * @param iConMainCntrName
  *   The name of the connector. The owner of this connector is connected
  *   to the owner of iCntrToConnect (for .e.g. if iCntrToConnect is a wire 
  *   connector, the iConMainCntrName is the name of a cable-extremity 
  *   connector).
  */
  virtual HRESULT AppPostCGPlacementConnect2 (
    const CATISchAppConnector *iCntrToConnect,
    const CATUnicodeString &iConMainCntrName) = 0;

};
#endif
