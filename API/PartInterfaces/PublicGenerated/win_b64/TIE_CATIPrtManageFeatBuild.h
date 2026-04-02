#ifndef __TIE_CATIPrtManageFeatBuild
#define __TIE_CATIPrtManageFeatBuild

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPrtManageFeatBuild.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPrtManageFeatBuild */
#define declare_TIE_CATIPrtManageFeatBuild(classe) \
 \
 \
class TIECATIPrtManageFeatBuild##classe : public CATIPrtManageFeatBuild \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPrtManageFeatBuild, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATBoolean BuildNecessity() ; \
      virtual void ReportIsNecessary() ; \
      virtual void ReportIsNotNecessary() ; \
      virtual CATBoolean ReportNecessity() ; \
      virtual void DeclarePatternContext(); \
      virtual void ForgetPatternContext(); \
      virtual CATBoolean IsInPatternContext(); \
      virtual void ShapeIsUpToDate() ; \
      virtual void ShapeIsNotUpToDate() ; \
      virtual CATBoolean ShapeNecessity() ; \
      virtual void SetBody(CATBody_var iBody) ; \
      virtual CATBody_var GetBody(int read_only=1) ; \
      virtual void SetCurrentJournal(CATCGMJournalList* iJournal) ; \
      virtual CATCGMJournalList* GetCurrentJournal() ; \
      virtual void SetOperand(CATListValCATBaseUnknown_var &iSpecs,CATListOfCATUnicodeString &iKeys) ; \
      virtual void GetOperand(CATListValCATBaseUnknown_var &oSpecs,CATListOfCATUnicodeString &oKeys) ; \
      virtual void SetMultiBody(CATListValCATBaseUnknown_var MultiBody) ; \
      virtual CATListValCATBaseUnknown_var GetMultiBody() ; \
      virtual void SetBodyToPattern(CATBody_var Body) ; \
      virtual CATBody_var GetBodyToPattern() ; \
      virtual void SetLocalSketchTransfo(CATMathTransformation iTransfo) ; \
      virtual CATMathTransformation GetLocalSketchTransfo() ; \
      virtual void SetBothMode(int Both) ; \
      virtual int IsBothMode() ; \
      virtual void SetBooleanBody(CATBody* Body) ; \
      virtual CATBody* GetBooleanBody() ; \
      virtual void SetBooleanJournal(CATCGMJournalList* Journal) ; \
      virtual CATCGMJournalList* GetBooleanJournal() ; \
      virtual void SetUselessOper(int Useless) ; \
      virtual int IsUselessOper() ; \
      virtual void Clean() ; \
      virtual void SetOperatorManager(void* OpMngr) ; \
      virtual void* GetOperatorManager() ; \
};



#define ENVTIEdeclare_CATIPrtManageFeatBuild(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATBoolean BuildNecessity() ; \
virtual void ReportIsNecessary() ; \
virtual void ReportIsNotNecessary() ; \
virtual CATBoolean ReportNecessity() ; \
virtual void DeclarePatternContext(); \
virtual void ForgetPatternContext(); \
virtual CATBoolean IsInPatternContext(); \
virtual void ShapeIsUpToDate() ; \
virtual void ShapeIsNotUpToDate() ; \
virtual CATBoolean ShapeNecessity() ; \
virtual void SetBody(CATBody_var iBody) ; \
virtual CATBody_var GetBody(int read_only=1) ; \
virtual void SetCurrentJournal(CATCGMJournalList* iJournal) ; \
virtual CATCGMJournalList* GetCurrentJournal() ; \
virtual void SetOperand(CATListValCATBaseUnknown_var &iSpecs,CATListOfCATUnicodeString &iKeys) ; \
virtual void GetOperand(CATListValCATBaseUnknown_var &oSpecs,CATListOfCATUnicodeString &oKeys) ; \
virtual void SetMultiBody(CATListValCATBaseUnknown_var MultiBody) ; \
virtual CATListValCATBaseUnknown_var GetMultiBody() ; \
virtual void SetBodyToPattern(CATBody_var Body) ; \
virtual CATBody_var GetBodyToPattern() ; \
virtual void SetLocalSketchTransfo(CATMathTransformation iTransfo) ; \
virtual CATMathTransformation GetLocalSketchTransfo() ; \
virtual void SetBothMode(int Both) ; \
virtual int IsBothMode() ; \
virtual void SetBooleanBody(CATBody* Body) ; \
virtual CATBody* GetBooleanBody() ; \
virtual void SetBooleanJournal(CATCGMJournalList* Journal) ; \
virtual CATCGMJournalList* GetBooleanJournal() ; \
virtual void SetUselessOper(int Useless) ; \
virtual int IsUselessOper() ; \
virtual void Clean() ; \
virtual void SetOperatorManager(void* OpMngr) ; \
virtual void* GetOperatorManager() ; \


#define ENVTIEdefine_CATIPrtManageFeatBuild(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATBoolean  ENVTIEName::BuildNecessity()  \
{ \
return (ENVTIECALL(CATIPrtManageFeatBuild,ENVTIETypeLetter,ENVTIELetter)BuildNecessity()); \
} \
void  ENVTIEName::ReportIsNecessary()  \
{ \
 (ENVTIECALL(CATIPrtManageFeatBuild,ENVTIETypeLetter,ENVTIELetter)ReportIsNecessary()); \
} \
void  ENVTIEName::ReportIsNotNecessary()  \
{ \
 (ENVTIECALL(CATIPrtManageFeatBuild,ENVTIETypeLetter,ENVTIELetter)ReportIsNotNecessary()); \
} \
CATBoolean  ENVTIEName::ReportNecessity()  \
{ \
return (ENVTIECALL(CATIPrtManageFeatBuild,ENVTIETypeLetter,ENVTIELetter)ReportNecessity()); \
} \
void  ENVTIEName::DeclarePatternContext() \
{ \
 (ENVTIECALL(CATIPrtManageFeatBuild,ENVTIETypeLetter,ENVTIELetter)DeclarePatternContext()); \
} \
void  ENVTIEName::ForgetPatternContext() \
{ \
 (ENVTIECALL(CATIPrtManageFeatBuild,ENVTIETypeLetter,ENVTIELetter)ForgetPatternContext()); \
} \
CATBoolean  ENVTIEName::IsInPatternContext() \
{ \
return (ENVTIECALL(CATIPrtManageFeatBuild,ENVTIETypeLetter,ENVTIELetter)IsInPatternContext()); \
} \
void  ENVTIEName::ShapeIsUpToDate()  \
{ \
 (ENVTIECALL(CATIPrtManageFeatBuild,ENVTIETypeLetter,ENVTIELetter)ShapeIsUpToDate()); \
} \
void  ENVTIEName::ShapeIsNotUpToDate()  \
{ \
 (ENVTIECALL(CATIPrtManageFeatBuild,ENVTIETypeLetter,ENVTIELetter)ShapeIsNotUpToDate()); \
} \
CATBoolean  ENVTIEName::ShapeNecessity()  \
{ \
return (ENVTIECALL(CATIPrtManageFeatBuild,ENVTIETypeLetter,ENVTIELetter)ShapeNecessity()); \
} \
void  ENVTIEName::SetBody(CATBody_var iBody)  \
{ \
 (ENVTIECALL(CATIPrtManageFeatBuild,ENVTIETypeLetter,ENVTIELetter)SetBody(iBody)); \
} \
CATBody_var  ENVTIEName::GetBody(int read_only)  \
{ \
return (ENVTIECALL(CATIPrtManageFeatBuild,ENVTIETypeLetter,ENVTIELetter)GetBody(read_only)); \
} \
void  ENVTIEName::SetCurrentJournal(CATCGMJournalList* iJournal)  \
{ \
 (ENVTIECALL(CATIPrtManageFeatBuild,ENVTIETypeLetter,ENVTIELetter)SetCurrentJournal(iJournal)); \
} \
CATCGMJournalList*  ENVTIEName::GetCurrentJournal()  \
{ \
return (ENVTIECALL(CATIPrtManageFeatBuild,ENVTIETypeLetter,ENVTIELetter)GetCurrentJournal()); \
} \
void  ENVTIEName::SetOperand(CATListValCATBaseUnknown_var &iSpecs,CATListOfCATUnicodeString &iKeys)  \
{ \
 (ENVTIECALL(CATIPrtManageFeatBuild,ENVTIETypeLetter,ENVTIELetter)SetOperand(iSpecs,iKeys)); \
} \
void  ENVTIEName::GetOperand(CATListValCATBaseUnknown_var &oSpecs,CATListOfCATUnicodeString &oKeys)  \
{ \
 (ENVTIECALL(CATIPrtManageFeatBuild,ENVTIETypeLetter,ENVTIELetter)GetOperand(oSpecs,oKeys)); \
} \
void  ENVTIEName::SetMultiBody(CATListValCATBaseUnknown_var MultiBody)  \
{ \
 (ENVTIECALL(CATIPrtManageFeatBuild,ENVTIETypeLetter,ENVTIELetter)SetMultiBody(MultiBody)); \
} \
CATListValCATBaseUnknown_var  ENVTIEName::GetMultiBody()  \
{ \
return (ENVTIECALL(CATIPrtManageFeatBuild,ENVTIETypeLetter,ENVTIELetter)GetMultiBody()); \
} \
void  ENVTIEName::SetBodyToPattern(CATBody_var Body)  \
{ \
 (ENVTIECALL(CATIPrtManageFeatBuild,ENVTIETypeLetter,ENVTIELetter)SetBodyToPattern(Body)); \
} \
CATBody_var  ENVTIEName::GetBodyToPattern()  \
{ \
return (ENVTIECALL(CATIPrtManageFeatBuild,ENVTIETypeLetter,ENVTIELetter)GetBodyToPattern()); \
} \
void  ENVTIEName::SetLocalSketchTransfo(CATMathTransformation iTransfo)  \
{ \
 (ENVTIECALL(CATIPrtManageFeatBuild,ENVTIETypeLetter,ENVTIELetter)SetLocalSketchTransfo(iTransfo)); \
} \
CATMathTransformation  ENVTIEName::GetLocalSketchTransfo()  \
{ \
return (ENVTIECALL(CATIPrtManageFeatBuild,ENVTIETypeLetter,ENVTIELetter)GetLocalSketchTransfo()); \
} \
void  ENVTIEName::SetBothMode(int Both)  \
{ \
 (ENVTIECALL(CATIPrtManageFeatBuild,ENVTIETypeLetter,ENVTIELetter)SetBothMode(Both)); \
} \
int  ENVTIEName::IsBothMode()  \
{ \
return (ENVTIECALL(CATIPrtManageFeatBuild,ENVTIETypeLetter,ENVTIELetter)IsBothMode()); \
} \
void  ENVTIEName::SetBooleanBody(CATBody* Body)  \
{ \
 (ENVTIECALL(CATIPrtManageFeatBuild,ENVTIETypeLetter,ENVTIELetter)SetBooleanBody(Body)); \
} \
CATBody*  ENVTIEName::GetBooleanBody()  \
{ \
return (ENVTIECALL(CATIPrtManageFeatBuild,ENVTIETypeLetter,ENVTIELetter)GetBooleanBody()); \
} \
void  ENVTIEName::SetBooleanJournal(CATCGMJournalList* Journal)  \
{ \
 (ENVTIECALL(CATIPrtManageFeatBuild,ENVTIETypeLetter,ENVTIELetter)SetBooleanJournal(Journal)); \
} \
CATCGMJournalList*  ENVTIEName::GetBooleanJournal()  \
{ \
return (ENVTIECALL(CATIPrtManageFeatBuild,ENVTIETypeLetter,ENVTIELetter)GetBooleanJournal()); \
} \
void  ENVTIEName::SetUselessOper(int Useless)  \
{ \
 (ENVTIECALL(CATIPrtManageFeatBuild,ENVTIETypeLetter,ENVTIELetter)SetUselessOper(Useless)); \
} \
int  ENVTIEName::IsUselessOper()  \
{ \
return (ENVTIECALL(CATIPrtManageFeatBuild,ENVTIETypeLetter,ENVTIELetter)IsUselessOper()); \
} \
void  ENVTIEName::Clean()  \
{ \
 (ENVTIECALL(CATIPrtManageFeatBuild,ENVTIETypeLetter,ENVTIELetter)Clean()); \
} \
void  ENVTIEName::SetOperatorManager(void* OpMngr)  \
{ \
 (ENVTIECALL(CATIPrtManageFeatBuild,ENVTIETypeLetter,ENVTIELetter)SetOperatorManager(OpMngr)); \
} \
void*  ENVTIEName::GetOperatorManager()  \
{ \
return (ENVTIECALL(CATIPrtManageFeatBuild,ENVTIETypeLetter,ENVTIELetter)GetOperatorManager()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPrtManageFeatBuild(classe)    TIECATIPrtManageFeatBuild##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPrtManageFeatBuild(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPrtManageFeatBuild, classe) \
 \
 \
CATImplementTIEMethods(CATIPrtManageFeatBuild, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIPrtManageFeatBuild, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIPrtManageFeatBuild, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPrtManageFeatBuild, classe) \
 \
CATBoolean  TIECATIPrtManageFeatBuild##classe::BuildNecessity()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->BuildNecessity()); \
} \
void  TIECATIPrtManageFeatBuild##classe::ReportIsNecessary()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ReportIsNecessary(); \
} \
void  TIECATIPrtManageFeatBuild##classe::ReportIsNotNecessary()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ReportIsNotNecessary(); \
} \
CATBoolean  TIECATIPrtManageFeatBuild##classe::ReportNecessity()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ReportNecessity()); \
} \
void  TIECATIPrtManageFeatBuild##classe::DeclarePatternContext() \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DeclarePatternContext(); \
} \
void  TIECATIPrtManageFeatBuild##classe::ForgetPatternContext() \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ForgetPatternContext(); \
} \
CATBoolean  TIECATIPrtManageFeatBuild##classe::IsInPatternContext() \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsInPatternContext()); \
} \
void  TIECATIPrtManageFeatBuild##classe::ShapeIsUpToDate()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ShapeIsUpToDate(); \
} \
void  TIECATIPrtManageFeatBuild##classe::ShapeIsNotUpToDate()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ShapeIsNotUpToDate(); \
} \
CATBoolean  TIECATIPrtManageFeatBuild##classe::ShapeNecessity()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ShapeNecessity()); \
} \
void  TIECATIPrtManageFeatBuild##classe::SetBody(CATBody_var iBody)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetBody(iBody); \
} \
CATBody_var  TIECATIPrtManageFeatBuild##classe::GetBody(int read_only)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBody(read_only)); \
} \
void  TIECATIPrtManageFeatBuild##classe::SetCurrentJournal(CATCGMJournalList* iJournal)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCurrentJournal(iJournal); \
} \
CATCGMJournalList*  TIECATIPrtManageFeatBuild##classe::GetCurrentJournal()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCurrentJournal()); \
} \
void  TIECATIPrtManageFeatBuild##classe::SetOperand(CATListValCATBaseUnknown_var &iSpecs,CATListOfCATUnicodeString &iKeys)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOperand(iSpecs,iKeys); \
} \
void  TIECATIPrtManageFeatBuild##classe::GetOperand(CATListValCATBaseUnknown_var &oSpecs,CATListOfCATUnicodeString &oKeys)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOperand(oSpecs,oKeys); \
} \
void  TIECATIPrtManageFeatBuild##classe::SetMultiBody(CATListValCATBaseUnknown_var MultiBody)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMultiBody(MultiBody); \
} \
CATListValCATBaseUnknown_var  TIECATIPrtManageFeatBuild##classe::GetMultiBody()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMultiBody()); \
} \
void  TIECATIPrtManageFeatBuild##classe::SetBodyToPattern(CATBody_var Body)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetBodyToPattern(Body); \
} \
CATBody_var  TIECATIPrtManageFeatBuild##classe::GetBodyToPattern()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBodyToPattern()); \
} \
void  TIECATIPrtManageFeatBuild##classe::SetLocalSketchTransfo(CATMathTransformation iTransfo)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLocalSketchTransfo(iTransfo); \
} \
CATMathTransformation  TIECATIPrtManageFeatBuild##classe::GetLocalSketchTransfo()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLocalSketchTransfo()); \
} \
void  TIECATIPrtManageFeatBuild##classe::SetBothMode(int Both)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetBothMode(Both); \
} \
int  TIECATIPrtManageFeatBuild##classe::IsBothMode()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsBothMode()); \
} \
void  TIECATIPrtManageFeatBuild##classe::SetBooleanBody(CATBody* Body)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetBooleanBody(Body); \
} \
CATBody*  TIECATIPrtManageFeatBuild##classe::GetBooleanBody()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBooleanBody()); \
} \
void  TIECATIPrtManageFeatBuild##classe::SetBooleanJournal(CATCGMJournalList* Journal)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetBooleanJournal(Journal); \
} \
CATCGMJournalList*  TIECATIPrtManageFeatBuild##classe::GetBooleanJournal()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBooleanJournal()); \
} \
void  TIECATIPrtManageFeatBuild##classe::SetUselessOper(int Useless)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetUselessOper(Useless); \
} \
int  TIECATIPrtManageFeatBuild##classe::IsUselessOper()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsUselessOper()); \
} \
void  TIECATIPrtManageFeatBuild##classe::Clean()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Clean(); \
} \
void  TIECATIPrtManageFeatBuild##classe::SetOperatorManager(void* OpMngr)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOperatorManager(OpMngr); \
} \
void*  TIECATIPrtManageFeatBuild##classe::GetOperatorManager()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOperatorManager()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPrtManageFeatBuild(classe) \
 \
 \
declare_TIE_CATIPrtManageFeatBuild(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPrtManageFeatBuild##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPrtManageFeatBuild,"CATIPrtManageFeatBuild",CATIPrtManageFeatBuild::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPrtManageFeatBuild(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPrtManageFeatBuild, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPrtManageFeatBuild##classe(classe::MetaObject(),CATIPrtManageFeatBuild::MetaObject(),(void *)CreateTIECATIPrtManageFeatBuild##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPrtManageFeatBuild(classe) \
 \
 \
declare_TIE_CATIPrtManageFeatBuild(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPrtManageFeatBuild##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPrtManageFeatBuild,"CATIPrtManageFeatBuild",CATIPrtManageFeatBuild::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPrtManageFeatBuild(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPrtManageFeatBuild, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPrtManageFeatBuild##classe(classe::MetaObject(),CATIPrtManageFeatBuild::MetaObject(),(void *)CreateTIECATIPrtManageFeatBuild##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPrtManageFeatBuild(classe) TIE_CATIPrtManageFeatBuild(classe)
#else
#define BOA_CATIPrtManageFeatBuild(classe) CATImplementBOA(CATIPrtManageFeatBuild, classe)
#endif

#endif
