#ifndef CATIVpmGraphMng_H
#define CATIVpmGraphMng_H
// =================================================================   
// VPM (c) Copyright Dassault Systemes 1997                           
// -----------------------------------------------------------------   
// Macro: CATIVpmGraphMng.h                                      
// -----------------------------------------------------------------   
// Content:  VPM -> Graph Definition Management 
//                  Interface which provide the Rules behaviours 
// =================================================================   
// Historique:                                                          
// Creation : 97/04/14                                           AHC 
// =================================================================   
//

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATListOfCATUnicodeString.h"
#include "GUIDVPMInterfaces.h"
//
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIVpmGraphMng ;
#else
extern "C" const IID IID_CATIVpmGraphMng ;
#endif
//
class CATIVpmGraphStatus_var  ;
class CATIVpmGraphTransition_var ;
class CATIVpmGraphCondition_var ;
class CATIVpmGraphPredicat_var ;
class CATIVpmGraphCommand_var ;

/**
 * <b>role</b>: This class enables to access to parameters of the graph manager.
 *
 * <ul>
 * <li>FactDatabase</li>: Name of the pool to scan by the rule engine: "ALL" means analyze all pools defined in memory
 * <li>Status</li>:       State or the name of a specific rule
 * <li>Terminal</li>:     Event to trigger the rules engine 
 * <li>Transition</li>:   Mechanism to change the status of the system  
 * <li>Condition</li>:    Mechanism to validate and allow the transition  
 * <li>Operation</li>:    Logical function to execute after the transition   
 * <li>Command</li>:      Associated program to execute through an operation
 * </ul>
 */

class ExportedByGUIDVPMInterfaces CATIVpmGraphMng : public CATBaseUnknown 
   {
   //
   CATDeclareInterface;
   //
   public:
   //----------------------------------------------------------------
   /**
    * @deprecated V5R14
    * Set the FactDatabase name.
    * @param iFactDatabase - name of the FactDatabase
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *   </dl>
    *
    */
   virtual HRESULT SetFactDatabase 
                    (const CATUnicodeString& iFactDatabase ) = 0  ;
 
   //----------------------------------------------------------------
   /**
    * @deprecated V5R14
    * Get the FactDatabase name. 
    * @param oFactDatabase - name of the FactDatabase (ALL means all pool must be analyzed and flushed)
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *   </dl>
    *
    */
   virtual HRESULT GetFactDatabase 
                 ( CATUnicodeString& oFactDatabase ) const = 0;

   //-----------------------------------------------------------------
   /**
    * Get the number a transitions from a initial status to a terminal one.
    * @param iStatus - Name of initial status
    * @param iTerminal - Name of terminal status
    * @param oTerminalCounter - Number of transitions
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>At least one transition exists</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>No transition found</dd>
    *   </dl>
    *
    */
   virtual HRESULT ExistTransition (const CATUnicodeString& iStatus  , 
                                    const CATUnicodeString& iTerminal,
                                    long& oTerminalCounter           ) = 0  ;

   //----------------------------------------------------------------
   // Set the current object 
   //-----------------------------------------------------------------
   /**
    * Set the current object. 
    * @param iObject - 
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *   </dl>
    *
    */
   virtual HRESULT SetCurrentObject 
                  (const CATBaseUnknown_var& iObject) = 0;

   //-----------------------------------------------------------------
   /**
    * @deprecated V5R14
    * Set the scan mode. 
    * @param iScanMode - 
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *   </dl>
    *
    */
   virtual HRESULT SetScanMode
                  (int iScanMode = 0 )  = 0;

   //-----------------------------------------------------------------
   /**
    * Put the GraphType. 
    * @param iValue - 
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *   </dl>
    *
    */
   virtual HRESULT PutGraphType 
                  (const CATUnicodeString& iValue )  = 0;

   //-----------------------------------------------------------------
   /**
    * Get the GraphType. 
    * @param oValue - 
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *   </dl>
    *
    */
   virtual HRESULT GetGraphType
                  (CATUnicodeString& oValue ) const = 0;

   //----------------------------------------------------------------
   // Get the GraphName 
   //-----------------------------------------------------------------
   /**
    * Get the GraphName. 
    * @param oValue - 
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *   </dl>
    *
    */
   virtual HRESULT GetGraphName
                  (CATUnicodeString& oValue ) const = 0;

   //----------------------------------------------------------------
   // Init the status : return the first status 
   //-----------------------------------------------------------------
   /**
    * Initialize the status and return the first status. 
    * @param oValue -  Initial status found
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Only one status exists</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>Less or more than one have been found</dd>
    *   </dl>
    *
    */
   virtual HRESULT Init 
                  (CATUnicodeString& oValue )  = 0;

   //-----------------------------------------------------------------
   /**
    * Get list of graph names.
    * @param oListOfGraph - list of names
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>At least one graph found</dd>
    *     <dt>S_FALSE</dt>
    *     <dd>No graph found</dd>
    *   </dl>
    *
    */
   virtual HRESULT GetListOfGraphName 
                  (CATLISTV(CATUnicodeString)& oListOfGraph ) const = 0;

   //-----------------------------------------------------------------
   /**
    * Get list of statuses.
    * @param oListOfStatus - list of statuses
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *   </dl>
    *
    */
   virtual HRESULT GetListOfStatus 
                  (CATLISTV(CATUnicodeString)& oListOfStatus ) const = 0;

   //-----------------------------------------------------------------
   /**
    * Get status definition.
    * @param iStatusName - Name of the status
    * @param oGraphType - Type of graph
    * @param oSubState - Name of SubStatus
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Unique status in the database</dd>
    *     <dt>S_FALSE</dt>
    *     <dd>No status in the datatbase</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>Multiple status in the datatbase</dd>
    *   </dl>
    *
    */
   virtual HRESULT GetStatusDefinition 
                  ( const CATUnicodeString& iStatusName , 
                    CATUnicodeString&       oGraphType  ,
                    CATUnicodeString&       oSubState   ) const = 0;

   //-----------------------------------------------------------------
   /**
    * Get status definition.
    * @param iStatusName - Name of the status
    * @param oGraphStatus - 
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Unique status in the database</dd>
    *     <dt>S_FALSE</dt>
    *     <dd>No status in the datatbase</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>Multiple statuses in the datatbase</dd>
    *   </dl>
    *
    */
   virtual HRESULT GetStatusDefinition 
                  ( const CATUnicodeString& iStatusName , 
                    CATIVpmGraphStatus_var& oGraphStatus ) const  = 0;
 
   //-----------------------------------------------------------------
   /**
    * Get list of terminals of an initial status.
    * @param iStatus - initial status
    * @param oListOfTerminals - list of terminals
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *   </dl>
    *
    */
   virtual HRESULT GetListOfTerminals 
                  ( const CATUnicodeString&     iStatus          ,
                    CATLISTV(CATUnicodeString)& oListOfTerminals ) const = 0;

   //-----------------------------------------------------------------
   /**
    * Get transition definition.
    * @param iStatusName - initial status
    * @param iTerminal - name of terminal status
    * @param iTransitionIndex - index of transition
    * @param oScanMode - 
    * @param oNextState -
    * @param oNextTermnal -
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>One transition found in the database</dd>
    *     <dt>S_FALSE</dt>
    *     <dd>No transition in the database</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>Multiple transitions in the database</dd>
    *   </dl>
    *
    */
   virtual HRESULT GetTransitionDefinition 
                  ( const CATUnicodeString& iStatusName      , 
                    const CATUnicodeString& iTerminal        , 
                    const long&             iTransitionIndex ,
                    long&                   oScanMode        ,
                    CATUnicodeString&       oNextState       ,
                    CATUnicodeString&       oNextTermnal     ) const = 0;

   //-----------------------------------------------------------------
   /**
    * Get transition definition.
    * @param iStatusName - initial status
    * @param iTerminal - name of terminal status
    * @param iTransitionIndex - index of transition
    * @param oGraphTransition - 
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>One transition found in the database</dd>
    *     <dt>S_FALSE</dt>
    *     <dd>No transition in the database</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>Multiple transitions in the database</dd>
    *   </dl>
    *
    */
   /** @nodoc */
   virtual HRESULT GetTransitionDefinition 
                  ( const CATUnicodeString&       iStatusName      , 
                    const CATUnicodeString&       iTerminal        , 
                    const long&                   iTransitionIndex ,
                    CATIVpmGraphTransition_var&   oGraphTransition ) const= 0;

   //-----------------------------------------------------------------
   /**
    * Get operation.
    * @param iStatus - initial status
    * @param iTerminal - name of terminal status
    * @param iIndexOfTransition - index of transition
    * @param oOperation - name of the operation
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>One operation found in the database</dd>
    *     <dt>S_FALSE</dt>
    *     <dd>No operation in the database</dd>
    *   </dl>
    *
    */
   virtual HRESULT GetOperation 
                 ( const CATUnicodeString&     iStatus            ,
                   const CATUnicodeString&     iTerminal          , 
                   const long&                 iIndexOfTransition , 
                   CATUnicodeString&           oOperation         ) const = 0;

   //-----------------------------------------------------------------
   /**
    * Get condition.
    * @param iStatus - initial status
    * @param iTerminal - name of terminal status
    * @param iIndexOfTransition - index of transition
    * @param oCondition - name of condition 
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>One condition found in the database</dd>
    *     <dt>S_FALSE</dt>
    *     <dd>No condition in the database</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>Multiple condition in the database</dd>
    *   </dl>
    *
    */
   virtual HRESULT GetCondition 
                  ( const CATUnicodeString&    iStatus            ,
                    const CATUnicodeString&    iTerminal          , 
                    const long&                iIndexOfTransition , 
                    CATUnicodeString&          oCondition         ) const = 0;

   //-----------------------------------------------------------------
   /**
    * Get condition.
    * @param iStatus - initial status
    * @param iTerminal - name of terminal status
    * @param iIndexOfTransition - index of transition
    * @param oGraphCondition -  
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>One condition found in the database</dd>
    *     <dt>S_FALSE</dt>
    *     <dd>No condition in the database</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>Multiple condition in the database</dd>
    *   </dl>
    *
    */
   /** @nodoc */
   virtual HRESULT GetCondition 
                  ( const CATUnicodeString&    iStatus            ,
                    const CATUnicodeString&    iTerminal          , 
                    const long&                iIndexOfTransition , 
                    CATIVpmGraphCondition_var& oGraphCondition    ) const = 0;

   //----------------------------------------------------------------
   /**
    * Get list of predicates.
    * @param iStatus - initial status
    * @param iTerminal - name of terminal status
    * @param iIndexOfTransition - index of transition
    * @param oGraphPredicatList -  
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Predicates found in the database</dd>
    *     <dt>S_FALSE</dt>
    *     <dd>No predicate in the database</dd>
    *   </dl>
    *
    */
   virtual HRESULT GetCondition 
                  ( const CATUnicodeString&    iStatus            ,
                    const CATUnicodeString&    iTerminal          , 
                    const long&                iIndexOfTransition , 
                    CATLISTV(CATBaseUnknown_var)&  oGraphPredicatList)const = 0;

   //-----------------------------------------------------------------
   /**
    * Get list of commands.
    * @param iOperation - name of the operation
    * @param oListOfCommands -  
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Commands found in the database</dd>
    *     <dt>S_FALSE</dt>
    *     <dd>No command in the database</dd>
    *   </dl>
    *
    */
   virtual HRESULT GetListOfCommands 
                 ( const CATUnicodeString&     iOperation      , 
                   CATLISTV(CATUnicodeString)& oListOfCommands ) const = 0;

   //-----------------------------------------------------------------
   /**
    * Get the command definition.
    * @param iCommandName - name of the command
    * @param oParameters -  
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Command found in the database</dd>
    *     <dt>S_FALSE</dt>
    *     <dd>Command not found in the database</dd>
    *   </dl>
    *
    */
   virtual HRESULT GetCommandDefinition 
                 ( const CATUnicodeString&     iCommandName    , 
                   CATUnicodeString&           oParameters     ) const = 0;

   //-----------------------------------------------------------------
   /**
    * Get the command definition.
    * @param iCommandName - name of the command
    * @param oGraphCommand -  
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Command found in the database</dd>
    *     <dt>S_FALSE</dt>
    *     <dd>Command not found in the database</dd>
    *   </dl>
    *
    */
   /** @nodoc */
   virtual HRESULT GetCommandDefinition 
                 ( const CATUnicodeString&     iCommandName    , 
                   CATIVpmGraphCommand_var&    oGraphCommand   ) const = 0;

   //-----------------------------------------------------------------
   /**
    * Get condition. 
    * @param iCommandName - name of the command
    * @param oGraphPredicatList - list of predicates
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Command found in the database</dd>
    *     <dt>S_FALSE</dt>
    *     <dd>Command not found in the database</dd>
    *   </dl>
    *
    */
   virtual HRESULT GetCondition 
                 ( const CATUnicodeString&     iCommandName      , 
                   CATLISTV(CATBaseUnknown_var)&  oGraphPredicatList)const = 0;

   //----------------------------------------------------------------
   // Transition Simulation
   //-----------------------------------------------------------------
  /**
    * Simulation of a transition. 
    * @param iStatus - initial status of the transition
    * @param iTerminal - terminal status of the transition
    * @param oNextOperation - 
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Transition exists</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>Transition does not exist</dd>
    *   </dl>
    *
    */
   virtual HRESULT Simulate 
                 ( const CATUnicodeString&   iStatus        ,
                   const CATUnicodeString&   iTerminal      , 
                   CATUnicodeString&         oNextOperation )  = 0;

   //-----------------------------------------------------------------
  /**
    * Run a new step on the graph. 
    * @param iStatus - initial status of the transition
    * @param iTerminal - terminal status of the transition
    * @param oStatus - new status on the graph
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Transition runs correctly</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>Transition fails</dd>
    *   </dl>
    *
    */
   virtual HRESULT StepForward 
                 ( const CATUnicodeString&  iStatus   ,
                   const CATUnicodeString&  iTerminal ,
                         CATUnicodeString&  oStatus   )  = 0;

   //----------------------------------------------------------------
   // GetDashBoard  
   //-----------------------------------------------------------------
  /**
    * @deprecated V5R14
    * Get all information of Graph manager. 
    * @param oFactDatabaseName - 
    * @param oBeginStatus - 
    * @param oTerminal -
    * @param oCondition - 
    * @param oTransition - 
    * @param oTransitionIndex -
    * @param oOperation - 
    * @param oFinalStatus - 
    * @param oFinalSubStatus -
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *   </dl>
    *
    */

   virtual HRESULT GetDashBoard 
                 ( CATUnicodeString&  oFactDatabaseName  ,
                   CATUnicodeString&  oBeginStatus       ,
                   CATUnicodeString&  oTerminal          , 
                   CATUnicodeString&  oCondition         , 
                   CATUnicodeString&  oTransition        , 
                   long&              oTransitionIndex   , 
                   CATUnicodeString&  oOperation         , 
                   CATUnicodeString&  oFinalStatus       , 
                   CATUnicodeString&  oFinalSubStatus    )  = 0;
   //
   };
//-----------------------------------------------------------------
// Handler definition 
//-----------------------------------------------------------------
   CATDeclareHandler(CATIVpmGraphMng, CATBaseUnknown);
//
#endif
