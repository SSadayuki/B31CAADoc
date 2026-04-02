#ifndef __TIE_CATIMfgNavigateFeatureView
#define __TIE_CATIMfgNavigateFeatureView

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgNavigateFeatureView.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgNavigateFeatureView */
#define declare_TIE_CATIMfgNavigateFeatureView(classe) \
 \
 \
class TIECATIMfgNavigateFeatureView##classe : public CATIMfgNavigateFeatureView \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgNavigateFeatureView, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATListValCATUnicodeString* GetIdentificators(); \
      virtual CATListValCATBaseUnknown_var* GetChildren(); \
};



#define ENVTIEdeclare_CATIMfgNavigateFeatureView(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATListValCATUnicodeString* GetIdentificators(); \
virtual CATListValCATBaseUnknown_var* GetChildren(); \


#define ENVTIEdefine_CATIMfgNavigateFeatureView(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATListValCATUnicodeString*  ENVTIEName::GetIdentificators() \
{ \
return (ENVTIECALL(CATIMfgNavigateFeatureView,ENVTIETypeLetter,ENVTIELetter)GetIdentificators()); \
} \
CATListValCATBaseUnknown_var*  ENVTIEName::GetChildren() \
{ \
return (ENVTIECALL(CATIMfgNavigateFeatureView,ENVTIETypeLetter,ENVTIELetter)GetChildren()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgNavigateFeatureView(classe)    TIECATIMfgNavigateFeatureView##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgNavigateFeatureView(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgNavigateFeatureView, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgNavigateFeatureView, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgNavigateFeatureView, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgNavigateFeatureView, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgNavigateFeatureView, classe) \
 \
CATListValCATUnicodeString*  TIECATIMfgNavigateFeatureView##classe::GetIdentificators() \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetIdentificators()); \
} \
CATListValCATBaseUnknown_var*  TIECATIMfgNavigateFeatureView##classe::GetChildren() \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetChildren()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgNavigateFeatureView(classe) \
 \
 \
declare_TIE_CATIMfgNavigateFeatureView(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgNavigateFeatureView##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgNavigateFeatureView,"CATIMfgNavigateFeatureView",CATIMfgNavigateFeatureView::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgNavigateFeatureView(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgNavigateFeatureView, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgNavigateFeatureView##classe(classe::MetaObject(),CATIMfgNavigateFeatureView::MetaObject(),(void *)CreateTIECATIMfgNavigateFeatureView##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgNavigateFeatureView(classe) \
 \
 \
declare_TIE_CATIMfgNavigateFeatureView(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgNavigateFeatureView##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgNavigateFeatureView,"CATIMfgNavigateFeatureView",CATIMfgNavigateFeatureView::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgNavigateFeatureView(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgNavigateFeatureView, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgNavigateFeatureView##classe(classe::MetaObject(),CATIMfgNavigateFeatureView::MetaObject(),(void *)CreateTIECATIMfgNavigateFeatureView##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgNavigateFeatureView(classe) TIE_CATIMfgNavigateFeatureView(classe)
#else
#define BOA_CATIMfgNavigateFeatureView(classe) CATImplementBOA(CATIMfgNavigateFeatureView, classe)
#endif

#endif
