#ifndef __TIE_CATIPPRHubLoader
#define __TIE_CATIPPRHubLoader

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPPRHubLoader.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPPRHubLoader */
#define declare_TIE_CATIPPRHubLoader(classe) \
 \
 \
class TIECATIPPRHubLoader##classe : public CATIPPRHubLoader \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPPRHubLoader, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT Load(const CATPPRHubObjectDescriptor *iDesc, CATBaseUnknown  ** oPPRObj, const CATBoolean iLock=FALSE, const CATPPRHubOpenMode iMode=CATIPPRHubLoader::SeparateView , const CATFrmEditor * iFrmEditor=0 ); \
      virtual HRESULT Load(const CATListPtrCATPPRHubObjectDescriptor *iDescriptors, CATListPtrCATBaseUnknown  ** oObjList, const CATBoolean iLock=FALSE, const CATPPRHubOpenMode *iMode=0, const CATFrmEditor * iFrmEditors=0 ); \
      virtual HRESULT Load(const CATListPtrCATPPRHubObjectDescriptor* iDescriptors, CATListPtrCATBaseUnknown  ** oObjList, const long iLoadOptions=0, const CATListPtrCATFrmEditor* iFrmEditors=0 ); \
};



#define ENVTIEdeclare_CATIPPRHubLoader(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT Load(const CATPPRHubObjectDescriptor *iDesc, CATBaseUnknown  ** oPPRObj, const CATBoolean iLock=FALSE, const CATPPRHubOpenMode iMode=CATIPPRHubLoader::SeparateView , const CATFrmEditor * iFrmEditor=0 ); \
virtual HRESULT Load(const CATListPtrCATPPRHubObjectDescriptor *iDescriptors, CATListPtrCATBaseUnknown  ** oObjList, const CATBoolean iLock=FALSE, const CATPPRHubOpenMode *iMode=0, const CATFrmEditor * iFrmEditors=0 ); \
virtual HRESULT Load(const CATListPtrCATPPRHubObjectDescriptor* iDescriptors, CATListPtrCATBaseUnknown  ** oObjList, const long iLoadOptions=0, const CATListPtrCATFrmEditor* iFrmEditors=0 ); \


#define ENVTIEdefine_CATIPPRHubLoader(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::Load(const CATPPRHubObjectDescriptor *iDesc, CATBaseUnknown  ** oPPRObj, const CATBoolean iLock, const CATPPRHubOpenMode iMode, const CATFrmEditor * iFrmEditor) \
{ \
return (ENVTIECALL(CATIPPRHubLoader,ENVTIETypeLetter,ENVTIELetter)Load(iDesc,oPPRObj,iLock,iMode,iFrmEditor)); \
} \
HRESULT  ENVTIEName::Load(const CATListPtrCATPPRHubObjectDescriptor *iDescriptors, CATListPtrCATBaseUnknown  ** oObjList, const CATBoolean iLock, const CATPPRHubOpenMode *iMode, const CATFrmEditor * iFrmEditors) \
{ \
return (ENVTIECALL(CATIPPRHubLoader,ENVTIETypeLetter,ENVTIELetter)Load(iDescriptors,oObjList,iLock,iMode,iFrmEditors)); \
} \
HRESULT  ENVTIEName::Load(const CATListPtrCATPPRHubObjectDescriptor* iDescriptors, CATListPtrCATBaseUnknown  ** oObjList, const long iLoadOptions, const CATListPtrCATFrmEditor* iFrmEditors) \
{ \
return (ENVTIECALL(CATIPPRHubLoader,ENVTIETypeLetter,ENVTIELetter)Load(iDescriptors,oObjList,iLoadOptions,iFrmEditors)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPPRHubLoader(classe)    TIECATIPPRHubLoader##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPPRHubLoader(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPPRHubLoader, classe) \
 \
 \
CATImplementTIEMethods(CATIPPRHubLoader, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIPPRHubLoader, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIPPRHubLoader, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPPRHubLoader, classe) \
 \
HRESULT  TIECATIPPRHubLoader##classe::Load(const CATPPRHubObjectDescriptor *iDesc, CATBaseUnknown  ** oPPRObj, const CATBoolean iLock, const CATPPRHubOpenMode iMode, const CATFrmEditor * iFrmEditor) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Load(iDesc,oPPRObj,iLock,iMode,iFrmEditor)); \
} \
HRESULT  TIECATIPPRHubLoader##classe::Load(const CATListPtrCATPPRHubObjectDescriptor *iDescriptors, CATListPtrCATBaseUnknown  ** oObjList, const CATBoolean iLock, const CATPPRHubOpenMode *iMode, const CATFrmEditor * iFrmEditors) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Load(iDescriptors,oObjList,iLock,iMode,iFrmEditors)); \
} \
HRESULT  TIECATIPPRHubLoader##classe::Load(const CATListPtrCATPPRHubObjectDescriptor* iDescriptors, CATListPtrCATBaseUnknown  ** oObjList, const long iLoadOptions, const CATListPtrCATFrmEditor* iFrmEditors) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Load(iDescriptors,oObjList,iLoadOptions,iFrmEditors)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPPRHubLoader(classe) \
 \
 \
declare_TIE_CATIPPRHubLoader(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPPRHubLoader##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPPRHubLoader,"CATIPPRHubLoader",CATIPPRHubLoader::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPPRHubLoader(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPPRHubLoader, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPPRHubLoader##classe(classe::MetaObject(),CATIPPRHubLoader::MetaObject(),(void *)CreateTIECATIPPRHubLoader##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPPRHubLoader(classe) \
 \
 \
declare_TIE_CATIPPRHubLoader(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPPRHubLoader##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPPRHubLoader,"CATIPPRHubLoader",CATIPPRHubLoader::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPPRHubLoader(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPPRHubLoader, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPPRHubLoader##classe(classe::MetaObject(),CATIPPRHubLoader::MetaObject(),(void *)CreateTIECATIPPRHubLoader##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPPRHubLoader(classe) TIE_CATIPPRHubLoader(classe)
#else
#define BOA_CATIPPRHubLoader(classe) CATImplementBOA(CATIPPRHubLoader, classe)
#endif

#endif
