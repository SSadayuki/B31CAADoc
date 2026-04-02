#ifndef CATIVpmGraphAdministrator_H
#define CATIVpmGraphAdministrator_H
// =================================================================   
// VPM (c) Copyright Dassault Systemes 1999                           
// -----------------------------------------------------------------   
// Macro: CATIVpmGraphAdministrator.h                                      
// -----------------------------------------------------------------   
// Content:  VPM -> Graph Administrator Management 
//                  Interface witch provide all methods to read, create
//                  navigate and write a graph instance. 
// =================================================================   
// Historique:                                                          
// Creation : 99/04/14                                           AHC 
// =================================================================   
//

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATLISTV_CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATIVpmGraphMng.h"
#include "GUIDVPMInterfaces.h"
//
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIVpmGraphAdministrator ;
#else
extern "C" const IID IID_CATIVpmGraphAdministrator ;
#endif
//
class CATIVpmFactoryManager_var;
class CATIVpmFolder_var;
class CATIVpmGraphInstance_var;
class CATIVpmGraphStatus_var  ;
class CATIVpmGraphTransition_var ; 
class CATIVpmGraphOperation_var ;
class CATIVpmGraphCondition_var ;
class CATIVpmGraphPredicat_var ;
class CATIVpmGraphEnumPredicat_var ;
class CATIVpmGraphCommand_var ;

/**
 * Interface which provides means to read, create, 
 * navigate and write a graph instance.
 */
class ExportedByGUIDVPMInterfaces CATIVpmGraphAdministrator: 
                                   public CATIVpmGraphMng 
   {
   //
   CATDeclareInterface;
   //
   public:
   //-----------------------------------------------------------------
   /**
    * Get the current Graph Folder.
    * @param oGraphFolder -
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Folder is created</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>An error occurs during the process</dd>
    *   </dl>
    *
    */
   /** @nodoc */
   virtual HRESULT GetGraphFolder 
                   ( CATIVpmFolder_var&  oGraphFolder  ) = 0  ;

   //----------------------------------------------------------------
   /**
    * Create a Graph Instance.
    * @param iGraphInstanceName -
    * @param iRootStatusName -
    * @param iRootSubStatusName -
    * @param oGraphInstance -
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Creation is successfull</dd>
    *     <dt>S_FALSE</dt>
    *     <dd>The instance is already created. It returns the GraphInstanceHandler</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>An error occurs during the process</dd>
    *   </dl>
    *
    */
   /** @nodoc */
   virtual HRESULT CreateGraphInstance 
                  (const CATUnicodeString& iGraphInstanceName ,
                   const CATUnicodeString& iRootStatusName    ,
                   const CATUnicodeString& iRootSubStatusName , 
                   CATIVpmGraphInstance_var&  oGraphInstance     ) = 0  ;

   //-----------------------------------------------------------------
   /**
    * Remove a Graph Instance.
    * @param iGraphInstance -
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Remove is successfull</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>An error occurs during the process</dd>
    *   </dl>
    *
    */
   /** @nodoc */
   virtual HRESULT RemoveGraphInstance 
                   ( const CATIVpmGraphInstance_var&  iGraphInstance  ) = 0  ;

   //-----------------------------------------------------------------
   /**
    * Get all Graph Instances.
    * @param oGraphInstanceList -
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Graph instances exist in datatabase</dd>
    *     <dt>S_FALSE</dt>
    *     <dd>No Graph instances in datatabase</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>An error occurs during the process</dd>
    *   </dl>
    *
    */
   virtual HRESULT GetListOfGraphInstances 
                   (CATLISTV(CATBaseUnknown_var)&  oGraphInstanceList ) = 0 ;

   //-----------------------------------------------------------------
   /**
    * Create a transition.
    * @param iTerminal -
    * @param oGraphTransition -
    * @param iTransitionIndex -
    * @param iScanMode -
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Creation is successfull</dd>
    *     <dt>S_FALSE</dt>
    *     <dd>The instance is already created. It returns the GraphTransitionHandler</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>An error occurs during the process</dd>
    *   </dl>
    *
    */
   /** @nodoc */
   virtual HRESULT CreateTransition 
                  ( const CATUnicodeString& iTerminal              ,
                    CATIVpmGraphTransition_var& oGraphTransition   , 
                    const int&              iTransitionIndex = 1   ,
                    const int&              iScanMode        = 0   ) = 0 ;
 
   //-----------------------------------------------------------------
   /**
    * Get all transitions.
    * @param oTransistionList -
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Transitions exist in datatabase</dd>
    *     <dt>S_FALSE</dt>
    *     <dd>No Transition in datatabase</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>An error occurs during the process</dd>
    *   </dl>
    *
    */
   virtual HRESULT GetListOfTransitions 
                   (CATLISTV(CATBaseUnknown_var)&  oTransistionList ) = 0 ;

   //-----------------------------------------------------------------
   /**
    * Create an Operation.
    * @param iOperationName -
    * @param oGraphTransition -
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Creation is successfull</dd>
    *     <dt>S_FALSE</dt>
    *     <dd>The instance is already created. It returns the GraphOperationHandler</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>An error occurs during the process</dd>
    *   </dl>
    *
    */
    /** @nodoc */
   virtual HRESULT CreateOperation 
                  ( const CATUnicodeString& iOperationName     ,
                    CATIVpmGraphOperation_var&  oGraphOperation ) = 0  ;

   //-----------------------------------------------------------------
   /**
    * Get all operations.
    * @param oOperationList -
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Operations exist in datatabase</dd>
    *     <dt>S_FALSE</dt>
    *     <dd>No Operation in datatabase</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>An error occurs during the process</dd>
    *   </dl>
    *
    */
   virtual HRESULT GetListOfOperations 
                   (CATLISTV(CATBaseUnknown_var)&  oOperationList ) = 0 ;

   //-----------------------------------------------------------------
   /**
    * Create an Predicate.
    * @param iPredicatName -
    * @param iPathAttributeName -
    * @param iOperatorName -
    * @param iRelatedValue -
    * @param oGraphPredicat -
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Creation is successfull</dd>
    *     <dt>S_FALSE</dt>
    *     <dd>The instance is already created. It returns the GraphPredicatHandler</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>An error occurs during the process</dd>
    *   </dl>
    *
    */
   virtual HRESULT CreatePredicat 
                  ( const CATUnicodeString& iPredicatName      ,
                    const CATUnicodeString& iPathAttributeName ,
                    const CATUnicodeString& iOperatorName      ,
                    const CATUnicodeString& iRelatedValue      ,
                    CATIVpmGraphPredicat_var&   oGraphPredicat     ) = 0  ;

   //-----------------------------------------------------------------
   /**
    * Get all Predicates.
    * @param oPredicatList -
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Predicates exist in datatabase</dd>
    *     <dt>S_FALSE</dt>
    *     <dd>No Predicate in datatabase</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>An error occurs during the process</dd>
    *   </dl>
    *
    */
   virtual HRESULT GetListOfPredicats 
                   (CATLISTV(CATBaseUnknown_var)&  oPredicatList ) = 0 ;

   //-----------------------------------------------------------------
   /**
    * Create a Condition.
    * @param iConditionName -
    * @param oGraphCondition -
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Creation is successfull</dd>
    *     <dt>S_FALSE</dt>
    *     <dd>The instance is already created. It returns the GraphConditionHandler</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>An error occurs during the process</dd>
    *   </dl>
    *
    */
    /** @nodoc */
   virtual HRESULT CreateCondition 
                  ( const CATUnicodeString& iConditionName     ,
                    CATIVpmGraphCondition_var&  oGraphCondition    ) = 0  ;

   //-----------------------------------------------------------------
   /**
    * Get all conditions.
    * @param oConditionList -
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Conditions exist in datatabase</dd>
    *     <dt>S_FALSE</dt>
    *     <dd>No Condition in datatabase</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>An error occurs during the process</dd>
    *   </dl>
    *
    */
   virtual HRESULT GetListOfConditions 
                   (CATLISTV(CATBaseUnknown_var)&  oConditionList ) = 0 ;

   //-----------------------------------------------------------------
   /**
    * Create an Command.
    * @param iCommandName -
    * @param oGraphCommand -
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Creation is successfull</dd>
    *     <dt>S_FALSE</dt>
    *     <dd>The instance is already created. It returns the GraphCommandHandler</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>An error occurs during the process</dd>
    *   </dl>
    *
    */
   /** @nodoc */
   virtual HRESULT CreateCommand 
                  ( const CATUnicodeString& iCommandName       ,
                    CATIVpmGraphCommand_var&    oGraphCommand      ) = 0  ;

   //-----------------------------------------------------------------
   /**
    * Get all commands.
    * @param oCommandList -
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Commands exist in datatabase</dd>
    *     <dt>S_FALSE</dt>
    *     <dd>No Command in datatabase</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>An error occurs during the process</dd>
    *   </dl>
    *
    */
   virtual HRESULT GetListOfCommands 
                   (CATLISTV(CATBaseUnknown_var)&  oCommandList ) = 0 ;

   //-----------------------------------------------------------------
   /**
    * Create an EnumPredicat.
    * @param iEnumPredicatName -
    * @param iFirstValue -
    * @param oGraphPredicat -
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Creation is successfull</dd>
    *     <dt>S_FALSE</dt>
    *     <dd>The instance is already created. It returns the GraphEnumPredicat</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>An error occurs during the process</dd>
    *   </dl>
    *
    */
    /** @nodoc */
   virtual HRESULT CreateEnumPredicat 
                  ( const CATUnicodeString& iEnumPredicatName      ,
                    const CATUnicodeString& iFirstValue            , 
                    CATIVpmGraphEnumPredicat_var&   oGraphPredicat ) = 0  ;

   //-----------------------------------------------------------------
   /**
    * Get all EnumPredicats.
    * @param oPredicatList -
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>EnumPredicats exist in datatabase</dd>
    *     <dt>S_FALSE</dt>
    *     <dd>No EnumPredicat in datatabase</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>An error occurs during the process</dd>
    *   </dl>
    *
    */
   virtual HRESULT GetListOfEnumPredicats 
                   (CATLISTV(CATBaseUnknown_var)&  oPredicatList ) = 0 ;


   };
//-----------------------------------------------------------------
// Handler definition 
//-----------------------------------------------------------------
   CATDeclareHandler(CATIVpmGraphAdministrator,CATIVpmGraphMng);
//
#endif
