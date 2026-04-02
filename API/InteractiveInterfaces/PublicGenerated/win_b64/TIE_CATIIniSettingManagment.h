#ifndef __TIE_CATIIniSettingManagment
#define __TIE_CATIIniSettingManagment

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIIniSettingManagment.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIIniSettingManagment */
#define declare_TIE_CATIIniSettingManagment(classe) \
 \
 \
class TIECATIIniSettingManagment##classe : public CATIIniSettingManagment \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIIniSettingManagment, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual  HRESULT   Commit()             ; \
      virtual  HRESULT   ResetToAdminValues() ; \
      virtual  HRESULT   Rollback()           ; \
      virtual  HRESULT   SaveRepository()     ; \
};



#define ENVTIEdeclare_CATIIniSettingManagment(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual  HRESULT   Commit()             ; \
virtual  HRESULT   ResetToAdminValues() ; \
virtual  HRESULT   Rollback()           ; \
virtual  HRESULT   SaveRepository()     ; \


#define ENVTIEdefine_CATIIniSettingManagment(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT    ENVTIEName::Commit()              \
{ \
return (ENVTIECALL(CATIIniSettingManagment,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT    ENVTIEName::ResetToAdminValues()  \
{ \
return (ENVTIECALL(CATIIniSettingManagment,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT    ENVTIEName::Rollback()            \
{ \
return (ENVTIECALL(CATIIniSettingManagment,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT    ENVTIEName::SaveRepository()      \
{ \
return (ENVTIECALL(CATIIniSettingManagment,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIIniSettingManagment(classe)    TIECATIIniSettingManagment##classe


/* Common methods inside a TIE */
#define common_TIE_CATIIniSettingManagment(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIIniSettingManagment, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATIIniSettingManagment, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATIIniSettingManagment, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATIIniSettingManagment, classe) \
 \
HRESULT    TIECATIIniSettingManagment##classe::Commit()              \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit()); \
} \
HRESULT    TIECATIIniSettingManagment##classe::ResetToAdminValues()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues()); \
} \
HRESULT    TIECATIIniSettingManagment##classe::Rollback()            \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback()); \
} \
HRESULT    TIECATIIniSettingManagment##classe::SaveRepository()      \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIIniSettingManagment(classe) \
 \
 \
declare_TIE_CATIIniSettingManagment(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIIniSettingManagment##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIIniSettingManagment,"CATIIniSettingManagment",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIIniSettingManagment(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIIniSettingManagment, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIIniSettingManagment##classe(classe::MetaObject(),TIECATIIniSettingManagment##classe::MetaObject(),(void *)CreateTIECATIIniSettingManagment##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIIniSettingManagment(classe) \
 \
 \
declare_TIE_CATIIniSettingManagment(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIIniSettingManagment##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIIniSettingManagment,"CATIIniSettingManagment",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIIniSettingManagment(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIIniSettingManagment, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIIniSettingManagment##classe(classe::MetaObject(),TIECATIIniSettingManagment##classe::MetaObject(),(void *)CreateTIECATIIniSettingManagment##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIIniSettingManagment(classe) TIE_CATIIniSettingManagment(classe)
#else
#define BOA_CATIIniSettingManagment(classe) CATImplementBOA(CATIIniSettingManagment, classe)
#endif

#endif
