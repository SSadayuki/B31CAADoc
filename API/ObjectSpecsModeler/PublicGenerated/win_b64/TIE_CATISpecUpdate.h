#ifndef __TIE_CATISpecUpdate
#define __TIE_CATISpecUpdate

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISpecUpdate.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISpecUpdate */
#define declare_TIE_CATISpecUpdate(classe) \
 \
 \
class TIECATISpecUpdate##classe : public CATISpecUpdate \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISpecUpdate, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual int					Update(CATBaseUnknown_var iDomain = ((CATBaseUnknown*)0)) ; \
      virtual CATBoolean				IsUpToDate(CATBaseUnknown_var iDomain=((CATBaseUnknown*)0)) const ; \
      virtual void				SetUpToDate( CATBoolean flag ); \
      virtual CATOldUpdateStamp	GetUpdateStamp() const; \
      virtual int					IsInactive() const; \
};



#define ENVTIEdeclare_CATISpecUpdate(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual int					Update(CATBaseUnknown_var iDomain = ((CATBaseUnknown*)0)) ; \
virtual CATBoolean				IsUpToDate(CATBaseUnknown_var iDomain=((CATBaseUnknown*)0)) const ; \
virtual void				SetUpToDate( CATBoolean flag ); \
virtual CATOldUpdateStamp	GetUpdateStamp() const; \
virtual int					IsInactive() const; \


#define ENVTIEdefine_CATISpecUpdate(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
int					 ENVTIEName::Update(CATBaseUnknown_var iDomain )  \
{ \
return (ENVTIECALL(CATISpecUpdate,ENVTIETypeLetter,ENVTIELetter)Update(iDomain )); \
} \
CATBoolean				 ENVTIEName::IsUpToDate(CATBaseUnknown_var iDomain) const  \
{ \
return (ENVTIECALL(CATISpecUpdate,ENVTIETypeLetter,ENVTIELetter)IsUpToDate(iDomain)); \
} \
void				 ENVTIEName::SetUpToDate( CATBoolean flag ) \
{ \
 (ENVTIECALL(CATISpecUpdate,ENVTIETypeLetter,ENVTIELetter)SetUpToDate(flag )); \
} \
CATOldUpdateStamp	 ENVTIEName::GetUpdateStamp() const \
{ \
return (ENVTIECALL(CATISpecUpdate,ENVTIETypeLetter,ENVTIELetter)GetUpdateStamp()); \
} \
int					 ENVTIEName::IsInactive() const \
{ \
return (ENVTIECALL(CATISpecUpdate,ENVTIETypeLetter,ENVTIELetter)IsInactive()); \
} \


/* Name of the TIE class */
#define class_TIE_CATISpecUpdate(classe)    TIECATISpecUpdate##classe


/* Common methods inside a TIE */
#define common_TIE_CATISpecUpdate(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISpecUpdate, classe) \
 \
 \
CATImplementTIEMethods(CATISpecUpdate, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISpecUpdate, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISpecUpdate, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISpecUpdate, classe) \
 \
int					 TIECATISpecUpdate##classe::Update(CATBaseUnknown_var iDomain )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Update(iDomain )); \
} \
CATBoolean				 TIECATISpecUpdate##classe::IsUpToDate(CATBaseUnknown_var iDomain) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsUpToDate(iDomain)); \
} \
void				 TIECATISpecUpdate##classe::SetUpToDate( CATBoolean flag ) \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetUpToDate(flag ); \
} \
CATOldUpdateStamp	 TIECATISpecUpdate##classe::GetUpdateStamp() const \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetUpdateStamp()); \
} \
int					 TIECATISpecUpdate##classe::IsInactive() const \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsInactive()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISpecUpdate(classe) \
 \
 \
declare_TIE_CATISpecUpdate(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISpecUpdate##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISpecUpdate,"CATISpecUpdate",CATISpecUpdate::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISpecUpdate(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISpecUpdate, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISpecUpdate##classe(classe::MetaObject(),CATISpecUpdate::MetaObject(),(void *)CreateTIECATISpecUpdate##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISpecUpdate(classe) \
 \
 \
declare_TIE_CATISpecUpdate(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISpecUpdate##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISpecUpdate,"CATISpecUpdate",CATISpecUpdate::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISpecUpdate(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISpecUpdate, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISpecUpdate##classe(classe::MetaObject(),CATISpecUpdate::MetaObject(),(void *)CreateTIECATISpecUpdate##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISpecUpdate(classe) TIE_CATISpecUpdate(classe)
#else
#define BOA_CATISpecUpdate(classe) CATImplementBOA(CATISpecUpdate, classe)
#endif

#endif
