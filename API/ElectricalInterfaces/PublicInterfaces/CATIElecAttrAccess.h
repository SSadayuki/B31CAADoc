#ifndef CATIElecAttrAccess_H
#define CATIElecAttrAccess_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/** 
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// module declaration
#include "ExportedByCATElectricalInterfaces.h"

// type definition
#include "CATBoolean.h"

// inherited from
#include "CATBaseUnknown.h"

// forward declaration
class CATUnicodeString;
class CATListValCATUnicodeString;
class CATListValCATBaseUnknown_var;
class CATICkeParm_var;
class CATICkeInst_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATElectricalInterfaces IID IID_CATIElecAttrAccess;
#else
extern "C" const IID IID_CATIElecAttrAccess;
#endif

/**   
 * Interface dedicated to attribute management.
 * <b>Role</b>: This interface helps you to retrieve and modifiy attributes.
 */

class ExportedByCATElectricalInterfaces CATIElecAttrAccess : public CATBaseUnknown
{
  CATDeclareInterface;
  
public:

/**
 * Retrieves the value of an attribute from its name.
 * @param iAttName
 *	the attribute name.
 * @param oValue 
 *	the attribute's value.
 */
  virtual HRESULT Get (const CATUnicodeString& iAttName,
                       CATICkeInst_var & oValue) = 0;

/**
 * Sets the value of an attribute.
 * @param iAttName 
 *  the attribute name.
 * @param iValue 
 *  the new value of the attribute.
 */
  virtual HRESULT Set (const CATUnicodeString& iAttName,
                       const CATICkeInst_var & iValue) = 0;

/**
 * Sets the value of an attribute (integer).
 * @param iAttName
 *  the attribute name.
 * @param iValue 
 *  the new value of the attribute.
 */
  virtual HRESULT Set (const CATUnicodeString& iAttName,
                       const int iValue) = 0;

/**
 * Sets the value of an attribute (double in MKS).
 * @param iAttName 
 *  the attribute name.
 * @param iValue 
 *  the new value of the attribute.
 */
  virtual HRESULT Set (const CATUnicodeString& iAttName,
                       const double iValue) = 0;

/**
 * Sets the value of an attribute (string).
 * @param iAttName 
 *  the attribute name.
 * @param iValue 
 *  the new value of the attribute.
 */
  virtual HRESULT Set (const CATUnicodeString& iAttName,
                       const CATUnicodeString& iValue) = 0;

/**
 * Sets the value of an attribute (boolean).
 * @param iAttName 
 *  the attribute name.
 * @param iValue 
 *  the new value of the attribute.
 */
  virtual HRESULT Set (const CATUnicodeString& iAttName,
                       const CATBoolean iValue) = 0;


/**
 * Retrieves list of the attribute names.
 * @param oAttNameList 
 *  the list of attribute names.
 */
  virtual HRESULT ListAttributeNames (CATListValCATUnicodeString* & oAttNameList) = 0;


/**
 * @nodoc Do not use it.
 * Retrieves list of the user attribute names.
 * @param oAttNameList 
 *  the list of user attribute names.
 */
  virtual HRESULT ListUserAttributeNames (CATListValCATUnicodeString* & oAttNameList) = 0;


/**
 * Retrieve electrical type of entity.
 * @param oElecType 
 *  Type of entity.
 * <br><b>Legal values</b>:
 *   <dl>
 *     <tt>ElecEqtPart</tt>
 *     <dl><dd>Component is an Equipment Part.</dd></dl>
 *     <tt>ElecConShell</tt>
 *     <dl><dd>Component is a Connector Shell.</dd></dl>
 *     <tt>ElecSicCon</tt>
 *     <dl><dd>Component is a Single-Insert Connector.</dd></dl>
 *     <tt>ElecMicCon</tt>
 *     <dl><dd>Component is a Multi-Insert Connector.</dd></dl>
 *     <tt>ElecStud</tt>
 *     <dl><dd>Component is a Stud.</dd></dl>
 *     <tt>ElecTermStrip</tt>
 *     <dl><dd>Component is a Terminal Strip.</dd></dl>
 *     <tt>ElecTermBlock</tt>
 *     <dl><dd>Component is a Terminal Block.</dd></dl>
 *     <tt>ElecExtSplice</tt>
 *     <dl><dd>Component is a External Splice.</dd></dl>
 *     <tt>ElecIntSplice</tt>
 *     <dl><dd>Component is a Internal Splice.</dd></dl>
 *     <tt>ElecContact</tt>
 *     <dl><dd>Component is a Contact.</dd></dl>
 *     <tt>ElecFillerPlug</tt>
 *     <dl><dd>Component is a Filler Plug.</dd></dl>
 *     <tt>ElecBackShell</tt>
 *     <dl><dd>Component is a Backshell.</dd></dl>
 *     <tt>ElecMountingEquipment</tt>
 *     <dl><dd>Component is a Mounting Equipment.</dd></dl>
 *     <tt>ElecCavity</tt>
 *     <dl><dd>Component is a Cavity.</dd></dl>
 *     <tt>ElecTermination</tt>
 *     <dl><dd>Component is a Termination.</dd></dl>
 *     <tt>ElecTerminationCst</tt>
 *     <dl><dd>Component is a Temination GeoConstraint.</dd></dl>
 *     <tt>ElecCavityCnctPt</tt>
 *     <dl><dd>Component is a Cavity Connection Point.</dd></dl>
 *     <tt>ElecShellCnctPt</tt>
 *     <dl><dd>Component is a Shell Connection Point.</dd></dl>
 *     <tt>ElecBundleCnctPt</tt>
 *     <dl><dd>Component is a Bundle Connection Point.</dd></dl>
 *     <tt>ElecConnectorCnctPt</tt>
 *     <dl><dd>Component is a Connnector Connection Point.</dd></dl>
 *     <tt>ElecBackShellCnctPt</tt>
 *     <dl><dd>Component is a Backshell Connection Point.</dd></dl>
 *     <tt>ElecGeoBundle</tt>
 *     <dl><dd>Component is a Geometrical Bundle.</dd></dl>
 *     <tt>ElecMultipleSegments</tt>
 *     <dl><dd>Component is a Multi-Branchable.</dd></dl>
 *     <tt>ElecBranchable</tt>
 *     <dl><dd>Component is a Branch.</dd></dl>
 *     <tt>ElecBundleSegment</tt>
 *     <dl><dd>Component is a Bundle Segment.</dd></dl>
 *     <tt>ElecBundleSegmentExtremity</tt>
 *     <dl><dd>Component is a Bundle Segment Extremity.</dd></dl>
 *     <tt>ElecCurve</tt>
 *     <dl><dd>Component is a Electrical Curve.</dd></dl>
 *     <tt>EleRefInternalAdaptiveProtection</tt>
 *     <dl><dd>Component is an Adaptive Protection Reference.</dd></dl>
 *     <tt>EleRefInternalFixedProtection</tt>
 *     <dl><dd>Component is a Fixed Protection Reference.</dd></dl>
 *     <tt>EleRefInternalTapeProtection</tt>
 *     <dl><dd>Component is a Tape Protection Reference.</dd></dl>
 *     <tt>EleRefInternalCorrugatedProtection</tt>
 *     <dl><dd>Component is a Corrugated Protection Reference.</dd></dl>
 *     <tt>ElecAdaptiveProtection</tt>
 *     <dl><dd>Component is an Adaptive Protection Instance.</dd></dl>
 *     <tt>ElecFixedProtection</tt>
 *     <dl><dd>Component is a Fixed Protection Instance.</dd></dl>
 *     <tt>ElecTapeProtection</tt>
 *     <dl><dd>Component is a Tape Protection Instance.</dd></dl>
 *     <tt>ElecCorrugatedProtection</tt>
 *     <dl><dd>Component is a Corrugated Protection Instance.</dd></dl>
 *     <tt>ElecBundle</tt>
 *     <dl><dd>Component is an Electrical Bundle.</dd></dl>
 *     <tt>ElecWire</tt>
 *     <dl><dd>Component is a Wire.</dd></dl>
 *     <tt>ElecWireGroup</tt>
 *     <dl><dd>Component is a Wire Group.</dd></dl>
 *     <tt>ElecWireExtremity</tt>
 *     <dl><dd>Component is a Wire Extremity.</dd></dl>
 *     <tt>ElecPowerSignal</tt>
 *     <dl><dd>Component is a Power Signal.</dd></dl>
 *     <tt>ElecShieldingSignal</tt>
 *     <dl><dd>Component is a Shielding Signal.</dd></dl>
 *     <tt>ElecGroundSignal</tt>
 *     <dl><dd>Component is a Ground Signal.</dd></dl>
 *     <tt>ElecCommandSignal</tt>
 *     <dl><dd>Component is a Command Signal.</dd></dl>
 *     <tt>ElecVideoSignal</tt>
 *     <dl><dd>Component is a Video Signal.</dd></dl>
 *     <tt>ElecSignalExtremity</tt>
 *     <dl><dd>Component is a Signal Extremity.</dd></dl>
 *     <tt>ElecSystem</tt>
 *     <dl><dd>Component is an Electrical System.</dd></dl>
 *     <tt>ElecOffSheet</tt>
 *     <dl><dd>Component is an Electrical Offsheet.</dd></dl>
 *     <tt>ElecFnctCon</tt>
 *     <dl><dd>Component is a Functional Connector.</dd></dl>
 *     <tt>ElecFnctEqt</tt>
 *     <dl><dd>Component is a Functional Equipment.</dd></dl>
 *     <tt>ElecProtection</tt>
 *     <dl><dd>Component is an External Protection.</dd></dl>
 *   </dl>
 */
  virtual HRESULT GetElecType (CATUnicodeString& oElecType )=0;

/**
 * @nodoc
 * Returns access mode for an attribute.
 * @param iAttName 
 *  the attribute name.
 * @param oRights 
 *  the access mode.
 * <b>Legal values</b>: <tt>0</tt> if the attribute is readonly
 *                      <tt>1</tt> if the attribute can be modified
 */
  virtual HRESULT GetAccessMode (const CATUnicodeString & iAttName,
                                 int & oMode) = 0;
/**
 * @nodoc Do not use it.
 * Retrieves an attribute from its name 
 * @param iAttName 
 *  the attribute name.
 * @param oAtt 
 *  the attribute.
 */
  virtual HRESULT GetAttribute (const CATUnicodeString& iAttName,
                                CATICkeParm_var & oAtt) = 0;

/**
 * @nodoc Do not use it.
 * Retrieves list of the attributes.
 * @param oAttList 
 *  the list of attributes.
 */
  virtual HRESULT ListAttributes (CATListValCATBaseUnknown_var*& oAttList)=0;


};

CATDeclareHandler(CATIElecAttrAccess, CATBaseUnknown);
#endif







