#ifndef CATIVpmAggrAttribute_H
#define CATIVpmAggrAttribute_H
// =================================================================   
// VPM (c) Copyright Dassault Systemes 1997                           
// -----------------------------------------------------------------   
// Macro: CATIVpmAggrAttribute.h                                      
// -----------------------------------------------------------------   
// Content:  VPM -> Aggregat Attribut Definition 
//                  Provide information and values from an
//                  aggregate attribute 
// =================================================================   
// Historique:                                                          
// Creation : 98/05/24                                           AHC 
// =================================================================   
//
/**
*	@CAA2Level L1
*	@CAA2Usage U3
*/

#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATAttributeDescription.h"
#include "CORBAAnyDef.h"
#include "sequence_CORBAAny.h"
#include "CATListOfInt.h"
#include "GUIDVPMInterfaces.h"
//
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIVpmAggrAttribute ;
#else
extern "C" const IID IID_CATIVpmAggrAttribute ;
#endif

/**
 * This interface is implemented by all persistent ENOVIA objects, and provides means to read/write aggregate (multi-valuated) attribute values.
 */
class ExportedByGUIDVPMInterfaces CATIVpmAggrAttribute: public CATBaseUnknown 
   {
   CATDeclareInterface;
   //
   public:
/**
* @deprecated V5R14
*
*   Get the aggregat type name.
*   @param iAttributeName
*   The name of the attribute.
*   @param oTypeName
*   The aggregat type name.
*   @return
*   An HRESULT value. 
*   <br><b>Legal values</b>:
*   <dl>
*     <dt>S_OK</dt>
*     <dd>Attribute has been found</dd>
*     <dt>S_FALSE</dt>
*     <dd>Attribute is not valuated</dd>
*     <dt>E_FAIL</dt>
*     <dd>An error occured during the process or the attribute does not exist</dd>
*   </dl>		
*/
// Use CATIVpmAttribute::CheckAttribute to retrieve the VPMCA attribute key, then
// VPMCA::_AggrType to determine this information.

   virtual HRESULT  GetTypeName  
                   ( const CATUnicodeString& iAttributeName ,
                     CATUnicodeString& oTypeName            )  = 0 ;

/**
*   Get the number of values.
*   @param iAttributeName
*   The name of the attribute.
*   @param oCounter
*   Number of values found.
*   @return
*   An HRESULT value. 
*   <br><b>Legal values</b>:
*   <dl>
*     <dt>S_OK</dt>
*     <dd>At least one value has been found</dd>
*     <dt>S_FALSE</dt>
*     <dd>No value found</dd>
*     <dt>E_FAIL</dt>
*     <dd>An error occured during the process</dd>
*   </dl>		
*/
   virtual HRESULT  CountValues 
                  ( const CATUnicodeString& iAttributeName ,
                    long&   oCounter                        )  = 0 ;  

/**
*   Get the indexed value.
*   @param iAttributeName
*   The name of the attribute.
*   @param iIndex
*   Index.
*   @param oValue
*   The value found.
*   @return
*   An HRESULT value. 
*   <br><b>Legal values</b>:
*   <dl>
*     <dt>S_OK</dt>
*     <dd>Attribute is valuated</dd>
*     <dt>S_FALSE</dt>
*     <dd>Attribute is not valuated</dd>
*     <dt>E_FAIL</dt>
*     <dd>An error occured during the process or the attribute does not exist</dd>
*   </dl>		
*/
   virtual HRESULT  GetValue
                  ( const CATUnicodeString& iAttributeName ,
                    const long&              iIndex        ,  
                    CORBAAny&                oValue        )  = 0;

/**
*   Prepend a new Value.
*   @param iAttributeName
*   The name of the attribute.
*   @param iValue
*   The value to prepend.
*   @return
*   An HRESULT value. 
*   <br><b>Legal values</b>:
*   <dl>
*     <dt>S_OK</dt>
*     <dd>Operation OK</dd>
*     <dt>E_FAIL</dt>
*     <dd>An error occured during the process or the attribute does not exist</dd>
*   </dl>		
*/
   virtual HRESULT Prepend
                   (const CATUnicodeString& iAttributeName  ,
                    CORBAAny&               iValue          ) = 0;

/**
*   Append a new Value.
*   @param iAttributeName
*   The name of the attribute.
*   @param iValue
*   The value to append.
*   @return
*   An HRESULT value. 
*   <br><b>Legal values</b>:
*   <dl>
*     <dt>S_OK</dt>
*     <dd>Operation OK</dd>
*     <dt>E_FAIL</dt>
*     <dd>An error occured during the process or the attribute does not exist</dd>
*   </dl>		
*/
   virtual HRESULT Append
                   (const CATUnicodeString& iAttributeName  ,
                    CORBAAny&               iValue          ) = 0;

/**
*   Set a new Value at a given (existing) index, to replace the former value.
*   @param iAttributeName
*   The name of the attribute.
*   @param iIndex
*   The concerned index. NB: iIndex must not be higher than the aggregate size.
*   @param iValue
*   The value to add.
*   @return
*   An HRESULT value. 
*   <br><b>Legal values</b>:
*   <dl>
*     <dt>S_OK</dt>
*     <dd>Operation OK</dd>
*     <dt>E_FAIL</dt>
*     <dd>An error occured during the process or the attribute does not exist</dd>
*   </dl>		
*/
   virtual HRESULT AddValue
                   (const CATUnicodeString& iAttributeName  ,
                    const long&              iIndex          ,  
                    CORBAAny&                iValue         ) = 0;

/**
*   Remove a Value using an index.
*   @param iAttributeName
*   The name of the attribute.
*   @param iIndex
*   The concerned index.
*   @return
*   An HRESULT value. 
*   <br><b>Legal values</b>:
*   <dl>
*     <dt>S_OK</dt>
*     <dd>Operation OK</dd>
*     <dt>E_FAIL</dt>
*     <dd>An error occured during the process or the attribute does not exist</dd>
*   </dl>		
*/
   virtual HRESULT RemoveValue
                   (const CATUnicodeString& iAttributeName  ,
                    const long&              iIndex          ) = 0;

/**
*   Remove a Value.
*   @param iAttributeName
*   The name of the attribute.
*   @param iValue
*   The given value.
*   @return
*   An HRESULT value. 
*   <br><b>Legal values</b>:
*   <dl>
*     <dt>S_OK</dt>
*     <dd>Operation OK</dd>
*     <dt>E_FAIL</dt>
*     <dd>An error occured during the process or the attribute does not exist</dd>
*   </dl>		
*/
   virtual HRESULT RemoveValue
                   (const CATUnicodeString& iAttributeName  ,
                    CORBAAny&               iValue          ) = 0;


     /**
      * @nodoc
      * VPMCA-based versions of the above methods.
      * These are for the private use of Dassault Systemes provided frameworks.
      *
      */
   virtual HRESULT CountValues(VPMCA *iVpmca, long& oCounter)  = 0;
   /** @nodoc */
   virtual HRESULT GetValue(VPMCA *iVpmca, const long& iIndex, CORBAAny& oValue) = 0;
   /** @nodoc */
   virtual HRESULT Prepend(VPMCA *iVpmca, CORBAAny& iValue) = 0;
   /** @nodoc */
   virtual HRESULT Append(VPMCA *iVpmca, CORBAAny& iValue) = 0;
   /** @nodoc */
   virtual HRESULT AddValue(VPMCA *iVpmca, const long& iIndex, CORBAAny& iValue) = 0;
   /** @nodoc */
   virtual HRESULT RemoveValue(VPMCA *iVpmca, const long& iIndex) = 0;
   /** @nodoc */
   virtual HRESULT RemoveValue(VPMCA *iVpmca, CORBAAny& iValue) = 0;

};
//-----------------------------------------------------------------
// Handler definition 
//-----------------------------------------------------------------
   CATDeclareHandler(CATIVpmAggrAttribute, CATBaseUnknown);
//
#endif
