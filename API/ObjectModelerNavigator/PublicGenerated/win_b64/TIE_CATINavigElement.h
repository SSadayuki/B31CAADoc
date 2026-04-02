#ifndef __TIE_CATINavigElement
#define __TIE_CATINavigElement

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATINavigElement.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATINavigElement */
#define declare_TIE_CATINavigElement(classe) \
 \
 \
class TIECATINavigElement##classe : public CATINavigElement \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATINavigElement, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void ProcessAfterSelect(); \
      virtual void ProcessAfterExtSelect(); \
      virtual void ProcessAfterAction(); \
      virtual void ProcessAfterExpand(); \
      virtual void ProcessAfterMethod(); \
      virtual CATINavigContainer* GetFatherContainer(); \
      virtual void Update(); \
      virtual const CATNavigController* GetController(); \
      virtual CATNavigInstance* GetAssociatedInstance(); \
      virtual void Remove(int iIndex); \
      virtual void SetMarked(int mark=1); \
      virtual int  GetMarked(); \
};



#define ENVTIEdeclare_CATINavigElement(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void ProcessAfterSelect(); \
virtual void ProcessAfterExtSelect(); \
virtual void ProcessAfterAction(); \
virtual void ProcessAfterExpand(); \
virtual void ProcessAfterMethod(); \
virtual CATINavigContainer* GetFatherContainer(); \
virtual void Update(); \
virtual const CATNavigController* GetController(); \
virtual CATNavigInstance* GetAssociatedInstance(); \
virtual void Remove(int iIndex); \
virtual void SetMarked(int mark=1); \
virtual int  GetMarked(); \


#define ENVTIEdefine_CATINavigElement(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void  ENVTIEName::ProcessAfterSelect() \
{ \
 (ENVTIECALL(CATINavigElement,ENVTIETypeLetter,ENVTIELetter)ProcessAfterSelect()); \
} \
void  ENVTIEName::ProcessAfterExtSelect() \
{ \
 (ENVTIECALL(CATINavigElement,ENVTIETypeLetter,ENVTIELetter)ProcessAfterExtSelect()); \
} \
void  ENVTIEName::ProcessAfterAction() \
{ \
 (ENVTIECALL(CATINavigElement,ENVTIETypeLetter,ENVTIELetter)ProcessAfterAction()); \
} \
void  ENVTIEName::ProcessAfterExpand() \
{ \
 (ENVTIECALL(CATINavigElement,ENVTIETypeLetter,ENVTIELetter)ProcessAfterExpand()); \
} \
void  ENVTIEName::ProcessAfterMethod() \
{ \
 (ENVTIECALL(CATINavigElement,ENVTIETypeLetter,ENVTIELetter)ProcessAfterMethod()); \
} \
CATINavigContainer*  ENVTIEName::GetFatherContainer() \
{ \
return (ENVTIECALL(CATINavigElement,ENVTIETypeLetter,ENVTIELetter)GetFatherContainer()); \
} \
void  ENVTIEName::Update() \
{ \
 (ENVTIECALL(CATINavigElement,ENVTIETypeLetter,ENVTIELetter)Update()); \
} \
const CATNavigController*  ENVTIEName::GetController() \
{ \
return (ENVTIECALL(CATINavigElement,ENVTIETypeLetter,ENVTIELetter)GetController()); \
} \
CATNavigInstance*  ENVTIEName::GetAssociatedInstance() \
{ \
return (ENVTIECALL(CATINavigElement,ENVTIETypeLetter,ENVTIELetter)GetAssociatedInstance()); \
} \
void  ENVTIEName::Remove(int iIndex) \
{ \
 (ENVTIECALL(CATINavigElement,ENVTIETypeLetter,ENVTIELetter)Remove(iIndex)); \
} \
void  ENVTIEName::SetMarked(int mark) \
{ \
 (ENVTIECALL(CATINavigElement,ENVTIETypeLetter,ENVTIELetter)SetMarked(mark)); \
} \
int   ENVTIEName::GetMarked() \
{ \
return (ENVTIECALL(CATINavigElement,ENVTIETypeLetter,ENVTIELetter)GetMarked()); \
} \


/* Name of the TIE class */
#define class_TIE_CATINavigElement(classe)    TIECATINavigElement##classe


/* Common methods inside a TIE */
#define common_TIE_CATINavigElement(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATINavigElement, classe) \
 \
 \
CATImplementTIEMethods(CATINavigElement, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATINavigElement, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATINavigElement, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATINavigElement, classe) \
 \
void  TIECATINavigElement##classe::ProcessAfterSelect() \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ProcessAfterSelect(); \
} \
void  TIECATINavigElement##classe::ProcessAfterExtSelect() \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ProcessAfterExtSelect(); \
} \
void  TIECATINavigElement##classe::ProcessAfterAction() \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ProcessAfterAction(); \
} \
void  TIECATINavigElement##classe::ProcessAfterExpand() \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ProcessAfterExpand(); \
} \
void  TIECATINavigElement##classe::ProcessAfterMethod() \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ProcessAfterMethod(); \
} \
CATINavigContainer*  TIECATINavigElement##classe::GetFatherContainer() \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFatherContainer()); \
} \
void  TIECATINavigElement##classe::Update() \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Update(); \
} \
const CATNavigController*  TIECATINavigElement##classe::GetController() \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetController()); \
} \
CATNavigInstance*  TIECATINavigElement##classe::GetAssociatedInstance() \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAssociatedInstance()); \
} \
void  TIECATINavigElement##classe::Remove(int iIndex) \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove(iIndex); \
} \
void  TIECATINavigElement##classe::SetMarked(int mark) \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMarked(mark); \
} \
int   TIECATINavigElement##classe::GetMarked() \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMarked()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATINavigElement(classe) \
 \
 \
declare_TIE_CATINavigElement(classe) \
 \
 \
CATMetaClass * __stdcall TIECATINavigElement##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATINavigElement,"CATINavigElement",CATINavigElement::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATINavigElement(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATINavigElement, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATINavigElement##classe(classe::MetaObject(),CATINavigElement::MetaObject(),(void *)CreateTIECATINavigElement##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATINavigElement(classe) \
 \
 \
declare_TIE_CATINavigElement(classe) \
 \
 \
CATMetaClass * __stdcall TIECATINavigElement##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATINavigElement,"CATINavigElement",CATINavigElement::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATINavigElement(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATINavigElement, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATINavigElement##classe(classe::MetaObject(),CATINavigElement::MetaObject(),(void *)CreateTIECATINavigElement##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATINavigElement(classe) TIE_CATINavigElement(classe)
#else
#define BOA_CATINavigElement(classe) CATImplementBOA(CATINavigElement, classe)
#endif

#endif
