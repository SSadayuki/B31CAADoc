#ifndef __TIE_CATISysSettingController
#define __TIE_CATISysSettingController

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISysSettingController.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISysSettingController */
#define declare_TIE_CATISysSettingController(classe) \
 \
 \
class TIECATISysSettingController##classe : public CATISysSettingController \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISysSettingController, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT Commit(int iNoEvent=0) ; \
      virtual HRESULT ResetToAdminValues(char** iAttList=0, int iNbAtt=0) ; \
      virtual HRESULT Rollback() ; \
      virtual HRESULT SaveRepository(const char *itmp=0) ; \
};



#define ENVTIEdeclare_CATISysSettingController(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT Commit(int iNoEvent=0) ; \
virtual HRESULT ResetToAdminValues(char** iAttList=0, int iNbAtt=0) ; \
virtual HRESULT Rollback() ; \
virtual HRESULT SaveRepository(const char *itmp=0) ; \


#define ENVTIEdefine_CATISysSettingController(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::Commit(int iNoEvent)  \
{ \
return (ENVTIECALL(CATISysSettingController,ENVTIETypeLetter,ENVTIELetter)Commit(iNoEvent)); \
} \
HRESULT  ENVTIEName::ResetToAdminValues(char** iAttList, int iNbAtt)  \
{ \
return (ENVTIECALL(CATISysSettingController,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues(iAttList,iNbAtt)); \
} \
HRESULT  ENVTIEName::Rollback()  \
{ \
return (ENVTIECALL(CATISysSettingController,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT  ENVTIEName::SaveRepository(const char *itmp)  \
{ \
return (ENVTIECALL(CATISysSettingController,ENVTIETypeLetter,ENVTIELetter)SaveRepository(itmp)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISysSettingController(classe)    TIECATISysSettingController##classe


/* Common methods inside a TIE */
#define common_TIE_CATISysSettingController(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISysSettingController, classe) \
 \
 \
CATImplementTIEMethods(CATISysSettingController, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISysSettingController, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISysSettingController, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISysSettingController, classe) \
 \
HRESULT  TIECATISysSettingController##classe::Commit(int iNoEvent)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(iNoEvent)); \
} \
HRESULT  TIECATISysSettingController##classe::ResetToAdminValues(char** iAttList, int iNbAtt)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(iAttList,iNbAtt)); \
} \
HRESULT  TIECATISysSettingController##classe::Rollback()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback()); \
} \
HRESULT  TIECATISysSettingController##classe::SaveRepository(const char *itmp)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(itmp)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISysSettingController(classe) \
 \
 \
declare_TIE_CATISysSettingController(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISysSettingController##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISysSettingController,"CATISysSettingController",CATISysSettingController::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISysSettingController(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISysSettingController, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISysSettingController##classe(classe::MetaObject(),CATISysSettingController::MetaObject(),(void *)CreateTIECATISysSettingController##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISysSettingController(classe) \
 \
 \
declare_TIE_CATISysSettingController(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISysSettingController##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISysSettingController,"CATISysSettingController",CATISysSettingController::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISysSettingController(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISysSettingController, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISysSettingController##classe(classe::MetaObject(),CATISysSettingController::MetaObject(),(void *)CreateTIECATISysSettingController##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISysSettingController(classe) TIE_CATISysSettingController(classe)
#else
#define BOA_CATISysSettingController(classe) CATImplementBOA(CATISysSettingController, classe)
#endif

#endif
