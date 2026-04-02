#ifndef __TIE_CATIStreamMsg
#define __TIE_CATIStreamMsg

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIStreamMsg.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIStreamMsg */
#define declare_TIE_CATIStreamMsg(classe) \
 \
 \
class TIECATIStreamMsg##classe : public CATIStreamMsg \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIStreamMsg, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT UnstreamData( void *iBuffer, uint32 iLength); \
      virtual HRESULT StreamData( void **oBuffer, uint32 *oLength); \
      virtual HRESULT FreeStreamData( void *Buffer, uint32 iLength); \
      virtual HRESULT SetMessageSpecifications(); \
};



#define ENVTIEdeclare_CATIStreamMsg(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT UnstreamData( void *iBuffer, uint32 iLength); \
virtual HRESULT StreamData( void **oBuffer, uint32 *oLength); \
virtual HRESULT FreeStreamData( void *Buffer, uint32 iLength); \
virtual HRESULT SetMessageSpecifications(); \


#define ENVTIEdefine_CATIStreamMsg(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::UnstreamData( void *iBuffer, uint32 iLength) \
{ \
return (ENVTIECALL(CATIStreamMsg,ENVTIETypeLetter,ENVTIELetter)UnstreamData(iBuffer,iLength)); \
} \
HRESULT  ENVTIEName::StreamData( void **oBuffer, uint32 *oLength) \
{ \
return (ENVTIECALL(CATIStreamMsg,ENVTIETypeLetter,ENVTIELetter)StreamData(oBuffer,oLength)); \
} \
HRESULT  ENVTIEName::FreeStreamData( void *Buffer, uint32 iLength) \
{ \
return (ENVTIECALL(CATIStreamMsg,ENVTIETypeLetter,ENVTIELetter)FreeStreamData(Buffer,iLength)); \
} \
HRESULT  ENVTIEName::SetMessageSpecifications() \
{ \
return (ENVTIECALL(CATIStreamMsg,ENVTIETypeLetter,ENVTIELetter)SetMessageSpecifications()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIStreamMsg(classe)    TIECATIStreamMsg##classe


/* Common methods inside a TIE */
#define common_TIE_CATIStreamMsg(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIStreamMsg, classe) \
 \
 \
CATImplementTIEMethods(CATIStreamMsg, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIStreamMsg, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIStreamMsg, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIStreamMsg, classe) \
 \
HRESULT  TIECATIStreamMsg##classe::UnstreamData( void *iBuffer, uint32 iLength) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UnstreamData(iBuffer,iLength)); \
} \
HRESULT  TIECATIStreamMsg##classe::StreamData( void **oBuffer, uint32 *oLength) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->StreamData(oBuffer,oLength)); \
} \
HRESULT  TIECATIStreamMsg##classe::FreeStreamData( void *Buffer, uint32 iLength) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->FreeStreamData(Buffer,iLength)); \
} \
HRESULT  TIECATIStreamMsg##classe::SetMessageSpecifications() \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMessageSpecifications()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIStreamMsg(classe) \
 \
 \
declare_TIE_CATIStreamMsg(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIStreamMsg##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIStreamMsg,"CATIStreamMsg",CATIStreamMsg::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIStreamMsg(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIStreamMsg, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIStreamMsg##classe(classe::MetaObject(),CATIStreamMsg::MetaObject(),(void *)CreateTIECATIStreamMsg##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIStreamMsg(classe) \
 \
 \
declare_TIE_CATIStreamMsg(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIStreamMsg##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIStreamMsg,"CATIStreamMsg",CATIStreamMsg::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIStreamMsg(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIStreamMsg, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIStreamMsg##classe(classe::MetaObject(),CATIStreamMsg::MetaObject(),(void *)CreateTIECATIStreamMsg##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIStreamMsg(classe) TIE_CATIStreamMsg(classe)
#else
#define BOA_CATIStreamMsg(classe) CATImplementBOA(CATIStreamMsg, classe)
#endif

#endif
