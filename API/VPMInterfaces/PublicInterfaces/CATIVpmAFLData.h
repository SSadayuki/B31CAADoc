/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES	2001
//=============================================================================
// June 99      Creation                                            C. Cressend
// November 01  Modification                                            S. Dami
//              Insert CAA2 documentation                                 
//=============================================================================

#ifndef CATIVpmAFLData_H
#define CATIVpmAFLData_H
 
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "GUIDVPMInterfaces.h"

#include "CATBaseUnknown.h" 
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIVpmAFLData ;
#else
extern "C" const IID IID_CATIVpmAFLData ;
#endif

class CATUnicodeString;
class CATTime;

#include "sequence_octet.h"

/**
 * Interface for AFLData objects. 
 * <b>Role</b>: The interface provides functions for accessing AFLData attributes.
 */
class ExportedByGUIDVPMInterfaces CATIVpmAFLData : public  CATBaseUnknown
{
  CATDeclareInterface ;  

  public:
  //-----

  /**
   * Set the binary reference to the actual Data object.
   *  @param iRef
   */             
  virtual HRESULT    SetIdentifier(const SEQUENCE(octet)& iRef)=0; 
  /**
   * Get the binary reference to the actual Data object.
   *  @param oRef
   */             
  virtual HRESULT    GetIdentifier(SEQUENCE(octet)& oRef)=0;

  /**
   * Set the name of the Data.
   *  @param iName
   */             
  virtual HRESULT    SetName(const CATUnicodeString& iName)=0; 
  /**
   * Get the name of the Data.
   *  @param iName
   */             
  virtual HRESULT    GetName(CATUnicodeString& oName)=0;

  /**
   * Set the description of the Data.
   *  @param iDesc
   */             
  virtual HRESULT    SetDescription(const CATUnicodeString& iDesc)=0; 
  /**
   * Get the description of the Data.
   *  @param oDesc
   */             
  virtual HRESULT    GetDescription(CATUnicodeString& oDesc)=0;

  /**
   * Set a value as a string to the Data.
   *  @param iValue
   */             
  virtual HRESULT    SetDataValue(const CATUnicodeString& iValue)=0; 
  /**
   * Get the value of the Data.
   *  @param oValue
   */             
  virtual HRESULT    GetDataValue(CATUnicodeString& oValue)=0;

  /**
   * Get the creation date.
   *  @param oDate
   */             
  virtual    HRESULT GetCreationDate(CATTime& oDate)=0;

  /**
   * Get the last modification date.
   *  @param oDate
   */             
  virtual    HRESULT GetLastModifDate(CATTime& oDate)=0;

  /**
   * Dump the Data attributes.
   *  @param iPrefix
   *   The prefix text for each output line.
   */
  virtual HRESULT Dump(char* prefix)=0;

};
CATDeclareHandler (CATIVpmAFLData, CATBaseUnknown);
#endif
