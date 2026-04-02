/* -*-c++ -*- */
#ifndef CATIElbFactory_h
#define CATIElbFactory_h
// COPYRIGHT DASSAULT SYSTEMES 2002

/** 
 * @CAA2Level L1
 * @CAA2Usage U3
 */


#include "CATBoolean.h"
#include "CATBaseUnknown.h"
#include "ExportedByCATElbInterfaces.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATElbInterfaces IID IID_CATIElbFactory;
#else
extern "C" const IID IID_CATIElbFactory;
#endif

/**
 * Interface to add Device Extensions on Products.
 */
class ExportedByCATElbInterfaces CATIElbFactory: public CATBaseUnknown
{
  CATDeclareInterface;

public:

 /**
  * @nodoc
  * Check if Product extension is allowed for a given device
  *
  * @param oIsAllowed (FALSE / TRUE)
  *   equals TRUE if extension is allowed 
  * @return
  *   return code.
  *
  *             Devices : - Equipment
  */
  virtual HRESULT CheckPrdExtensionAsEquipment(CATBoolean& oIsAllowed) = 0;
  
 /**
  * @nodoc
  * Check if Product extension is allowed for a given device
  *
  * @param oIsAllowed (FALSE / TRUE)
  *   equals TRUE if extension is allowed 
  * @return
  *   return code.
  *
  *             Devices : - ConnectorShell
  */
  virtual HRESULT CheckPrdExtensionAsConnectorShell(CATBoolean& oIsAllowed) = 0;

 
 /**  
  * @nodoc
  * Check if Product extension is allowed for a given device
  *
  * @param oIsAllowed (FALSE / TRUE)
  *   equals TRUE if extension is allowed 
  * @return
  *   return code.
  *
  *             Devices : - Single Connector
  */
  virtual HRESULT CheckPrdExtensionAsSingleConnector(CATBoolean& oIsAllowed) = 0;

 /**
  * @nodoc
  * Check if Product extension is allowed for a given device
  *
  * @param oIsAllowed (FALSE / TRUE)
  *   equals TRUE if extension is allowed 
  * @return
  *   return code.
  *
  *             Devices : - Multi Connector
  */
  virtual HRESULT CheckPrdExtensionAsMultiConnector(CATBoolean& oIsAllowed) = 0;

 /**
  * @nodoc
  * Check if Product extension is allowed for a given device
  *
  * @param oIsAllowed (FALSE / TRUE)
  *   equals TRUE if extension is allowed 
  * @return
  *   return code.
  *
  *             Devices : - External Splice
  */
  virtual HRESULT CheckPrdExtensionAsExternalSplice(CATBoolean& oIsAllowed) = 0;

 /**
  * @nodoc
  * Check if Product extension is allowed for a given device
  *
  * @param oIsAllowed (FALSE / TRUE)
  *   equals TRUE if extension is allowed 
  * @return
  *   return code.
  *
  *             Devices : - Internal Splice
  */
  virtual HRESULT CheckPrdExtensionAsInternalSplice(CATBoolean& oIsAllowed) = 0;
  
 /**
  * @nodoc
  * Check if Product extension is allowed for a given device
  *
  * @param oIsAllowed (FALSE / TRUE)
  *   equals TRUE if extension is allowed 
  * @return
  *   return code.
  *
  *             Devices : - Terminal Block
  */
  virtual HRESULT CheckPrdExtensionAsTerminalBlock(CATBoolean& oIsAllowed) = 0;
  
 /**
  * @nodoc
  * Check if Product extension is allowed for a given device
  *
  * @param oIsAllowed (FALSE / TRUE)
  *   equals TRUE if extension is allowed 
  * @return
  *   return code.
  *
  *             Devices : - Terminal Strip
  */
  virtual HRESULT CheckPrdExtensionAsTerminalStrip(CATBoolean& oIsAllowed) = 0;
  
 /**
  * @nodoc
  * Check if Product extension is allowed for a given device
  *
  * @param oIsAllowed (FALSE / TRUE)
  *   equals TRUE if extension is allowed 
  * @return
  *   return code.
  *
  *             Devices : - Ground Stud
  */
  virtual HRESULT CheckPrdExtensionAsGroundStud(CATBoolean& oIsAllowed) = 0;
  
 /**
  * @nodoc
  * Check if Product extension is allowed for a given device
  *
  * @param oIsAllowed (FALSE / TRUE)
  *   equals TRUE if extension is allowed 
  * @return
  *   return code.
  *
  *             Devices : - Contact
  */
  virtual HRESULT CheckPrdExtensionAsContact(CATBoolean& oIsAllowed) = 0;
  
 /**
  * @nodoc
  * Check if Product extension is allowed for a given device
  *
  * @param oIsAllowed (FALSE / TRUE)
  *   equals TRUE if extension is allowed 
  * @return
  *   return code.
  *
  *             Devices : - Filler Plug
  */
  virtual HRESULT CheckPrdExtensionAsFillerPlug(CATBoolean& oIsAllowed) = 0;
  
 /**
  * @nodoc
  * Check if Product extension is allowed for a given device
  *
  * @param oIsAllowed (FALSE / TRUE)
  *   equals TRUE if extension is allowed 
  * @return
  *   return code.
  *
  *             Devices : - Back Shell
  */
  virtual HRESULT CheckPrdExtensionAsBackShell(CATBoolean& oIsAllowed) = 0;

 /**
  * @nodoc
  * Check if Product extension is allowed for a given device
  *
  * @param oIsAllowed (FALSE / TRUE)
  *   equals TRUE if extension is allowed 
  * @return
  *   return code.
  *
  *             Devices : - Mounting Equipment
  */
  virtual HRESULT CheckPrdExtensionAsMountingEquipment(CATBoolean& oIsAllowed) = 0;
  
 /**
  * @nodoc
  * Add Device Extension on Product
  *
  * @return
  *   return code.
  *
  *             Devices : - Equipment
  */
  virtual HRESULT ExtendPrdAsEquipment() = 0;
  
  
 /**
  * @nodoc
  * Add Device Extension on Product
  *
  * @return
  *   return code.
  *
  *             Devices : - ConnectorShell
  */
  virtual HRESULT ExtendPrdAsConnectorShell() = 0;
  
  
 /**
  * Add Device Extension on Product.
  *
  * @return
  *   return code.
  *
  *             Devices : - Single Connector
  */
  virtual HRESULT ExtendPrdAsSingleConnector() = 0;
  
 /**
  * Add Device Extension on Product.
  *
  * @return
  *   return code.
  *
  *             Devices : - Multi Connector
  */
  virtual HRESULT ExtendPrdAsMultiConnector() = 0;
  
 /**
  * @nodoc
  * Add Device Extension on Product
  *
  * @return
  *   return code.
  *
  *             Devices : - External Splice
  */
  virtual HRESULT ExtendPrdAsExternalSplice() = 0;
  
 /**
  * @nodoc
  * Add Device Extension on Product
  *
  * @return
  *   return code.
  *
  *             Devices :  - Internal Splice
  */
  virtual HRESULT ExtendPrdAsInternalSplice() = 0;
  
 /**
  * @nodoc
  * Add Device Extension on Product
  *
  * @return
  *   return code.
  *
  *             Devices : -  Terminal Block
  */
  virtual HRESULT ExtendPrdAsTerminalBlock() = 0;
  
  
 /**
  * @nodoc
  * Add Device Extension on Product
  *
  * @return
  *   return code.
  *
  *             Devices : -  Terminal Strip
  */
  virtual HRESULT ExtendPrdAsTerminalStrip() = 0;
  
 /**
  * @nodoc
  * Add Device Extension on Product
  *
  * @return
  *   return code.
  *
  *             Devices : - Ground Stud
  */
  virtual HRESULT ExtendPrdAsGroundStud() = 0;
  
 /**
  * @nodoc
  * Add Device Extension on Product
  *
  * @return
  *   return code.
  *
  *             Devices : - Contact
  */
  virtual HRESULT ExtendPrdAsContact() = 0;
  
 /**
  * @nodoc
  * Add Device Extension on Product
  *
  * @return
  *   return code.
  *
  *             Devices : - Filler Plug
  */
  virtual HRESULT ExtendPrdAsFillerPlug() = 0;
  
 /**
  * Add Device Extension on Product.
  *
  * @return
  *   return code.
  *
  *             Devices : - Back Shell
  */
  virtual HRESULT ExtendPrdAsBackShell() = 0;

 /**
  * Add Device Extension on Product.
  *
  * @return
  *   return code.
  *
  *             Devices : - Mounting Equipment
  */
  virtual HRESULT ExtendPrdAsMountingEquipment() = 0;

  /**
  * Add Support Extension on Product.
  * @param ipEntryPoint
  * The entry point for support definition
  * @param ipEntryPlane
  * The entry plane for support definition
  * @param ipExitPlane
  * The exit plane for support definition
  * @param ipBasePlane
  * The base plane for support definition
  * Optional - Used for retainer definition
  * @return
  *   return code
  */
  virtual HRESULT ExtendPrdAsSupport(CATBaseUnknown * ipEntryPoint,
                                     CATBaseUnknown * ipEntryPlane,
                                     CATBaseUnknown * ipExitPlane,
                                     CATBaseUnknown * ipBasePlane = NULL) = 0;
};

CATDeclareHandler(CATIElbFactory, CATBaseUnknown);
#endif

