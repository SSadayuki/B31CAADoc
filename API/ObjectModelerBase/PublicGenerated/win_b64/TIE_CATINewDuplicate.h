#ifndef __TIE_CATINewDuplicate
#define __TIE_CATINewDuplicate

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATINewDuplicate.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATINewDuplicate */
#define declare_TIE_CATINewDuplicate(classe) \
 \
 \
class TIECATINewDuplicate##classe : public CATINewDuplicate \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATINewDuplicate, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATListValCATBaseUnknown_var* Duplicate( CATIContainer_var  iRecept , const CATFormat * iFormat = 0 ) ; \
};



#define ENVTIEdeclare_CATINewDuplicate(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATListValCATBaseUnknown_var* Duplicate( CATIContainer_var  iRecept , const CATFormat * iFormat = 0 ) ; \


#define ENVTIEdefine_CATINewDuplicate(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATListValCATBaseUnknown_var*  ENVTIEName::Duplicate( CATIContainer_var  iRecept , const CATFormat * iFormat )  \
{ \
return (ENVTIECALL(CATINewDuplicate,ENVTIETypeLetter,ENVTIELetter)Duplicate(iRecept ,iFormat )); \
} \


/* Name of the TIE class */
#define class_TIE_CATINewDuplicate(classe)    TIECATINewDuplicate##classe


/* Common methods inside a TIE */
#define common_TIE_CATINewDuplicate(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATINewDuplicate, classe) \
 \
 \
CATImplementTIEMethods(CATINewDuplicate, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATINewDuplicate, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATINewDuplicate, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATINewDuplicate, classe) \
 \
CATListValCATBaseUnknown_var*  TIECATINewDuplicate##classe::Duplicate( CATIContainer_var  iRecept , const CATFormat * iFormat )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Duplicate(iRecept ,iFormat )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATINewDuplicate(classe) \
 \
 \
declare_TIE_CATINewDuplicate(classe) \
 \
 \
CATMetaClass * __stdcall TIECATINewDuplicate##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATINewDuplicate,"CATINewDuplicate",CATINewDuplicate::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATINewDuplicate(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATINewDuplicate, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATINewDuplicate##classe(classe::MetaObject(),CATINewDuplicate::MetaObject(),(void *)CreateTIECATINewDuplicate##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATINewDuplicate(classe) \
 \
 \
declare_TIE_CATINewDuplicate(classe) \
 \
 \
CATMetaClass * __stdcall TIECATINewDuplicate##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATINewDuplicate,"CATINewDuplicate",CATINewDuplicate::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATINewDuplicate(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATINewDuplicate, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATINewDuplicate##classe(classe::MetaObject(),CATINewDuplicate::MetaObject(),(void *)CreateTIECATINewDuplicate##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATINewDuplicate(classe) TIE_CATINewDuplicate(classe)
#else
#define BOA_CATINewDuplicate(classe) CATImplementBOA(CATINewDuplicate, classe)
#endif

#endif
