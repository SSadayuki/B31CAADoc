#ifndef __TIE_CATIMmiPartModelEventManagement
#define __TIE_CATIMmiPartModelEventManagement

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMmiPartModelEventManagement.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMmiPartModelEventManagement */
#define declare_TIE_CATIMmiPartModelEventManagement(classe) \
 \
 \
class TIECATIMmiPartModelEventManagement##classe : public CATIMmiPartModelEventManagement \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMmiPartModelEventManagement, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT CommitNow() ; \
};



#define ENVTIEdeclare_CATIMmiPartModelEventManagement(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT CommitNow() ; \


#define ENVTIEdefine_CATIMmiPartModelEventManagement(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::CommitNow()  \
{ \
return (ENVTIECALL(CATIMmiPartModelEventManagement,ENVTIETypeLetter,ENVTIELetter)CommitNow()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMmiPartModelEventManagement(classe)    TIECATIMmiPartModelEventManagement##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMmiPartModelEventManagement(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMmiPartModelEventManagement, classe) \
 \
 \
CATImplementTIEMethods(CATIMmiPartModelEventManagement, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMmiPartModelEventManagement, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMmiPartModelEventManagement, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMmiPartModelEventManagement, classe) \
 \
HRESULT  TIECATIMmiPartModelEventManagement##classe::CommitNow()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CommitNow()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMmiPartModelEventManagement(classe) \
 \
 \
declare_TIE_CATIMmiPartModelEventManagement(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMmiPartModelEventManagement##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMmiPartModelEventManagement,"CATIMmiPartModelEventManagement",CATIMmiPartModelEventManagement::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMmiPartModelEventManagement(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMmiPartModelEventManagement, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMmiPartModelEventManagement##classe(classe::MetaObject(),CATIMmiPartModelEventManagement::MetaObject(),(void *)CreateTIECATIMmiPartModelEventManagement##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMmiPartModelEventManagement(classe) \
 \
 \
declare_TIE_CATIMmiPartModelEventManagement(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMmiPartModelEventManagement##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMmiPartModelEventManagement,"CATIMmiPartModelEventManagement",CATIMmiPartModelEventManagement::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMmiPartModelEventManagement(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMmiPartModelEventManagement, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMmiPartModelEventManagement##classe(classe::MetaObject(),CATIMmiPartModelEventManagement::MetaObject(),(void *)CreateTIECATIMmiPartModelEventManagement##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMmiPartModelEventManagement(classe) TIE_CATIMmiPartModelEventManagement(classe)
#else
#define BOA_CATIMmiPartModelEventManagement(classe) CATImplementBOA(CATIMmiPartModelEventManagement, classe)
#endif

#endif
