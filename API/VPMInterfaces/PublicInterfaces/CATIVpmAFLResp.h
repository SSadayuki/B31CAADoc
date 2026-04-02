/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES	2001
//=============================================================================
// September 00 Creation                                            C. Cressend
// November 01  Modification                                            S. Dami
//              Insert CAA2 documentation                                 
//=============================================================================

#ifndef CATIVpmAFLResp_H
#define CATIVpmAFLResp_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "GUIDVPMInterfaces.h"

#include "CATBaseUnknown.h" 
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIVpmAFLResp ;
#else
extern "C" const IID IID_CATIVpmAFLResp ;
#endif

class CATUnicodeString;
class CATIVpmAFLAction_var;
class CATIVpmPERole_var;
class CATIVpmPEPerson_var;

/**
 * Interface for AFLResp objects. 
 * <b>Role</b>: The interface provides functions for accessing AFLResp attributes.
 */
class ExportedByGUIDVPMInterfaces CATIVpmAFLResp : public  CATBaseUnknown
{
  CATDeclareInterface ;  

  public:
  //-----

  /**
   * @nodoc
   */
  virtual HRESULT SetUser(const CATIVpmPEPerson_var& iUser)=0; 
  /**
   * @nodoc
   */
  virtual HRESULT GetUser(CATIVpmPEPerson_var& oUser)=0;

  /**
   * @nodoc
   */
  virtual HRESULT SetRole(const CATIVpmPERole_var& iRole)=0; 
  /**
   * @nodoc
   */
  virtual HRESULT GetRole(CATIVpmPERole_var& oRole)=0;

  /**
   * Get the status of this Responsible.
   *  @param oStatus
   */             
  virtual HRESULT GetStatus(CATUnicodeString& oStatus)=0;

  /**
   * Set a description of this Responsible.
   *  @param iDesc
   */             
  virtual HRESULT SetDescription(const CATUnicodeString& iDesc)=0; 

  /**
   * Get the description of this Responsible.
   *  @param oDesc
   */             
  virtual HRESULT GetDescription(CATUnicodeString& oDesc)=0;

  /**
   * Get the Action this Responsible is associated with.
   *  @param oAction
   */             
  virtual HRESULT GetRelatedAction(CATIVpmAFLAction_var& oAction)=0;

  /**
   * Dump the Responsible attributes.
   *  @param iPrefix
   *   The prefix text for each output line.
   */
  virtual HRESULT Dump(char* prefix)=0;

//#ifdef CATIAV5R11

  /**
   * @nodoc
   */
  virtual HRESULT SetUserId(const CATUnicodeString& iId)=0; 
  /**
   * @nodoc
   */
  virtual HRESULT GetUserId(CATUnicodeString& oId)=0;

  /**
   * @nodoc
   */
  virtual HRESULT SetRoleId(const CATUnicodeString& iId)=0; 
  /**
   * @nodoc
   */
  virtual HRESULT GetRoleId(CATUnicodeString& oId)=0;

//#endif

};
CATDeclareHandler (CATIVpmAFLResp, CATBaseUnknown);
#endif
