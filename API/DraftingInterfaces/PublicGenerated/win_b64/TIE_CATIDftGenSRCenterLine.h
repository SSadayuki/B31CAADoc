#ifndef __TIE_CATIDftGenSRCenterLine
#define __TIE_CATIDftGenSRCenterLine

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIDftGenSRCenterLine.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIDftGenSRCenterLine */
#define declare_TIE_CATIDftGenSRCenterLine(classe) \
 \
 \
class TIECATIDftGenSRCenterLine##classe : public CATIDftGenSRCenterLine \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIDftGenSRCenterLine, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT SetCircle(CATMathCircle *iCircle); \
      virtual HRESULT GetCircle(CATMathCircle **oCircle); \
      virtual HRESULT SetOverRunsMode(boolean iMode); \
      virtual HRESULT GetOverRunsMode(boolean *oMode); \
      virtual HRESULT SetObject(CATIDftGenRequest *iObjRef); \
      virtual HRESULT GetObject(CATIDftGenRequest **oObjRef); \
      virtual HRESULT SetOverRuns(CATListOfDouble& iOverruns); \
      virtual HRESULT SetDirectionReference(CATMathDirection2D& iDir); \
      virtual HRESULT SetDirectionReference(CATMathPoint2D& iDir); \
};



#define ENVTIEdeclare_CATIDftGenSRCenterLine(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT SetCircle(CATMathCircle *iCircle); \
virtual HRESULT GetCircle(CATMathCircle **oCircle); \
virtual HRESULT SetOverRunsMode(boolean iMode); \
virtual HRESULT GetOverRunsMode(boolean *oMode); \
virtual HRESULT SetObject(CATIDftGenRequest *iObjRef); \
virtual HRESULT GetObject(CATIDftGenRequest **oObjRef); \
virtual HRESULT SetOverRuns(CATListOfDouble& iOverruns); \
virtual HRESULT SetDirectionReference(CATMathDirection2D& iDir); \
virtual HRESULT SetDirectionReference(CATMathPoint2D& iDir); \


#define ENVTIEdefine_CATIDftGenSRCenterLine(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::SetCircle(CATMathCircle *iCircle) \
{ \
return (ENVTIECALL(CATIDftGenSRCenterLine,ENVTIETypeLetter,ENVTIELetter)SetCircle(iCircle)); \
} \
HRESULT  ENVTIEName::GetCircle(CATMathCircle **oCircle) \
{ \
return (ENVTIECALL(CATIDftGenSRCenterLine,ENVTIETypeLetter,ENVTIELetter)GetCircle(oCircle)); \
} \
HRESULT  ENVTIEName::SetOverRunsMode(boolean iMode) \
{ \
return (ENVTIECALL(CATIDftGenSRCenterLine,ENVTIETypeLetter,ENVTIELetter)SetOverRunsMode(iMode)); \
} \
HRESULT  ENVTIEName::GetOverRunsMode(boolean *oMode) \
{ \
return (ENVTIECALL(CATIDftGenSRCenterLine,ENVTIETypeLetter,ENVTIELetter)GetOverRunsMode(oMode)); \
} \
HRESULT  ENVTIEName::SetObject(CATIDftGenRequest *iObjRef) \
{ \
return (ENVTIECALL(CATIDftGenSRCenterLine,ENVTIETypeLetter,ENVTIELetter)SetObject(iObjRef)); \
} \
HRESULT  ENVTIEName::GetObject(CATIDftGenRequest **oObjRef) \
{ \
return (ENVTIECALL(CATIDftGenSRCenterLine,ENVTIETypeLetter,ENVTIELetter)GetObject(oObjRef)); \
} \
HRESULT  ENVTIEName::SetOverRuns(CATListOfDouble& iOverruns) \
{ \
return (ENVTIECALL(CATIDftGenSRCenterLine,ENVTIETypeLetter,ENVTIELetter)SetOverRuns(iOverruns)); \
} \
HRESULT  ENVTIEName::SetDirectionReference(CATMathDirection2D& iDir) \
{ \
return (ENVTIECALL(CATIDftGenSRCenterLine,ENVTIETypeLetter,ENVTIELetter)SetDirectionReference(iDir)); \
} \
HRESULT  ENVTIEName::SetDirectionReference(CATMathPoint2D& iDir) \
{ \
return (ENVTIECALL(CATIDftGenSRCenterLine,ENVTIETypeLetter,ENVTIELetter)SetDirectionReference(iDir)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIDftGenSRCenterLine(classe)    TIECATIDftGenSRCenterLine##classe


/* Common methods inside a TIE */
#define common_TIE_CATIDftGenSRCenterLine(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIDftGenSRCenterLine, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATIDftGenSRCenterLine, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATIDftGenSRCenterLine, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATIDftGenSRCenterLine, classe) \
 \
HRESULT  TIECATIDftGenSRCenterLine##classe::SetCircle(CATMathCircle *iCircle) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCircle(iCircle)); \
} \
HRESULT  TIECATIDftGenSRCenterLine##classe::GetCircle(CATMathCircle **oCircle) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCircle(oCircle)); \
} \
HRESULT  TIECATIDftGenSRCenterLine##classe::SetOverRunsMode(boolean iMode) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOverRunsMode(iMode)); \
} \
HRESULT  TIECATIDftGenSRCenterLine##classe::GetOverRunsMode(boolean *oMode) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOverRunsMode(oMode)); \
} \
HRESULT  TIECATIDftGenSRCenterLine##classe::SetObject(CATIDftGenRequest *iObjRef) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetObject(iObjRef)); \
} \
HRESULT  TIECATIDftGenSRCenterLine##classe::GetObject(CATIDftGenRequest **oObjRef) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetObject(oObjRef)); \
} \
HRESULT  TIECATIDftGenSRCenterLine##classe::SetOverRuns(CATListOfDouble& iOverruns) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOverRuns(iOverruns)); \
} \
HRESULT  TIECATIDftGenSRCenterLine##classe::SetDirectionReference(CATMathDirection2D& iDir) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDirectionReference(iDir)); \
} \
HRESULT  TIECATIDftGenSRCenterLine##classe::SetDirectionReference(CATMathPoint2D& iDir) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDirectionReference(iDir)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIDftGenSRCenterLine(classe) \
 \
 \
declare_TIE_CATIDftGenSRCenterLine(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDftGenSRCenterLine##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDftGenSRCenterLine,"CATIDftGenSRCenterLine",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDftGenSRCenterLine(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIDftGenSRCenterLine, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDftGenSRCenterLine##classe(classe::MetaObject(),TIECATIDftGenSRCenterLine##classe::MetaObject(),(void *)CreateTIECATIDftGenSRCenterLine##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIDftGenSRCenterLine(classe) \
 \
 \
declare_TIE_CATIDftGenSRCenterLine(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDftGenSRCenterLine##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDftGenSRCenterLine,"CATIDftGenSRCenterLine",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDftGenSRCenterLine(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIDftGenSRCenterLine, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDftGenSRCenterLine##classe(classe::MetaObject(),TIECATIDftGenSRCenterLine##classe::MetaObject(),(void *)CreateTIECATIDftGenSRCenterLine##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIDftGenSRCenterLine(classe) TIE_CATIDftGenSRCenterLine(classe)
#else
#define BOA_CATIDftGenSRCenterLine(classe) CATImplementBOA(CATIDftGenSRCenterLine, classe)
#endif

#endif
