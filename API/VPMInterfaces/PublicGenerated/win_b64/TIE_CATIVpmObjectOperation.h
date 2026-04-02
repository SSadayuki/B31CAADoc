#ifndef __TIE_CATIVpmObjectOperation
#define __TIE_CATIVpmObjectOperation

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIVpmObjectOperation.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIVpmObjectOperation */
#define declare_TIE_CATIVpmObjectOperation(classe) \
 \
 \
class TIECATIVpmObjectOperation##classe : public CATIVpmObjectOperation \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIVpmObjectOperation, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT  RunUserCondition ( const CATUnicodeString&              iConditionName     , const CATListValCATBaseUnknown_var&  iGraphPredicatList , const CATBaseUnknown_var&            iObject            , const long&                          iSimulateMode  ) const ; \
      virtual HRESULT  RunUserCommand ( const CATUnicodeString&      iOperationName                , const CATUnicodeString&      iCommandName                  , const CATListValCATBaseUnknown_var& iCommandPredicatList   , const CATUnicodeString&      iCommandParameters            , const CATUnicodeString&      iConditionName                , const CATListValCATBaseUnknown_var& iConditionPredicatList , const CATBaseUnknown_var&    iObject                       , const long&                  iSimulateMode     ) const ; \
};



#define ENVTIEdeclare_CATIVpmObjectOperation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT  RunUserCondition ( const CATUnicodeString&              iConditionName     , const CATListValCATBaseUnknown_var&  iGraphPredicatList , const CATBaseUnknown_var&            iObject            , const long&                          iSimulateMode  ) const ; \
virtual HRESULT  RunUserCommand ( const CATUnicodeString&      iOperationName                , const CATUnicodeString&      iCommandName                  , const CATListValCATBaseUnknown_var& iCommandPredicatList   , const CATUnicodeString&      iCommandParameters            , const CATUnicodeString&      iConditionName                , const CATListValCATBaseUnknown_var& iConditionPredicatList , const CATBaseUnknown_var&    iObject                       , const long&                  iSimulateMode     ) const ; \


#define ENVTIEdefine_CATIVpmObjectOperation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT   ENVTIEName::RunUserCondition ( const CATUnicodeString&              iConditionName     , const CATListValCATBaseUnknown_var&  iGraphPredicatList , const CATBaseUnknown_var&            iObject            , const long&                          iSimulateMode  ) const  \
{ \
return (ENVTIECALL(CATIVpmObjectOperation,ENVTIETypeLetter,ENVTIELetter)RunUserCondition (iConditionName     ,iGraphPredicatList ,iObject            ,iSimulateMode  )); \
} \
HRESULT   ENVTIEName::RunUserCommand ( const CATUnicodeString&      iOperationName                , const CATUnicodeString&      iCommandName                  , const CATListValCATBaseUnknown_var& iCommandPredicatList   , const CATUnicodeString&      iCommandParameters            , const CATUnicodeString&      iConditionName                , const CATListValCATBaseUnknown_var& iConditionPredicatList , const CATBaseUnknown_var&    iObject                       , const long&                  iSimulateMode     ) const  \
{ \
return (ENVTIECALL(CATIVpmObjectOperation,ENVTIETypeLetter,ENVTIELetter)RunUserCommand (iOperationName                ,iCommandName                  ,iCommandPredicatList   ,iCommandParameters            ,iConditionName                ,iConditionPredicatList ,iObject                       ,iSimulateMode     )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIVpmObjectOperation(classe)    TIECATIVpmObjectOperation##classe


/* Common methods inside a TIE */
#define common_TIE_CATIVpmObjectOperation(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIVpmObjectOperation, classe) \
 \
 \
CATImplementTIEMethods(CATIVpmObjectOperation, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIVpmObjectOperation, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIVpmObjectOperation, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIVpmObjectOperation, classe) \
 \
HRESULT   TIECATIVpmObjectOperation##classe::RunUserCondition ( const CATUnicodeString&              iConditionName     , const CATListValCATBaseUnknown_var&  iGraphPredicatList , const CATBaseUnknown_var&            iObject            , const long&                          iSimulateMode  ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RunUserCondition (iConditionName     ,iGraphPredicatList ,iObject            ,iSimulateMode  )); \
} \
HRESULT   TIECATIVpmObjectOperation##classe::RunUserCommand ( const CATUnicodeString&      iOperationName                , const CATUnicodeString&      iCommandName                  , const CATListValCATBaseUnknown_var& iCommandPredicatList   , const CATUnicodeString&      iCommandParameters            , const CATUnicodeString&      iConditionName                , const CATListValCATBaseUnknown_var& iConditionPredicatList , const CATBaseUnknown_var&    iObject                       , const long&                  iSimulateMode     ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RunUserCommand (iOperationName                ,iCommandName                  ,iCommandPredicatList   ,iCommandParameters            ,iConditionName                ,iConditionPredicatList ,iObject                       ,iSimulateMode     )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIVpmObjectOperation(classe) \
 \
 \
declare_TIE_CATIVpmObjectOperation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIVpmObjectOperation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIVpmObjectOperation,"CATIVpmObjectOperation",CATIVpmObjectOperation::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIVpmObjectOperation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIVpmObjectOperation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIVpmObjectOperation##classe(classe::MetaObject(),CATIVpmObjectOperation::MetaObject(),(void *)CreateTIECATIVpmObjectOperation##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIVpmObjectOperation(classe) \
 \
 \
declare_TIE_CATIVpmObjectOperation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIVpmObjectOperation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIVpmObjectOperation,"CATIVpmObjectOperation",CATIVpmObjectOperation::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIVpmObjectOperation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIVpmObjectOperation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIVpmObjectOperation##classe(classe::MetaObject(),CATIVpmObjectOperation::MetaObject(),(void *)CreateTIECATIVpmObjectOperation##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIVpmObjectOperation(classe) TIE_CATIVpmObjectOperation(classe)
#else
#define BOA_CATIVpmObjectOperation(classe) CATImplementBOA(CATIVpmObjectOperation, classe)
#endif

#endif
