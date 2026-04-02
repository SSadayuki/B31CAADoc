#ifndef CATIVpmObjectRules_H
#define CATIVpmObjectRules_H
// =================================================================   
// VPM (c) Copyright Dassault Systemes 1997                           
// -----------------------------------------------------------------   
// Macro: CATIVpmObjectRules.h                                      
// -----------------------------------------------------------------   
// Content:  VPM -> Rule Definition 
//                  Provide the related rules to a VPM Domain   
// =================================================================   
// Historique:                                                          
// Creation : 98/06/04                                           AHC 
// =================================================================   
//

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 * @deprecated V5R14.
 */

#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATListOfCATUnicodeString.h"
//#include "CATNodeDescription.h"
//#include "CATListOfNODDEF.h"
#include "GUIDVPMInterfaces.h"
//
class CATListPtrNODDEF;
#ifdef CATListOfNODDEF
#undef CATListOfNODDEF
#endif
#define CATListOfNODDEF CATListPtrNODDEF
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIVpmObjectRules ;
#else
extern "C" const IID IID_CATIVpmObjectRules ;
#endif
//

/**
 * This class enables to access to rules related to a domain.
 */

class ExportedByGUIDVPMInterfaces CATIVpmObjectRules: public CATBaseUnknown 
   {
   //
   CATDeclareInterface;
   //
   public:
   //----------------------------------------------------------------
   /**
    * @deprecated V5R14.
    * Get a list of Late children for a specific object 
    * @param iSupLateType - LateType of object
    * @param oListOfSubLateType - List of Late child
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>SubLateType exists</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>SubLateType does not exist</dd>
    *   </dl>
    *
    */
   virtual HRESULT  GetLateChild
                  ( const CATUnicodeString&  iSupLateType,
                    CATListOfCATUnicodeString& oListOfSubLateType ) const = 0;

   //----------------------------------------------------------------
   /**
    * @deprecated V5R14.
    * Get the name of the entity and the super late type for a late type 
    * @param iLateType - Late type
    * @param oSupLateType - Super late type
    * @param oEntityName - Name of the entity
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>iLateType exists</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>iLateType does not exist</dd>
    *   </dl>
    *
    */
   virtual HRESULT  GetEntityName
                  ( const CATUnicodeString&  iLateType    ,
                    CATUnicodeString&        oSupLateType , 
                    CATUnicodeString&        oEntityName  ) const = 0; 

   //----------------------------------------------------------------
   /**
    * @deprecated V5R14.
    * Get a late type and super late type from an real entity  
    * @param iEntityName - Name of the real entity
    * @param iRealObjectPtr - Pointer on the real entity
    * @param oSupLateType - Super late type
    * @param oLateType - Late type
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>The real entity exists</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>The real entity does not exist</dd>
    *   </dl>
    *
    */
   virtual HRESULT  GetLateType
                  ( const CATUnicodeString&  iEntityName    ,
                    const void*              iRealObjectPtr ,
                    CATUnicodeString&        oSupLateType   , 
                    CATUnicodeString&        oLateType      ) const = 0;
   //
   };
//-----------------------------------------------------------------
// Handler definition 
//-----------------------------------------------------------------
   CATDeclareHandler(CATIVpmObjectRules, CATBaseUnknown);
//
#endif
