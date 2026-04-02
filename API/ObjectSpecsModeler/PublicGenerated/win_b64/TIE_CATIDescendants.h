#ifndef __TIE_CATIDescendants
#define __TIE_CATIDescendants

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIDescendants.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIDescendants */
#define declare_TIE_CATIDescendants(classe) \
 \
 \
class TIECATIDescendants##classe : public CATIDescendants \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIDescendants, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void Append         (const CATISpecObject_var & iFeature )  ; \
      virtual void Prepend        (const CATISpecObject_var & iFeature)  ; \
      virtual void AddChild       (const CATISpecObject_var & iFeature, int iPosition) ; \
      virtual void RemoveChild    (const CATISpecObject_var & iFeature ) ; \
      virtual int  GetPosition    (const CATISpecObject_var & iFeature ) ; \
      virtual void ChangePosition (const CATISpecObject_var & iFeature,int iNewPosition ); \
      virtual CATISpecObject_var GetChildAtPosition (int iPosition ) ; \
      virtual int GetNumberOfChildren() ; \
      virtual void GetDirectChildren (CATClassId iIntfName,CATListValCATISpecObject_var &oLst)   ; \
      virtual void GetAllChildren (CATClassId iIntfName,CATListValCATISpecObject_var &oLst)   ; \
};



#define ENVTIEdeclare_CATIDescendants(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void Append         (const CATISpecObject_var & iFeature )  ; \
virtual void Prepend        (const CATISpecObject_var & iFeature)  ; \
virtual void AddChild       (const CATISpecObject_var & iFeature, int iPosition) ; \
virtual void RemoveChild    (const CATISpecObject_var & iFeature ) ; \
virtual int  GetPosition    (const CATISpecObject_var & iFeature ) ; \
virtual void ChangePosition (const CATISpecObject_var & iFeature,int iNewPosition ); \
virtual CATISpecObject_var GetChildAtPosition (int iPosition ) ; \
virtual int GetNumberOfChildren() ; \
virtual void GetDirectChildren (CATClassId iIntfName,CATListValCATISpecObject_var &oLst)   ; \
virtual void GetAllChildren (CATClassId iIntfName,CATListValCATISpecObject_var &oLst)   ; \


#define ENVTIEdefine_CATIDescendants(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void  ENVTIEName::Append         (const CATISpecObject_var & iFeature )   \
{ \
 (ENVTIECALL(CATIDescendants,ENVTIETypeLetter,ENVTIELetter)Append         (iFeature )); \
} \
void  ENVTIEName::Prepend        (const CATISpecObject_var & iFeature)   \
{ \
 (ENVTIECALL(CATIDescendants,ENVTIETypeLetter,ENVTIELetter)Prepend        (iFeature)); \
} \
void  ENVTIEName::AddChild       (const CATISpecObject_var & iFeature, int iPosition)  \
{ \
 (ENVTIECALL(CATIDescendants,ENVTIETypeLetter,ENVTIELetter)AddChild       (iFeature,iPosition)); \
} \
void  ENVTIEName::RemoveChild    (const CATISpecObject_var & iFeature )  \
{ \
 (ENVTIECALL(CATIDescendants,ENVTIETypeLetter,ENVTIELetter)RemoveChild    (iFeature )); \
} \
int   ENVTIEName::GetPosition    (const CATISpecObject_var & iFeature )  \
{ \
return (ENVTIECALL(CATIDescendants,ENVTIETypeLetter,ENVTIELetter)GetPosition    (iFeature )); \
} \
void  ENVTIEName::ChangePosition (const CATISpecObject_var & iFeature,int iNewPosition ) \
{ \
 (ENVTIECALL(CATIDescendants,ENVTIETypeLetter,ENVTIELetter)ChangePosition (iFeature,iNewPosition )); \
} \
CATISpecObject_var  ENVTIEName::GetChildAtPosition (int iPosition )  \
{ \
return (ENVTIECALL(CATIDescendants,ENVTIETypeLetter,ENVTIELetter)GetChildAtPosition (iPosition )); \
} \
int  ENVTIEName::GetNumberOfChildren()  \
{ \
return (ENVTIECALL(CATIDescendants,ENVTIETypeLetter,ENVTIELetter)GetNumberOfChildren()); \
} \
void  ENVTIEName::GetDirectChildren (CATClassId iIntfName,CATListValCATISpecObject_var &oLst)    \
{ \
 (ENVTIECALL(CATIDescendants,ENVTIETypeLetter,ENVTIELetter)GetDirectChildren (iIntfName,oLst)); \
} \
void  ENVTIEName::GetAllChildren (CATClassId iIntfName,CATListValCATISpecObject_var &oLst)    \
{ \
 (ENVTIECALL(CATIDescendants,ENVTIETypeLetter,ENVTIELetter)GetAllChildren (iIntfName,oLst)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIDescendants(classe)    TIECATIDescendants##classe


/* Common methods inside a TIE */
#define common_TIE_CATIDescendants(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIDescendants, classe) \
 \
 \
CATImplementTIEMethods(CATIDescendants, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIDescendants, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIDescendants, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIDescendants, classe) \
 \
void  TIECATIDescendants##classe::Append         (const CATISpecObject_var & iFeature )   \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Append         (iFeature ); \
} \
void  TIECATIDescendants##classe::Prepend        (const CATISpecObject_var & iFeature)   \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Prepend        (iFeature); \
} \
void  TIECATIDescendants##classe::AddChild       (const CATISpecObject_var & iFeature, int iPosition)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddChild       (iFeature,iPosition); \
} \
void  TIECATIDescendants##classe::RemoveChild    (const CATISpecObject_var & iFeature )  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveChild    (iFeature ); \
} \
int   TIECATIDescendants##classe::GetPosition    (const CATISpecObject_var & iFeature )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPosition    (iFeature )); \
} \
void  TIECATIDescendants##classe::ChangePosition (const CATISpecObject_var & iFeature,int iNewPosition ) \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ChangePosition (iFeature,iNewPosition ); \
} \
CATISpecObject_var  TIECATIDescendants##classe::GetChildAtPosition (int iPosition )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetChildAtPosition (iPosition )); \
} \
int  TIECATIDescendants##classe::GetNumberOfChildren()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNumberOfChildren()); \
} \
void  TIECATIDescendants##classe::GetDirectChildren (CATClassId iIntfName,CATListValCATISpecObject_var &oLst)    \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDirectChildren (iIntfName,oLst); \
} \
void  TIECATIDescendants##classe::GetAllChildren (CATClassId iIntfName,CATListValCATISpecObject_var &oLst)    \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAllChildren (iIntfName,oLst); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIDescendants(classe) \
 \
 \
declare_TIE_CATIDescendants(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDescendants##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDescendants,"CATIDescendants",CATIDescendants::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDescendants(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIDescendants, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDescendants##classe(classe::MetaObject(),CATIDescendants::MetaObject(),(void *)CreateTIECATIDescendants##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIDescendants(classe) \
 \
 \
declare_TIE_CATIDescendants(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDescendants##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDescendants,"CATIDescendants",CATIDescendants::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDescendants(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIDescendants, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDescendants##classe(classe::MetaObject(),CATIDescendants::MetaObject(),(void *)CreateTIECATIDescendants##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIDescendants(classe) TIE_CATIDescendants(classe)
#else
#define BOA_CATIDescendants(classe) CATImplementBOA(CATIDescendants, classe)
#endif

#endif
