#ifndef __TIE_CATISPMProcess
#define __TIE_CATISPMProcess

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISPMProcess.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISPMProcess */
#define declare_TIE_CATISPMProcess(classe) \
 \
 \
class TIECATISPMProcess##classe : public CATISPMProcess \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISPMProcess, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATUnicodeString GetProcessName() ; \
      virtual void SetProcessDataAccess(CATISPMProcessAccess_var &iProcessAccess) ; \
      virtual HRESULT GetAvailableInputMathType(int &oNbType, CATSamMathType *&oMathType) ; \
      virtual HRESULT GetAvailableInputValueType(int &oNbType, CATSamValue *&oValueType) ; \
      virtual HRESULT GetAvailableInputMathDimension(int &oNbType, int *&oMathDimension) ; \
      virtual HRESULT GetAvailableInputRefFrame(int &oNbType, CATSamRefFrame *&oRefFrame) ; \
      virtual HRESULT GetAvailableInputEntityType(int &oNbType, CATSamValue *&oEntityType) ; \
      virtual HRESULT IsInputCharacTypeAvailable(const CATSamCharacVersion &iVersion) ; \
      virtual HRESULT GetOutputCharacType(CATSamCharacVersion &oVersion, const CATSamCharacVersion &iVersion) ; \
      virtual HRESULT GetOutputCharac(CATAnalysisCharacCollector **&oCharac, int &oNbCharac, const char* iEntityFlag, const CATAnalysisCharacCollector * const * iCharac, int iNbCharac) ; \
      virtual HRESULT GetEntityList(const CATAnalysisExplicitParent &iContext, const char* iEntityFlag, CATSamValue iEntityType, char *& oEntityFlag, CATSamValue &oEntityType) ; \
      virtual HRESULT IsLinear(CATBoolean &oresult) ; \
};



#define ENVTIEdeclare_CATISPMProcess(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATUnicodeString GetProcessName() ; \
virtual void SetProcessDataAccess(CATISPMProcessAccess_var &iProcessAccess) ; \
virtual HRESULT GetAvailableInputMathType(int &oNbType, CATSamMathType *&oMathType) ; \
virtual HRESULT GetAvailableInputValueType(int &oNbType, CATSamValue *&oValueType) ; \
virtual HRESULT GetAvailableInputMathDimension(int &oNbType, int *&oMathDimension) ; \
virtual HRESULT GetAvailableInputRefFrame(int &oNbType, CATSamRefFrame *&oRefFrame) ; \
virtual HRESULT GetAvailableInputEntityType(int &oNbType, CATSamValue *&oEntityType) ; \
virtual HRESULT IsInputCharacTypeAvailable(const CATSamCharacVersion &iVersion) ; \
virtual HRESULT GetOutputCharacType(CATSamCharacVersion &oVersion, const CATSamCharacVersion &iVersion) ; \
virtual HRESULT GetOutputCharac(CATAnalysisCharacCollector **&oCharac, int &oNbCharac, const char* iEntityFlag, const CATAnalysisCharacCollector * const * iCharac, int iNbCharac) ; \
virtual HRESULT GetEntityList(const CATAnalysisExplicitParent &iContext, const char* iEntityFlag, CATSamValue iEntityType, char *& oEntityFlag, CATSamValue &oEntityType) ; \
virtual HRESULT IsLinear(CATBoolean &oresult) ; \


#define ENVTIEdefine_CATISPMProcess(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATUnicodeString  ENVTIEName::GetProcessName()  \
{ \
return (ENVTIECALL(CATISPMProcess,ENVTIETypeLetter,ENVTIELetter)GetProcessName()); \
} \
void  ENVTIEName::SetProcessDataAccess(CATISPMProcessAccess_var &iProcessAccess)  \
{ \
 (ENVTIECALL(CATISPMProcess,ENVTIETypeLetter,ENVTIELetter)SetProcessDataAccess(iProcessAccess)); \
} \
HRESULT  ENVTIEName::GetAvailableInputMathType(int &oNbType, CATSamMathType *&oMathType)  \
{ \
return (ENVTIECALL(CATISPMProcess,ENVTIETypeLetter,ENVTIELetter)GetAvailableInputMathType(oNbType,oMathType)); \
} \
HRESULT  ENVTIEName::GetAvailableInputValueType(int &oNbType, CATSamValue *&oValueType)  \
{ \
return (ENVTIECALL(CATISPMProcess,ENVTIETypeLetter,ENVTIELetter)GetAvailableInputValueType(oNbType,oValueType)); \
} \
HRESULT  ENVTIEName::GetAvailableInputMathDimension(int &oNbType, int *&oMathDimension)  \
{ \
return (ENVTIECALL(CATISPMProcess,ENVTIETypeLetter,ENVTIELetter)GetAvailableInputMathDimension(oNbType,oMathDimension)); \
} \
HRESULT  ENVTIEName::GetAvailableInputRefFrame(int &oNbType, CATSamRefFrame *&oRefFrame)  \
{ \
return (ENVTIECALL(CATISPMProcess,ENVTIETypeLetter,ENVTIELetter)GetAvailableInputRefFrame(oNbType,oRefFrame)); \
} \
HRESULT  ENVTIEName::GetAvailableInputEntityType(int &oNbType, CATSamValue *&oEntityType)  \
{ \
return (ENVTIECALL(CATISPMProcess,ENVTIETypeLetter,ENVTIELetter)GetAvailableInputEntityType(oNbType,oEntityType)); \
} \
HRESULT  ENVTIEName::IsInputCharacTypeAvailable(const CATSamCharacVersion &iVersion)  \
{ \
return (ENVTIECALL(CATISPMProcess,ENVTIETypeLetter,ENVTIELetter)IsInputCharacTypeAvailable(iVersion)); \
} \
HRESULT  ENVTIEName::GetOutputCharacType(CATSamCharacVersion &oVersion, const CATSamCharacVersion &iVersion)  \
{ \
return (ENVTIECALL(CATISPMProcess,ENVTIETypeLetter,ENVTIELetter)GetOutputCharacType(oVersion,iVersion)); \
} \
HRESULT  ENVTIEName::GetOutputCharac(CATAnalysisCharacCollector **&oCharac, int &oNbCharac, const char* iEntityFlag, const CATAnalysisCharacCollector * const * iCharac, int iNbCharac)  \
{ \
return (ENVTIECALL(CATISPMProcess,ENVTIETypeLetter,ENVTIELetter)GetOutputCharac(oCharac,oNbCharac,iEntityFlag,iCharac,iNbCharac)); \
} \
HRESULT  ENVTIEName::GetEntityList(const CATAnalysisExplicitParent &iContext, const char* iEntityFlag, CATSamValue iEntityType, char *& oEntityFlag, CATSamValue &oEntityType)  \
{ \
return (ENVTIECALL(CATISPMProcess,ENVTIETypeLetter,ENVTIELetter)GetEntityList(iContext,iEntityFlag,iEntityType,oEntityFlag,oEntityType)); \
} \
HRESULT  ENVTIEName::IsLinear(CATBoolean &oresult)  \
{ \
return (ENVTIECALL(CATISPMProcess,ENVTIETypeLetter,ENVTIELetter)IsLinear(oresult)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISPMProcess(classe)    TIECATISPMProcess##classe


/* Common methods inside a TIE */
#define common_TIE_CATISPMProcess(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISPMProcess, classe) \
 \
 \
CATImplementTIEMethods(CATISPMProcess, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISPMProcess, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISPMProcess, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISPMProcess, classe) \
 \
CATUnicodeString  TIECATISPMProcess##classe::GetProcessName()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetProcessName()); \
} \
void  TIECATISPMProcess##classe::SetProcessDataAccess(CATISPMProcessAccess_var &iProcessAccess)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetProcessDataAccess(iProcessAccess); \
} \
HRESULT  TIECATISPMProcess##classe::GetAvailableInputMathType(int &oNbType, CATSamMathType *&oMathType)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAvailableInputMathType(oNbType,oMathType)); \
} \
HRESULT  TIECATISPMProcess##classe::GetAvailableInputValueType(int &oNbType, CATSamValue *&oValueType)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAvailableInputValueType(oNbType,oValueType)); \
} \
HRESULT  TIECATISPMProcess##classe::GetAvailableInputMathDimension(int &oNbType, int *&oMathDimension)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAvailableInputMathDimension(oNbType,oMathDimension)); \
} \
HRESULT  TIECATISPMProcess##classe::GetAvailableInputRefFrame(int &oNbType, CATSamRefFrame *&oRefFrame)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAvailableInputRefFrame(oNbType,oRefFrame)); \
} \
HRESULT  TIECATISPMProcess##classe::GetAvailableInputEntityType(int &oNbType, CATSamValue *&oEntityType)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAvailableInputEntityType(oNbType,oEntityType)); \
} \
HRESULT  TIECATISPMProcess##classe::IsInputCharacTypeAvailable(const CATSamCharacVersion &iVersion)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsInputCharacTypeAvailable(iVersion)); \
} \
HRESULT  TIECATISPMProcess##classe::GetOutputCharacType(CATSamCharacVersion &oVersion, const CATSamCharacVersion &iVersion)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOutputCharacType(oVersion,iVersion)); \
} \
HRESULT  TIECATISPMProcess##classe::GetOutputCharac(CATAnalysisCharacCollector **&oCharac, int &oNbCharac, const char* iEntityFlag, const CATAnalysisCharacCollector * const * iCharac, int iNbCharac)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOutputCharac(oCharac,oNbCharac,iEntityFlag,iCharac,iNbCharac)); \
} \
HRESULT  TIECATISPMProcess##classe::GetEntityList(const CATAnalysisExplicitParent &iContext, const char* iEntityFlag, CATSamValue iEntityType, char *& oEntityFlag, CATSamValue &oEntityType)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetEntityList(iContext,iEntityFlag,iEntityType,oEntityFlag,oEntityType)); \
} \
HRESULT  TIECATISPMProcess##classe::IsLinear(CATBoolean &oresult)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsLinear(oresult)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISPMProcess(classe) \
 \
 \
declare_TIE_CATISPMProcess(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISPMProcess##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISPMProcess,"CATISPMProcess",CATISPMProcess::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISPMProcess(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISPMProcess, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISPMProcess##classe(classe::MetaObject(),CATISPMProcess::MetaObject(),(void *)CreateTIECATISPMProcess##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISPMProcess(classe) \
 \
 \
declare_TIE_CATISPMProcess(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISPMProcess##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISPMProcess,"CATISPMProcess",CATISPMProcess::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISPMProcess(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISPMProcess, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISPMProcess##classe(classe::MetaObject(),CATISPMProcess::MetaObject(),(void *)CreateTIECATISPMProcess##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISPMProcess(classe) TIE_CATISPMProcess(classe)
#else
#define BOA_CATISPMProcess(classe) CATImplementBOA(CATISPMProcess, classe)
#endif

#endif
