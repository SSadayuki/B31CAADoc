#ifndef __TIE_CATINavigateObjectPPR
#define __TIE_CATINavigateObjectPPR

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATINavigateObjectPPR.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATINavigateObjectPPR */
#define declare_TIE_CATINavigateObjectPPR(classe) \
 \
 \
class TIECATINavigateObjectPPR##classe : public CATINavigateObjectPPR \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATINavigateObjectPPR, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATListValCATUnicodeString* GetIdentificators(); \
      virtual CATListValCATBaseUnknown_var* GetChildren(); \
};



#define ENVTIEdeclare_CATINavigateObjectPPR(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATListValCATUnicodeString* GetIdentificators(); \
virtual CATListValCATBaseUnknown_var* GetChildren(); \


#define ENVTIEdefine_CATINavigateObjectPPR(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATListValCATUnicodeString*  ENVTIEName::GetIdentificators() \
{ \
return (ENVTIECALL(CATINavigateObjectPPR,ENVTIETypeLetter,ENVTIELetter)GetIdentificators()); \
} \
CATListValCATBaseUnknown_var*  ENVTIEName::GetChildren() \
{ \
return (ENVTIECALL(CATINavigateObjectPPR,ENVTIETypeLetter,ENVTIELetter)GetChildren()); \
} \


/* Name of the TIE class */
#define class_TIE_CATINavigateObjectPPR(classe)    TIECATINavigateObjectPPR##classe


/* Common methods inside a TIE */
#define common_TIE_CATINavigateObjectPPR(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATINavigateObjectPPR, classe) \
 \
 \
CATImplementTIEMethods(CATINavigateObjectPPR, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATINavigateObjectPPR, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATINavigateObjectPPR, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATINavigateObjectPPR, classe) \
 \
CATListValCATUnicodeString*  TIECATINavigateObjectPPR##classe::GetIdentificators() \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetIdentificators()); \
} \
CATListValCATBaseUnknown_var*  TIECATINavigateObjectPPR##classe::GetChildren() \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetChildren()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATINavigateObjectPPR(classe) \
 \
 \
declare_TIE_CATINavigateObjectPPR(classe) \
 \
 \
CATMetaClass * __stdcall TIECATINavigateObjectPPR##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATINavigateObjectPPR,"CATINavigateObjectPPR",CATINavigateObjectPPR::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATINavigateObjectPPR(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATINavigateObjectPPR, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATINavigateObjectPPR##classe(classe::MetaObject(),CATINavigateObjectPPR::MetaObject(),(void *)CreateTIECATINavigateObjectPPR##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATINavigateObjectPPR(classe) \
 \
 \
declare_TIE_CATINavigateObjectPPR(classe) \
 \
 \
CATMetaClass * __stdcall TIECATINavigateObjectPPR##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATINavigateObjectPPR,"CATINavigateObjectPPR",CATINavigateObjectPPR::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATINavigateObjectPPR(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATINavigateObjectPPR, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATINavigateObjectPPR##classe(classe::MetaObject(),CATINavigateObjectPPR::MetaObject(),(void *)CreateTIECATINavigateObjectPPR##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATINavigateObjectPPR(classe) TIE_CATINavigateObjectPPR(classe)
#else
#define BOA_CATINavigateObjectPPR(classe) CATImplementBOA(CATINavigateObjectPPR, classe)
#endif

#endif
