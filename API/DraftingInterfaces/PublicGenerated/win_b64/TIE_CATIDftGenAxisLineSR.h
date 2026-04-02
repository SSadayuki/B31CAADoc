#ifndef __TIE_CATIDftGenAxisLineSR
#define __TIE_CATIDftGenAxisLineSR

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIDftGenAxisLineSR.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIDftGenAxisLineSR */
#define declare_TIE_CATIDftGenAxisLineSR(classe) \
 \
 \
class TIECATIDftGenAxisLineSR##classe : public CATIDftGenAxisLineSR \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIDftGenAxisLineSR, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT SetObject(CATIDftGenRequest *iObjRef); \
      virtual HRESULT GetObject(CATIDftGenRequest **oObjRef); \
      virtual HRESULT SetLine(CATMathLine *iLine); \
      virtual HRESULT GetLine(CATMathLine **oLine); \
      virtual void SetColor(int iRed,int iGreen,int iBlue); \
      virtual void SetLineType(int iLineType); \
      virtual void SetThickness(int iThick); \
      virtual HRESULT SetOverRuns(CATListOfDouble& iOverruns); \
};



#define ENVTIEdeclare_CATIDftGenAxisLineSR(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT SetObject(CATIDftGenRequest *iObjRef); \
virtual HRESULT GetObject(CATIDftGenRequest **oObjRef); \
virtual HRESULT SetLine(CATMathLine *iLine); \
virtual HRESULT GetLine(CATMathLine **oLine); \
virtual void SetColor(int iRed,int iGreen,int iBlue); \
virtual void SetLineType(int iLineType); \
virtual void SetThickness(int iThick); \
virtual HRESULT SetOverRuns(CATListOfDouble& iOverruns); \


#define ENVTIEdefine_CATIDftGenAxisLineSR(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::SetObject(CATIDftGenRequest *iObjRef) \
{ \
return (ENVTIECALL(CATIDftGenAxisLineSR,ENVTIETypeLetter,ENVTIELetter)SetObject(iObjRef)); \
} \
HRESULT  ENVTIEName::GetObject(CATIDftGenRequest **oObjRef) \
{ \
return (ENVTIECALL(CATIDftGenAxisLineSR,ENVTIETypeLetter,ENVTIELetter)GetObject(oObjRef)); \
} \
HRESULT  ENVTIEName::SetLine(CATMathLine *iLine) \
{ \
return (ENVTIECALL(CATIDftGenAxisLineSR,ENVTIETypeLetter,ENVTIELetter)SetLine(iLine)); \
} \
HRESULT  ENVTIEName::GetLine(CATMathLine **oLine) \
{ \
return (ENVTIECALL(CATIDftGenAxisLineSR,ENVTIETypeLetter,ENVTIELetter)GetLine(oLine)); \
} \
void  ENVTIEName::SetColor(int iRed,int iGreen,int iBlue) \
{ \
 (ENVTIECALL(CATIDftGenAxisLineSR,ENVTIETypeLetter,ENVTIELetter)SetColor(iRed,iGreen,iBlue)); \
} \
void  ENVTIEName::SetLineType(int iLineType) \
{ \
 (ENVTIECALL(CATIDftGenAxisLineSR,ENVTIETypeLetter,ENVTIELetter)SetLineType(iLineType)); \
} \
void  ENVTIEName::SetThickness(int iThick) \
{ \
 (ENVTIECALL(CATIDftGenAxisLineSR,ENVTIETypeLetter,ENVTIELetter)SetThickness(iThick)); \
} \
HRESULT  ENVTIEName::SetOverRuns(CATListOfDouble& iOverruns) \
{ \
return (ENVTIECALL(CATIDftGenAxisLineSR,ENVTIETypeLetter,ENVTIELetter)SetOverRuns(iOverruns)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIDftGenAxisLineSR(classe)    TIECATIDftGenAxisLineSR##classe


/* Common methods inside a TIE */
#define common_TIE_CATIDftGenAxisLineSR(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIDftGenAxisLineSR, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATIDftGenAxisLineSR, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATIDftGenAxisLineSR, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATIDftGenAxisLineSR, classe) \
 \
HRESULT  TIECATIDftGenAxisLineSR##classe::SetObject(CATIDftGenRequest *iObjRef) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetObject(iObjRef)); \
} \
HRESULT  TIECATIDftGenAxisLineSR##classe::GetObject(CATIDftGenRequest **oObjRef) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetObject(oObjRef)); \
} \
HRESULT  TIECATIDftGenAxisLineSR##classe::SetLine(CATMathLine *iLine) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLine(iLine)); \
} \
HRESULT  TIECATIDftGenAxisLineSR##classe::GetLine(CATMathLine **oLine) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLine(oLine)); \
} \
void  TIECATIDftGenAxisLineSR##classe::SetColor(int iRed,int iGreen,int iBlue) \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetColor(iRed,iGreen,iBlue); \
} \
void  TIECATIDftGenAxisLineSR##classe::SetLineType(int iLineType) \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLineType(iLineType); \
} \
void  TIECATIDftGenAxisLineSR##classe::SetThickness(int iThick) \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetThickness(iThick); \
} \
HRESULT  TIECATIDftGenAxisLineSR##classe::SetOverRuns(CATListOfDouble& iOverruns) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOverRuns(iOverruns)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIDftGenAxisLineSR(classe) \
 \
 \
declare_TIE_CATIDftGenAxisLineSR(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDftGenAxisLineSR##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDftGenAxisLineSR,"CATIDftGenAxisLineSR",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDftGenAxisLineSR(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIDftGenAxisLineSR, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDftGenAxisLineSR##classe(classe::MetaObject(),TIECATIDftGenAxisLineSR##classe::MetaObject(),(void *)CreateTIECATIDftGenAxisLineSR##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIDftGenAxisLineSR(classe) \
 \
 \
declare_TIE_CATIDftGenAxisLineSR(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDftGenAxisLineSR##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDftGenAxisLineSR,"CATIDftGenAxisLineSR",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDftGenAxisLineSR(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIDftGenAxisLineSR, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDftGenAxisLineSR##classe(classe::MetaObject(),TIECATIDftGenAxisLineSR##classe::MetaObject(),(void *)CreateTIECATIDftGenAxisLineSR##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIDftGenAxisLineSR(classe) TIE_CATIDftGenAxisLineSR(classe)
#else
#define BOA_CATIDftGenAxisLineSR(classe) CATImplementBOA(CATIDftGenAxisLineSR, classe)
#endif

#endif
