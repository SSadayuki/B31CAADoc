/* -*-c++ -*- */
#ifndef CATIElbSingleConnectorReference_H
#define CATIElbSingleConnectorReference_H

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
class CATIElbTermination;
class CATIElbCavity;

#include "ExportedByCATElbInterfaces.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATElbInterfaces IID IID_CATIElbSingleConnectorReference;
#else
extern "C" const IID IID_CATIElbSingleConnectorReference;
#endif

/**
 * Interface to manage Connector References.
 */
class ExportedByCATElbInterfaces CATIElbSingleConnectorReference : public CATBaseUnknown
{
  CATDeclareInterface;
  
public:
  
  /**
   * Add Termination on Device.
   *
   * @param iId_Number                   
   *   Identification Number (ex : NUM-1)
   * @param iNumber                             
   *   Insertion Position.    (iNumber in [0,n+1], iNumber = 0 <=> iNumber = n+1)
   *
   * @param iGeoDefinition
   *   Define the Leaf Product where Joint's Graphical elements and 
   *   representation come from
   *
   * @param iRepresentation
   *   Connector's graphical representation (optional)
   *
   * @param oTermination
   *   The connector
   * @return
   *   Return code
   */
  virtual HRESULT AddTermination(const CATUnicodeString &iId_Number, 
				 const int &iNumber, 
				 CATIProduct * iGeoDefinition,
				 CATILinkableObject * iRepresentation,
				 CATIElbTermination *& oTermination) = 0;

  /**
   * @nodoc
   * Add Cavity on Device
   *
   * @param iId_Number               
   *   Identification Number (ex : NUM-1)
   * @param iNumber                            
   *   Insertion Position.   (iNumber in [0,n+1], iNumber = 0 <=> iNumber = n+1)
   *
   * @param iGeoDefinition
   *   Define the Leaf Product where Joint's Graphical elements and 
   *   representation come from
   *
   *      @param iRepresentation
   *        Connector's graphical representation (required)
   *
   *      @param iJointType
   *        Joint's type
   *      @param iJointReferences
   *        Graphical elements used to realize joint
   *
   * @param oCavity
   *   The connector
   * @return
   *   Return code
   */
  virtual HRESULT AddCavity(const CATUnicodeString &iId_Number, 
			    const int &iNumber,  
			    CATIProduct * iGeoDefinition,
			    CATILinkableObject * iRepresentation,
			    const CATUnicodeString &iJointType, 
			    CATListValCATBaseUnknown_var *iJointReferences,
			    CATIElbCavity *& oCavity) = 0;  
    
  /**
   * Add Cavity on Device.
   *
   * @param iId_Number               
   *   Identification Number (ex : NUM-1)
   * @param iNumber                            
   *   Insertion Position.   (iNumber in [0,n+1], iNumber = 0 <=> iNumber = n+1)
   *
   * @param iGeoDefinition
   *   Define the Leaf Product where Joint's Graphical elements and 
   *   representation come from
   *
   * @param iRepresentation
   *   Cavity's graphical representation (required)
   *
   * @param iJointReferences
   *   Graphical elements used to realize joint
   *
   * @param oCavity
   *   The connector
   * @return
   *   Return code
   */
  virtual HRESULT AddCavity(const CATUnicodeString &iId_Number, 
			    const int &iNumber,  
			    CATIProduct * iGeoDefinition,
			    CATILinkableObject * iRepresentation, 
			    CATListValCATBaseUnknown_var *iJointReferences,
			    CATIElbCavity *& oCavity) = 0;  
};

CATDeclareHandler(CATIElbSingleConnectorReference, CATBaseUnknown );
#endif









