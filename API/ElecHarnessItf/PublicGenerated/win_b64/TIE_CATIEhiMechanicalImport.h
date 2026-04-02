#ifndef __TIE_CATIEhiMechanicalImport
#define __TIE_CATIEhiMechanicalImport

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIEhiMechanicalImport.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIEhiMechanicalImport */
#define declare_TIE_CATIEhiMechanicalImport(classe) \
 \
 \
class TIECATIEhiMechanicalImport##classe : public CATIEhiMechanicalImport \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIEhiMechanicalImport, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATISpecObject_var GetSourceProduct( ) ; \
      virtual CATISpecObject_var GetSelectedFeatureInSourceProduct() const ; \
      virtual HRESULT BreakLink() ; \
      virtual void ForceLoad() const ; \
};



#define ENVTIEdeclare_CATIEhiMechanicalImport(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATISpecObject_var GetSourceProduct( ) ; \
virtual CATISpecObject_var GetSelectedFeatureInSourceProduct() const ; \
virtual HRESULT BreakLink() ; \
virtual void ForceLoad() const ; \


#define ENVTIEdefine_CATIEhiMechanicalImport(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATISpecObject_var  ENVTIEName::GetSourceProduct( )  \
{ \
return (ENVTIECALL(CATIEhiMechanicalImport,ENVTIETypeLetter,ENVTIELetter)GetSourceProduct()); \
} \
CATISpecObject_var  ENVTIEName::GetSelectedFeatureInSourceProduct() const  \
{ \
return (ENVTIECALL(CATIEhiMechanicalImport,ENVTIETypeLetter,ENVTIELetter)GetSelectedFeatureInSourceProduct()); \
} \
HRESULT  ENVTIEName::BreakLink()  \
{ \
return (ENVTIECALL(CATIEhiMechanicalImport,ENVTIETypeLetter,ENVTIELetter)BreakLink()); \
} \
void  ENVTIEName::ForceLoad() const  \
{ \
 (ENVTIECALL(CATIEhiMechanicalImport,ENVTIETypeLetter,ENVTIELetter)ForceLoad()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIEhiMechanicalImport(classe)    TIECATIEhiMechanicalImport##classe


/* Common methods inside a TIE */
#define common_TIE_CATIEhiMechanicalImport(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIEhiMechanicalImport, classe) \
 \
 \
CATImplementTIEMethods(CATIEhiMechanicalImport, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIEhiMechanicalImport, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIEhiMechanicalImport, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIEhiMechanicalImport, classe) \
 \
CATISpecObject_var  TIECATIEhiMechanicalImport##classe::GetSourceProduct( )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSourceProduct()); \
} \
CATISpecObject_var  TIECATIEhiMechanicalImport##classe::GetSelectedFeatureInSourceProduct() const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSelectedFeatureInSourceProduct()); \
} \
HRESULT  TIECATIEhiMechanicalImport##classe::BreakLink()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->BreakLink()); \
} \
void  TIECATIEhiMechanicalImport##classe::ForceLoad() const  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ForceLoad(); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIEhiMechanicalImport(classe) \
 \
 \
declare_TIE_CATIEhiMechanicalImport(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIEhiMechanicalImport##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIEhiMechanicalImport,"CATIEhiMechanicalImport",CATIEhiMechanicalImport::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIEhiMechanicalImport(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIEhiMechanicalImport, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIEhiMechanicalImport##classe(classe::MetaObject(),CATIEhiMechanicalImport::MetaObject(),(void *)CreateTIECATIEhiMechanicalImport##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIEhiMechanicalImport(classe) \
 \
 \
declare_TIE_CATIEhiMechanicalImport(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIEhiMechanicalImport##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIEhiMechanicalImport,"CATIEhiMechanicalImport",CATIEhiMechanicalImport::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIEhiMechanicalImport(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIEhiMechanicalImport, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIEhiMechanicalImport##classe(classe::MetaObject(),CATIEhiMechanicalImport::MetaObject(),(void *)CreateTIECATIEhiMechanicalImport##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIEhiMechanicalImport(classe) TIE_CATIEhiMechanicalImport(classe)
#else
#define BOA_CATIEhiMechanicalImport(classe) CATImplementBOA(CATIEhiMechanicalImport, classe)
#endif

#endif
