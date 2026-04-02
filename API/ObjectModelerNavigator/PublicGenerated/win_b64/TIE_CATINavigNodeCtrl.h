#ifndef __TIE_CATINavigNodeCtrl
#define __TIE_CATINavigNodeCtrl

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATINavigNodeCtrl.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATINavigNodeCtrl */
#define declare_TIE_CATINavigNodeCtrl(classe) \
 \
 \
class TIECATINavigNodeCtrl##classe : public CATINavigNodeCtrl \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATINavigNodeCtrl, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void Dereference(int iDepth); \
      virtual void Undereference(); \
      virtual void PutAssociatedInstance(CATNavigInstance* inst); \
      virtual void GetExpansionMode(CATINavigNodeCtrl::ExpansionMode &oExpansionMode) const ; \
};



#define ENVTIEdeclare_CATINavigNodeCtrl(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void Dereference(int iDepth); \
virtual void Undereference(); \
virtual void PutAssociatedInstance(CATNavigInstance* inst); \
virtual void GetExpansionMode(CATINavigNodeCtrl::ExpansionMode &oExpansionMode) const ; \


#define ENVTIEdefine_CATINavigNodeCtrl(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void  ENVTIEName::Dereference(int iDepth) \
{ \
 (ENVTIECALL(CATINavigNodeCtrl,ENVTIETypeLetter,ENVTIELetter)Dereference(iDepth)); \
} \
void  ENVTIEName::Undereference() \
{ \
 (ENVTIECALL(CATINavigNodeCtrl,ENVTIETypeLetter,ENVTIELetter)Undereference()); \
} \
void  ENVTIEName::PutAssociatedInstance(CATNavigInstance* inst) \
{ \
 (ENVTIECALL(CATINavigNodeCtrl,ENVTIETypeLetter,ENVTIELetter)PutAssociatedInstance(inst)); \
} \
void  ENVTIEName::GetExpansionMode(CATINavigNodeCtrl::ExpansionMode &oExpansionMode) const  \
{ \
 (ENVTIECALL(CATINavigNodeCtrl,ENVTIETypeLetter,ENVTIELetter)GetExpansionMode(oExpansionMode)); \
} \


/* Name of the TIE class */
#define class_TIE_CATINavigNodeCtrl(classe)    TIECATINavigNodeCtrl##classe


/* Common methods inside a TIE */
#define common_TIE_CATINavigNodeCtrl(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATINavigNodeCtrl, classe) \
 \
 \
CATImplementTIEMethods(CATINavigNodeCtrl, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATINavigNodeCtrl, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATINavigNodeCtrl, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATINavigNodeCtrl, classe) \
 \
void  TIECATINavigNodeCtrl##classe::Dereference(int iDepth) \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Dereference(iDepth); \
} \
void  TIECATINavigNodeCtrl##classe::Undereference() \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Undereference(); \
} \
void  TIECATINavigNodeCtrl##classe::PutAssociatedInstance(CATNavigInstance* inst) \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutAssociatedInstance(inst); \
} \
void  TIECATINavigNodeCtrl##classe::GetExpansionMode(CATINavigNodeCtrl::ExpansionMode &oExpansionMode) const  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetExpansionMode(oExpansionMode); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATINavigNodeCtrl(classe) \
 \
 \
declare_TIE_CATINavigNodeCtrl(classe) \
 \
 \
CATMetaClass * __stdcall TIECATINavigNodeCtrl##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATINavigNodeCtrl,"CATINavigNodeCtrl",CATINavigNodeCtrl::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATINavigNodeCtrl(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATINavigNodeCtrl, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATINavigNodeCtrl##classe(classe::MetaObject(),CATINavigNodeCtrl::MetaObject(),(void *)CreateTIECATINavigNodeCtrl##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATINavigNodeCtrl(classe) \
 \
 \
declare_TIE_CATINavigNodeCtrl(classe) \
 \
 \
CATMetaClass * __stdcall TIECATINavigNodeCtrl##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATINavigNodeCtrl,"CATINavigNodeCtrl",CATINavigNodeCtrl::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATINavigNodeCtrl(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATINavigNodeCtrl, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATINavigNodeCtrl##classe(classe::MetaObject(),CATINavigNodeCtrl::MetaObject(),(void *)CreateTIECATINavigNodeCtrl##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATINavigNodeCtrl(classe) TIE_CATINavigNodeCtrl(classe)
#else
#define BOA_CATINavigNodeCtrl(classe) CATImplementBOA(CATINavigNodeCtrl, classe)
#endif

#endif
