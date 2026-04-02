// --------------------------------------------------------            
// VPM (c) Copyright Dassault Systemes 1996                           
// -------------------------------------------------------------       
// Responsable: AHC                                                     
// --------------------------------------------------------------       
// Macro: CATIVpmGraphPredicat.h                                        
// --------------------------------------------------------------       
// Historique:                                                          
// Creation : 96/09/12 > AHC                                           
// --------------------------------------------------------------       
//

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#ifndef CATIVpmGraphPredicat_H_
#define CATIVpmGraphPredicat_H_
//
// -------------------------------
// Include des classes utilisees 
// -------------------------------
//
#include "GUIDVPMInterfaces.h"
//
#include "CATBaseUnknown.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIVpmGraphPredicat ;
#else
extern "C" const IID IID_CATIVpmGraphPredicat ;
#endif
//

//
class CATUnicodeString;
class CATIVpmGraphEnumPredicat_var;
// -------------------------------
// Definition de la classe Interface
//

/**
 * This class enables to access to predicates of the
 * LCA lifecycle status graph model.
 */
class ExportedByGUIDVPMInterfaces CATIVpmGraphPredicat :public CATBaseUnknown  
  {
  //
  CATDeclareInterface ;
  //
  public:
  //
  //----------------------------------------------------------------
   /**
    * Get the predicate name. Equivalent to pool_variable Name.
    * @param oPredicatename - name of the predicate
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Condition is true</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>An error occurs during the execution</dd>
    *   </dl>
    *
    */
  virtual HRESULT GetName (CATUnicodeString& oPredicatename )= 0 ;
  
  //----------------------------------------------------------------
   /**
    * Get the query predicate.
    * @param oPredicate - 
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Done</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>An error occurs during the execution</dd>
    *   </dl>
    *
    */
  virtual HRESULT GetStringPredicate(CATUnicodeString& oPredicate )= 0 ;

  //----------------------------------------------------------------
   /**
    * Set the query predicate.
    * @param iPredicate - 
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Done</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>An error occurs during the execution</dd>
    *   </dl>
    *
    */
  virtual HRESULT SetStringPredicate(const CATUnicodeString& iPredicate ) = 0;

  //----------------------------------------------------------------
   /**
    * Get all information linked to the predicate.
    * @param oPredicateExpression - 
    * @param oPredicateOperator - 
    * @param oPredicateValue - 
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>The predicate is ok</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>An error occurs during the execution</dd>
    *   </dl>
    *
    */
  virtual HRESULT GetPredicateDefinition 
                ( CATUnicodeString& oPredicateExpression,  
                  CATUnicodeString& oPredicateOperator  , 
                  CATUnicodeString& oPredicateValue     )=0;
  
  //----------------------------------------------------------------
   /**
    * Set all information linked to the predicate.
    * @param iPredicateExpression - 
    * @param iPredicateOperator - 
    * @param iPredicateValue - 
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>The modification is ok</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>An error occurs during the execution</dd>
    *   </dl>
    *
    */
  virtual HRESULT SetPredicateDefinition 
                ( const CATUnicodeString& iPredicateExpression,
                  const CATUnicodeString& iPredicateOperator  ,
                  const CATUnicodeString& iPredicateValue     )=0;

  //----------------------------------------------------------------
   /**
    * Get enum predicat related to the predicat by $ENUM_.
    * @param oEnumPredicat - 
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>The enumPredicat exists</dd>
    *     <dt>S_FALSE</dt>
    *     <dd>The enumPredicat does not exist</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>An error occurs during the execution</dd>
    *   </dl>
    *
    */
  /** @nodoc */
  virtual HRESULT GetEnumPredicat 
                ( CATIVpmGraphEnumPredicat_var& oEnumPredicat ) = 0 ;
 
  //
  };
  CATDeclareHandler(CATIVpmGraphPredicat,CATBaseUnknown);
//
//
// --------------------------------------------------------------
// Fin de la macro                                                    
// --------------------------------------------------------------       
#endif

