#ifndef __TIE_CATIParmPublisher
#define __TIE_CATIParmPublisher

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIParmPublisher.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIParmPublisher */
#define declare_TIE_CATIParmPublisher(classe) \
 \
 \
class TIECATIParmPublisher##classe : public CATIParmPublisher \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIParmPublisher, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void Append         (const CATISpecObject_var & iKBwareObject )  ; \
      virtual void RemoveChild    (const CATISpecObject_var & iKBwareObject ) ; \
      virtual void GetDirectChildren (CATClassId iIntfName,CATListValCATISpecObject_var &iListFound)   ; \
      virtual void GetAllChildren (CATClassId iIntfName,CATListValCATISpecObject_var &ListFound)   ; \
      virtual boolean AllowUserAppend ( ) const ; \
      virtual CATIContainer_var GetContainer() ; \
      virtual void VisitChildren(CATIVisitor* iVisitor, const int recur = 0) ; \
};



#define ENVTIEdeclare_CATIParmPublisher(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void Append         (const CATISpecObject_var & iKBwareObject )  ; \
virtual void RemoveChild    (const CATISpecObject_var & iKBwareObject ) ; \
virtual void GetDirectChildren (CATClassId iIntfName,CATListValCATISpecObject_var &iListFound)   ; \
virtual void GetAllChildren (CATClassId iIntfName,CATListValCATISpecObject_var &ListFound)   ; \
virtual boolean AllowUserAppend ( ) const ; \
virtual CATIContainer_var GetContainer() ; \
virtual void VisitChildren(CATIVisitor* iVisitor, const int recur = 0) ; \


#define ENVTIEdefine_CATIParmPublisher(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void  ENVTIEName::Append         (const CATISpecObject_var & iKBwareObject )   \
{ \
 (ENVTIECALL(CATIParmPublisher,ENVTIETypeLetter,ENVTIELetter)Append         (iKBwareObject )); \
} \
void  ENVTIEName::RemoveChild    (const CATISpecObject_var & iKBwareObject )  \
{ \
 (ENVTIECALL(CATIParmPublisher,ENVTIETypeLetter,ENVTIELetter)RemoveChild    (iKBwareObject )); \
} \
void  ENVTIEName::GetDirectChildren (CATClassId iIntfName,CATListValCATISpecObject_var &iListFound)    \
{ \
 (ENVTIECALL(CATIParmPublisher,ENVTIETypeLetter,ENVTIELetter)GetDirectChildren (iIntfName,iListFound)); \
} \
void  ENVTIEName::GetAllChildren (CATClassId iIntfName,CATListValCATISpecObject_var &ListFound)    \
{ \
 (ENVTIECALL(CATIParmPublisher,ENVTIETypeLetter,ENVTIELetter)GetAllChildren (iIntfName,ListFound)); \
} \
boolean  ENVTIEName::AllowUserAppend ( ) const  \
{ \
return (ENVTIECALL(CATIParmPublisher,ENVTIETypeLetter,ENVTIELetter)AllowUserAppend ()); \
} \
CATIContainer_var  ENVTIEName::GetContainer()  \
{ \
return (ENVTIECALL(CATIParmPublisher,ENVTIETypeLetter,ENVTIELetter)GetContainer()); \
} \
void  ENVTIEName::VisitChildren(CATIVisitor* iVisitor, const int recur )  \
{ \
 (ENVTIECALL(CATIParmPublisher,ENVTIETypeLetter,ENVTIELetter)VisitChildren(iVisitor,recur )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIParmPublisher(classe)    TIECATIParmPublisher##classe


/* Common methods inside a TIE */
#define common_TIE_CATIParmPublisher(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIParmPublisher, classe) \
 \
 \
CATImplementTIEMethods(CATIParmPublisher, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIParmPublisher, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIParmPublisher, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIParmPublisher, classe) \
 \
void  TIECATIParmPublisher##classe::Append         (const CATISpecObject_var & iKBwareObject )   \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Append         (iKBwareObject ); \
} \
void  TIECATIParmPublisher##classe::RemoveChild    (const CATISpecObject_var & iKBwareObject )  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveChild    (iKBwareObject ); \
} \
void  TIECATIParmPublisher##classe::GetDirectChildren (CATClassId iIntfName,CATListValCATISpecObject_var &iListFound)    \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDirectChildren (iIntfName,iListFound); \
} \
void  TIECATIParmPublisher##classe::GetAllChildren (CATClassId iIntfName,CATListValCATISpecObject_var &ListFound)    \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAllChildren (iIntfName,ListFound); \
} \
boolean  TIECATIParmPublisher##classe::AllowUserAppend ( ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AllowUserAppend ()); \
} \
CATIContainer_var  TIECATIParmPublisher##classe::GetContainer()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetContainer()); \
} \
void  TIECATIParmPublisher##classe::VisitChildren(CATIVisitor* iVisitor, const int recur )  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->VisitChildren(iVisitor,recur ); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIParmPublisher(classe) \
 \
 \
declare_TIE_CATIParmPublisher(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIParmPublisher##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIParmPublisher,"CATIParmPublisher",CATIParmPublisher::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIParmPublisher(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIParmPublisher, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIParmPublisher##classe(classe::MetaObject(),CATIParmPublisher::MetaObject(),(void *)CreateTIECATIParmPublisher##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIParmPublisher(classe) \
 \
 \
declare_TIE_CATIParmPublisher(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIParmPublisher##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIParmPublisher,"CATIParmPublisher",CATIParmPublisher::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIParmPublisher(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIParmPublisher, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIParmPublisher##classe(classe::MetaObject(),CATIParmPublisher::MetaObject(),(void *)CreateTIECATIParmPublisher##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIParmPublisher(classe) TIE_CATIParmPublisher(classe)
#else
#define BOA_CATIParmPublisher(classe) CATImplementBOA(CATIParmPublisher, classe)
#endif

#endif
