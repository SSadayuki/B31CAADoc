/* -*-c++ -*- */
#ifndef CATIElbConnectorShell_h
#define CATIElbConnectorShell_h

// COPYRIGHT DASSAULT SYSTEMES 2002

/** 
 * @CAA2Level L1
 * @CAA2Usage U3
 */

class CATIProduct;
class CATILinkableObject;
class CATUnicodeString;
class CATListValCATBaseUnknown_var;

class CATIElbBundleCnctPt;
class CATIElbCavityCnctPt;
class CATIElbCavity;
class CATIElbBackShellCnctPt;
class CATIElbShellCnctPt;
class CATIElbMountingEquipment;
class CATIElbEquipment;
class CATIElbBackShell;

#include "CATBaseUnknown.h"

#include "ExportedByCATElbInterfaces.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATElbInterfaces IID IID_CATIElbConnectorShell;
#else
extern "C" const IID IID_CATIElbConnectorShell;
#endif

/**
 * Interface to manage Connector Shells.
 */
class ExportedByCATElbInterfaces CATIElbConnectorShell: public CATBaseUnknown
{
  CATDeclareInterface;
  
public:

/**
 * @nodoc
 * Add Bundle Connection Point on Device
 *
 * @param iId
 *   Identifier (Name)
 * @param iGeoDefinition
 *   Define the Leaf Product where Joint's Graphical elements and 
 *   representation come from
 * @param iRepresentation
 *   Connector's graphical representation (optional)
 * @param iJointType
 *   Joint's type
 * @param iJointReferences
 *   Graphical elements used to realize joint
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
 * @param iGeoDefinition
 *   Define the Leaf Product where Joint's Graphical elements and 
 *   representation come from
 * @param iRepresentation
 *   Connector's graphical representation (optional)
 * @param iJointType
 *   Joint's type
 * @param iJointReferences
 *   Graphical elements used to realize joint
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
 * List Device Composition.
 *
 * @param oDevices
 *   The list of ElecConShell, ElecSicCon, ElecStud, ElecTermBlock, ElectermStrip, ElecContact or ElecFillerPlug.
 * @return
 *   Return code
 */
  virtual HRESULT ListDeviceComposition (CATListValCATBaseUnknown_var*& oDevices) = 0;

/**
 * Get Equipments Cavity.
 *
 * @param oCavity
 *   The Cavity of the father Equipment used by the Connector Shell.
 * @return
 *   Return code
 */
  virtual HRESULT GetEquipmentCavity (CATIElbCavity *& oCavity) = 0;

/**
 * @nodoc
 * Add BackShell Connection Point on Device
 *
 * @param iId
 *   Identifier (Name)
 *
 * @param ipIGeoDefinition
 *   Define the Leaf Product where Joint's Graphical elements and 
 *   representation come from
 *
 *      @param ipIRepresentation
 *        Connector's graphical representation (optional)
 *
 *      @param iJointType
 *        Joint's type
 *      @param ipJointReferences
 *        Graphical elements used to realize joint
 *
 * @param opIBackShellCnctPt
 *   The connector
 * @return
 *   Return code
 */
  virtual HRESULT AddBackShellCnctPt( const CATUnicodeString &iId, 
				      CATIProduct * ipIGeoDefinition,
                                      CATILinkableObject * ipIRepresentation,
				      const CATUnicodeString &iJointType, 
				      CATListValCATBaseUnknown_var * ipJointReferences,
				      CATIElbBackShellCnctPt *& opIBackShellCnctPt) = 0; // nhg 05:04:25

/**
 * @nodoc
 * Add Shell Connection Point on Device
 *
 * @param iId
 *   Identifier (Name)
 *
 * @param ipIGeoDefinition
 *   Define the Leaf Product where Joint's Graphical elements and 
 *   representation come from
 *
 *      @param ipIRepresentation
 *        Connector's graphical representation (optional)
 *
 *      @param iJointType
 *        Joint's type
 *      @param ipJointReferences
 *        Graphical elements used to realize joint
 *
 * @param opICavityCnctPt
 *   The connector
 * @return
 *   Return code
 */
  virtual HRESULT AddShellCnctPt( const CATUnicodeString &iId, 
				  CATIProduct * ipIGeoDefinition,
				  CATILinkableObject * ipIRepresentation,
				  const CATUnicodeString & iJointType, 
				  CATListValCATBaseUnknown_var * ipJointReferences,
				  CATIElbShellCnctPt *& opICavityCnctPt) = 0;  // nhg 05:04:25

/**
 * List of BackShellCnctPts.
 *
 * @param opBackShellCnctPts
 *   The list
 * @return
 *   Return code
 */
 virtual HRESULT ListBackShellCnctPts(CATListValCATBaseUnknown_var *& opBackShellCnctPts) = 0; // nhg 05:04:25

/**
 * @nodoc
 * List of ShellCnctPts
 *
 * @param opCavityCnctPts
 *   The list
 * @return
 *   Return code
 */
 virtual HRESULT ListShellCnctPts(CATListValCATBaseUnknown_var *& opCavityCnctPts) = 0; // nhg 05:04:25

/*
 * Connect the Connector Shell with a Connector Shell.   		
 *
 * @param ipShell
 *   The Connector Shell to be connected.
 * @param oStatusOfGeometricalConstraint
 *   Value is:	0 if all geometrical constraint are correctly created.
 *	            1 if a geometrical constraint is  over constraint.
 *	            2 if no geometry is defined to constraint the device between them.		
 * @return
 * An HRESULT value.  
 *     S_OK :  no error.
 *     E_FAIL : Error occured while connecting devices.
 *     S_FALSE : Devices already connected.
 */
 virtual HRESULT Connect(CATIElbConnectorShell* ipShell,
                         int & oStatusOfGeometricalConstraint)= 0; //UOK

 /**
  * Connect the Connector Shell with a Mounting Equipment.   		
 *
 * @param ipCavity
 *   The cavity of the Mounting Equipment.
 * @param ipMountingEquipment
 *   The Mounting Equipment to be connected.
 * @param oStatusOfGeometricalConstraint
 *   Value is:	0 if all geometrical constraint are correctly created.
 *	            1 if a geometrical constraint is  over constraint.
 *	            2 if no geometry is defined to constraint the device between them.		
 * @return
 * An HRESULT value.  
 *     S_OK :  no error.
 *     E_FAIL : Error occured while connecting devices.
 *     S_FALSE : Devices already connected.
 */
 virtual HRESULT Connect(CATIElbCavity * ipCavity,
                         CATIElbMountingEquipment * ipMountingEquipment,
                         int & oStatusOfGeometricalConstraint)= 0;    //UOK

  /**
  * Connect the Connector Shell with a BackShell.   		
 *
 * @param ipBackShell
 *   The BackShell to be connected.
 * @param oStatusOfGeometricalConstraint
 *   Value is:	0 if all geometrical constraint are correctly created.
 *	            1 if a geometrical constraint is  over constraint.
 *	            2 if no geometry is defined to constraint the device between them.		
 * @return
 * An HRESULT value.  
 *     S_OK :  no error.
 *     E_FAIL : Error occured while connecting devices.
 *     S_FALSE : Devices already connected.
 */
 virtual HRESULT Connect(CATIElbBackShell * ipBackShell,
                         int & oStatusOfGeometricalConstraint)= 0;    //UOK

  /**
  * Connect the Connector Shell with an Equipment.   		
 *
 * @param ipCavity
 *   The cavity of the Equipment.
 * @param ipEquipment
 *   The Equipment to be connected.
 * @param oStatusOfGeometricalConstraint
 *   Value is:	0 if all geometrical constraint are correctly created.
 *	            1 if a geometrical constraint is  over constraint.
 *	            2 if no geometry is defined to constraint the device between them.		
 * @return
 * An HRESULT value.  
 *     S_OK :  no error.
 *     E_FAIL : Error occured while connecting devices.
 *     S_FALSE : Devices already connected.
 */
 virtual HRESULT Connect(CATIElbCavity * ipCavity, 
                         CATIElbEquipment * ipEquipment,
                         int & oStatusOfGeometricalConstraint)= 0;    //UOK
  
};

CATDeclareHandler(CATIElbConnectorShell, CATBaseUnknown);
#endif

