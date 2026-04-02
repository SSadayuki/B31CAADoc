#ifndef __TIE_CATIUserSettings
#define __TIE_CATIUserSettings

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIUserSettings.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIUserSettings */
#define declare_TIE_CATIUserSettings(classe) \
 \
 \
class TIECATIUserSettings##classe : public CATIUserSettings \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIUserSettings, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void BuildEditor(CATEditorPage * iParent) ; \
      virtual void SetUserSettingsValue (CATSettingRepository * iRepository) ; \
      virtual void CommitModification(CATSettingRepository * iRepository) ; \
      virtual void CancelModification( CATSettingRepository * iRepository) ; \
      virtual void CloseWindowFromEditor() ; \
      virtual void ResetUserSettingsValue () ; \
};



#define ENVTIEdeclare_CATIUserSettings(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void BuildEditor(CATEditorPage * iParent) ; \
virtual void SetUserSettingsValue (CATSettingRepository * iRepository) ; \
virtual void CommitModification(CATSettingRepository * iRepository) ; \
virtual void CancelModification( CATSettingRepository * iRepository) ; \
virtual void CloseWindowFromEditor() ; \
virtual void ResetUserSettingsValue () ; \


#define ENVTIEdefine_CATIUserSettings(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void  ENVTIEName::BuildEditor(CATEditorPage * iParent)  \
{ \
 (ENVTIECALL(CATIUserSettings,ENVTIETypeLetter,ENVTIELetter)BuildEditor(iParent)); \
} \
void  ENVTIEName::SetUserSettingsValue (CATSettingRepository * iRepository)  \
{ \
 (ENVTIECALL(CATIUserSettings,ENVTIETypeLetter,ENVTIELetter)SetUserSettingsValue (iRepository)); \
} \
void  ENVTIEName::CommitModification(CATSettingRepository * iRepository)  \
{ \
 (ENVTIECALL(CATIUserSettings,ENVTIETypeLetter,ENVTIELetter)CommitModification(iRepository)); \
} \
void  ENVTIEName::CancelModification( CATSettingRepository * iRepository)  \
{ \
 (ENVTIECALL(CATIUserSettings,ENVTIETypeLetter,ENVTIELetter)CancelModification(iRepository)); \
} \
void  ENVTIEName::CloseWindowFromEditor()  \
{ \
 (ENVTIECALL(CATIUserSettings,ENVTIETypeLetter,ENVTIELetter)CloseWindowFromEditor()); \
} \
void  ENVTIEName::ResetUserSettingsValue ()  \
{ \
 (ENVTIECALL(CATIUserSettings,ENVTIETypeLetter,ENVTIELetter)ResetUserSettingsValue ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIUserSettings(classe)    TIECATIUserSettings##classe


/* Common methods inside a TIE */
#define common_TIE_CATIUserSettings(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIUserSettings, classe) \
 \
 \
CATImplementTIEMethods(CATIUserSettings, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIUserSettings, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIUserSettings, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIUserSettings, classe) \
 \
void  TIECATIUserSettings##classe::BuildEditor(CATEditorPage * iParent)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->BuildEditor(iParent); \
} \
void  TIECATIUserSettings##classe::SetUserSettingsValue (CATSettingRepository * iRepository)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetUserSettingsValue (iRepository); \
} \
void  TIECATIUserSettings##classe::CommitModification(CATSettingRepository * iRepository)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CommitModification(iRepository); \
} \
void  TIECATIUserSettings##classe::CancelModification( CATSettingRepository * iRepository)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CancelModification(iRepository); \
} \
void  TIECATIUserSettings##classe::CloseWindowFromEditor()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CloseWindowFromEditor(); \
} \
void  TIECATIUserSettings##classe::ResetUserSettingsValue ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetUserSettingsValue (); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIUserSettings(classe) \
 \
 \
declare_TIE_CATIUserSettings(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIUserSettings##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIUserSettings,"CATIUserSettings",CATIUserSettings::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIUserSettings(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIUserSettings, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIUserSettings##classe(classe::MetaObject(),CATIUserSettings::MetaObject(),(void *)CreateTIECATIUserSettings##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIUserSettings(classe) \
 \
 \
declare_TIE_CATIUserSettings(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIUserSettings##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIUserSettings,"CATIUserSettings",CATIUserSettings::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIUserSettings(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIUserSettings, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIUserSettings##classe(classe::MetaObject(),CATIUserSettings::MetaObject(),(void *)CreateTIECATIUserSettings##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIUserSettings(classe) TIE_CATIUserSettings(classe)
#else
#define BOA_CATIUserSettings(classe) CATImplementBOA(CATIUserSettings, classe)
#endif

#endif
