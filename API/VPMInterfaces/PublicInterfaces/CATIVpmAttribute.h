// -*- C++ -*-
#ifndef CATIVpmAttribute_H
#define CATIVpmAttribute_H
// =================================================================   
// VPM (c) Copyright Dassault Systemes 1997                           
// -----------------------------------------------------------------   
// Macro: CATIVpmAttribute.h                                      
// -----------------------------------------------------------------   
// Content:  VPM -> Attribut Definition 
//                  Interface witch provide the attribut values of
//                  a specific Object
// =================================================================   
// Historique:                                                          
// Creation : 97/04/14                                           AHC 
// =================================================================   
//
/**
*	@CAA2Level L1
*	@CAA2Usage U3
*/
#include "CATBaseUnknown.h"
#include "CATAttributeDescription.h"
#include "CORBAAnyDef.h"
#include "sequence_CORBAAny.h"
#include "CATListOfVPMCA.h"
#include "GUIDVPMInterfaces.h"

class CATUnicodeString;
class CATListValCATUnicodeString;
class CATIVpmFactoryObject_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIVpmAttribute ;
#else
extern "C" const IID IID_CATIVpmAttribute ;
#endif

/**
 * This interface is implemented by all persistent ENOVIA objects, and provides means to read/write (non multi-valuated) attribute values.
 */
class ExportedByGUIDVPMInterfaces CATIVpmAttribute: public CATBaseUnknown 
   {
   //
   CATDeclareInterface;
   //
   public:

/**
*   Check the modification Values.
*   @return
*   An HRESULT value. 
*   <br><b>Legal values</b>:
*   <dl>
*     <dt>S_OK</dt>
*     <dd>VPMObject is modified</dd>
*     <dt>S_FALSE</dt>
*     <dd>VPMObject is not modified</dd>
*     <dt>E_FAIL</dt>
*     <dd>An error occured during the process</dd>
*   </dl>		
*/
   virtual HRESULT IsChanged() = 0;
 
/**
*   Check the modification Values.
*   @return
*   An HRESULT value. 
*   <br><b>Legal values</b>:
*   <dl>
*     <dt>S_OK</dt>
*     <dd>Refresh OK</dd>
*     <dt>E_FAIL</dt>
*     <dd>An error occured during the process</dd>
*   </dl>		
*/
   virtual HRESULT RefreshValues() = 0;
 
/**
*   Get the VPMObject UUID.
*   @param oUUID
*   The uuid found.
*   @return
*   An HRESULT value. 
*   <br><b>Legal values</b>:
*   <dl>
*     <dt>S_OK</dt>
*     <dd>UUID OK</dd>
*     <dt>E_FAIL</dt>
*     <dd>An error occured during the process</dd>
*   </dl>		
*/
   virtual HRESULT GetIdentifier
                   (CORBAAny& oUUID)  = 0;

/** @nodoc
*   Access to an attribute.
*   @param iAttributeName
*   The name of the attribute.
*   @param iAccessControl
*   .
*   @param oVPMCA
*   The definition found.
*   @return
*   An HRESULT value. 
*   <br><b>Legal values</b>:
*   <dl>
*     <dt>S_OK</dt>
*     <dd>Definition OK</dd>
*     <dt>E_FAIL</dt>
*     <dd>An error occured during the process</dd>
*   </dl>		
*/
   virtual HRESULT  GetAttributeName
                  (  const CATUnicodeString& iAttributeName , 
                     const AccessControl&    iAccessControl , 
                     VPMCA&                  oVPMCA         )  = 0;

/** @nodoc
*   Access to an attribute.
*   @param oVPMCAList
*   List of definitions found.
*   @param iAccessControl
*   .
*   @return
*   An HRESULT value. 
*   <br><b>Legal values</b>:
*   <dl>
*     <dt>S_OK</dt>
*     <dd>Definitions OK</dd>
*     <dt>E_FAIL</dt>
*     <dd>An error occured during the process</dd>
*   </dl>		
*/
   virtual HRESULT  GetAttributeNames
                  ( CATListOfVPMCA&      oVPMCAList,
                    const AccessControl& iAccessControl  )  = 0;

/** @nodoc
*   Clone a VPMObject.
*   @param iVPMCAList
*   List of attributes.
*   @param oMyClone
*   The clone.
*   @return
*   An HRESULT value. 
*   <br><b>Legal values</b>:
*   <dl>
*     <dt>S_OK</dt>
*     <dd>Clone OK</dd>
*     <dt>E_FAIL</dt>
*     <dd>An error occured during the process</dd>
*   </dl>		
*/
   virtual HRESULT  CloneMe 
                  ( CATListOfVPMCA&                  iVPMCAList,
                    CATIVpmFactoryObject_var&        oMyClone   )  = 0;

/** @nodoc
*   Clone a VPMObject and assign a list of attributes.
*   @param iMyClone
*   The clone.
*   @param iVPMCAList
*   List of attributes.
*   @return
*   An HRESULT value. 
*   <br><b>Legal values</b>:
*   <dl>
*     <dt>S_OK</dt>
*     <dd>Clone OK</dd>
*     <dt>E_FAIL</dt>
*     <dd>An error occured during the process</dd>
*   </dl>		
*/
   virtual HRESULT  CloneMe 
                  ( const CATIVpmFactoryObject_var&  iMyClone , 
                    CATListOfVPMCA&                  iVPMCAList )  = 0;

/** @nodoc
*   Verify the attribut on the VPMObject.
*   @param iAttributeName
*   The name of attribute.
*   @param oVPMCA
*   The checked attribute.
*   @return
*   An HRESULT value. 
*   <br><b>Legal values</b>:
*   <dl>
*     <dt>S_OK</dt>
*     <dd>The attribute exists</dd>
*     <dt>S_FALSE</dt>
*     <dd>The attribute does not exist</dd>
*     <dt>E_FAIL</dt>
*     <dd>An error occured during the process</dd>
*   </dl>		
*/
   virtual HRESULT CheckAttribute
          (const CATUnicodeString& iAttributeName ,
           VPMCA&                  oVPMCA         )  = 0 ;

/**
*   Get a Simple Value.
*   @param iAttributeName
*   The name of attribute.
*   @param oValue
*   The value found.
*   @return
*   An HRESULT value. 
*   <br><b>Legal values</b>:
*   <dl>
*     <dt>S_OK</dt>
*     <dd>The attribute is valuated</dd>
*     <dt>S_FALSE</dt>
*     <dd>The attribute is not valuated</dd>
*     <dt>E_FAIL</dt>
*     <dd>An error occured during the process or the attribute does not exist</dd>
*   </dl>		
*/
   virtual HRESULT  GetValue
                  ( const CATUnicodeString& iAttributeName ,
                    CORBAAny&               oValue         ) = 0;


/**
*   Set a Simple Value.
*   @param iAttributeName
*   The name of attribute.
*   @param iValue
*   The new value.
*   @return
*   An HRESULT value. 
*   <br><b>Legal values</b>:
*   <dl>
*     <dt>S_OK</dt>
*     <dd>The attribute is modified</dd>
*     <dt>S_FALSE</dt>
*     <dd>Impossible to modify this attribute</dd>
*     <dt>E_FAIL</dt>
*     <dd>An error occured during the process or the attribute does not exist</dd>
*   </dl>		
*/
   virtual HRESULT  SetValue
                  ( const CATUnicodeString& iAttributeName,
                    const CORBAAny&         iValue        ) = 0; 

/**
*   Unset a Simple Value.
*   @param iAttributeName
*   The name of attribute.
*   @return
*   An HRESULT value. 
*   <br><b>Legal values</b>:
*   <dl>
*     <dt>S_OK</dt>
*     <dd>The attribute is modified</dd>
*     <dt>S_FALSE</dt>
*     <dd>Impossible to modify this attribute</dd>
*     <dt>E_FAIL</dt>
*     <dd>An error occured during the process or the attribute does not exist</dd>
*   </dl>		
*/
   virtual HRESULT  UnsetValue
                  ( const CATUnicodeString& iAttributeName ) = 0 ;
                  
                  
   //----------------------------------------------------------------
   // BLOB Managment
   //-----------------------------------------------------------------
/**
*   Valuate or create a new Blob.
*   @param iBlobName
*   The name of the blob.
*   @param iValue
*   The value to put in it.
*   @param iclone
*   Define if the blob must be duplicated when the object is duplicated.
*   @return
*   An HRESULT value. 
*   <br><b>Legal values</b>:
*   <dl>
*     <dt>S_OK</dt>
*     <dd>The blob is modified or created</dd>
*     <dt>E_FAIL</dt>
*     <dd>An error occured during the process</dd>
*   </dl>		
*/ 
   virtual HRESULT SetBlob(const CATUnicodeString& iBlobName, 
			    const SEQUENCE(octet)& iValue, 
			    boolean iclone=TRUE)=0;
  
/**
*   Retrieve the value from an existing blob.
*   @param iBlobName
*   The name of the blob.
*   @param oValue
*   The value found in it.
*   @return
*   An HRESULT value. 
*   <br><b>Legal values</b>:
*   <dl>
*     <dt>S_OK</dt>
*     <dd>The blob was found</dd>
*     <dt>S_FALSE</dt>
*     <dd>The blob was not found</dd>
*     <dt>E_FAIL</dt>
*     <dd>An error occured during the process</dd>
*   </dl>		
*/ 
   virtual HRESULT GetBlob(const CATUnicodeString& iBlobName, SEQUENCE(octet)& oValue)=0;
   
/**
*   To know if a Blob exists.
*   @param iBlobName
*   The name of the blob.
*   @return
*   An HRESULT value. 
*   <br><b>Legal values</b>:
*   <dl>
*     <dt>S_OK</dt>
*     <dd>The blob was found</dd>
*     <dt>S_FALSE</dt>
*     <dd>The blob was not found</dd>
*     <dt>E_FAIL</dt>
*     <dd>An error occured during the process</dd>
*   </dl>		
*/  
   virtual HRESULT DoesBlobExist(const CATUnicodeString& iBlobName)=0;

/**
*   Remove an existing blob.
*   @param iBlobName
*   The name of the blob.
*   @return
*   An HRESULT value. 
*   <br><b>Legal values</b>:
*   <dl>
*     <dt>S_OK</dt>
*     <dd>The blob was found and removed</dd>
*     <dt>S_FALSE</dt>
*     <dd>The blob was not found</dd>
*     <dt>E_FAIL</dt>
*     <dd>An error occured during the process</dd>
*   </dl>		
*/   
   virtual HRESULT RemoveBlob(const CATUnicodeString& iBlobName)=0;
   
/**
*   Retrieve names of existing blobs.
*   @param oListOfBlob
*   The list of blobs found.
*   @return
*   An HRESULT value. 
*   <br><b>Legal values</b>:
*   <dl>
*     <dt>S_OK</dt>
*     <dd>The list was found</dd>
*     <dt>E_FAIL</dt>
*     <dd>An error occured during the process</dd>
*   </dl>		
*/    
   virtual HRESULT GetListOfBlob(CATListOfCATUnicodeString& oListOfBlob)=0;
   
/**
*   Compute the maximal value.
*   @param iAttributeName
*   The name of attribute.
*   @param oMaxValue
*   The computed maximal value.
*   @return
*   An HRESULT value. 
*   <br><b>Legal values</b>:
*   <dl>
*     <dt>S_OK</dt>
*     <dd>The attribute has been computed</dd>
*     <dt>E_FAIL</dt>
*     <dd>An error occured during the process</dd>
*   </dl>		
*/     
   virtual HRESULT GetMaxValue
          (const CATUnicodeString& iAttributeName,
           CORBAAny&               oMaxValue      ) = 0 ;

/**
*   Compute the minimal value.
*   @param iAttributeName
*   The name of attribute.
*   @param oMinValues
*   The computed minimal value.
*   @return
*   An HRESULT value. 
*   <br><b>Legal values</b>:
*   <dl>
*     <dt>S_OK</dt>
*     <dd>The attribute has been computed</dd>
*     <dt>E_FAIL</dt>
*     <dd>An error occured during the process</dd>
*   </dl>		
*/      
   virtual HRESULT GetMinValue
          (const CATUnicodeString& iAttributeName,
           CORBAAny&               oMinValues    ) = 0 ;

/**
*   Set persistency flag.
*   @return
*   An HRESULT value. 
*   <br><b>Legal values</b>:
*   <dl>
*     <dt>S_OK</dt>
*     <dd>The object is candidate to the persistence</dd>
*     <dt>E_FAIL</dt>
*     <dd>An error occured during the process</dd>
*   </dl>		
*/      
   virtual HRESULT SetPersistencyFlag()= 0 ; 

/**
*   Unset persistency flag.
*   @return
*   An HRESULT value. 
*   <br><b>Legal values</b>:
*   <dl>
*     <dt>S_OK</dt>
*     <dd>The object is not candidate to the persistence</dd>
*     <dt>E_FAIL</dt>
*     <dd>An error occured during the process</dd>
*   </dl>		
*/      
   virtual HRESULT UnsetPersistencyFlag()= 0 ; 

/**
*   Is the object persistent.
*   @return
*   An HRESULT value. 
*   <br><b>Legal values</b>:
*   <dl>
*     <dt>S_OK</dt>
*     <dd>The object is persistent</dd>
*     <dt>S_FALSE</dt>
*     <dd>The object is volatile</dd>
*   </dl>		
*/      
   virtual HRESULT IsPersistent ()= 0 ; 

/**
*   Reset an object.
*   @return
*   An HRESULT value. 
*   <br><b>Legal values</b>:
*   <dl>
*     <dt>S_OK</dt>
*     <dd>The object is no more modified</dd>
*     <dt>E_FAIL</dt>
*     <dd>An error occured during the process</dd>
*   </dl>		
*/      
   virtual HRESULT Reset()= 0 ; 

   //
   //ajout VDU nov.99 
   //mode de gestion du Time Stamp
   //----------------------------------------------------------------
   // AutomaticTSMode  - gestion automatique du TS.
   //-----------------------------------------------------------------
   //
/**
*   Automatical managing of time stamp.
*   @return
*   An HRESULT value. 
*   <br><b>Legal values</b>:
*   <dl>
*     <dt>S_OK</dt>
*     <dd>Time Stamp is automaticaly modified</dd>
*     <dt>E_FAIL</dt>
*     <dd>An error occured during the process</dd>
*   </dl>		
*/      
   virtual HRESULT AutomaticTSMode() = 0;

/**
*   No automatical managing of time stamp.
*   @return
*   An HRESULT value. 
*   <br><b>Legal values</b>:
*   <dl>
*     <dt>S_OK</dt>
*     <dd>User has to modify TS explicitely</dd>
*     <dt>E_FAIL</dt>
*     <dd>An error occured during the process</dd>
*   </dl>		
*/      
   virtual HRESULT NoTSMode() = 0;

   /** @nodoc */
   virtual HRESULT  GetValue
                  ( const VPMCA& iAttributeVPMCA ,
                    CORBAAny&               oValue         ) = 0;

   /** @nodoc */
   virtual HRESULT  SetValue
                  ( VPMCA *iVPMCA,
                    const CORBAAny&         iValue        ) = 0; 

   /** @nodoc */
   virtual HRESULT SetTSMode(boolean iWithInternalTS=TRUE,
			     boolean iWithModifDate=TRUE) = 0;
     
 };
//-----------------------------------------------------------------
// Handler definition 
//-----------------------------------------------------------------
CATDeclareHandler(CATIVpmAttribute, CATBaseUnknown);
//
#endif
