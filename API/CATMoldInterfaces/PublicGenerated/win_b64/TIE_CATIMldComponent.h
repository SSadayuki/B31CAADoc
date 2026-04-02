#ifndef __TIE_CATIMldComponent
#define __TIE_CATIMldComponent

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMldComponent.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMldComponent */
#define declare_TIE_CATIMldComponent(classe) \
 \
 \
class TIECATIMldComponent##classe : public CATIMldComponent \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMldComponent, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATISpecObject_var GetProductInstance() const ; \
      virtual CATISpecObject_var GetFromPlate() const ; \
      virtual CATISpecObject_var GetToPlate() const ; \
      virtual CATUnicodeString GetIcon() const ; \
      virtual CATListValCATISpecObject_var GetDrilledList() const ; \
      virtual void SetFromPlate(const CATISpecObject_var iFromPlate) ; \
      virtual void SetToPlate(const CATISpecObject_var iToPlate) ; \
      virtual void SetIcon(const CATUnicodeString iStrIcon) ; \
      virtual void SetDrilledList	(CATListValCATISpecObject_var iDrilledList) ; \
};



#define ENVTIEdeclare_CATIMldComponent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATISpecObject_var GetProductInstance() const ; \
virtual CATISpecObject_var GetFromPlate() const ; \
virtual CATISpecObject_var GetToPlate() const ; \
virtual CATUnicodeString GetIcon() const ; \
virtual CATListValCATISpecObject_var GetDrilledList() const ; \
virtual void SetFromPlate(const CATISpecObject_var iFromPlate) ; \
virtual void SetToPlate(const CATISpecObject_var iToPlate) ; \
virtual void SetIcon(const CATUnicodeString iStrIcon) ; \
virtual void SetDrilledList	(CATListValCATISpecObject_var iDrilledList) ; \


#define ENVTIEdefine_CATIMldComponent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATISpecObject_var  ENVTIEName::GetProductInstance() const  \
{ \
return (ENVTIECALL(CATIMldComponent,ENVTIETypeLetter,ENVTIELetter)GetProductInstance()); \
} \
CATISpecObject_var  ENVTIEName::GetFromPlate() const  \
{ \
return (ENVTIECALL(CATIMldComponent,ENVTIETypeLetter,ENVTIELetter)GetFromPlate()); \
} \
CATISpecObject_var  ENVTIEName::GetToPlate() const  \
{ \
return (ENVTIECALL(CATIMldComponent,ENVTIETypeLetter,ENVTIELetter)GetToPlate()); \
} \
CATUnicodeString  ENVTIEName::GetIcon() const  \
{ \
return (ENVTIECALL(CATIMldComponent,ENVTIETypeLetter,ENVTIELetter)GetIcon()); \
} \
CATListValCATISpecObject_var  ENVTIEName::GetDrilledList() const  \
{ \
return (ENVTIECALL(CATIMldComponent,ENVTIETypeLetter,ENVTIELetter)GetDrilledList()); \
} \
void  ENVTIEName::SetFromPlate(const CATISpecObject_var iFromPlate)  \
{ \
 (ENVTIECALL(CATIMldComponent,ENVTIETypeLetter,ENVTIELetter)SetFromPlate(iFromPlate)); \
} \
void  ENVTIEName::SetToPlate(const CATISpecObject_var iToPlate)  \
{ \
 (ENVTIECALL(CATIMldComponent,ENVTIETypeLetter,ENVTIELetter)SetToPlate(iToPlate)); \
} \
void  ENVTIEName::SetIcon(const CATUnicodeString iStrIcon)  \
{ \
 (ENVTIECALL(CATIMldComponent,ENVTIETypeLetter,ENVTIELetter)SetIcon(iStrIcon)); \
} \
void  ENVTIEName::SetDrilledList	(CATListValCATISpecObject_var iDrilledList)  \
{ \
 (ENVTIECALL(CATIMldComponent,ENVTIETypeLetter,ENVTIELetter)SetDrilledList	(iDrilledList)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMldComponent(classe)    TIECATIMldComponent##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMldComponent(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMldComponent, classe) \
 \
 \
CATImplementTIEMethods(CATIMldComponent, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMldComponent, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMldComponent, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMldComponent, classe) \
 \
CATISpecObject_var  TIECATIMldComponent##classe::GetProductInstance() const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetProductInstance()); \
} \
CATISpecObject_var  TIECATIMldComponent##classe::GetFromPlate() const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFromPlate()); \
} \
CATISpecObject_var  TIECATIMldComponent##classe::GetToPlate() const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetToPlate()); \
} \
CATUnicodeString  TIECATIMldComponent##classe::GetIcon() const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetIcon()); \
} \
CATListValCATISpecObject_var  TIECATIMldComponent##classe::GetDrilledList() const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDrilledList()); \
} \
void  TIECATIMldComponent##classe::SetFromPlate(const CATISpecObject_var iFromPlate)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetFromPlate(iFromPlate); \
} \
void  TIECATIMldComponent##classe::SetToPlate(const CATISpecObject_var iToPlate)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetToPlate(iToPlate); \
} \
void  TIECATIMldComponent##classe::SetIcon(const CATUnicodeString iStrIcon)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetIcon(iStrIcon); \
} \
void  TIECATIMldComponent##classe::SetDrilledList	(CATListValCATISpecObject_var iDrilledList)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDrilledList	(iDrilledList); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMldComponent(classe) \
 \
 \
declare_TIE_CATIMldComponent(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMldComponent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMldComponent,"CATIMldComponent",CATIMldComponent::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMldComponent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMldComponent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMldComponent##classe(classe::MetaObject(),CATIMldComponent::MetaObject(),(void *)CreateTIECATIMldComponent##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMldComponent(classe) \
 \
 \
declare_TIE_CATIMldComponent(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMldComponent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMldComponent,"CATIMldComponent",CATIMldComponent::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMldComponent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMldComponent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMldComponent##classe(classe::MetaObject(),CATIMldComponent::MetaObject(),(void *)CreateTIECATIMldComponent##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMldComponent(classe) TIE_CATIMldComponent(classe)
#else
#define BOA_CATIMldComponent(classe) CATImplementBOA(CATIMldComponent, classe)
#endif

#endif
