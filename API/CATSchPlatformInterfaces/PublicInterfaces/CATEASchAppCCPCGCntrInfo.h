#ifndef CATEASchAppCCPCGCntrInfo_H
#define CATEASchAppCCPCGCntrInfo_H

//	COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

// System
#include "CATBaseUnknown.h"
#include "CATSchItfCPP.h"
#include "CATUnicodeString.h"
#include "CATListOfCATUnicodeString.h"

/**
 * Super class to derive implementation for interface CATISchAppCCPCGCntrInfo.
 * <b>Role</b>: Adaptor
 */

class CATIUnknownList;
class CATICStringList;
class CATISchAppConnector;

class ExportedByCATSchItfCPP CATEASchAppCCPCGCntrInfo : public CATBaseUnknown
{
  public: 
      
  CATDeclareClass;

  /**
   * Constructs an empty CATEASchAppCCPCGCntrInfo.
   */
  CATEASchAppCCPCGCntrInfo();
  virtual ~CATEASchAppCCPCGCntrInfo();  

  /**
  * @deprecated V5R15 
  * Use @href CATEASchAppCCPCGCntrInfo#AppGetCGConnectInfo2 instead.
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
  virtual HRESULT AppGetCGConnectInfo (
    const CATISchAppConnector *iCntrSrcOfThis,
    CATIUnknownList **oLConCntrNeedsMapping,
    CATICStringList **oLCStrConMainCntrName);

  /**
  * @deprecated V5R15 
  * Use @href CATEASchAppCCPCGCntrInfo#AppPostCGPlacementConnect2 instead.
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
    const char *iConMainCntrName);

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
  virtual HRESULT AppGetCGConnectInfo2 (
    const CATISchAppConnector *iCntrSrcOfThis,
    CATIUnknownList **oLConCntrNeedsMapping,
    CATListValCATUnicodeString &oLCStrConMainCntrName);

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
    const CATUnicodeString &iConMainCntrName);

  //-------------------------

  private:
  // do not implement
  CATEASchAppCCPCGCntrInfo (CATEASchAppCCPCGCntrInfo&);
  CATEASchAppCCPCGCntrInfo& operator=(CATEASchAppCCPCGCntrInfo&);
};

#endif
