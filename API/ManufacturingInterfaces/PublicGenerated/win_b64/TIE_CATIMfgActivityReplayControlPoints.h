#ifndef __TIE_CATIMfgActivityReplayControlPoints
#define __TIE_CATIMfgActivityReplayControlPoints

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgActivityReplayControlPoints.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgActivityReplayControlPoints */
#define declare_TIE_CATIMfgActivityReplayControlPoints(classe) \
 \
 \
class TIECATIMfgActivityReplayControlPoints##classe : public CATIMfgActivityReplayControlPoints \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgActivityReplayControlPoints, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT StopOnControlUserSyntaxes (CATListValCATUnicodeString& oListOfControlUserSyntaxes) ; \
};



#define ENVTIEdeclare_CATIMfgActivityReplayControlPoints(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT StopOnControlUserSyntaxes (CATListValCATUnicodeString& oListOfControlUserSyntaxes) ; \


#define ENVTIEdefine_CATIMfgActivityReplayControlPoints(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::StopOnControlUserSyntaxes (CATListValCATUnicodeString& oListOfControlUserSyntaxes)  \
{ \
return (ENVTIECALL(CATIMfgActivityReplayControlPoints,ENVTIETypeLetter,ENVTIELetter)StopOnControlUserSyntaxes (oListOfControlUserSyntaxes)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgActivityReplayControlPoints(classe)    TIECATIMfgActivityReplayControlPoints##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgActivityReplayControlPoints(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgActivityReplayControlPoints, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgActivityReplayControlPoints, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgActivityReplayControlPoints, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgActivityReplayControlPoints, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgActivityReplayControlPoints, classe) \
 \
HRESULT  TIECATIMfgActivityReplayControlPoints##classe::StopOnControlUserSyntaxes (CATListValCATUnicodeString& oListOfControlUserSyntaxes)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->StopOnControlUserSyntaxes (oListOfControlUserSyntaxes)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgActivityReplayControlPoints(classe) \
 \
 \
declare_TIE_CATIMfgActivityReplayControlPoints(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgActivityReplayControlPoints##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgActivityReplayControlPoints,"CATIMfgActivityReplayControlPoints",CATIMfgActivityReplayControlPoints::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgActivityReplayControlPoints(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgActivityReplayControlPoints, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgActivityReplayControlPoints##classe(classe::MetaObject(),CATIMfgActivityReplayControlPoints::MetaObject(),(void *)CreateTIECATIMfgActivityReplayControlPoints##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgActivityReplayControlPoints(classe) \
 \
 \
declare_TIE_CATIMfgActivityReplayControlPoints(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgActivityReplayControlPoints##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgActivityReplayControlPoints,"CATIMfgActivityReplayControlPoints",CATIMfgActivityReplayControlPoints::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgActivityReplayControlPoints(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgActivityReplayControlPoints, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgActivityReplayControlPoints##classe(classe::MetaObject(),CATIMfgActivityReplayControlPoints::MetaObject(),(void *)CreateTIECATIMfgActivityReplayControlPoints##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgActivityReplayControlPoints(classe) TIE_CATIMfgActivityReplayControlPoints(classe)
#else
#define BOA_CATIMfgActivityReplayControlPoints(classe) CATImplementBOA(CATIMfgActivityReplayControlPoints, classe)
#endif

#endif
