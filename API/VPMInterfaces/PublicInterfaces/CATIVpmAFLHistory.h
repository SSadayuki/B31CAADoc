/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES	2001
//=============================================================================
// June 99      Creation                                            C. Cressend
// November 01  Modification                                            S. Dami
//              Insert CAA2 documentation                                 
//=============================================================================

#ifndef CATIVpmAFLHistory_H
#define CATIVpmAFLHistory_H

// COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
 
#include "GUIDVPMInterfaces.h"

#include "CORBAAnyDef.h"
#include "sequence_octet.h"
#include "CATBaseUnknown.h" 
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIVpmAFLHistory ;
#else
extern "C" const IID IID_CATIVpmAFLHistory ;
#endif

class CATIVpmAFLAction_var;
class CATIVpmAFLProductView_var;
class CATUnicodeString;
class CATTime;
                  
/**
 * Define constant for action history of type Simple.
 */
#define AFL_HIST_SIMPLE CATIVpmAFLAction::Simple
/**
 * Define constant for Action history of type NotConfigured.
 */
#define AFL_HIST_NO_CFG CATIVpmAFLAction::NotConfigured
//rpt A0561251 March 23, 2007 #define AFL_HIST_CFG CATIVpmAFLAction::NotConfigured

/**
 * Define constant for Action history of type Configured.
 */
#define AFL_HIST_CFG CATIVpmAFLAction::Configured
//rpt A0561251 March 23, 2007  #define AFL_HIST_NO_CFG CATIVpmAFLAction::Configured

/**
 * Class to manage the Action Flow History objects.
 * <b>Role</b>: History objects are created, as changes are made under Action control,
 * in order to provide a record of the chain of events during an Action's lifetime.
 */
class ExportedByGUIDVPMInterfaces CATIVpmAFLHistory : public  CATBaseUnknown
{
  CATDeclareInterface ;  

  public:
  //-----

/**
 * Assigns the History type.
 *  @param iType
 *   The History type attribute.
 */
    virtual HRESULT SetType(const CATUnicodeString& iType)=0; 

/**
 * Retrieves the History type.
 *  @param oType
 *   The History type attribute.
 */
    virtual HRESULT GetType(CATUnicodeString& oType)=0;

/**
 * Assigns the History operation.
 *  @param iOperation
 *   The History operation attribute.
 */
    virtual HRESULT SetOperation(const CATUnicodeString& iOperation)=0; 

/**
 * Retrieves the History operation.
 *  @param oOperation
 *   The History operation attribute.
 */
    virtual HRESULT GetOperation(CATUnicodeString& oOperation)=0;

/**
 * Assigns the description text.
 *  @param iString
 *   The description text.
 */
    virtual HRESULT SetDescription(const CATUnicodeString& iString)=0;

/**
 * Retrieves the description text.
 *  @param oString
 *   The description text.
 */
    virtual HRESULT GetDescription(CATUnicodeString& oString)=0;
     
/**
 * Assigns a ProductView.
 *  @param iView
 *   The ProductView object.
 */
    virtual HRESULT SetProductView(const CATIVpmAFLProductView_var& iView)=0; 
     
/**
 * Retrieves the ProductView.
 *  @param oView
 *   The ProductView object.
 */
    virtual HRESULT GetProductView(CATIVpmAFLProductView_var& oView)=0;

/**
 * Assigns the Object1 name.
 *  @param iName
 *   The name of Object1.
 */
    virtual HRESULT SetObjName1(const CATUnicodeString& iName)=0; 

/**
 * Retrieves the Object1 name.
 *  @param oName
 *   The name of Object1.
 */
    virtual HRESULT GetObjName1(CATUnicodeString& oName)=0;

/**
 * Assigns the Object1 identifier.
 *  @param iIdentifier
 *   The identifier of Object1.
 */
    virtual HRESULT SetObjId1(const SEQUENCE(octet)& iIdentifier)=0; 

/**
 * Assigns the Object1 identifier.
 *  @param iIdentifier
 *   The identifier of Object1.
 */
    virtual HRESULT SetObjId1(CORBAAny& iIdentifier)=0; 

/**
 * Retrieves the Object1 identifier.
 *  @param oIdentifier
 *   The identifier of Object1.
 */
    virtual HRESULT GetObjId1(SEQUENCE(octet)& oIdentifier)=0;

/**
 * Retrieves the Object1 identifier.
 *  @param oIdentifier
 *   The identifier of Object1.
 */
    virtual HRESULT GetObjId1(CORBAAny& oIdentifier)=0;

/**
 * Assigns the Object2 name.
 *  @param iName
 *   The name of Object2.
 */
    virtual HRESULT SetObjName2(const CATUnicodeString& iName)=0; 

/**
 * Retrieves the Object2 name.
 *  @param oName
 *   The name of Object2.
 */
    virtual HRESULT GetObjName2(CATUnicodeString& oName)=0;

/**
 * Assigns the Object2 identifier.
 *  @param iIdentifier
 *   The identifier of Object2.
 */
    virtual HRESULT SetObjId2(const SEQUENCE(octet)& iIdentifier)=0; 

/**
 * Assigns the Object2 identifier.
 *  @param iIdentifier
 *   The identifier of Object2.
 */
    virtual HRESULT SetObjId2(CORBAAny& iIdentifier)=0; 

/**
 * Retrieves the Object2 identifier.
 *  @param oIdentifier
 *   The identifier of Object2.
 */
    virtual HRESULT GetObjId2(SEQUENCE(octet)& oIdentifier)=0;

/**
 * Retrieves the Object2 identifier.
 *  @param oIdentifier
 *   The identifier of Object2.
 */
    virtual HRESULT GetObjId2(CORBAAny& oIdentifier)=0;

/**
 * Retrieves the Action status.
 *  @param oStatus
 *   The Action status.
 */
    virtual HRESULT GetActionStatus(CATUnicodeString& oStatus)=0;

/**
 * This method is obsolete : use GetCreationDate().
 */
    virtual HRESULT GetDate(CATTime& oDate)=0;

/**
 * Retrieves the user attribute.
 *  @param oUser
 *   The user attribute.
 */
    virtual HRESULT GetUser(CATUnicodeString& oUser)=0;

/**
 * Retrieves the creation date.
 *  @param oTime
 *   The creation date attribute.
 */             
     virtual HRESULT GetCreationDate(CATTime& oTime)=0;

/**
 * Retrieves the last modification date.
 *  @param oTime
 *   The last modification date attribute.
 */             
     virtual HRESULT GetLastModifDate(CATTime& oTime)=0;

/**
 * Retrieves the related Action.
 *  @param oAction
 *   The related Action.
 */
    virtual HRESULT GetRelatedAction(CATIVpmAFLAction_var& oAction)=0;

/**
 * Dumps the History attributes.
 *  @param iPrefix
 *   The prefix text for each output line.
 */
    virtual HRESULT Dump(char* iPrefix)=0;

};
CATDeclareHandler(CATIVpmAFLHistory, CATBaseUnknown);
#endif

