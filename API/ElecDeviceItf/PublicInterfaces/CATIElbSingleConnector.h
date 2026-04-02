/* -*-c++ -*- */
#ifndef CATIElbSingleConnector_H
#define CATIElbSingleConnector_H

// COPYRIGHT DASSAULT SYSTEMES 2002

/** 
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"

class CATIProduct;
class CATUnicodeString;
class CATILinkableObject;
class CATListValCATBaseUnknown_var;
class CATIElbBundleCnctPt;
class CATIElbCavityCnctPt;
class CATIElbConnectorCnctPt;
class CATIElbBackShellCnctPt;
class CATIElbCavity;
class CATIElbBackShell;
class CATIElbConnectorShell;
class CATIElbEquipment;
class CATIElbMountingEquipment;

#include "ExportedByCATElbInterfaces.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATElbInterfaces IID IID_CATIElbSingleConnector;
#else
extern "C" const IID IID_CATIElbSingleConnector;
#endif

/**
 * Interface to manage Single Connectors.
 */
class ExportedByCATElbInterfaces CATIElbSingleConnector : public CATBaseUnknown
{
  CATDeclareInterface;
  
public:
  
/**
 * @nodoc
 * Add Bundle Connection Point on Device
 *
 * @param iId
 *   Identifier (Name)
 *
 * @param iGeoDefinition
 *   Define the Leaf Product where Joint's Graphical elements and 
 *   representation come from
 *
 *      @param iRepresentation
 *        Connector's graphical representation (optional)
 *
 *      @param iJointType
 *        Joint's type
 *      @param iJointReferences
 *        Graphical elements used to realize joint
 *
 * @param oBundleCnctPt
 *   The connector
 * @return
 *   Return code
 */
  virtual HRESULT AddBundleCnctPt(const CATUnicodeString &iId, 
				  CATIProduct * iGeoDefinition,
				  CATILinkableObject * iRepresentation,
				  const CATUnicodeString &iJointType, 
				  CATListValCATBaseUnknown_var *iJointReferences,
				  CATIElbBundleCnctPt *& oBundleCnctPt) = 0;
 
/**
 * @nodoc
 * Add Cavity Connection Point on Device
 *
 * @param iId
 *   Identifier (Name)
 *
 * @param iGeoDefinition
 *   Define the Leaf Product where Joint's Graphical elements and 
 *   representation come from
 *
 *      @param iRepresentation
 *        Connector's graphical representation (optional)
 *
 *      @param iJointType
 *        Joint's type
 *      @param iJointReferences
 *        Graphical elements used to realize joint
 *
 * @param oCavityCnctPt
 *   The connector
 * @return
 *   Return code
 */
  virtual HRESULT AddCavityCnctPt(const CATUnicodeString &iId, 
				  CATIProduct * iGeoDefinition,
				  CATILinkableObject * iRepresentation,
				  const CATUnicodeString &iJointType, 
				  CATListValCATBaseUnknown_var *iJointReferences,
				  CATIElbCavityCnctPt *& oCavityCnctPt) = 0;

/**
 *
 * Add Connector Connection Point on Device.
 *
 * @param iId
 *   Identifier (Name)
 *
 * @param iGeoDefinition
 *   Define the Leaf Product where Joint's Graphical elements and 
 *   representation come from
 *
 *      @param iRepresentation
 *        Connector's graphical representation (optional)
 *
 *      @param iJointType
 *        Joint's type
 *      @param iJointReferences
 *        Graphical elements used to realize joint
 *
 * @param oConnectorCnctPt
 *   The connector
 * @return
 *   Return code
 */
  virtual HRESULT AddConnectorCnctPt(const CATUnicodeString &iId, 
				     CATIProduct * iGeoDefinition,
				     CATILinkableObject * iRepresentation,
				     const CATUnicodeString &iJointType, 
				     CATListValCATBaseUnknown_var *iJointReferences,
				     CATIElbConnectorCnctPt *& oConnectorCnctPt) = 0;
  
/**
 * @nodoc
 * Add BackShell Connection Point on Device
 *
 * @param iId
 *   Identifier (Name)
 *
 * @param iGeoDefinition
 *   Define the Leaf Product where Joint's Graphical elements and 
 *   representation come from
 *
 *      @param iRepresentation
 *        Connector's graphical representation (optional)
 *
 *      @param iJointType
 *        Joint's type
 *      @param iJointReferences
 *        Graphical elements used to realize joint
 *
 * @param oBackShellCnctPt
 *   The connector
 * @return
 *   Return code
 */
  virtual HRESULT AddBackShellCnctPt(const CATUnicodeString &iId, 
				     CATIProduct * iGeoDefinition,
				     CATILinkableObject * iRepresentation,
				     const CATUnicodeString &iJointType, 
				     CATListValCATBaseUnknown_var *iJointReferences,
				     CATIElbBackShellCnctPt *& oBackShellCnctPt) = 0;
  
/**
 * List of Cavities.
 *
 * @param oCavities
 *   The list
 * @return
 *   Return code
 */
  virtual HRESULT ListCavities(CATListValCATBaseUnknown_var*& oCavities) = 0;

/**
 * List of Terminations.
 *
 * @param oTerminations
 *   The list
 * @return
 *   Return code
 */
  virtual HRESULT ListTerminations(CATListValCATBaseUnknown_var*& oTerminations) = 0;
  
/**
 * List of BundleCnctPts.
 *
 * @param oBundleCnctPts
 *   The list
 * @return
 *   Return code
 */
  virtual HRESULT ListBundleCnctPts(CATListValCATBaseUnknown_var*& oBundleCnctPts) = 0;

/**
 * @nodoc
 * List of CavityCnctPts
 *
 * @param oCavityCnctPts
 *   The list
 * @return
 *   Return code
 */
 virtual HRESULT ListCavityCnctPts(CATListValCATBaseUnknown_var*& oCavityCnctPts) = 0;

/**
 * List of ConnectorCnctPts.
 *
 * @param oConnectorCnctPts
 *   The list
 * @return
 *   Return code
 */
 virtual HRESULT ListConnectorCnctPts(CATListValCATBaseUnknown_var*& oConnectorCnctPts) = 0;

/**
 * List of BackShellCnctPts.
 *
 * @param oBackShellCnctPts
 *   The list
 * @return
 *   Return code
 */
 virtual HRESULT ListBackShellCnctPts(CATListValCATBaseUnknown_var*& oBackShellCnctPts) = 0;

/**
 * @nodoc
 * Get Upper Device
 *
 * @param oUpperDevice
 *   The Upper Device
 * @return
 *   Return code
 */
 virtual HRESULT GetUpperDevice (CATBaseUnknown*& oUpperDevice) = 0;

/**
 * @nodoc
 * List of Connected Devices
 *
 * @param oConnectedDevices
 *   The list of ElecSicCon
 * @return
 *   Return code
 */
 virtual HRESULT ListConnectedDevices (CATListValCATBaseUnknown_var*& oConnectedDevices) = 0;

/**
 * @nodoc
 * List of Plugged in Devices
 *
 * @param oPluggedInDevices
 *   The list of ElecContact or ElecFillerPlug.
 * @return
 *   Return code
 */
 virtual HRESULT ListPluggedInDevices (CATListValCATBaseUnknown_var*& oPluggedInDevices) = 0;

/**
 * List Device Composition.
 *
 * @param oDevices
 *   The list of ElecContact or ElecFillerPlug.
 * @return
 *   Return code
 */
 virtual HRESULT ListDeviceComposition (CATListValCATBaseUnknown_var*& oDevices) = 0;

/**
 * Get Father Cavity.
 *
 * @param oCavity
 *   The cavity of the father Equipment or ConnectorShell used by the SingleConnector.
 * @return
 *   Return code
 */
 virtual HRESULT GetFatherCavity (CATIElbCavity*& oCavity) = 0;

/**
 * List Mating Connectors.
 *
 * @param oMatingConnectors
 *   The list of Mating Connectors.
 * @return
 *   Return code
 */
 virtual HRESULT ListMatingConnectors (CATListValCATBaseUnknown_var*& oMatingConnectors) = 0;

/**
 * Connect the single connector with a back shell.			 
 *
 * @param ipElecBackShellCnctPt
 *   The back shell connection point of this
 * @param ipElecBackShellTarget
 *   The back shell used to be connected  with single connector.
 * @param StatusOfGeometricalConstraint
 *   Value is:	0 if all geometrical constraint are correctly created.
 *	            1 if a geometrical constraint is  over constraint.
 *	            2 if no geometrical constraint was defined to constraint the device between them.
 *		
 * @return
 *   Return code
 */
 virtual HRESULT ConnectBackShell(	CATIElbBackShellCnctPt * ipElecBackShellCnctPt,
                                    CATIElbBackShell * ipElecBackShellTarget,
                                    int & StatusOfGeometricalConstraint) = 0;
/**
 * Connect the single connector with a single connector.   		
 *
 * @param ipElecConnectorCnctPt
 *   The connector connection point of this.
 * @param ipElecSingleConnector
 *   The single connector used to be connected  with single connector.
 * @param StatusOfGeometricalConstraint
 *   Value is:	0 if all geometrical constraint are correctly created.
 *	            1 if a geometrical constraint is  over constraint.
 *	            2 if no geometry is defined to constraint the device between them.		
 * @return
 *   Return code
 */
 virtual HRESULT ConnectSingleConnector( CATIElbConnectorCnctPt * ipElecConnectorCnctPt,
                                         CATIElbSingleConnector * ipElecSingleConnector,
                                         int & StatusOfGeometricalConstraint) = 0;
  
/**
 * List the Back Shells assembled to the Single Insert Connector.  		
 *
 * @param opLBackShells
 *   The pointer on a list of smart pointers of Back Shells
 * @return
 *   Return code
 */
 virtual HRESULT ListBackShells ( CATListValCATBaseUnknown_var *& opLBackShells ) = 0;

 /**
 * Connect the single connector with a Shell connector.   		
 *
 * @param ipCavity
 *   The cavity of Shell connector.
 * @param ipShell
 *   The Shell Connector to be connected 
 * @param StatusOfGeometricalConstraint
 *   Value is:	0 if all geometrical constraint are correctly created.
 *	            1 if a geometrical constraint is  over constraint.
 *	            2 if no geometry is defined to constraint the device between them.		
 * @return
 * An HRESULT value.  
 *     S_OK :  no error.
 *     E_FAIL : Error occured while connecting devices.
 *     S_FALSE : Devices already connected.
 */
 virtual HRESULT Connect( CATIElbCavity * ipCavity , 
                          CATIElbConnectorShell * ipShell ,
                          int & oStatusOfGeometricalConstraint) = 0;  //UOK

  /**
 * Connect the single connector with an Equipment.   		
 *
 * @param ipCavity
 *   The cavity of the Equipment.
 * @param ipEquipment
 *   The Equipment to be connected 
 * @param StatusOfGeometricalConstraint
 *   Value is:	0 if all geometrical constraint are correctly created.
 *	            1 if a geometrical constraint is  over constraint.
 *	            2 if no geometry is defined to constraint the device between them.		
 * @return
 * An HRESULT value.  
 *     S_OK :  no error.
 *     E_FAIL : Error occured while connecting devices.
 *     S_FALSE : Devices already connected.
 */
 virtual HRESULT Connect( CATIElbCavity * ipCavity, 
                          CATIElbEquipment * ipEquipment,
                          int & oStatusOfGeometricalConstraint) = 0;  //UOK

 /**
 * Connect the single connector with a Mounting Equipment.
 *
 * @param ipCavity
 *   The cavity of Mounting Equipment.
 * @param ipMountingEquipment
 *   The Mounting Equipment to be connected 
 * @param StatusOfGeometricalConstraint
 *   Value is:	0 if all geometrical constraint are correctly created.
 *	            1 if a geometrical constraint is  over constraint.
 *	            2 if no geometry is defined to constraint the device between them.		
 * @return
 * An HRESULT value.  
 *     S_OK :  no error.
 *     E_FAIL : Error occured while connecting devices.
 *     S_FALSE : Devices already connected.
 */
 virtual HRESULT Connect( CATIElbCavity * ipCavity, 
                          CATIElbMountingEquipment * ipMountingEquipment,
                          int & oStatusOfGeometricalConstraint) = 0;  //UOK

};

CATDeclareHandler(CATIElbSingleConnector, CATBaseUnknown);
#endif
