#ifndef __TIE_CATIStRefresh
#define __TIE_CATIStRefresh

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIStRefresh.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIStRefresh */
#define declare_TIE_CATIStRefresh(classe) \
 \
 \
class TIECATIStRefresh##classe : public CATIStRefresh \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIStRefresh, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT Refresh(const CATISpecObject_var & iSpec = ((CATBaseUnknown*)0)) ; \
};



#define ENVTIEdeclare_CATIStRefresh(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT Refresh(const CATISpecObject_var & iSpec = ((CATBaseUnknown*)0)) ; \


#define ENVTIEdefine_CATIStRefresh(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::Refresh(const CATISpecObject_var & iSpec )  \
{ \
return (ENVTIECALL(CATIStRefresh,ENVTIETypeLetter,ENVTIELetter)Refresh(iSpec )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIStRefresh(classe)    TIECATIStRefresh##classe


/* Common methods inside a TIE */
#define common_TIE_CATIStRefresh(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIStRefresh, classe) \
 \
 \
CATImplementTIEMethods(CATIStRefresh, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIStRefresh, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIStRefresh, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIStRefresh, classe) \
 \
HRESULT  TIECATIStRefresh##classe::Refresh(const CATISpecObject_var & iSpec )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Refresh(iSpec )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIStRefresh(classe) \
 \
 \
declare_TIE_CATIStRefresh(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIStRefresh##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIStRefresh,"CATIStRefresh",CATIStRefresh::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIStRefresh(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIStRefresh, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIStRefresh##classe(classe::MetaObject(),CATIStRefresh::MetaObject(),(void *)CreateTIECATIStRefresh##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIStRefresh(classe) \
 \
 \
declare_TIE_CATIStRefresh(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIStRefresh##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIStRefresh,"CATIStRefresh",CATIStRefresh::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIStRefresh(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIStRefresh, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIStRefresh##classe(classe::MetaObject(),CATIStRefresh::MetaObject(),(void *)CreateTIECATIStRefresh##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIStRefresh(classe) TIE_CATIStRefresh(classe)
#else
#define BOA_CATIStRefresh(classe) CATImplementBOA(CATIStRefresh, classe)
#endif

#endif
