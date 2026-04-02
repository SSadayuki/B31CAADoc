#ifndef __TIE_CATINavigModify
#define __TIE_CATINavigModify

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATINavigModify.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATINavigModify */
#define declare_TIE_CATINavigModify(classe) \
 \
 \
class TIECATINavigModify##classe : public CATINavigModify \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATINavigModify, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void UpdateElem (CATNavigInstance* iInst); \
      virtual HRESULT ModifyShortHelp(CATUnicodeString& ioText) ; \
      virtual void Select(int iMode); \
      virtual int IsSelected(); \
};



#define ENVTIEdeclare_CATINavigModify(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void UpdateElem (CATNavigInstance* iInst); \
virtual HRESULT ModifyShortHelp(CATUnicodeString& ioText) ; \
virtual void Select(int iMode); \
virtual int IsSelected(); \


#define ENVTIEdefine_CATINavigModify(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void  ENVTIEName::UpdateElem (CATNavigInstance* iInst) \
{ \
 (ENVTIECALL(CATINavigModify,ENVTIETypeLetter,ENVTIELetter)UpdateElem (iInst)); \
} \
HRESULT  ENVTIEName::ModifyShortHelp(CATUnicodeString& ioText)  \
{ \
return (ENVTIECALL(CATINavigModify,ENVTIETypeLetter,ENVTIELetter)ModifyShortHelp(ioText)); \
} \
void  ENVTIEName::Select(int iMode) \
{ \
 (ENVTIECALL(CATINavigModify,ENVTIETypeLetter,ENVTIELetter)Select(iMode)); \
} \
int  ENVTIEName::IsSelected() \
{ \
return (ENVTIECALL(CATINavigModify,ENVTIETypeLetter,ENVTIELetter)IsSelected()); \
} \


/* Name of the TIE class */
#define class_TIE_CATINavigModify(classe)    TIECATINavigModify##classe


/* Common methods inside a TIE */
#define common_TIE_CATINavigModify(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATINavigModify, classe) \
 \
 \
CATImplementTIEMethods(CATINavigModify, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATINavigModify, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATINavigModify, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATINavigModify, classe) \
 \
void  TIECATINavigModify##classe::UpdateElem (CATNavigInstance* iInst) \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UpdateElem (iInst); \
} \
HRESULT  TIECATINavigModify##classe::ModifyShortHelp(CATUnicodeString& ioText)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ModifyShortHelp(ioText)); \
} \
void  TIECATINavigModify##classe::Select(int iMode) \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Select(iMode); \
} \
int  TIECATINavigModify##classe::IsSelected() \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsSelected()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATINavigModify(classe) \
 \
 \
declare_TIE_CATINavigModify(classe) \
 \
 \
CATMetaClass * __stdcall TIECATINavigModify##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATINavigModify,"CATINavigModify",CATINavigModify::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATINavigModify(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATINavigModify, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATINavigModify##classe(classe::MetaObject(),CATINavigModify::MetaObject(),(void *)CreateTIECATINavigModify##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATINavigModify(classe) \
 \
 \
declare_TIE_CATINavigModify(classe) \
 \
 \
CATMetaClass * __stdcall TIECATINavigModify##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATINavigModify,"CATINavigModify",CATINavigModify::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATINavigModify(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATINavigModify, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATINavigModify##classe(classe::MetaObject(),CATINavigModify::MetaObject(),(void *)CreateTIECATINavigModify##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATINavigModify(classe) TIE_CATINavigModify(classe)
#else
#define BOA_CATINavigModify(classe) CATImplementBOA(CATINavigModify, classe)
#endif

#endif
