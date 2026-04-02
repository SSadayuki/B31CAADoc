#ifndef __TIE_CATISchAppRouteCATDlgFrame
#define __TIE_CATISchAppRouteCATDlgFrame

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISchAppRouteCATDlgFrame.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISchAppRouteCATDlgFrame */
#define declare_TIE_CATISchAppRouteCATDlgFrame(classe) \
 \
 \
class TIECATISchAppRouteCATDlgFrame##classe : public CATISchAppRouteCATDlgFrame \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISchAppRouteCATDlgFrame, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT AppGetCATDlgFrame (CATDlgFrame **oAppCATDlgFrame) ; \
};



#define ENVTIEdeclare_CATISchAppRouteCATDlgFrame(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT AppGetCATDlgFrame (CATDlgFrame **oAppCATDlgFrame) ; \


#define ENVTIEdefine_CATISchAppRouteCATDlgFrame(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::AppGetCATDlgFrame (CATDlgFrame **oAppCATDlgFrame)  \
{ \
return (ENVTIECALL(CATISchAppRouteCATDlgFrame,ENVTIETypeLetter,ENVTIELetter)AppGetCATDlgFrame (oAppCATDlgFrame)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISchAppRouteCATDlgFrame(classe)    TIECATISchAppRouteCATDlgFrame##classe


/* Common methods inside a TIE */
#define common_TIE_CATISchAppRouteCATDlgFrame(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISchAppRouteCATDlgFrame, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATISchAppRouteCATDlgFrame, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATISchAppRouteCATDlgFrame, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATISchAppRouteCATDlgFrame, classe) \
 \
HRESULT  TIECATISchAppRouteCATDlgFrame##classe::AppGetCATDlgFrame (CATDlgFrame **oAppCATDlgFrame)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppGetCATDlgFrame (oAppCATDlgFrame)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISchAppRouteCATDlgFrame(classe) \
 \
 \
declare_TIE_CATISchAppRouteCATDlgFrame(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppRouteCATDlgFrame##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppRouteCATDlgFrame,"CATISchAppRouteCATDlgFrame",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppRouteCATDlgFrame(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISchAppRouteCATDlgFrame, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppRouteCATDlgFrame##classe(classe::MetaObject(),TIECATISchAppRouteCATDlgFrame##classe::MetaObject(),(void *)CreateTIECATISchAppRouteCATDlgFrame##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISchAppRouteCATDlgFrame(classe) \
 \
 \
declare_TIE_CATISchAppRouteCATDlgFrame(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppRouteCATDlgFrame##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppRouteCATDlgFrame,"CATISchAppRouteCATDlgFrame",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppRouteCATDlgFrame(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISchAppRouteCATDlgFrame, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppRouteCATDlgFrame##classe(classe::MetaObject(),TIECATISchAppRouteCATDlgFrame##classe::MetaObject(),(void *)CreateTIECATISchAppRouteCATDlgFrame##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISchAppRouteCATDlgFrame(classe) TIE_CATISchAppRouteCATDlgFrame(classe)
#else
#define BOA_CATISchAppRouteCATDlgFrame(classe) CATImplementBOA(CATISchAppRouteCATDlgFrame, classe)
#endif

#endif
