/* -*-c++ -*- */
#ifndef CATIElbCavity_H
#define CATIElbCavity_H

// COPYRIGHT DASSAULT SYSTEMES 2002

/** 
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBoolean.h"
#include "CATBaseUnknown.h"
#include "ExportedByCATElbInterfaces.h"

class CATUnicodeString;
class CATILinkableObject;
class CATIProduct;
class CATListValCATBaseUnknown_var;
#ifdef CATIAV5R6
class CATIElbContact;
#endif

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATElbInterfaces IID IID_CATIElbCavity;
#else
extern "C" const IID IID_CATIElbCavity;
#endif

/**
 * Interface to manage Cavities.
 */
class ExportedByCATElbInterfaces CATIElbCavity : public CATBaseUnknown
{
  CATDeclareInterface;
  
public:

/**
 * Get the Object in which it is contained.
 * 
 * @param oParent
 * The Father object
 * @return
 * Return code
 */
  virtual HRESULT GetParent(CATBaseUnknown*& oParent)=0;
  
/**
 * @nodoc
 * CheckIdNumber
 *
 * @param iId_Number                   
 *   IdNumber to be checked (ex : NUM-1)
 * @param oIsValid                   
 *   equals TRUE if unique IdNumber
 * @return
 *   Return code
 */
  virtual HRESULT CheckIdNumber(const CATUnicodeString& iId_Number, CATBoolean& oIsValid)=0;

/**
 * @nodoc
 * SetIdNumber
 *
 * @param iId_Number                   
 *   IdNumber to be set (ex : NUM-1)
 * @return
 *   Return code
 */
  virtual HRESULT SetIdNumber(const CATUnicodeString& iId_Number)=0;

/**
 * @nodoc
 * GetIdNumber
 *
 * @param oId_Number                   
 *   Return Identification Number (ex : NUM-1)
 * @return
 *   Return code
 */
  virtual HRESULT GetIdNumber(CATUnicodeString& oId_Number)=0;

/**
 * @nodoc
 * GetNumber
 *
 * @param oNumber                   
 *   Return insertion Position.
 * @return
 *   Return code
 */
  virtual HRESULT GetNumber(int &oNumber)=0;
  
/**
 * @nodoc
 * Remove Device's Connector
 *        Elec_Number Update
 *
 * @return
 *   Return code
 */
  virtual HRESULT Remove()=0;

/**
 * @nodoc
 * Set connector's representation
 *
 * @param iGeoDefinition
 *   Define the Leaf Product where Joint's Graphical elements and 
 *   representation come from
 *
 *      @param iRepresentation
 *        Connector's graphical representation (optional)
 *
 * @return
 *   Return code
 */
  virtual HRESULT SetRepresentation(CATIProduct * iGeoDefinition, 
				    CATILinkableObject * iRep) = 0;
  
/**
 * @nodoc
 * Get connector's representation
 *
 * @param iRep
 *   Representation
 * @return
 *   Return code
 */
  virtual HRESULT GetRepresentation(CATILinkableObject *& oRep) = 0;

/**
 * @nodoc
 * Set Joint's parameters
 *
 * @param iJointType                 
 *   Joint's type
 *
 * @param iGeoDefinition
 *   Define the Leaf Product where Joint's Graphical elements and 
 *   representation come from
 *
 *      @param iRepresentation
 *        Connector's graphical representation (optional)
 *
 * @return
 *   Return code
 */
  virtual HRESULT SetJointParameters(const CATUnicodeString &iJointType, 
				     CATIProduct * iGeoDefinition,
				     CATListValCATBaseUnknown_var *iJointReferences) = 0;

/**
 * @nodoc
 * Get Joint's parameters
 *
 * @param oJointType      
 *   Joint's type
 * @param oJointReferences     
 *   Graphical elements used to realize joint
 * @return
 *   Return code
 */
  virtual HRESULT GetJointParameters(CATUnicodeString & oJointType, 
				     CATListValCATBaseUnknown_var *& oJointReferences) = 0;
  
/**
 * @nodoc
 * Get the Leaf Product where Joint's Graphical elements and 
 *        representation come from
 *
 * @param oJointType      
 *   Joint's type
 * @param oJointReferences     
 *   Graphical elements used to realize joint
 * @return
 *   Return code
 */
  virtual HRESULT GetGeoDefinition(CATIProduct *& oGeoProduct) = 0;

/**
 * Get the device in the Cavity.
 *
 * @param oPlug
 *   device plugged in the Cavity
 * @return
 *   Return code
 */
  virtual HRESULT GetPluggedInDevice(CATBaseUnknown *& oPlug) = 0;

/**
 * @nodoc
 * List Wire Extremities
 *
 * @param oWireExtremitiesList
 *   The Wire Extremities connected to the Cavity
 * @return
 *   Return code
 */
  virtual HRESULT ListWireExtremities(CATListValCATBaseUnknown_var *& oWireExtremitiesList) = 0;
};

CATDeclareHandler(CATIElbCavity, CATBaseUnknown );
#endif
