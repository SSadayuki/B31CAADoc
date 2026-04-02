#ifndef __TIE_CATISamBasicComponentManager
#define __TIE_CATISamBasicComponentManager

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISamBasicComponentManager.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISamBasicComponentManager */
#define declare_TIE_CATISamBasicComponentManager(classe) \
 \
 \
class TIECATISamBasicComponentManager##classe : public CATISamBasicComponentManager \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISamBasicComponentManager, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetNbOptionalBC(int & oNbOptionalBC) ; \
      virtual HRESULT GetOptionalBCList(CATListValCATUnicodeString  & oBCNameList, CATListValCATUnicodeString  & oBCTypeList, CATListValCATBaseUnknown_var& oListOfCATICkeType)  ; \
      virtual SAMHiddenState IsBasicComponentHidden(const CATISamBasicComponent* iBasicComponent) ; \
      virtual SAMReadOnlyState IsBasicComponentReadOnly(const CATISamBasicComponent* iBasicCompoment) ; \
      virtual CATBoolean IsBasicComponentRecordable(const CATISamBasicComponent* iBasicCompoment) ; \
};



#define ENVTIEdeclare_CATISamBasicComponentManager(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetNbOptionalBC(int & oNbOptionalBC) ; \
virtual HRESULT GetOptionalBCList(CATListValCATUnicodeString  & oBCNameList, CATListValCATUnicodeString  & oBCTypeList, CATListValCATBaseUnknown_var& oListOfCATICkeType)  ; \
virtual SAMHiddenState IsBasicComponentHidden(const CATISamBasicComponent* iBasicComponent) ; \
virtual SAMReadOnlyState IsBasicComponentReadOnly(const CATISamBasicComponent* iBasicCompoment) ; \
virtual CATBoolean IsBasicComponentRecordable(const CATISamBasicComponent* iBasicCompoment) ; \


#define ENVTIEdefine_CATISamBasicComponentManager(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetNbOptionalBC(int & oNbOptionalBC)  \
{ \
return (ENVTIECALL(CATISamBasicComponentManager,ENVTIETypeLetter,ENVTIELetter)GetNbOptionalBC(oNbOptionalBC)); \
} \
HRESULT  ENVTIEName::GetOptionalBCList(CATListValCATUnicodeString  & oBCNameList, CATListValCATUnicodeString  & oBCTypeList, CATListValCATBaseUnknown_var& oListOfCATICkeType)   \
{ \
return (ENVTIECALL(CATISamBasicComponentManager,ENVTIETypeLetter,ENVTIELetter)GetOptionalBCList(oBCNameList,oBCTypeList,oListOfCATICkeType)); \
} \
SAMHiddenState  ENVTIEName::IsBasicComponentHidden(const CATISamBasicComponent* iBasicComponent)  \
{ \
return (ENVTIECALL(CATISamBasicComponentManager,ENVTIETypeLetter,ENVTIELetter)IsBasicComponentHidden(iBasicComponent)); \
} \
SAMReadOnlyState  ENVTIEName::IsBasicComponentReadOnly(const CATISamBasicComponent* iBasicCompoment)  \
{ \
return (ENVTIECALL(CATISamBasicComponentManager,ENVTIETypeLetter,ENVTIELetter)IsBasicComponentReadOnly(iBasicCompoment)); \
} \
CATBoolean  ENVTIEName::IsBasicComponentRecordable(const CATISamBasicComponent* iBasicCompoment)  \
{ \
return (ENVTIECALL(CATISamBasicComponentManager,ENVTIETypeLetter,ENVTIELetter)IsBasicComponentRecordable(iBasicCompoment)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISamBasicComponentManager(classe)    TIECATISamBasicComponentManager##classe


/* Common methods inside a TIE */
#define common_TIE_CATISamBasicComponentManager(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISamBasicComponentManager, classe) \
 \
 \
CATImplementTIEMethods(CATISamBasicComponentManager, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISamBasicComponentManager, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISamBasicComponentManager, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISamBasicComponentManager, classe) \
 \
HRESULT  TIECATISamBasicComponentManager##classe::GetNbOptionalBC(int & oNbOptionalBC)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNbOptionalBC(oNbOptionalBC)); \
} \
HRESULT  TIECATISamBasicComponentManager##classe::GetOptionalBCList(CATListValCATUnicodeString  & oBCNameList, CATListValCATUnicodeString  & oBCTypeList, CATListValCATBaseUnknown_var& oListOfCATICkeType)   \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOptionalBCList(oBCNameList,oBCTypeList,oListOfCATICkeType)); \
} \
SAMHiddenState  TIECATISamBasicComponentManager##classe::IsBasicComponentHidden(const CATISamBasicComponent* iBasicComponent)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsBasicComponentHidden(iBasicComponent)); \
} \
SAMReadOnlyState  TIECATISamBasicComponentManager##classe::IsBasicComponentReadOnly(const CATISamBasicComponent* iBasicCompoment)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsBasicComponentReadOnly(iBasicCompoment)); \
} \
CATBoolean  TIECATISamBasicComponentManager##classe::IsBasicComponentRecordable(const CATISamBasicComponent* iBasicCompoment)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsBasicComponentRecordable(iBasicCompoment)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISamBasicComponentManager(classe) \
 \
 \
declare_TIE_CATISamBasicComponentManager(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamBasicComponentManager##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamBasicComponentManager,"CATISamBasicComponentManager",CATISamBasicComponentManager::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamBasicComponentManager(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISamBasicComponentManager, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamBasicComponentManager##classe(classe::MetaObject(),CATISamBasicComponentManager::MetaObject(),(void *)CreateTIECATISamBasicComponentManager##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISamBasicComponentManager(classe) \
 \
 \
declare_TIE_CATISamBasicComponentManager(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamBasicComponentManager##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamBasicComponentManager,"CATISamBasicComponentManager",CATISamBasicComponentManager::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamBasicComponentManager(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISamBasicComponentManager, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamBasicComponentManager##classe(classe::MetaObject(),CATISamBasicComponentManager::MetaObject(),(void *)CreateTIECATISamBasicComponentManager##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISamBasicComponentManager(classe) TIE_CATISamBasicComponentManager(classe)
#else
#define BOA_CATISamBasicComponentManager(classe) CATImplementBOA(CATISamBasicComponentManager, classe)
#endif

#endif
