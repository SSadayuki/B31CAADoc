#ifndef __TIE_CATIUpdateProvider
#define __TIE_CATIUpdateProvider

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIUpdateProvider.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIUpdateProvider */
#define declare_TIE_CATIUpdateProvider(classe) \
 \
 \
class TIECATIUpdateProvider##classe : public CATIUpdateProvider \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIUpdateProvider, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual int					Update(CATBaseUnknown* iWorkingObj, CATBaseUnknown_var iDomain = ((CATBaseUnknown*)0)) ; \
      virtual CATBoolean				IsUpToDate(CATBaseUnknown* iWorkingObj, CATBaseUnknown_var iDomain=((CATBaseUnknown*)0)) const ; \
      virtual void				SetUpToDate(CATBaseUnknown* iWorkingObj, boolean iFlag ); \
      virtual int					IsInactive(CATBaseUnknown* iWorkingObj) const; \
};



#define ENVTIEdeclare_CATIUpdateProvider(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual int					Update(CATBaseUnknown* iWorkingObj, CATBaseUnknown_var iDomain = ((CATBaseUnknown*)0)) ; \
virtual CATBoolean				IsUpToDate(CATBaseUnknown* iWorkingObj, CATBaseUnknown_var iDomain=((CATBaseUnknown*)0)) const ; \
virtual void				SetUpToDate(CATBaseUnknown* iWorkingObj, boolean iFlag ); \
virtual int					IsInactive(CATBaseUnknown* iWorkingObj) const; \


#define ENVTIEdefine_CATIUpdateProvider(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
int					 ENVTIEName::Update(CATBaseUnknown* iWorkingObj, CATBaseUnknown_var iDomain )  \
{ \
return (ENVTIECALL(CATIUpdateProvider,ENVTIETypeLetter,ENVTIELetter)Update(iWorkingObj,iDomain )); \
} \
CATBoolean				 ENVTIEName::IsUpToDate(CATBaseUnknown* iWorkingObj, CATBaseUnknown_var iDomain) const  \
{ \
return (ENVTIECALL(CATIUpdateProvider,ENVTIETypeLetter,ENVTIELetter)IsUpToDate(iWorkingObj,iDomain)); \
} \
void				 ENVTIEName::SetUpToDate(CATBaseUnknown* iWorkingObj, boolean iFlag ) \
{ \
 (ENVTIECALL(CATIUpdateProvider,ENVTIETypeLetter,ENVTIELetter)SetUpToDate(iWorkingObj,iFlag )); \
} \
int					 ENVTIEName::IsInactive(CATBaseUnknown* iWorkingObj) const \
{ \
return (ENVTIECALL(CATIUpdateProvider,ENVTIETypeLetter,ENVTIELetter)IsInactive(iWorkingObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIUpdateProvider(classe)    TIECATIUpdateProvider##classe


/* Common methods inside a TIE */
#define common_TIE_CATIUpdateProvider(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIUpdateProvider, classe) \
 \
 \
CATImplementTIEMethods(CATIUpdateProvider, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIUpdateProvider, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIUpdateProvider, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIUpdateProvider, classe) \
 \
int					 TIECATIUpdateProvider##classe::Update(CATBaseUnknown* iWorkingObj, CATBaseUnknown_var iDomain )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Update(iWorkingObj,iDomain )); \
} \
CATBoolean				 TIECATIUpdateProvider##classe::IsUpToDate(CATBaseUnknown* iWorkingObj, CATBaseUnknown_var iDomain) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsUpToDate(iWorkingObj,iDomain)); \
} \
void				 TIECATIUpdateProvider##classe::SetUpToDate(CATBaseUnknown* iWorkingObj, boolean iFlag ) \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetUpToDate(iWorkingObj,iFlag ); \
} \
int					 TIECATIUpdateProvider##classe::IsInactive(CATBaseUnknown* iWorkingObj) const \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsInactive(iWorkingObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIUpdateProvider(classe) \
 \
 \
declare_TIE_CATIUpdateProvider(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIUpdateProvider##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIUpdateProvider,"CATIUpdateProvider",CATIUpdateProvider::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIUpdateProvider(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIUpdateProvider, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIUpdateProvider##classe(classe::MetaObject(),CATIUpdateProvider::MetaObject(),(void *)CreateTIECATIUpdateProvider##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIUpdateProvider(classe) \
 \
 \
declare_TIE_CATIUpdateProvider(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIUpdateProvider##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIUpdateProvider,"CATIUpdateProvider",CATIUpdateProvider::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIUpdateProvider(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIUpdateProvider, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIUpdateProvider##classe(classe::MetaObject(),CATIUpdateProvider::MetaObject(),(void *)CreateTIECATIUpdateProvider##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIUpdateProvider(classe) TIE_CATIUpdateProvider(classe)
#else
#define BOA_CATIUpdateProvider(classe) CATImplementBOA(CATIUpdateProvider, classe)
#endif

#endif
