/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES	2001
//=============================================================================
// June 99      Creation                                            C. Cressend
// November 01  Modification                                            S. Dami
//              Insert CAA2 documentation                                 
//=============================================================================

#ifndef CATIVpmAFLLink_H
#define CATIVpmAFLLink_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "GUIDVPMInterfaces.h"

#include "CATBaseUnknown.h" 
#include "CORBAAnyDef.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIVpmAFLLink ;
#else
extern "C" const IID IID_CATIVpmAFLLink ;
#endif

/**
 * Define constant for entity type AFLOrientedLink.
 */
#define ORIENTED_LINK "AFLOrientedLink"
/**
 * Define constant for entity type AFLSymetricLink.
 */
#define SYMETRIC_LINK "AFLSymetricLink"

class CATIVpmAFLAction_var;
class CATUnicodeString;
class CATIVpmPESomeone_var;
class CATIVpmPEOrganization_var;
class CATTime;

/**
 * Interface for AFLLink objects. 
 * <b>Role</b>: The interface provides functions for accessing AFLLink attributes.
 */
class ExportedByGUIDVPMInterfaces CATIVpmAFLLink : public  CATBaseUnknown
{
  CATDeclareInterface ;  

  public:
  //-----

  /**
   * Get the source Action of this Link.
   *  @param oAction
   */             
  virtual HRESULT GetFromAction(CATIVpmAFLAction_var& oAction) =0;
  /**
   * Get the target Action of this link.
   *  @param oAction
   */             
  virtual HRESULT GetToAction(CATIVpmAFLAction_var& oAction) =0;

  /**
   * Get the Link type.
   *  @param oType
   */             
  virtual HRESULT GetType(CATUnicodeString& oType)=0;

  /**
   * @nodoc
   */
  virtual HRESULT GetOwner(CATIVpmPESomeone_var& oOwner)=0;

  /**
   * @nodoc
   */
  virtual HRESULT SetOwner(CATIVpmPESomeone_var& iOwner)=0 ;  // only kept for compilation V5R6.To be removed

  /**
   * @nodoc
   */
	virtual HRESULT GetOrganization(CATIVpmPEOrganization_var &oOrg )=0;
    
  /**
   * Set the name of the Link.
   *  @param iName
   */             
  virtual HRESULT SetName(const CATUnicodeString& iName)=0; 
  /**
   * Get the name of the Link.
   *  @param oName
   */             
  virtual HRESULT GetName(CATUnicodeString& oName)=0;

  /**
   * Set the level of the Link.
   *  @param iLevel
   */             
  virtual HRESULT SetLevel(const long iLevel) =0;    
  /**
   * Get the level of the Link.
   *  @param oLevel
   */             
  virtual HRESULT GetLevel(long oLevel) =0; 
     
  /**
   * @nodoc
   */
  virtual HRESULT SetDate (const CATTime &date)=0;
  /**
   * @nodoc
   */
  virtual HRESULT GetDate (CATTime &date)=0;

  /**
   * Get the creation date.
   *  @param oDate
   */             
   virtual HRESULT GetCreationDate(CATTime& oDate)=0;
  /**
   * Get the last modification  date.
   *  @param oDate
   */             
   virtual HRESULT GetLastModifDate(CATTime& oDate)=0;

  /**
   * Set any attribute of a Link.
   *  @param iAttr
   *  @param iVal
   */
   virtual HRESULT SetValue(const CATUnicodeString& iAttr,
                               const CORBAAny & iVal)=0;
  /**
   * Get any attribute of a Link.
   *  @param iAttr
   *  @param oVal
   */
   virtual HRESULT GetValue(const CATUnicodeString& iAttr,
                               CORBAAny & oVal)=0;
                                     
  /**
   * Dump the Link attributes.
   *  @param iPrefix
   *   The prefix text for each output line.
   */
  virtual HRESULT Dump(char* prefix)=0;

};
CATDeclareHandler (CATIVpmAFLLink, CATBaseUnknown);
#endif
