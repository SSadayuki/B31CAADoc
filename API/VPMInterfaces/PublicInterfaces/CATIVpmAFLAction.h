/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES	2001
//=============================================================================
// June 99      Creation                                            C. Cressend
// January 01   Modification                                            S. Dami
//              Insert CAA2 documentation                                 
//=============================================================================

#ifndef CATIVpmAFLAction_H 
#define CATIVpmAFLAction_H 

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
 
#include "GUIDVPMInterfaces.h"
#include "CATBaseUnknown.h" 
#include "CATIVpmAFLManager.h"
#include "sequence_octet.h"
#include "CORBAAnyDef.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIVpmAFLAction ;
#else
extern "C" const IID IID_CATIVpmAFLAction ;
#endif

// Class used
class CATIVpmAFLAffectedObject_var;			
class CATIVpmAFLAttachement_var;
class CATIConfigurableObject_var; 
class CATIVpmPESomeone_var;
class CATIVpmPEOrganization_var;
class CATIVpmAFLAction_var;
class CATIVpmAFLLink_var;
class CATIVpmAFLHistory_var;
class CATIVpmAFLData_var;
class CATIVpmAFLSubscribePV_var;
class CATListValCATIVpmAFLSubscribePV_var;
class CATIVpmAFLResp_var;
class CATTime;
class CATListValCATIVpmAFLAction_var;
class CATListValCATIVpmAFLHistory_var;
class CATListValCATIVpmAFLLink_var;
class CATListValCATIVpmAFLAffectedObject_var;
class CATListValCATIVpmAFLAttachement_var;
class CATListValCATIVpmAFLData_var;
class CATListValCATIVpmAFLResp_var;
class CATListValCATIVpmAFLProduct_var;
class CATListValCATIVpmAFLProductView_var;
class CATListValCATIConfigurableObject_var;
class CATIVpmPERole_var;
class CATICfgGroupModif_var;

// Lists used
#include "CATListOfCATUnicodeString.h"
#include "sequence_octet.h"     

/**
 * Define constant for modification operation Add.
 */
#define AFL_ADD     CATIVpmAFLAction::Add
/**
 * Define constant for modification operation Cut.
 */
#define AFL_CUT     CATIVpmAFLAction::Cut
/**
 * Define constant for modification operation Replace.
 */
#define AFL_REPLACE CATIVpmAFLAction::Replace
/**
 * Define constant for modification operation Move.
 */
#define AFL_MOVE    CATIVpmAFLAction::Move

/**
 * Basic interface for Action objects. 
 * <b>Role</b>: The interface provides functions for manipulating actions.
 */
class ExportedByGUIDVPMInterfaces CATIVpmAFLAction : public  CATBaseUnknown
{
  CATDeclareInterface ;  

  public:
   
    enum Operation {Add,Cut,Replace,Move};

    /**
     * Check whether this action is just created (no modification is made).
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The action is just created.
     * <tt>S_FALSE</tt> The action is not just created.
     * <tt>E_FAIL</tt> The operation fails.
     */
    virtual HRESULT IsJustCreated () = 0;

    /**
     * Recover the closure state of the current action.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     */
    virtual HRESULT IsClose() = 0;


    // Simple attribute management

    /**
     * Set the action name as a unique index in the database. 
     * Notice that if this function is not called, a name is automatically set 
     * to the action.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param iName
     *   The name to be assigned to the action.
     */
    virtual HRESULT SetName(const CATUnicodeString  &iName) = 0;

    /**
     * Get the action name.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param oName
     *   The name of the action.
     */
    virtual HRESULT GetName(CATUnicodeString  &oName) = 0;

    /**
     * Get a binary unique identifier.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param oSequ
     */
    virtual HRESULT GetUUID (SEQUENCE(octet)& oSequ) = 0;

    /**
     * Get the name of the action type.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param oType
     */
    virtual HRESULT GetType(CATUnicodeString  &oType) = 0;

    /**
     * @nodoc
     * @deprecated Use method GetOwner(CATBaseUnknown_var&)
     */
    virtual HRESULT GetOwner(CATIVpmPESomeone_var &oSomeone) = 0;

    /**
     * Get the owner of the action.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param oPerson
     */
    virtual HRESULT GetOwner(CATBaseUnknown_var &oPerson) = 0;

    /**
     * @nodoc
     */
    virtual HRESULT GetOrganization(CATIVpmPEOrganization_var &oOrg) = 0;

    /**
     * Get the creator's name of the action.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param oCreator
     */
    virtual HRESULT GetCreator(CATUnicodeString &oCreator) = 0;

    /**
     * Get the action status.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param oStatus
     */
    virtual HRESULT GetStatus(CATUnicodeString  & oStatus) = 0;

    /**
     * Get the abstract of the action.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param oAbstract
     */
    virtual HRESULT GetAbstract(CATUnicodeString &oAbstract) = 0;

    /**
     * Set the abstract of the action.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param iAbstract
     */
    virtual HRESULT SetAbstract(const CATUnicodeString &iAbstract) = 0;

    /**
     * Get the description of the action.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param oDesc
     */
     virtual  HRESULT GetDescription(CATUnicodeString &oDesc) = 0;
    
    /**
     * Set the description of the action.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param iDesc
     */
    virtual HRESULT SetDescription (const CATUnicodeString &iDesc) = 0;

    /**
     * Get the priority of the action.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param oPrior
     */
    virtual HRESULT GetPriority(CATUnicodeString &oPrior) = 0;

    /**
     * Set the priority of the action.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param iPrior
     */
    virtual HRESULT SetPriority(const CATUnicodeString &iPrior) = 0;


    // Date management 

    /**
     * Get the start date of the action.
     * If not null, it must be considered as a fix point.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param oDate
     */
    virtual HRESULT GetStartDate(CATTime &oDate) = 0; 

    /**
     * Set the start date of the action.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param iDate
     */
    virtual HRESULT SetStartDate(const CATTime &iDate) = 0;

    /**
     * Get the end date of the action.
     * If not null, it must be considered as a fix point.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param oDate
     */
    virtual HRESULT GetEndDate(CATTime &oDate) = 0 ;

    /**
     * Set the end date of the action.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param iDate
     */
    virtual HRESULT SetEndDate(const CATTime &iDate) = 0;

    /**
     * Get the actual start date of the action.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param oDate
     */
    virtual HRESULT GetActualStartDate(CATTime &oDate) = 0;

    /**
     * Set the actual start date of the action.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param iDate
     */
    virtual HRESULT SetActualStartDate(const CATTime &iDate) = 0;

    /**
     * Get the actual end date of the action.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param oDate
     */
    virtual HRESULT GetActualEndDate(CATTime &oDate) = 0 ;

    /**
     * Set the actual end date of the action.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param iDate
     */
    virtual HRESULT SetActualEndDate(const CATTime &iDate) = 0;

    /**
     * Get the delinquency interval of the action.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param oDelinq
     */
    virtual HRESULT GetDelinquency(long &oDelinq) = 0;

    /**
     * Set the delinquency interval of the action.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param iDelinq
     */
     virtual HRESULT SetDelinquency(const long iDelinq) = 0;

    /**
     * Get the duration unit.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param oDurationUnit
     */
    virtual HRESULT GetDurationUnit(CATUnicodeString& oDurationUnit) = 0; 
    
    /**
     * Set the duration unit.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param iDurationUnit
     */
    virtual HRESULT SetDurationUnit(const CATUnicodeString& iDurationUnit) = 0;

    /**
     * Get the duration for performing the action.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param oDuration
     */
    virtual HRESULT GetDuration(long& oDuration) = 0; 
    
    /**
     * Set the duration for performing the action.
     * Real dates are calculated in connection to Start/End dates and duration.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param iDuration
     */
    virtual HRESULT SetDuration(const long &iDuration) = 0;

    /**
     * Get the elapsed-time unit.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param oElapsTimeUnit
     */
    virtual HRESULT GetElapsedTimeUnit(CATUnicodeString& oElapsTimeUnit) = 0; 
    
    /**
     * Set the elapsed-time unit.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param iElapsTimeUnit
     */
    virtual HRESULT SetElapsedTimeUnit(const CATUnicodeString& iElapsTimeUnit) = 0;

    /**
     * Get the elapsed time for the action.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param oElapsTime
     */
    virtual HRESULT GetElapsedTime(long& oElapsTime) = 0; 
    
    /**
     * Set the elapsed time for the action.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param iElapsTime
     */
    virtual HRESULT SetElapsedTime(const long &iElapsTime) = 0;

    /**
     * Get the action progress.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param oProgress
     */
    virtual HRESULT GetProgress(CATUnicodeString& oProgress) = 0; 
    
    /**
     * Set action progress.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param iProgress
     */
    virtual HRESULT SetProgress(const CATUnicodeString& iProgress) = 0;

    /**
     * Check whether the action is locked or not.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param oLocked
     */
    virtual HRESULT IsLocked(boolean& oLocked) = 0; 
    
    /**
     * Lock or unlock the action depending on the parameter passed (TRUE or FALSE).
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param iLock
     */
    virtual HRESULT SetLock(const boolean& iLock) = 0;

    /**
     * Get the number of days to be in delinquency with the action dates.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param oDaysToGo
     */
    virtual HRESULT GetDelinquencyDays(long& oDaysToGo) = 0;

    /**
     * Set the number of days to be in delinquency with the action dates.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param iDaysToGo
     */
    virtual HRESULT SetDelinquencyDays(const long& iDaysToGo) = 0;

    /**
     * Get the creation date of the action.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param oTime
     */
    virtual HRESULT GetCreationDate(CATTime& oTime) = 0;

    /**
     * Get the last modification date for the action.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param oTime
     */
     virtual HRESULT GetLastModifDate(CATTime& oTime) = 0;

    /**
     * Get the name of the user who made the last modification.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param oUserName
     */
    virtual HRESULT GetLastModifUser(CATUnicodeString &oUserName) = 0;

    // People & Organisation

    /**
     * @nodoc
     */
    virtual HRESULT ChangeOwner(const CATIVpmPESomeone_var &iNewOwner) = 0;

    /**
     * @nodoc
     */
    virtual HRESULT ChangeOwnerWithDesc(
                      const CATIVpmPESomeone_var &iNewOwner, 
                      CATUnicodeString& iHistoryDesc) = 0;

    // Recover links whatever could be the orientation of link.

    /**
     * Get all the links (of whatever type) which relate the current action 
     * to another one.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param iToAction
     * @param oActionLinks
     */
    virtual HRESULT GetLinksWithAction(
                      const CATIVpmAFLAction_var & iToAction,
			                CATLISTV(CATIVpmAFLLink_var) &oActionLinks) = 0;

    /**
     * Get all the links of a given type which go out from the current action.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param iLinkType
     * @param oActionLinks
     */
    virtual HRESULT GetLinksOfType(
                      const CATUnicodeString& iLinkType,
                      CATLISTV(CATIVpmAFLLink_var) &oActionLinks) = 0;

    /**
     * Get all the links of whatever type which go out from the current action.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param oActionLinks
     */
    virtual HRESULT GetAllLinks(CATLISTV(CATIVpmAFLLink_var) & oActionLinks) = 0;


    // Recover Actions linked managing orientation

    /**
     * Get all the actions I am pointing (as the leader for oriented links, 
     * or slave for symetric links).
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param oListActions
     */
    virtual HRESULT GetMyPointedActions(CATListValCATIVpmAFLAction_var& oListActions) = 0;

    /**
     * Get all the action pointing on me (as the leader for oriented links,
     * or slave for symetric links).
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param oListActions
     */
    virtual HRESULT GetActionsPointingMe(CATListValCATIVpmAFLAction_var& oListActions) = 0;

    /**
     * Get all the action I'm pointing with a special type of link
     * (as the leader for oriented links, or slave for symetric links).
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param iLinkType
     * @param oListActions
     */
    virtual HRESULT GetMyPointedActions(
                      const CATUnicodeString iLinkType,
                      CATListValCATIVpmAFLAction_var& oListActions) = 0;
    /**
     * Get all the action pointing on me  with a special type of link
     * (as the leader for oriented links,or slave for symetric links).
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param iLinkType
     * @param oListActions
     */
    virtual HRESULT GetActionsPointingMe(
                      const CATUnicodeString iLinkType,
                      CATListValCATIVpmAFLAction_var& oListActions) = 0;
        
    
    // Document management.

    /**
     * Add an affected object to the action. 
     * Object must be created by the AFLManager with all its associated attributes being valuated.
     * The definition of the graph rules may copy it in another action.
     * Associated Business Rule graph is "add_object".
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param iObj
     */
    virtual HRESULT AddObject(const CATIVpmAFLAffectedObject_var & iObj) = 0;

    /**
     * Remove the object from the action.
     * Associated Business Rule graph is "remove_object".
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param iObj
     */
    virtual HRESULT RemoveObject( CATIVpmAFLAffectedObject_var &iObj) = 0;

    /**
     * Get all the affected objects. The second parameter specifies whether these affected 
     * objects must point to real objects or not. By default only affected objects with real 
     * objects are returned.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param oListObjs
     * @param iWithRealObj
     */
    virtual HRESULT GetAllAffObj(CATLISTV(CATIVpmAFLAffectedObject_var) &oListObjs,
				 const int iWithRealObj=1) = 0;

    /**
     * Get all the affected objects of a specific type. The second parameter specifies whether 
     * these affected objects must point to real objects or not. By default only affected 
     * objects with real objects are returned.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param iObjType
     * @param oListObjs
     * @param iWithRealObj
     */
    virtual HRESULT GetAllObjOfType(const CATUnicodeString& iObjType,
				    CATLISTV(CATIVpmAFLAffectedObject_var) &oListObjs,
				    const int iWithRealObj=1) = 0;

    /**
     * @nodoc
     */
    virtual HRESULT FindAffObject(
                      SEQUENCE(octet) &iUUID, 
                      CATIVpmPESomeone_var  &iOwner,
					            CATIVpmAFLAffectedObject_var& oObj) = 0;

    /**
     * Find an affected object giving its UUID.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param iUUID
     * @param oObj
     */
    virtual HRESULT FindAffObject(
                      SEQUENCE(octet) &iUUID, 
                      CATIVpmAFLAffectedObject_var& oObj) = 0;

    /**
     * Find an affected object giving its UUID and change type.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param iUUID
     * @param iChangeType
     * @param oObj
     */
    virtual HRESULT FindAffObject(
                      const SEQUENCE(octet) &iUUID, 
                      const CATUnicodeString& iChangeType,
                      CATIVpmAFLAffectedObject_var& oObj) = 0;

    /**
     * Distribute objects to another action.
     * This method is used for "manual" distribution of affected objects.
     * It uses the same rules as described in the distribution commands 
     * in the rules graph.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param ioDestAction
     * @param iObj
     */
    virtual HRESULT DistributeObjects(
                      CATIVpmAFLAction_var &ioDestAction,
                      CATLISTV(CATIVpmAFLAffectedObject_var) &iObj) = 0;
     
    /**
     * Create an attachement and add it to the action.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param iName
     * @param iId
     * @param iDesc
     * @param oAttach
     */                   
    virtual HRESULT AddAttachement(const CATUnicodeString& iName,
                      const SEQUENCE(octet) & iId,
                      const CATUnicodeString& iType,
                      const CATUnicodeString& iDesc,
                      CATIVpmAFLAttachement_var& oAttach) = 0;

    /**
     * Remove the attachement from the action..
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param iAttach
     */                   
    virtual HRESULT RemoveAttachement(CATIVpmAFLAttachement_var& iAttach) = 0;

    /**
     * Get all the attachements to the action.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param oListAttach
     */                   
     virtual HRESULT GetAllAttachements(CATLISTV(CATIVpmAFLAttachement_var) &oListAttach) = 0;


    // History management

    /**
     * Create and add a history to the action. 
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param oHistory
     */                   
    virtual HRESULT AddHistory(CATIVpmAFLHistory_var& oHistory) = 0;

    /**
     * Add an instrumented history: operation type, valuate date, user... 
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param iOperType
     * @param oHistory
     */                   
    virtual HRESULT AddSimpleHistory(
                      const CATUnicodeString& iOperType,
				              CATIVpmAFLHistory_var& oHistory) = 0;

    /**
     * Add a modification history to the action. 
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param iOperType
     * @param iModifPV
     * @param iObj1
     * @param iObj2
     */                   
    virtual HRESULT AddModifHistory(
                      const CATUnicodeString& iOperType,
                      CATIVpmAFLProductView_var& iModifPV,
                      const CATIVpmAFLAffectedObject_var & iObj1,
                      const CATIVpmAFLAffectedObject_var & iObj2) = 0;

    /**
     * Get all history objects attached to the action. 
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param oListHistory
     */                   
    virtual HRESULT GetAllHistories(CATLISTV(CATIVpmAFLHistory_var)& oListHistory) = 0;
   
    /**
     * Remove a product view giving its related CO. The second arguments allows to force 
     * or not (default) the suppression in case the PV has modifications.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param iConfObj
     * @param iForce
     */                   
    virtual HRESULT RemoveProductView(CATIConfigurableObject_var& iConfObj, const int iForce=0) = 0;

    /**
     * Remove a product view. The second arguments allows to force or not (default) 
     * the suppression in case the PV has modifications.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param iProdView
     * @param iForce
     */                   
     virtual HRESULT RemoveProductView(CATIVpmAFLProductView_var& iProdView, const int iForce=0) = 0;
     
    /**
     * Get all product views related to the action.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param oListPV
     */                   
    virtual HRESULT GetAllProductViews(CATLISTV(CATIVpmAFLProductView_var)& oListPV) = 0;

    /**
     * Get all configurable objects related to the action.
     * The names of related products are also returned.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param oListCO
     * @param oListProdNames
     */                   
    virtual HRESULT GetAllCOs(
                      CATLISTV(CATIConfigurableObject_var)& oListCO,
                      CATLISTV(CATUnicodeString)& oListProdNames) = 0;

    /**
     * Get the Product-View related to an action giving the attached Configurable-Objet.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param iConfObj
     * @param oProdView
     */                   
    virtual HRESULT GetRelatedProductView(
                      CATIConfigurableObject_var& iConfObj,
                      CATIVpmAFLProductView_var& oProdView) = 0;

    /**
     * Get all the products associated with the action.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param oListProduct
     */                   
    virtual HRESULT GetAllProducts(CATLISTV(CATIVpmAFLProduct_var)& oListProduct) = 0;
 

    // Pub/Sub functions
    
    /**
     * Add a subscriber to the current action.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param iSubscriber
     */                   
    virtual HRESULT AddSubscriber(CATIVpmAFLSubscribePV_var& iSubscriber) = 0;

    /**
     * Remove a subscriber to the current action.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param iSubscriber
     */                   
    virtual HRESULT RemoveSubscriber(CATIVpmAFLSubscribePV_var& iSubscriber) = 0;

    /**
     * Get all subscribers to the current action.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param oListSubscriber
     */                   
    virtual HRESULT GetSubscriberList(CATLISTV(CATIVpmAFLSubscribePV_var)& oListSubscriber) = 0;


    // Human-resource management

    /**
     * Add a new responsability (user/role) to the current action.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param iResp
     */                   
    virtual HRESULT AddResponsability(CATIVpmAFLResp_var& iResp) = 0;

    /**
     * Remove a responsability which is already assigned to the action.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param iResp
     */                   
    virtual HRESULT RemoveResponsability(const CATIVpmAFLResp_var& iResp) = 0;

    /**
     * @nodoc
     */
    virtual HRESULT GetResponsabilitiesByRole(
                      const CATIVpmPERole_var& iRole,
                      CATLISTV(CATIVpmAFLResp_var)& oListResp) = 0;

    /**
     * Get the all responsabilities that are associated with the action.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param oListResp
     */                   
    virtual HRESULT GetAllResponsabilities(CATLISTV(CATIVpmAFLResp_var)& oListResp) = 0;

    // Data Management

    /**
     * Create a data and add it to the action. 
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param oData
     */                   
    virtual HRESULT AddData(CATIVpmAFLData_var& oData) = 0;

    /**
     * Remove a data from the action. 
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param iData
     */                   
    virtual HRESULT RemoveData(CATIVpmAFLData_var& iData) = 0;

    /**
     * Get all data associated with the action. 
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param oListData
     */                   
    virtual HRESULT GetAllDatas(CATLISTV(CATIVpmAFLData_var)& oListData) = 0; 

    /**
     * Check whether the action deals with product management.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> In the positive case.
     * <tt>S_FALSE</tt> The action does not deal with product management.
     * <tt>E_FAIL</tt> The operation fails.
     */                   
    virtual HRESULT IsAProductMngtType() = 0;

    // Customized attributes 

    /**
     * Copy all attributes of another action to the current action. 
     * Notice that referenced objects are not copied.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param iFromAction
     */                   
    virtual HRESULT GetOtherActionAttr(const CATIVpmAFLAction_var &iFromAction) = 0;
                                   
    //  Dump

    /**
     * Print out all action attributes and related objects.
     * Also a prefix may be specified.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param prefix
     */                   
    virtual HRESULT Dump(char * prefix) = 0;

    ///////////////////////////////////////////////////////////////////////////
    // NEW METHODS IN V5R5
    ///////////////////////////////////////////////////////////////////////////

     // Configuration context management.

    /**
     * Create and add a product-view to the action by giving a CO. 
     * A group-mode is automatically created and attached to the PV.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param iCfgObject
     * @param oProdView
     */               
    virtual HRESULT AddPV(const CATIConfigurableObject_var& iCfgObject,
			  CATIVpmAFLProductView_var& oProdView) = 0;

     
    /**
     * Create and add a product-view to the action by giving a CO. 
     * A group-mod may also be passed to be attached to the PV. If not, 
     * a new one is automatically created and attached to the PV.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param iCfgObject
     * @param oProdView
     * @param ioGroupModif
     */                   
    virtual HRESULT AddPV(const CATIConfigurableObject_var& iCfgObject,
			  CATIVpmAFLProductView_var& oProdView,
			  CATICfgGroupModif_var & ioGroupModif) = 0;

    //
    // OBSOLETE SINCE V5R5
    //


    /**
     * @nodoc
     * Deprecated since V5R5. Please use AddPV(const CATIConfigurableObject_var&, CATIVpmAFLProductView_var&) instead.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param iConfObject
     * @param oProdView
     * @param iProductName
     *   Optional, default is "".
     */
    virtual HRESULT AddProductView(const CATIConfigurableObject_var& iConfObject,
				   CATIVpmAFLProductView_var& oProdView,
				   const CATUnicodeString& iProductName="") = 0;

    /**
     * @nodoc
     * Deprecated since V5R5. Please use AddPV(const CATIConfigurableObject_var&, CATIVpmAFLProductView_var&, CATICfgGroupModif_var &) instead.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param iConfObject
     * @param oProdView
     * @param iProductName
     * @param ioGroupModif
     */                   
    virtual HRESULT AddProductView(const CATIConfigurableObject_var& iConfObject,
				   CATIVpmAFLProductView_var& oProdView,
				   CATICfgGroupModif_var & ioGroupModif,
				   const CATUnicodeString& iProductName="") = 0;

    /**
     * @nodoc
     * Deprecated since V5R5. No other function replaces this one, since the modification status  
     * is not managed by the configuration manager.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param iConfDomain
     */                   
    virtual HRESULT PromoteConfiguration(CATUnicodeString& iConfDomain) = 0;

    /**
     * @nodoc
     * Deprecated since V5R5. PS does not allow the creation of an item that depends on many CV's.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param iOperation
     * @param Obj1
     * @param Obj2
     */                   
    virtual HRESULT Modify(
                      CATIVpmAFLAction::Operation iOperation,
                      CATIVpmAFLAffectedObject_var iObj1,
                      CATIVpmAFLAffectedObject_var iObj2) = 0;

	#if defined(CATIAV5R17)
    /**
	 * Available only from R17 onwards
     * Find an affected object giving its UUID and change type and V_Source.
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param iUUID
     * @param iChangeType
     * @param oObj
	 * @param iVSource
     */
    virtual HRESULT FindAffObject(const SEQUENCE(octet) &iUUID, 
                           const CATUnicodeString& iChangeType,
                           CATIVpmAFLAffectedObject_var& oObj,
						   const CATUnicodeString& iVSource) = 0;

	/**
	 * Available only from R17 onwards
     * Add an affected object to the action. 
     * Object must be created by the AFLManager with all its associated attributes being valuated.
     * The definition of the graph rules may copy it in another action.
     * Associated Business Rule graph is "add_object".
     * <br><b>Legal values</b>:
     * <tt>S_OK</tt> The operations succeeds.
     * <tt>E_FAIL</tt> The operation fails.
     * @param iObj
     */
    virtual HRESULT AddObject2(const CATIVpmAFLAffectedObject_var & iObj) = 0;
	#endif


};

CATDeclareHandler (CATIVpmAFLAction, CATBaseUnknown);

#endif
