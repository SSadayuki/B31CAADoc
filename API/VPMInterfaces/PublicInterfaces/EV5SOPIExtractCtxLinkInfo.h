#ifndef _EV5SOPIExtractCtxLinkInfo_H
#define _EV5SOPIExtractCtxLinkInfo_H

// COPYRIGHT DASSAULT SYSTEMES 2021

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

 // =================================================================
 // Includes
 // =================================================================
 // System
#include "CATBaseUnknown.h"
#include "GUIDVPMInterfaces.h"
#include "ENOVQObjectIdentity.h"
#include "CATLISTV_sequence_octet.h"
#include "CATUnicodeString.h"

class CATLISTV(_SEQUENCE_octet);

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_EV5SOPIExtractCtxLinkInfo;
#else
extern "C" const IID IID_EV5SOPIExtractCtxLinkInfo;
#endif



//------------------------------------------------------------------
/**
 * Interface to manage Relationships between Objects.
 */
class ExportedByGUIDVPMInterfaces EV5SOPIExtractCtxLinkInfo : public CATBaseUnknown
{

  /**
   * @nodoc
   */
  CATDeclareInterface;

public:
  // =======================================================
  // Method(s) 
  // =======================================================
  //
  //ctx link management

// * Retrieve contextual link information
// * @param iListofObj
// *   the list of identifiers of objects on which ctx link will be fetched. 
// * @param iXMLPath
// *   the complete path (path\filename [without .xml extension]) of xml result file that will be written
// * @return
// *   The HRESULT.
// * <tt>S_OK</tt> if result is OK, <tt>E_FAIL</tt> otherwise.

  virtual HRESULT GetCtxLinkInfo(const CATLISTV(_SEQUENCE_octet) & iListofObj, CATUnicodeString & iXMLPath) = 0;

  //identifiers management
  // * generation of uniqueIdentifiers for XPDM.xml file
  // * @param iObjectIdentity
  // *   the ENOVQObjectIdentity of the object. 
  // * @param iOIDParent
  // *   when input object is 1st level II or an AR,the OID of the child PV is needed, in a string format
  // *   when input object is a TPLink,the OID of the related DR is needed, in a string format
  // * @param iObjectType
  // *   type of the object based on following convention: 1=PRC/PV/DR, 2=II/AR, 3=TPLink (VPMTPRepresentation or VPMTPDocumentation for DR without CATPart/CATProduct extension)
  // * @param oUniqueIDStr
  // *  the new unique identifier to be used in XPDM.xml file
  virtual HRESULT ComputeUniqueIdentifiers(const ENOVQObjectIdentity & iObjectIdentity, CATUnicodeString & iOIDParent, int & iObjectType, CATUnicodeString & oUniqueIDStr) = 0;


};

//-----------------------------------------------------------------
// Handler definition
//-----------------------------------------------------------------
/** @nodoc */
CATDeclareHandler(EV5SOPIExtractCtxLinkInfo, CATBaseUnknown);

#endif


