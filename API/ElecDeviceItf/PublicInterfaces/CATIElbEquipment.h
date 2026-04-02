/* -*-c++ -*- */
#ifndef CATIElbEquipment_h
#define CATIElbEquipment_h

// COPYRIGHT DASSAULT SYSTEMES 2002

/** 
 * @CAA2Level L1
 * @CAA2Usage U3
 */

class CATListValCATBaseUnknown_var;
class CATUnicodeString;
class CATILinkableObject;
class CATIProduct;
class CATIElbBundleCnctPt;
class CATIElbCavityCnctPt;
class CATIElbCavity;
class CATIElbMountingEquipment;

#include "CATBaseUnknown.h"

#include "ExportedByCATElbInterfaces.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATElbInterfaces IID IID_CATIElbEquipment;
#else
extern "C" const IID IID_CATIElbEquipment;
#endif

/**
 * Interface to manage Equipments.
 */
class ExportedByCATElbInterfaces CATIElbEquipment: public CATBaseUnknown
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
  * List WireExtremities connected to (V5 Implementation)
  * 
  * @param oWiresExtremities
  * The list of WiresExtremities
  * @param oConnectors
  * The list of Connectors linked (directly or through a Contact)
  * with the WiresExtremities
  *
  *  mapping :
  *  ---------                                oWiresExtremities  : oConnectors
  *                                           --------------------------------
  *       Device / Cavity                <--> WireExtremity      : Cavity
  *       Device / Termination           <--> WireExtremity      : Termination
  *       Device / LogicalTermination    <--> WireExtremity      : NULL_var
  *                
  * @return
  * Return code
  */
  virtual HRESULT ListWireExtremities (CATListValCATBaseUnknown_var*& oWireExtremities, CATListValCATBaseUnknown_var*& oConnectors)=0;
  
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
   * Connect the Equipment with a Mounting Equipment.   		
 *
 * @param ipCavity
 *   The cavity of the Mounting Equipment.
 * @param ipMountingEquipment
 *   The Mounting Equipment to be connected.
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
  virtual HRESULT Connect (CATIElbCavity * ipCavity, 
                           CATIElbMountingEquipment * ipMountingEquipment,
                           int & oStatusOfGeometricalConstraint) = 0;//UOK

};

CATDeclareHandler(CATIElbEquipment, CATBaseUnknown);
#endif




