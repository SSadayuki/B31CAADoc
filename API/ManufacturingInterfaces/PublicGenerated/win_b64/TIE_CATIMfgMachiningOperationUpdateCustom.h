#ifndef __TIE_CATIMfgMachiningOperationUpdateCustom
#define __TIE_CATIMfgMachiningOperationUpdateCustom

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgMachiningOperationUpdateCustom.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgMachiningOperationUpdateCustom */
#define declare_TIE_CATIMfgMachiningOperationUpdateCustom(classe) \
 \
 \
class TIECATIMfgMachiningOperationUpdateCustom##classe : public CATIMfgMachiningOperationUpdateCustom \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgMachiningOperationUpdateCustom, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT Init_IsUpToDate() const ; \
      virtual CATBoolean End_IsUpToDate(CATBoolean iCurrentStatus) const ; \
      virtual int Init_Update() ; \
      virtual int End_Update(int iCurrentRC) ; \
};



#define ENVTIEdeclare_CATIMfgMachiningOperationUpdateCustom(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT Init_IsUpToDate() const ; \
virtual CATBoolean End_IsUpToDate(CATBoolean iCurrentStatus) const ; \
virtual int Init_Update() ; \
virtual int End_Update(int iCurrentRC) ; \


#define ENVTIEdefine_CATIMfgMachiningOperationUpdateCustom(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::Init_IsUpToDate() const  \
{ \
return (ENVTIECALL(CATIMfgMachiningOperationUpdateCustom,ENVTIETypeLetter,ENVTIELetter)Init_IsUpToDate()); \
} \
CATBoolean  ENVTIEName::End_IsUpToDate(CATBoolean iCurrentStatus) const  \
{ \
return (ENVTIECALL(CATIMfgMachiningOperationUpdateCustom,ENVTIETypeLetter,ENVTIELetter)End_IsUpToDate(iCurrentStatus)); \
} \
int  ENVTIEName::Init_Update()  \
{ \
return (ENVTIECALL(CATIMfgMachiningOperationUpdateCustom,ENVTIETypeLetter,ENVTIELetter)Init_Update()); \
} \
int  ENVTIEName::End_Update(int iCurrentRC)  \
{ \
return (ENVTIECALL(CATIMfgMachiningOperationUpdateCustom,ENVTIETypeLetter,ENVTIELetter)End_Update(iCurrentRC)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgMachiningOperationUpdateCustom(classe)    TIECATIMfgMachiningOperationUpdateCustom##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgMachiningOperationUpdateCustom(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgMachiningOperationUpdateCustom, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgMachiningOperationUpdateCustom, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgMachiningOperationUpdateCustom, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgMachiningOperationUpdateCustom, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgMachiningOperationUpdateCustom, classe) \
 \
HRESULT  TIECATIMfgMachiningOperationUpdateCustom##classe::Init_IsUpToDate() const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Init_IsUpToDate()); \
} \
CATBoolean  TIECATIMfgMachiningOperationUpdateCustom##classe::End_IsUpToDate(CATBoolean iCurrentStatus) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->End_IsUpToDate(iCurrentStatus)); \
} \
int  TIECATIMfgMachiningOperationUpdateCustom##classe::Init_Update()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Init_Update()); \
} \
int  TIECATIMfgMachiningOperationUpdateCustom##classe::End_Update(int iCurrentRC)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->End_Update(iCurrentRC)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgMachiningOperationUpdateCustom(classe) \
 \
 \
declare_TIE_CATIMfgMachiningOperationUpdateCustom(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgMachiningOperationUpdateCustom##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgMachiningOperationUpdateCustom,"CATIMfgMachiningOperationUpdateCustom",CATIMfgMachiningOperationUpdateCustom::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgMachiningOperationUpdateCustom(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgMachiningOperationUpdateCustom, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgMachiningOperationUpdateCustom##classe(classe::MetaObject(),CATIMfgMachiningOperationUpdateCustom::MetaObject(),(void *)CreateTIECATIMfgMachiningOperationUpdateCustom##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgMachiningOperationUpdateCustom(classe) \
 \
 \
declare_TIE_CATIMfgMachiningOperationUpdateCustom(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgMachiningOperationUpdateCustom##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgMachiningOperationUpdateCustom,"CATIMfgMachiningOperationUpdateCustom",CATIMfgMachiningOperationUpdateCustom::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgMachiningOperationUpdateCustom(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgMachiningOperationUpdateCustom, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgMachiningOperationUpdateCustom##classe(classe::MetaObject(),CATIMfgMachiningOperationUpdateCustom::MetaObject(),(void *)CreateTIECATIMfgMachiningOperationUpdateCustom##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgMachiningOperationUpdateCustom(classe) TIE_CATIMfgMachiningOperationUpdateCustom(classe)
#else
#define BOA_CATIMfgMachiningOperationUpdateCustom(classe) CATImplementBOA(CATIMfgMachiningOperationUpdateCustom, classe)
#endif

#endif
