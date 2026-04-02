/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES	2001
//=============================================================================
// June 99      Creation                                            C. Cressend
// January 01   Modification                                            S. Dami
//              Insert CAA2 documentation                                 
//=============================================================================

#ifndef CATIVpmAFLManager_H
#define CATIVpmAFLManager_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "GUIDVPMInterfaces.h"

#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATIVpmPredicate.h"
#include "sequence_octet.h"
#include "CATListOfCATICfgNormalValue.h"
#include "CATListOfCATUnicodeString.h"
#include "CATIConfigurableObject.h"
#include "CATTime.h"
#include "CATIVpmPESomeone.h"

// AFL objects
class CATIVpmAFLAction_var;
class CATIVpmAFLAffectedObject_var;
class CATIVpmAFLHistory_var;
class CATIVpmAFLProductView_var;
class CATIVpmAFLXeff_var;
class CATIVpmAFLLink_var;
class CATIVpmAFLResp_var;

// VPM Objects
class CATIVpmFactoryObject_var;
class CATIVpmPredicate_var;
class CATIConfigurableObject_var;
class CATICfgFilter_var;
class CATIVpmGraphMng_var;
class CATILinkableObject_var;

// Lists
class CATListValCATIVpmFactoryObject_var;
class CATListValCATIVpmAFLAction_var;
class CATListValCATIVpmAFLXeff_var;
class CATListValCATIVpmAFLHistory_var;
class CATListValCATIVpmAFLProductView_var;
class CATListValCATIConfigurableObject_var;
class CATListValCATIVpmAFLAffectedObject_var;
class CATListValCATBaseUnknown_var;


// TEMPORARY for GENERIC QUERY DEFINITION
#include "CATListOfVPMCA.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern  ExportedByGUIDVPMInterfaces IID IID_CATIVpmAFLManager;
#else
extern "C" const IID IID_CATIVpmAFLManager;
#endif

/**
 * Define constant for the default Action type name used in query methods.
 */
#define CATVPMAFL_ENTITY "AFLAction"

/**
 * Define constant for the default AffectedObject type name used in query methods.
 */
#define CATVPMAFL_AFFOBJ "AFLAffected_Object"

/**
 * Class interface to the Action Flow Manager.
 * <b>Role</b>: Defines the interfaces to methods to manage Actions and 
 * Action related operations.
 */
class ExportedByGUIDVPMInterfaces CATIVpmAFLManager: public CATBaseUnknown   
{
     CATDeclareInterface;
   
public:

/**
 * enum CATActionDate describes Action date values.
 *
 *<p> STARTDATE       :
 *<p> ENDDATE         :
 *<p> ACTUALSTARTDATE :
 *<p> ACTUALENDDATE   :
 *<p> DELINQUENCYDATE :
 * <br>
 */
     enum CATActionDate {STARTDATE, 
                         ENDDATE, 
                         ACTUALSTARTDATE, 
                         ACTUALENDDATE, 
                         DELINQUENCYDATE
                        };

/**
 * enum Operation describes operation values used in Affected Object queries.
 *
 *<p> Add       :
 *<p> Cut       :
 *<p> Replaced  :
 *<p> Replacing :
 *<p> Move      :
 *<p> NotDef    :
 * <br>
 */
     enum Operation {Add,
                     Cut,
                     Replaced,
                     Replacing,
                     Move,
                     NotDef
                    };

/**
 * enum Operation_Flag describes Operation flag values.
 *
 *<p> AFL_OP_ADD     :
 *<p> AFL_OP_CUT     :
 *<p> AFL_OP_REPLACE :
 *<p> AFL_OP_MOVE    :
 * <br>
 */
     enum Operation_Flag {AFL_OP_ADD     = 1 << 0 ,
                          AFL_OP_CUT     = 1 << 1 ,
                          AFL_OP_REPLACE = 1 << 2 ,
                          AFL_OP_MOVE    = 1 << 3
                         };

// Be careful with NoId : mandatory unique index in database causes save errors.
/**
 * enum obsolete : to be removed in V5R5. Replaced by real Action name.
 */
     enum Generate { NoId, GenId };

/**
 * @nodoc
 */
     virtual HRESULT Initialize()=0;

/**
 * @nodoc
 */
     virtual HRESULT Refresh()=0;

/**
 * @nodoc
 */
	 virtual HRESULT CreateAction(const CATUnicodeString&     iTypeAction,
                                      CATIVpmAFLAction_var&       oAction,
                                      const CATUnicodeString&     iGraphCusto="",
                                      const CATUnicodeString&     iInitialAbstract="",
                                      const CATIVpmPESomeone_var& iInitialOwner=NULL_var,
                                      const CATUnicodeString&     iActionName="")=0;       

/**
 * @nodoc
 */
     virtual HRESULT CreateFromTemplate(const CATIVpmAFLAction_var& iAction,
                                        const CATUnicodeString&     iTypeAction,
                                        CATIVpmAFLAction_var&       oAction,
                                        const CATUnicodeString&     iGraphCusto="",
                                        const CATUnicodeString&     iInitialAbstract="",
                                        const CATIVpmPESomeone_var& iInitialOwner=NULL_var,
                                        const CATUnicodeString&     iActionName="")=0; 

/**
 * Creates an Affected Object.
 *  @param iTypeAffObj
 *   The type of Affected Object.
 *  @param iPointingObj
 *   The reference to the actual object. 
 *  @param oAffObj
 *   The created Affected Object.
 *  @param iGraphCusto
 *   The associated custom Graph.
 */
     virtual HRESULT CreateAffectedObject(const CATUnicodeString&       iTypeAffObj,
                                          const CATILinkableObject_var& iPointingObj,
                                          CATIVpmAFLAffectedObject_var& oAffObj,
                                          const CATUnicodeString&       iGraphCusto="")=0;

/**
 * Creates a Responsability Object.
 *  @param oResp
 *   The Responsability Object.
 */
     virtual HRESULT CreateResponsability(CATIVpmAFLResp_var& oResp)=0;

/**
 * Cancels an Action.
 *  @param iCanceled
 *   The Action to be canceled.
 *  @param iCanceling
 *   The canceling Action.
 *  @param oCancelingLink
 *   The canceling Link.
 */
     virtual HRESULT Cancel(CATIVpmAFLAction_var& iCanceled,
                            CATIVpmAFLAction_var& iCanceling,
                            CATIVpmAFLLink_var&   oCancelingLink)=0;

/**
 * Supersedes an Action.
 *  @param iSuperseded
 *   The Action to be superseded.
 *  @param oSuperseding
 *   The superseding Action.
 *  @param oSupersedingLink
 *   The superseding Link.
 */
     virtual HRESULT Superseed(CATIVpmAFLAction_var& iSuperseded,
                               CATIVpmAFLAction_var& oSuperseding,
                               CATIVpmAFLLink_var&   oSupersedingLink)=0;

// ==========================
// Lifecycle Status Functions
// ==========================

/**
 * Advances the Action's status.
 *  @param iAction
 *   The Action.
 *  @param iEvent
 *   The event text.
 */
     virtual HRESULT StepForwardActionStatus(CATIVpmAFLAction_var&   iAction,
                                             const CATUnicodeString& iEvent)=0;

/**
 * Advances the Affected Object's status.
 *  @param iObject
 *   The Affected Object.
 *  @param iEvent
 *   The event text.
 */
     virtual HRESULT StepForwardObjectStatus(CATIVpmAFLAffectedObject_var& iObject,
                                             const CATUnicodeString&       iEvent)=0;

/**
 * Advances the Responsability Object's status.
 *  @param iResp
 *   The Responsability object.
 *  @param iEvent
 *   The event text.
 */
     virtual HRESULT StepForwardRespStatus(CATIVpmAFLResp_var&     iResp,
                                           const CATUnicodeString& iEvent)=0;

/**
 * Advances the Xeff Object's status.
 *  @param iXeff
 *   The Xeff object.
 *  @param iEvent
 *   The event text.
 * @nodoc
 */
     virtual HRESULT StepForwardXeffStatus(CATIVpmAFLXeff_var&     iXeff,
                                           const CATUnicodeString& iEvent)=0;


// ==========================
// Quey Functions
// ==========================

/**
 * Sets the Query policy to case sensitive.
 */
     virtual void SetCaseSensitive()=0;

/**
 * Sets the Query policy to ignore case.
 */
     virtual void SetCaseUnsensitive()=0;

/**
 * Queries an Action by name.
 *  @param iId
 *   The Action name.
 *  @param oAction
 *   The Action object.
 */
     virtual HRESULT QueryAfl_Name(const CATUnicodeString& iId,
                                   CATIVpmAFLAction_var&   oAction)=0;
			
/**
 * Retrieves an Action by URL.
 *  @param iURL
 *   The Action URL.
 *  @param oAction
 *   The Action.
 */
     virtual HRESULT GetFromURL(const SEQUENCE(octet)& iURL,
                                CATIVpmAFLAction_var&  oAction)=0;  

/**
 * Queries Actions using a predicate.
 *  @param iPred
 *   The query predicate.
 *  @param oListAction
 *   The list of Actions.
 *  @param iEntityName
 *   The entity name.
 *  @param iDomain
 *   The domain name.
 */
     virtual HRESULT QueryAfl(const CATIVpmPredicate_var&     iPred,
                              CATLISTV(CATIVpmAFLAction_var)& oListAction,
                              const CATUnicodeString&         iEntityName=CATVPMAFL_ENTITY,
                              const CATUnicodeString&         iDomain="")=0;
  
// Cross domain queries.  
//-----------------------------------------------------------------------------
// Get the Actions matching iOtherPred that configure a CO.   
//-----------------------------------------------------------------------------
//mono
/**
 * Queries Actions using a predicate and a Configurable Object.
 *  @param iOtherPred
 *   The query predicate.
 *  @param iCO
 *   The configurable object.
 *  @param oListAction
 *   The list of Actions.
 *  @param iEntityName
 *   The entity name.
 *  @param iAFLDomain
 *   The domain name.
 */
     virtual HRESULT QueryAflProductView(const CATIVpmPredicate_var&       iOtherPred,
                                         const CATIConfigurableObject_var& iCO,
                                         CATListValCATIVpmAFLAction_var&   oListAction,
                                         const CATUnicodeString&           iEntityName=CATVPMAFL_ENTITY,
                                         const CATUnicodeString&           iAFLDomain="")=0;

/**
 * Queries ProductViews using a predicate and a Configurable Object.
 *  @param iOtherPred
 *   The query predicate.
 *  @param iCO
 *   The configurable object.
 *  @param oListAPV
 *   The list of Product Views.
 *  @param iAFLDomain
 *   The domain name.
 */
     virtual HRESULT QueryAflProductView(const CATIVpmPredicate_var&          iOtherPred,
                                         const CATIConfigurableObject_var&    iCO,
                                         CATListValCATIVpmAFLProductView_var& oListAPV,
                                         const CATUnicodeString&              iAFLDomain="")=0 ;

/**
 * Queries Actions using a predicate and a list of Configurable Objects.
 *  @param iOtherPred
 *   The query predicate.
 *  @param iCOs
 *   The list of Configurable Objects.
 *  @param oListAction
 *   The list of Actions.
 *  @param iEntityName
 *   The entity name.
 *  @param iAFLDomain
 *   The domain name.
 */
     virtual HRESULT QueryAflProductView(const CATIVpmPredicate_var&                 iOtherPred,
                                         const CATListValCATIConfigurableObject_var& iCOs,
                                         CATListValCATIVpmAFLAction_var&             oListAction,
                                         const CATUnicodeString&                     iEntityName=CATVPMAFL_ENTITY,
                                         const CATUnicodeString&                     iAFLDomain="")=0 ;                                        
   
/**
 * Queries Actions using an Affected Object and (optional) Configuration.
 *  @param iAffObjId
 *   The Affected Object.
 *  @param oListAction
 *   The list of Actions.
 *  @param iOper
 *   The operation.
 *  @param iOtherPred
 *   The predicate.
 *  @param iCfgObj
 *   The Configurable Object.
 *  @param iNVList
 *   The Normal value.
 *  @param iXeffDomain
 *   The Xeff domain.
 *  @param iXeffStatus
 *   The Xeff status.
 *  @param iEntityName
 *   The entity name.
 *  @param iAFLDomain
 *   The domain name.
 */
     virtual HRESULT QueryAFLObjectAffected(const SEQUENCE(octet)&                  iAffObjId,
                                            CATListValCATIVpmAFLAction_var&         oListAction,
                                            CATIVpmAFLManager::Operation            iOper=CATIVpmAFLManager::NotDef,
                                            const CATIVpmPredicate_var&             iOtherPred=NULL_var,
                                            const CATIConfigurableObject_var&       iCfgObj=NULL_var,
                                            const CATListValCATICfgNormalValue_var& iNVList=NULL,
                                            const CATUnicodeString&                 iXeffDomain="",
                                            const CATUnicodeString&                 iXeffStatus="",      
                                            const CATUnicodeString&                 iEntityName=CATVPMAFL_ENTITY,
                                            const CATUnicodeString&                 iAFLDomain="")=0;

/**
 * Queries on Histories to retrieve a ProductView life cycle
 *  @param iCfgObj
 *   The Configurable Object.
 *  @param oListHistories
 *   The list of Histories.
 *  @param iAFLDomain
 *   The domain name.
 */
     virtual HRESULT QueryAFLHistoryByCV(const CATIConfigurableObject_var& iCfgObj,
                                         CATListValCATIVpmAFLHistory_var&  oListHistories,   
                                         const CATUnicodeString&           iAFLDomain="")=0;


// Queries on histories using operations flags & other predicate : should replace the previous one.
/**
 * Queries on Histories using Operation flags and predicate
 *  @param iCfgObj
 *   The Configurable Object.
 *  @param iOtherPredicate
 *   The predicate.
 *  @param iOperations
 *   The Operation flags.
 *  @param oListHistories
 *   The list of Histories.
 *  @param iAFLDomain
 *   The domain name.
 */
     virtual HRESULT QueryAFLHistoryByCV(const CATIConfigurableObject_var& iCfgObj,
                                         const CATIVpmPredicate_var&       iOtherPredicate,
                                         long                              iOperations,
                                         CATListValCATIVpmAFLHistory_var&  oListHistories,
                                         const CATUnicodeString&           iAFLDomain="")=0;

/** @nodoc
 * Creates a query predicate.
 *  @param iAttrName
 *   The attribute name.
 *  @param iOperator
 *   The operator.
 *  @param iValue
 *   The attribute value.
 *  @param iIsNot
 *   The negation operator.
 *  @param oPredicate
 *   The predicate.
 *  @param iEntityName
 *   The entity name.
 */
     virtual HRESULT CreateAflPredicate(const CATUnicodeString& iAttrName,
                                        CATVpmOperator          iOperator,
                                        const CATUnicodeString& iValue,
                                        int                     iIsNot,
                                        CATIVpmPredicate_var&   oPredicate,
                                        const CATUnicodeString& iEntityName=CATVPMAFL_ENTITY)=0;

/** @nodoc
 * Creates a query predicate.
 *  @param iAttrName
 *   The attribute name.
 *  @param iOperator
 *   The operator.
 *  @param iValue
 *   The binary attribute value.
 *  @param iIsNot
 *   The negation operator.
 *  @param oPredicate
 *   The predicate.
 *  @param iEntityName
 *   The entity name.
 */
     virtual HRESULT CreateAflBinPredicate(const CATUnicodeString& iAttrName,
                                           CATVpmOperator          iOperator,
                                           const SEQUENCE(octet)&  iValue,
                                           int                     iIsNot,
                                           CATIVpmPredicate_var&   oPredicate,
                                           const CATUnicodeString& iEntityName=CATVPMAFL_ENTITY)=0;

/**
 * Creates a Link between Actions.
 *  @param iAction1
 *   The first Action.
 *  @param iAction2
 *   The second Action.
 *  @param oActionLink
 *   The Link.
 *  @param iTypeLink
 *   The link type.
 */
     virtual HRESULT CreateLink(CATIVpmAFLAction_var&    iAction1,
                                CATIVpmAFLAction_var&    iAction2,
                                CATIVpmAFLLink_var&      oActionLink,
                                const CATUnicodeString&  iTypeLink)=0;

/**
 * Removes an Action from memory.
 *  @param iAction
 *   The Action.
 */
     virtual HRESULT DeleteAction(CATIVpmAFLAction_var &iAction)=0;

/**
 * Retrieves the Graph manager
 *  @param iGraphName
 *   The Graph name.
 *  @param oGraphMgr
 *   The Graph manager.
 */
     virtual HRESULT GetGraphManager(const CATUnicodeString& iGraphName,
                                     CATIVpmGraphMng_var&    oGraphMgr)=0;

// Helpers to chain commands : to use in your own defined commands.
/**
 * Assigns the last command result.
 *  @param iResult
 *   The result.
 */
     virtual HRESULT SetLastCmdResult(HRESULT iResult)=0;

/**
 * Retrieves the last command result.
 */
     virtual HRESULT GetLastCmdResult()=0;

/**
 * Copies ProductViews from one Action to another.
 *  @param iFromAction
 *   The source Action.
 *  @param iToAction
 *   The target Action.
 */
     virtual HRESULT CopyReferContext(CATIVpmAFLAction_var& iFromAction,
                                      CATIVpmAFLAction_var& iToAction)=0;

/**
 * Creates a Configuration Filter.
 *  @param iXeffDomain
 *   The Xeff domain.
 *  @param iCfgObj
 *   The Configurable Object.
 *  @param iListActions
 *   The list of Actions.
 *  @param oFilter
 *   The Filter.
 */
     virtual HRESULT CreateFilter(const CATUnicodeString&               iXeffDomain,
                                  const CATIConfigurableObject_var&     iCfgObj,
                                  const CATLISTV(CATIVpmAFLAction_var)& iListActions,
                                  CATICfgFilter_var&                    oFilter)=0;
        
/**
 * Moves an object from one Action to another.
 *  @param iObjOrig
 *   The source object.
 *  @param iActionDest
 *   The target Action.
 *  @param iDestTypeObject
 *   The object type.
 */
     virtual HRESULT TransferObject(CATIVpmAFLAffectedObject_var& iObjOrig,
                                    CATIVpmAFLAction_var&         iActionDest,
                                    CATUnicodeString&             iDestTypeObject)=0;

/**
 * Moves objects from one Action to another.
 *  @param iListObjects
 *   The source objects.
 *  @param iActionDest
 *   The target Action.
 *  @param iDestTypeObjects
 *   The type of objects.
 */
     virtual HRESULT TransferObjects(CATLISTV(CATIVpmAFLAffectedObject_var)& iListObjects,
                                     CATIVpmAFLAction_var&                   iActionDest,
                                     CATUnicodeString&                       iDestTypeObjects)=0;

/**
 * Copies objects from one Action to another.
 *  @param iListObjects
 *   The source objects.
 *  @param iActionDest
 *   The target Action.
 *  @param iDestTypeObjects
 *   The type of objects.
 */
     virtual HRESULT CopyObjects(CATLISTV(CATIVpmAFLAffectedObject_var)& iListObjects,
                                 CATIVpmAFLAction_var&                   iActionDest,
                                 CATUnicodeString&                       iDestTypeObjects)=0;

/**
 * Copies an object from one Action to another.
 *  @param iObjOrig
 *   The source object.
 *  @param iActionDest
 *   The target Action.
 *  @param iDestTypeObject
 *   The object type.
 */
     virtual HRESULT CopyObject(CATIVpmAFLAffectedObject_var& iObjOrig,
                                CATIVpmAFLAction_var&         iActionDest,
                                CATUnicodeString&             iDestTypeObject)=0;

// High level services.
// Distribution : copy of objects related to the business rules
// old services : maybe not kept.
/**
 * Distributes objects from one Action to another.
 *  @param iActionOrig
 *   The source Action.
 *  @param iActionDest
 *   The target Action.
 *  @param iListObjects
 *   The list of objects.
 */
     virtual HRESULT DistributeObjects(CATIVpmAFLAction_var&                   iActionOrig,
                                       CATIVpmAFLAction_var&                   iActionDest,
                                       CATLISTV(CATIVpmAFLAffectedObject_var)& iListObjects)=0;

/**
 * Retrieves a list of delinquent Actions.
 *  @param iDate
 *   The start date.
 *  @param iEndDate
 *   The end date.
 *  @param iEnumStatusName
 *   The status name.
 *  @param oActions
 *   The list of Actions.
 */
     virtual HRESULT GetDelinquencyActions(const CATTime&                  iDate,
                                           const CATTime&                  iEndDate,
                                           const CATUnicodeString&         iEnumStatusName,
                                           CATLISTV(CATIVpmAFLAction_var)& oActions)=0;

/**
 * Retrieves a list Actions.
 *  @param iMinusDate
 *   The start date.
 *  @param iPlusDate
 *   The end date.
 *  @param iSearchDate
 *   The search date.
 *  @param iEnumStatusName
 *   The status name.
 *  @param oActions
 *   The list of Actions.
 */
     virtual HRESULT GetActions(const CATTime&                  iMinusDate,
                                const CATTime&                  iPlusDate,
                                const CATActionDate             iSearchDate,
                                const CATUnicodeString&         iEnumStatusName,
                                CATLISTV(CATIVpmAFLAction_var)& oActions)=0;

/**
 * @nodoc
 */
     virtual HRESULT QueryAFLAffectedObjects(const SEQUENCE(octet)&                  iId,
                                             CATListValCATIVpmAFLAffectedObject_var& oListObj,
                                             const CATIVpmPredicate_var&             iOtherPred=NULL_var,
                                             const CATUnicodeString&                 iType="",
                                             const CATUnicodeString&                 iObjStatus="",
                                             const CATIVpmPESomeone_var&             iOwner=NULL_var,
                                             const CATUnicodeString&                 iEntity=CATVPMAFL_AFFOBJ,
                                             const CATUnicodeString&                 iDomain="")=0;

/**
 * @nodoc
 */
     virtual HRESULT QueryAFLAffectedObjects(const CORBAAny&                         iId,
                                             CATListValCATIVpmAFLAffectedObject_var& oListObj,
                                             const CATIVpmPredicate_var&             iOtherPred = NULL_var,
                                             const CATUnicodeString&                 iType="",
                                             const CATUnicodeString&                 iObjStatus="",
                                             const CATIVpmPESomeone_var&             iOwner=NULL_var,
                                             const CATUnicodeString&                 iEntity=CATVPMAFL_AFFOBJ,
                                             const CATUnicodeString&                 iDomain="")=0;

/**
 * Queries for Histories by Object.
 *  @param iId
 *   The object identifier.
 *  @param oListHist
 *   The list of Histories.
 */
     virtual HRESULT QueryAFLHistoryByObject(const SEQUENCE(octet)&           iId,
                                             CATLISTV(CATIVpmAFLHistory_var)& oListHist)=0;

/**
 * Queries for Xeffs by Configurable Objects.
 *  @param iCO
 *   The list of Configurable Objects.
 *  @param oListEff
 *   The list of Xeffs.
 * @nodoc
 */
     virtual HRESULT QueryAFLXEffectivityByCO(const CATLISTV(CATIConfigurableObject_var)& iCO,
                                              CATLISTV(CATIVpmAFLXeff_var)&               oListEff)=0;

/**
 * Queries for Actions by Xeffs.
 *  @param oActions
 *   The list of Actions
 *  @param iEntityName
 *   The entity name.
 *  @param iXDomain
 *   The domain name.
 *  @param iORList
 *   The list of Normal values.
 *  @param iPred
 *   The predicate.
 */
     virtual HRESULT QueryAFLActionsByXeff(CATListValCATIVpmAFLAction_var&          oActions,
                                           const CATUnicodeString&                  iEntityName="",
                                           const CATUnicodeString&                  iXDomain=NULL,
                                           const CATListValCATICfgNormalValue_var&  iORList=NULL,
                                           const CATIVpmPredicate_var&              iPred=NULL_var)=0;

/**
 * Retrieves the current time from the database.
 *  @param oTime
 *   The time.
 *
 *  @param i
 *    0 to have an interval of at least between 2 calls, 1 to have the exact date
 */
     virtual HRESULT GetDatabaseDate(CATTime& oTime, const int i=0)=0;

/**
 * Deletes an Action.
 *  @param iAction
 *   The Action to delete.
 */
     virtual HRESULT ForceDestroyAction(const CATIVpmAFLAction_var& iAction)=0; 


// ==========================
// Condition Functions
// ==========================

/**
 * Check whether a lifecycle condition is satisfied or not.
 *  @param iConditionName
 *   The condition name declared in the lifecycle definition.
 *  @param iGraphPredicatList
 *   The list of predicates associated with the condition.
 *  @param oFailingObj
 *   If the condition is not satisfied, the object that most likely 
 *   caused the failure is returned. 
 */
    virtual HRESULT CheckCondition(const CATUnicodeString& iConditionName,
                           const CATLISTV(CATBaseUnknown_var)& iGraphPredicatList,
                           CATIVpmFactoryObject_var& oFailingObj)=0;
 
/**
 * Compare two values using an operator..
 *  @param iValue1
 *   The value to check.
 *  @param iOp
 *   The operator to be used for comparison.
 *   <br><b>Legal values</b>:
 *   <tt>== | != | >= | <= | > | < | ISNULL | ISNOTNULL | INSIDE | NOTINS | IN_ENUM | NOT_IN_ENUM </tt>
 *  @param iValue2
 *   The value to compare to the first value. 
 */
     virtual HRESULT CheckValue(CATUnicodeString& iValue1,
				                const CATUnicodeString& iOp,
				                CATUnicodeString& iValue2)=0;
     
// ==========================
// AFL Pool Functions
// ==========================

/**
 * Put an object in the AFL pool.
 *  @param iEntryKey
 *   The entry key to the pool.
 *  @param iObject
 *   The object to put in the pool.
 *  @return
 *   A HRESULT value. 
 *    <br><b>Legal values</b>:
 *    <dl>
 *      <dt>S_OK</dt>
 *      <dd>Operation succeeded </dd>
 *      <dt>E_INVALIDARG</dt>
 *      <dd>The object passed is not valid </dd>
 *      <dt>E_FAIL</dt>
 *      <dd>Other problem occured during the operation </dd>
 *    </dl>		
 */
     virtual HRESULT PutObjectInAFLPool(const CATUnicodeString& iEntryKey,
                                        const CATIVpmFactoryObject_var& iObject)=0;

/**
 * Retrieve an object from the AFL pool.
 *  @param iEntryKey
 *   The entry key to the pool.
 *  @param oObject
 *   The object.
 *  @return
 *   A HRESULT value. 
 *    <br><b>Legal values</b>:
 *    <dl>
 *      <dt>S_OK</dt>
 *      <dd>Object is found for the entry </dd>
 *      <dt>S_FALSE</dt>
 *      <dd>Entry or object not found in the pool</dd>
 *      <dt>E_FAIL</dt>
 *      <dd>Other problem occured during the operation </dd>
 *    </dl>		
 */
     virtual HRESULT GetObjectFromAFLPool(const CATUnicodeString& iEntryKey,
                                          CATIVpmFactoryObject_var& oObject)=0;

/**
 * Put a list of objects in the AFL pool.
 *  @param iEntryKey
 *   The entry key to the pool.
 *  @param iObject
 *   The object list to put in the pool.
 *  @return
 *   A HRESULT value. 
 *    <br><b>Legal values</b>:
 *    <dl>
 *      <dt>S_OK</dt>
 *      <dd>Operation succeeded </dd>
 *      <dt>E_INVALIDARG</dt>
 *      <dd>Object list is empty </dd>
 *      <dt>E_FAIL</dt>
 *      <dd>Other problem occured during the operation </dd>
 *    </dl>		
 */
     virtual HRESULT PutObjectsInAFLPool(const CATUnicodeString& iEntryKey,
                                         const CATLISTV(CATIVpmFactoryObject_var)& iObjectList)=0;

/**
 * Retrieve a list of objects from the AFL pool.
 *  @param iEntryKey
 *   The entry key to the pool.
 *  @param oObject
 *   The object.
 *  @return
 *   A HRESULT value. 
 *    <br><b>Legal values</b>:
 *    <dl>
 *      <dt>S_OK</dt>
 *      <dd>Object is found for the entry </dd>
 *      <dt>S_FALSE</dt>
 *      <dd>Entry not found in the pool</dd>
 *      <dt>E_FAIL</dt>
 *      <dd>Other problem occured during the operation </dd>
 *    </dl>		
 */
     virtual HRESULT GetObjectsFromAFLPool(const CATUnicodeString& iEntryKey,
                                           CATLISTV(CATIVpmFactoryObject_var)& oObjectList)=0;

/**
 * Put an Action in the AFL pool.
 *  @param oAction
 *   The Action.
 *  @return
 *   A HRESULT value. 
 *    <br><b>Legal values</b>:
 *    <dl>
 *      <dt>S_OK</dt>
 *      <dd>Operation succeeded </dd>
 *      <dt>E_INVALIDARG</dt>
 *      <dd>The action passed is not valid </dd>
 *      <dt>E_FAIL</dt>
 *      <dd>Other problem occured during the operation </dd>
 *    </dl>		
 */
     virtual HRESULT PutActionInAFLPool(const CATIVpmAFLAction_var& iAction)=0;

/**
 * Retrieve an Action from the Simple variable pool.
 *  @param oAction
 *   The Action.
 *  @return
 *   A HRESULT value. 
 *    <br><b>Legal values</b>:
 *    <dl>
 *      <dt>S_OK</dt>
 *      <dd>Action is found for the entry </dd>
 *      <dt>S_FALSE</dt>
 *      <dd>Entry or action not found in the pool</dd>
 *      <dt>E_FAIL</dt>
 *      <dd>Other problem occured during the operation </dd>
 *    </dl>		
 */
     virtual HRESULT GetActionFromAFLSimplePool(CATIVpmAFLAction_var& oAction)=0;

/**
 * Push a list of persons in the AFL pool.
 *  @param iPoolName
 *   The pool entry name.
 *  @param iListObj
 *   The list of persons to push in.
 */
     virtual HRESULT PutPersonsInAFLPool(const CATUnicodeString& iPoolName,
					                               const CATLISTV(CATBaseUnknown_var)& iListObj)=0;
     

/**
 * Retrieves a list of person from the AFL pool.
 *  @param iPoolName
 *   The pool entry name.
 *  @param iListObj
 *   The list of persons retrieved from the pool.
 */
     virtual HRESULT GetPersonsFromAFLPool(const CATUnicodeString& iPoolName,
						                               CATLISTV(CATBaseUnknown_var)& oListObj)=0;

/**
 * Retrieves a Message from a Tag.
 *  @param iTAG
 *   The Tag.
 *  @param oExpression
 *   The Message.
 */
     virtual HRESULT GetMessageFromTag(const CATUnicodeString& iTAG,
                                       CATUnicodeString&       oExpression)=0;

/**
 * Retrieves a list of Objects from a Path.
 *  @param iPathToObjs
 *   The Path.
 *  @param oListObjects
 *   The list of Objects.
 */
     virtual HRESULT GetObjectsFromPath(const CATUnicodeString&             iPathToObjs,
                                        CATLISTV(CATIVpmFactoryObject_var)& oListObjects)=0;


// ====================================
// OBSOLETE IN V5R5
// ===================================

/**
 * obsolete in V5R5  ( ASSERT ) DO NOT USE
 * Instead use ENOVILifeCycleObject->Remove() on the link
 **/        
     virtual HRESULT RemoveLink(CATIVpmAFLLink_var& iLink)=0 ;
   					  

/**
 * obsolete in V5R5  ( ASSERT ) DO NOT USE
 * Instead use ENOVILifeCycleObject->Remove() on the Action
 **/        
     virtual HRESULT DestroyAction(CATIVpmAFLAction_var& iAction)=0 ; 

/** @nodoc
 * obsolete in V5R5  ( ASSERT ) DO NOT USE
 * Instead use ENOVIObjectInfo interface.
 **/        
     virtual HRESULT GetVpmObjectAttributeNames(const CATUnicodeString& iEntityName,
                                                CATListOfVPMCA&         oVPMCAList)=0;
/**
 * obsolete in V5R5  ( ASSERT ) DO NOT USE
 * Instead use ENOVIObjectInfo interface.
 **/        
     virtual HRESULT CreateAffectedObject(const CATUnicodeString&       iTypeAffObj,
                                          CATIVpmAFLAffectedObject_var& oAffObj,
                                          const CATUnicodeString&       iGraphCusto="")=0;

/**
 * Retrieves the actions using a list of mods.
 *  @param iListMod
 *   List of modification.
 *  @param oLisAction
 *   List of all the action using at least one the modification given as input.
 */
    virtual HRESULT GetActionFromMod(const CATListOfCATICfgModification_var &iListMod, CATLISTV(CATIVpmAFLAction_var)  &oListAction) const = 0;

};
CATDeclareHandler(CATIVpmAFLManager, CATBaseUnknown);
#endif //CATIVpmAFLManager_H

