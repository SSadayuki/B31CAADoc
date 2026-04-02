/* -*-c++ -*- */
#ifndef CATIElbBackShellCnctPt_H
#define CATIElbBackShellCnctPt_H

// COPYRIGHT DASSAULT SYSTEMES 2002

/** 
 * @CAA2Level L1
 * @CAA2Usage U3
 */



#include "CATBaseUnknown.h"
#include "ExportedByCATElbInterfaces.h"

class CATUnicodeString;
class CATILinkableObject;
class CATIProduct;
class CATListValCATBaseUnknown_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATElbInterfaces IID IID_CATIElbBackShellCnctPt;
#else
extern "C" const IID IID_CATIElbBackShellCnctPt;
#endif

/**
 * Interface to manage Back Shell Connection Points.
 */
class ExportedByCATElbInterfaces CATIElbBackShellCnctPt : public CATBaseUnknown
{
  CATDeclareInterface;
  
public:

  /**
   * Get the Object in which it is contained.
   * @param oParent
   * The Father object
   * @return
   * Return code
   */
  virtual HRESULT GetParent(CATBaseUnknown*& oParent)=0;
  
  /**
   * @nodoc
   * CXR5 - SetId
   *
   * @param iId
   *   Id to be set
   * @return
   *   Return code
   */
  virtual HRESULT SetId(const CATUnicodeString& iId)=0;

  /**
   * @nodoc
   * CXR5 - GetId
   *
   * @param oId
   *   Return Identifier (Name)
   * @return
   *   Return code
   */
  virtual HRESULT GetId(CATUnicodeString& oId)=0;

  /**
   * @nodoc
   * CXR5 - Remove Device's Connector
   *        Elec_Number Update
   *
   * @return
   *   Return code
   */
  virtual HRESULT Remove()=0;
  
  /**
   * @nodoc
   * CXR5 - Set connector's representation
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
   * 
   * Get connector's representation.
   *
   * @param iRep
   *   Representation
   * @return
   *   Return code
   */
  virtual HRESULT GetRepresentation(CATILinkableObject *& oRep) = 0;  

  /**
   * @nodoc
   * CXR5 - Set Joint's parameters
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
   * CXR5 - Get Joint's parameters
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
   * CXR5 - Get the Leaf Product where Joint's Graphical elements and 
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
};

CATDeclareHandler(CATIElbBackShellCnctPt, CATBaseUnknown );
#endif







