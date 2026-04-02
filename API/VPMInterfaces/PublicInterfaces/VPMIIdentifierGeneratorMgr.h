//
// COPYRIGHT DASSAULT SYSTEMES 1999
//=============================================================================
//
// Get an identifier guaranteed to be unique which is the concatenation of
// a CATUnicodeString (Size <240)
// a separator which is a  printable character not in [0..9] 
// this separator can only be ":" before V5R10.
//  and an integer. 
//=============================================================================
//=============================================================================
// 15/04/2002 JDC. support of padding and customized separators.
//=============================================================================
#include "GUIDVPMInterfaces.h"
#ifndef VPMIIDENTIFIERGENERATORMGR_H
#define VPMIIDENTIFIERGENERATORMGR_H

#include "CATIAV5Level.h"
#include "CATUnicodeString.h"
#include "CATListOfCATUnicodeString.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_VPMIIdentifierGeneratorMgr;
#else
extern "C" const IID IID_VPMIIdentifierGeneratorMgr;
#endif
/**
 * @CAA2Level L1 
 * @CAA2Usage U3
 */ 
class  ExportedByGUIDVPMInterfaces VPMIIdentifierGeneratorMgr: public CATBaseUnknown
{
  CATDeclareInterface;
public:
  /**
   * initialize the IdentifierGenerator.called by the VPMSession.
   * @param iMode [in]
   * not used.
   * @return
   * An HRESULT value.
   * <br><b>Legal values</b>
   * <dl>
   * <dt>S_OK</dt>
   * <dd>initialization is successful </dd>
   * <dt>E_FAIL</dt>
   * <dd>failure. (Database connection or settings pb)</dd>
   * </dl>
   */
  virtual HRESULT init (int iMode = 0)=0;
  
  /**
   * get an identifier guaranteed to be unique.
   * this identifier is the concatenation of a string, a separator ":",
   * and a integer.
   * the separator is ":".
   * @param iPrefix [in]
   * prefixes the identifier. his Size cannot be greater than xxx.
   * @param oIdentifier [out]
   * the identifier generated
   * @param iMaxSize [in]
   * the maximum size in byte of the identifier.
   * @param iForce [in]
   * iForce = 0 : if the size of oIdentifier is greater than iMaxSize
   * then return S_FALSE and nothing is done.
   * iForce = 1 : deprecated. return S_FALSE.
   * @return
   * An HRESULT value.
   * <br><b>Legal values</b>
   * <dl>
   * <dt>S_OK</dt>
   * <dd>identifier generated successfully</dd>
   * <dt>S_FALSE</dt>
   * <dd>illegal parameters or cannot generate a greater identifier</dd>
   * <dt>E_FAIL</dt>
   * <dd>system failure.</dd>
   * </dl>
   */
  virtual HRESULT  getIdentifier(const CATUnicodeString& iPrefix         ,
				 CATUnicodeString&       oIdentifier     ,
				 const int               iMaxSize    =230,
				 const int               iForce      =0  )=0;
  /**
   * get N consecutive identifiers guaranteed to be unique.
   * these identifiers are the concatenation of a string, a separator ":",
   * and a integer.
   * the separator is ":"
   * @param iPrefix [in]
   * prefixes the identifier. his Size cannot be greater than xxx.
   * @param iNbIdentifiers [in]
   * the number of identifiers to be generated.
   * @param olIdentifiers [out]
   * a list containing the identifiers returned.
   * @param iMaxSize [in]
   * the maximum size in byte of the identifier.
   * @param iForce [in]
   * iForce = 0 : if the size of oIdentifier is greater than iMaxSize
   * then return S_FALSE and nothing is done.
   * iForce = 1 : deprecated . return S_FALSE.
   * @return
   * An HRESULT value.
   * <br><b>Legal values</b>
   * <dl>
   * <dt>S_OK</dt>
   * <dd>identifiers generated successfully</dd>
   * <dt>S_FALSE</dt>
   * <dd>illegal parameters or cannot generate an identifier</dd>
   * <dt>E_FAIL</dt>
   * <dd>system failure.</dd>
   * </dl>
   */
  virtual HRESULT  getNConsecutiveIdentifier(const CATUnicodeString& cPrefix         ,
					     const int               iNbSuffix       ,
					     CATListOfCATUnicodeString& olIdentifiers,
					     const int               iMaxSize    =230,
					     const int               iForce      =0  )=0;
  
  /**
   * setPrefix. used to set the initial value for a prefix. 
   * the separator is supposed to be ":".
   * @param iPrefix [in]
   * the prefix of the identifier to set.
   * @param iValue [in]
   * the value for the next given suffixe.
   * @param iMaxSize [in]
   * size overflow.
   * @param iForce [in]
   * iForce=0 : if the current value for iPrefix is greater
   * than iValue return S_FALSE.                
   * if there is no current value or the current value is less 
   * than iValue the next given value will be iValue.
   * iForce=1 : set the value without controls
   * @return
   * An HRESULT value.
   * <br><b>Legal values</b>
   * <dl>
   * <dt>S_OK</dt>
   * <dd>the initial value is set</dd>
   * <dt>S_FALSE</dt>
   * <dd>illegal parameters or cannot set the initial value</dd>
   * <dt>E_FAIL</dt>
   * <dd>system failure.</dd>
   * </dl>
   */
  virtual HRESULT setPrefixValue(const CATUnicodeString&  iPrefix     ,
				 const int                iValue=0    ,
				 const int                iMaxSize=230,
				 const int                iForce=0    )=0;
  
  /**
   * free the resources.
   * @return  
   * An HRESULT value.
   * <br><b>Legal values</b>
   * <dl>
   * <dt>S_OK</dt>
   * <dd>the initial value is set</dd>
   * <dt>E_FAIL</dt>
   * <dd>system failure.</dd>
   * </dl>
   */
  virtual HRESULT  end()=0;

  //-- methods added to support padding in V5R9sp1
  // V5R10 methods will allow different separators.
  
  /**
   * get an identifier guaranteed to be unique.
   * this identifier is the concatenation of a string, a separator ,
   * and an integer.
   * @param iPrefix [in]
   * prefixes the identifier. his Size cannot be greater than xxx.
   * @param oIdentifier [out]
   * the identifier generated
   * @param iPadding [in]
   * pad (left side ) the integer part with 0. 
   * iPadding > 0:the size in char of the integer part is equal to iPadding.
   * iPadding =-1:no pad done.
   * @param iMaxSize [in]
   * the maximum size in byte of the identifier.
   * @return
   * An HRESULT value.
   * <br><b>Legal values</b>
   * <dl>
   * <dt>S_OK</dt>
   * <dd>identifier generated successfully</dd>
   * <dt>S_FALSE</dt>
   * <dd>illegal parameters or cannot generate a greater identifier</dd>
   * <dt>E_FAIL</dt>
   * <dd>system failure.</dd>
   * </dl>
   */
  virtual HRESULT  getIdentifier_pad(const CATUnicodeString& iPrefix         ,
				     CATUnicodeString&       oIdentifier     ,
				     const int               iPadding        ,
				     const int               iMaxSize        
				     )=0;
    
  /**
   * get N consecutive identifiers guaranteed to be unique.
   * these identifiers are the concatenation of a string, a separator ,
   * and an integer.
   * @param iPrefix [in]
   * prefixes the identifier. his Size cannot be greater than xxx.
   * @param iNbIdentifiers [in]
   * the number of identifiers to be generated.
   * @param olIdentifiers [out]
   * a list containing the identifiers returned.
   * @param iPadding [in]
   * pad (left side ) the integer part with 0. 
   * iPadding > 0:the size in char of the integer part is equal to iPadding.
   * iPadding =-1:no pad done.
   * @param iMaxSize [in]
   * the maximum size in byte of the identifier.
   * @return
   * An HRESULT value.
   * <br><b>Legal values</b>
   * <dl>
   * <dt>S_OK</dt>
   * <dd>identifiers generated successfully</dd>
   * <dt>S_FALSE</dt>
   * <dd>illegal parameters or cannot generate an identifier</dd>
   * <dt>E_FAIL</dt>
   * <dd>system failure.</dd>
   * </dl>
   */
  virtual HRESULT  getNConsecutiveIdentifier_pad(const CATUnicodeString& iPrefix         ,
						 const int               iNbIdentifiers       ,
						 CATListOfCATUnicodeString& olIdentifiers,
						 const int               iPadding,
						 const int               iMaxSize     
						 )=0;
  
  
  /**
   * setPrefix_pad. used to set the initial value for a prefix. 
   * @param iPrefix [in]
   * the prefix of the identifier to set.
   * @param iValue [in]
   * the value for the next given suffixe.
   * @param iPadding [in]
   * pad (left side ) the integer part with 0. 
   * iPadding > 0:the size in char of the integer part is equal to iPadding.
   * iPadding =-1:no pad done. 
   * @param iMaxSize [in]
   * size overflow.
   * @param iForce [in]
   * iForce=0 : if the current value for iPrefix is greater
   * than iValue return S_FALSE.                
   * if there is no current value or the current value is less 
   * than iValue the next given value will be iValue.
   * iForce=1 : set the value without controls
   * @return
   * An HRESULT value.
   * <br><b>Legal values</b>
   * <dl>
   * <dt>S_OK</dt>
   * <dd>the initial value is set</dd>
   * <dt>S_FALSE</dt>
   * <dd>illegal parameters or cannot set the initial value</dd>
   * <dt>E_FAIL</dt>
   * <dd>system failure.</dd>
   * </dl>
   */
  virtual HRESULT setPrefixValue_pad(const CATUnicodeString&  iPrefix   ,
				     const int                iValue    ,
				     const int                iPadding  ,
				     const int                iMaxSize  ,
				     const int                iForce    
				         )=0;
     




  //-- methods added to support different separators and padding.
  // methods available only in V5R10
#if defined(CATIAV5R10)
  /**
   * get an identifier guaranteed to be unique.
   * this identifier is the concatenation of a string, a separator ,
   * and an integer.
   * @param iPrefix [in]
   * prefixes the identifier. his Size cannot be greater than xxx.
   * @param iSeparator [in]
   * character separating the Prefix from the integer counter.
   * string size = 1. [0..9] are forbidden values.
   * @param oIdentifier [out]
   * the identifier generated
   * @param iPadding [in]
   * pad (left side ) the integer part with 0. 
   * iPadding > 0:the size in char of the integer part is equal to iPadding.
   * iPadding =-1:no pad done.
   * @param iMaxSize [in]
   * the maximum size in byte of the identifier.
   * @param iForce [in]
   * iForce = 0 : if the size of oIdentifier is greater than iMaxSize
   * then return S_FALSE and nothing is done.
   * iForce = 1 : deprecated . return S_FALSE.
   * @return
   * An HRESULT value.
   * <br><b>Legal values</b>
   * <dl>
   * <dt>S_OK</dt>
   * <dd>identifier generated successfully</dd>
   * <dt>S_FALSE</dt>
   * <dd>illegal parameters or cannot generate a greater identifier</dd>
   * <dt>E_FAIL</dt>
   * <dd>system failure.</dd>
   * </dl>
   */

     virtual HRESULT  getIdentifier(const CATUnicodeString& iPrefix         ,
				    const CATUnicodeString& iSeparator      ,
				    CATUnicodeString&       oIdentifier     ,
				    const int               iPadding        ,
				    const int               iMaxSize       
     )=0;
     
  
  /**
   * get N consecutive identifiers guaranteed to be unique.
   * these identifiers are the concatenation of a string, a separator ,
   * and an integer.
   * @param iPrefix [in]
   * prefixes the identifier. his Size cannot be greater than xxx.
   * @param iSeparator [in]
   * character separating the Prefix from the integer counter.
   * string size = 1. [0..9] are forbidden values.
   * @param iNbIdentifiers [in]
   * the number of identifiers to be generated.
   * @param olIdentifiers [out]
   * a list containing the identifiers returned.
   * @param iPadding [in]
   * pad (left side ) the integer part with 0. 
   * iPadding > 0:the size in char of the integer part is equal to iPadding.
   * iPadding =-1:no pad done.
   * @param iMaxSize [in]
   * the maximum size in byte of the identifier.
   * @return
   * An HRESULT value.
   * <br><b>Legal values</b>
   * <dl>
   * <dt>S_OK</dt>
   * <dd>identifiers generated successfully</dd>
   * <dt>S_FALSE</dt>
   * <dd>illegal parameters or cannot generate an identifier</dd>
   * <dt>E_FAIL</dt>
   * <dd>system failure.</dd>
   * </dl>
   */

     virtual HRESULT  getNConsecutiveIdentifier(const CATUnicodeString& iPrefix         ,
     const CATUnicodeString& iSeparator,
     const int               iNbIdentifiers       ,
     CATListOfCATUnicodeString& olIdentifiers,
     const int               iPadding,
     const int               iMaxSize       
     )=0;

  
  /**
   * setPrefix. used to set the initial value for a prefix. 
   * @param iPrefix [in]
   * the prefix of the identifier to set.
   * @param iSeparator [in]
   * character separating the Prefix from the integer counter.
   * string size = 1. [0..9] are forbidden values.
   * @param iValue [in]
   * the value for the next given suffixe.
   * @param iPadding [in]
   * pad (left side ) the integer part with 0. 
   * iPadding > 0:the size in char of the integer part is equal to iPadding.
   * iPadding =-1:no pad done. 
   * @param iMaxSize [in]
   * size overflow.
   * @param iForce [in]
   * iForce=0 : if the current value for iPrefix is greater
   * than iValue return S_FALSE.                
   * if there is no current value or the current value is less 
   * than iValue the next given value will be iValue.
   * iForce=1 : set the value without controls
   * @return
   * An HRESULT value.
   * <br><b>Legal values</b>
   * <dl>
   * <dt>S_OK</dt>
   * <dd>the initial value is set</dd>
   * <dt>S_FALSE</dt>
   * <dd>illegal parameters or cannot set the initial value</dd>
   * <dt>E_FAIL</dt>
   * <dd>system failure.</dd>
   * </dl>
   */

     virtual HRESULT setPrefixValue(const CATUnicodeString&  iPrefix   ,
     const CATUnicodeString&  iSeparator,
     const int                iValue    ,
     const int                iPadding  ,
     const int                iMaxSize  ,
     const int                iForce    
     )=0;
#endif
//-- JDC+ V5R11
  /**
   * For a given (Prefix,separator) , return an unique int identifier.
   * the identifier returned is an int.
   * 
   * @param iPrefix [in]
   * prefixes the identifier. 
   * @param oIdentifier [out]
   * the suffixe value returned.
   * @param iSeparator [in]
   * character separating the Prefix from the integer counter.
   * string size = 1. [0..9] are forbidden values.
   * @return
   * An HRESULT value.
   * <br><b>Legal values</b>
   * <dl>
   * <dt>S_OK</dt>
   * <dd>identifier generated successfully</dd>
   * <dt>S_FALSE</dt>
   * <dd>illegal parameters or cannot generate a greater identifier</dd>
   * <dt>E_FAIL</dt>
   * <dd>system failure.</dd>
   * </dl>
   */

  virtual HRESULT  getIdentifierSuffix(const CATUnicodeString& iPrefix         ,
                                       int&                    oIdentifier     ,
                                       const CATUnicodeString& iSeparator      )=0;

  
  /**
   * For a given (prefix, separator) , return N Consecutive int Identifiers.
   * @param iPrefix [in]
   * prefixes the identifier.
   * @param iNbIdentifiers [in]
   * the number of identifiers to be generated.
   * @param oIdentifier [out]
   * The first identifier.
   * @param iSeparator [in]
   * character separating the Prefix from the integer counter.
   * string size = 1. [0..9] are forbidden values.
   * @return
   * An HRESULT value.
   * <br><b>Legal values</b>
   * <dl>
   * <dt>S_OK</dt>
   * <dd>identifiers generated successfully</dd>
   * <dt>S_FALSE</dt>
   * <dd>illegal parameters or cannot generate an identifier</dd>
   * <dt>E_FAIL</dt>
   * <dd>system failure.</dd>
   * </dl>
   */

  virtual HRESULT  getNConsecutiveIdentifierSuffix(const CATUnicodeString& iPrefix       ,
                                                   const int               iNbIdentifiers,
                                                   int& oIdentifiers                     ,
                                                   const CATUnicodeString& iSeparator=":")=0;
  
  //-- JDC- V5R11
  
  




  
};

CATDeclareHandler(VPMIIdentifierGeneratorMgr, CATBaseUnknown); 

ExportedByGUIDVPMInterfaces HRESULT GetVPMIIdentifierGeneratorMgr(VPMIIdentifierGeneratorMgr *& oiVPMIIdentifierGeneratorMgr   );
#endif
