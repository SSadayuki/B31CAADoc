#ifndef __TIE_CATISamEditionCmd
#define __TIE_CATISamEditionCmd

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISamEditionCmd.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISamEditionCmd */
#define declare_TIE_CATISamEditionCmd(classe) \
 \
 \
class TIECATISamEditionCmd##classe : public CATISamEditionCmd \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISamEditionCmd, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void SetFeature(const CATISpecObject_var &iFeature) ; \
      virtual void GetFeature(CATISpecObject_var &oFeature) ; \
      virtual CATDlgFrame * GetModificationFrame(CATDialog *iParent = 0) ; \
      virtual void UnreferenceFrame() ; \
      virtual void UpdateFrame() ; \
      virtual void GetModificationNotification(CATCommand      * &oFromCmd, CATNotification * &oNotif) ; \
      virtual void GetQuerySelectFocusNotif(CATCommand  *& oFromCmd, CATSamQuerySelectFocusNotification *& oNotif) ; \
      virtual void AnalyseSelection() ; \
      virtual void IgnoreSelection() ; \
      virtual int  IsAnalysingSelection() ; \
};



#define ENVTIEdeclare_CATISamEditionCmd(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void SetFeature(const CATISpecObject_var &iFeature) ; \
virtual void GetFeature(CATISpecObject_var &oFeature) ; \
virtual CATDlgFrame * GetModificationFrame(CATDialog *iParent = 0) ; \
virtual void UnreferenceFrame() ; \
virtual void UpdateFrame() ; \
virtual void GetModificationNotification(CATCommand      * &oFromCmd, CATNotification * &oNotif) ; \
virtual void GetQuerySelectFocusNotif(CATCommand  *& oFromCmd, CATSamQuerySelectFocusNotification *& oNotif) ; \
virtual void AnalyseSelection() ; \
virtual void IgnoreSelection() ; \
virtual int  IsAnalysingSelection() ; \


#define ENVTIEdefine_CATISamEditionCmd(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void  ENVTIEName::SetFeature(const CATISpecObject_var &iFeature)  \
{ \
 (ENVTIECALL(CATISamEditionCmd,ENVTIETypeLetter,ENVTIELetter)SetFeature(iFeature)); \
} \
void  ENVTIEName::GetFeature(CATISpecObject_var &oFeature)  \
{ \
 (ENVTIECALL(CATISamEditionCmd,ENVTIETypeLetter,ENVTIELetter)GetFeature(oFeature)); \
} \
CATDlgFrame *  ENVTIEName::GetModificationFrame(CATDialog *iParent )  \
{ \
return (ENVTIECALL(CATISamEditionCmd,ENVTIETypeLetter,ENVTIELetter)GetModificationFrame(iParent )); \
} \
void  ENVTIEName::UnreferenceFrame()  \
{ \
 (ENVTIECALL(CATISamEditionCmd,ENVTIETypeLetter,ENVTIELetter)UnreferenceFrame()); \
} \
void  ENVTIEName::UpdateFrame()  \
{ \
 (ENVTIECALL(CATISamEditionCmd,ENVTIETypeLetter,ENVTIELetter)UpdateFrame()); \
} \
void  ENVTIEName::GetModificationNotification(CATCommand      * &oFromCmd, CATNotification * &oNotif)  \
{ \
 (ENVTIECALL(CATISamEditionCmd,ENVTIETypeLetter,ENVTIELetter)GetModificationNotification(oFromCmd,oNotif)); \
} \
void  ENVTIEName::GetQuerySelectFocusNotif(CATCommand  *& oFromCmd, CATSamQuerySelectFocusNotification *& oNotif)  \
{ \
 (ENVTIECALL(CATISamEditionCmd,ENVTIETypeLetter,ENVTIELetter)GetQuerySelectFocusNotif(oFromCmd,oNotif)); \
} \
void  ENVTIEName::AnalyseSelection()  \
{ \
 (ENVTIECALL(CATISamEditionCmd,ENVTIETypeLetter,ENVTIELetter)AnalyseSelection()); \
} \
void  ENVTIEName::IgnoreSelection()  \
{ \
 (ENVTIECALL(CATISamEditionCmd,ENVTIETypeLetter,ENVTIELetter)IgnoreSelection()); \
} \
int   ENVTIEName::IsAnalysingSelection()  \
{ \
return (ENVTIECALL(CATISamEditionCmd,ENVTIETypeLetter,ENVTIELetter)IsAnalysingSelection()); \
} \


/* Name of the TIE class */
#define class_TIE_CATISamEditionCmd(classe)    TIECATISamEditionCmd##classe


/* Common methods inside a TIE */
#define common_TIE_CATISamEditionCmd(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISamEditionCmd, classe) \
 \
 \
CATImplementTIEMethods(CATISamEditionCmd, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISamEditionCmd, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISamEditionCmd, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISamEditionCmd, classe) \
 \
void  TIECATISamEditionCmd##classe::SetFeature(const CATISpecObject_var &iFeature)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetFeature(iFeature); \
} \
void  TIECATISamEditionCmd##classe::GetFeature(CATISpecObject_var &oFeature)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFeature(oFeature); \
} \
CATDlgFrame *  TIECATISamEditionCmd##classe::GetModificationFrame(CATDialog *iParent )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetModificationFrame(iParent )); \
} \
void  TIECATISamEditionCmd##classe::UnreferenceFrame()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UnreferenceFrame(); \
} \
void  TIECATISamEditionCmd##classe::UpdateFrame()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UpdateFrame(); \
} \
void  TIECATISamEditionCmd##classe::GetModificationNotification(CATCommand      * &oFromCmd, CATNotification * &oNotif)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetModificationNotification(oFromCmd,oNotif); \
} \
void  TIECATISamEditionCmd##classe::GetQuerySelectFocusNotif(CATCommand  *& oFromCmd, CATSamQuerySelectFocusNotification *& oNotif)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetQuerySelectFocusNotif(oFromCmd,oNotif); \
} \
void  TIECATISamEditionCmd##classe::AnalyseSelection()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AnalyseSelection(); \
} \
void  TIECATISamEditionCmd##classe::IgnoreSelection()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IgnoreSelection(); \
} \
int   TIECATISamEditionCmd##classe::IsAnalysingSelection()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsAnalysingSelection()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISamEditionCmd(classe) \
 \
 \
declare_TIE_CATISamEditionCmd(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamEditionCmd##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamEditionCmd,"CATISamEditionCmd",CATISamEditionCmd::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamEditionCmd(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISamEditionCmd, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamEditionCmd##classe(classe::MetaObject(),CATISamEditionCmd::MetaObject(),(void *)CreateTIECATISamEditionCmd##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISamEditionCmd(classe) \
 \
 \
declare_TIE_CATISamEditionCmd(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamEditionCmd##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamEditionCmd,"CATISamEditionCmd",CATISamEditionCmd::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamEditionCmd(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISamEditionCmd, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamEditionCmd##classe(classe::MetaObject(),CATISamEditionCmd::MetaObject(),(void *)CreateTIECATISamEditionCmd##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISamEditionCmd(classe) TIE_CATISamEditionCmd(classe)
#else
#define BOA_CATISamEditionCmd(classe) CATImplementBOA(CATISamEditionCmd, classe)
#endif

#endif
