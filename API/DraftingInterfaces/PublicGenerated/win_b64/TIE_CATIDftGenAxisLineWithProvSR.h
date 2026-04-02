#ifndef __TIE_CATIDftGenAxisLineWithProvSR
#define __TIE_CATIDftGenAxisLineWithProvSR

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIDftGenAxisLineWithProvSR.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIDftGenAxisLineWithProvSR */
#define declare_TIE_CATIDftGenAxisLineWithProvSR(classe) \
 \
 \
class TIECATIDftGenAxisLineWithProvSR##classe : public CATIDftGenAxisLineWithProvSR \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIDftGenAxisLineWithProvSR, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT SetObject(CATIDftGenRequest *iObjRef); \
      virtual HRESULT GetObject(CATIDftGenRequest **oObjRef); \
      virtual HRESULT SetLineAndProv(CATMathLine *iLine, CATBody *iBody=0, CATCell *iCell=0); \
      virtual HRESULT GetLineAndProv(CATMathLine **oLine, CATBody **oBody, CATCell **oCell); \
      virtual void SetColor(int iRed,int iGreen,int iBlue); \
      virtual void SetLineType(int iLineType); \
      virtual void SetThickness(int iThick); \
      virtual HRESULT SetOverRuns(CATListOfDouble& iOverruns); \
};



#define ENVTIEdeclare_CATIDftGenAxisLineWithProvSR(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT SetObject(CATIDftGenRequest *iObjRef); \
virtual HRESULT GetObject(CATIDftGenRequest **oObjRef); \
virtual HRESULT SetLineAndProv(CATMathLine *iLine, CATBody *iBody=0, CATCell *iCell=0); \
virtual HRESULT GetLineAndProv(CATMathLine **oLine, CATBody **oBody, CATCell **oCell); \
virtual void SetColor(int iRed,int iGreen,int iBlue); \
virtual void SetLineType(int iLineType); \
virtual void SetThickness(int iThick); \
virtual HRESULT SetOverRuns(CATListOfDouble& iOverruns); \


#define ENVTIEdefine_CATIDftGenAxisLineWithProvSR(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::SetObject(CATIDftGenRequest *iObjRef) \
{ \
return (ENVTIECALL(CATIDftGenAxisLineWithProvSR,ENVTIETypeLetter,ENVTIELetter)SetObject(iObjRef)); \
} \
HRESULT  ENVTIEName::GetObject(CATIDftGenRequest **oObjRef) \
{ \
return (ENVTIECALL(CATIDftGenAxisLineWithProvSR,ENVTIETypeLetter,ENVTIELetter)GetObject(oObjRef)); \
} \
HRESULT  ENVTIEName::SetLineAndProv(CATMathLine *iLine, CATBody *iBody, CATCell *iCell) \
{ \
return (ENVTIECALL(CATIDftGenAxisLineWithProvSR,ENVTIETypeLetter,ENVTIELetter)SetLineAndProv(iLine,iBody,iCell)); \
} \
HRESULT  ENVTIEName::GetLineAndProv(CATMathLine **oLine, CATBody **oBody, CATCell **oCell) \
{ \
return (ENVTIECALL(CATIDftGenAxisLineWithProvSR,ENVTIETypeLetter,ENVTIELetter)GetLineAndProv(oLine,oBody,oCell)); \
} \
void  ENVTIEName::SetColor(int iRed,int iGreen,int iBlue) \
{ \
 (ENVTIECALL(CATIDftGenAxisLineWithProvSR,ENVTIETypeLetter,ENVTIELetter)SetColor(iRed,iGreen,iBlue)); \
} \
void  ENVTIEName::SetLineType(int iLineType) \
{ \
 (ENVTIECALL(CATIDftGenAxisLineWithProvSR,ENVTIETypeLetter,ENVTIELetter)SetLineType(iLineType)); \
} \
void  ENVTIEName::SetThickness(int iThick) \
{ \
 (ENVTIECALL(CATIDftGenAxisLineWithProvSR,ENVTIETypeLetter,ENVTIELetter)SetThickness(iThick)); \
} \
HRESULT  ENVTIEName::SetOverRuns(CATListOfDouble& iOverruns) \
{ \
return (ENVTIECALL(CATIDftGenAxisLineWithProvSR,ENVTIETypeLetter,ENVTIELetter)SetOverRuns(iOverruns)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIDftGenAxisLineWithProvSR(classe)    TIECATIDftGenAxisLineWithProvSR##classe


/* Common methods inside a TIE */
#define common_TIE_CATIDftGenAxisLineWithProvSR(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIDftGenAxisLineWithProvSR, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATIDftGenAxisLineWithProvSR, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATIDftGenAxisLineWithProvSR, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATIDftGenAxisLineWithProvSR, classe) \
 \
HRESULT  TIECATIDftGenAxisLineWithProvSR##classe::SetObject(CATIDftGenRequest *iObjRef) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetObject(iObjRef)); \
} \
HRESULT  TIECATIDftGenAxisLineWithProvSR##classe::GetObject(CATIDftGenRequest **oObjRef) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetObject(oObjRef)); \
} \
HRESULT  TIECATIDftGenAxisLineWithProvSR##classe::SetLineAndProv(CATMathLine *iLine, CATBody *iBody, CATCell *iCell) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLineAndProv(iLine,iBody,iCell)); \
} \
HRESULT  TIECATIDftGenAxisLineWithProvSR##classe::GetLineAndProv(CATMathLine **oLine, CATBody **oBody, CATCell **oCell) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLineAndProv(oLine,oBody,oCell)); \
} \
void  TIECATIDftGenAxisLineWithProvSR##classe::SetColor(int iRed,int iGreen,int iBlue) \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetColor(iRed,iGreen,iBlue); \
} \
void  TIECATIDftGenAxisLineWithProvSR##classe::SetLineType(int iLineType) \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLineType(iLineType); \
} \
void  TIECATIDftGenAxisLineWithProvSR##classe::SetThickness(int iThick) \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetThickness(iThick); \
} \
HRESULT  TIECATIDftGenAxisLineWithProvSR##classe::SetOverRuns(CATListOfDouble& iOverruns) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOverRuns(iOverruns)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIDftGenAxisLineWithProvSR(classe) \
 \
 \
declare_TIE_CATIDftGenAxisLineWithProvSR(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDftGenAxisLineWithProvSR##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDftGenAxisLineWithProvSR,"CATIDftGenAxisLineWithProvSR",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDftGenAxisLineWithProvSR(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIDftGenAxisLineWithProvSR, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDftGenAxisLineWithProvSR##classe(classe::MetaObject(),TIECATIDftGenAxisLineWithProvSR##classe::MetaObject(),(void *)CreateTIECATIDftGenAxisLineWithProvSR##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIDftGenAxisLineWithProvSR(classe) \
 \
 \
declare_TIE_CATIDftGenAxisLineWithProvSR(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDftGenAxisLineWithProvSR##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDftGenAxisLineWithProvSR,"CATIDftGenAxisLineWithProvSR",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDftGenAxisLineWithProvSR(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIDftGenAxisLineWithProvSR, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDftGenAxisLineWithProvSR##classe(classe::MetaObject(),TIECATIDftGenAxisLineWithProvSR##classe::MetaObject(),(void *)CreateTIECATIDftGenAxisLineWithProvSR##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIDftGenAxisLineWithProvSR(classe) TIE_CATIDftGenAxisLineWithProvSR(classe)
#else
#define BOA_CATIDftGenAxisLineWithProvSR(classe) CATImplementBOA(CATIDftGenAxisLineWithProvSR, classe)
#endif

#endif
