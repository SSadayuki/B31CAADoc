#ifndef __TIE_CATIMfgActivityToolPath
#define __TIE_CATIMfgActivityToolPath

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgActivityToolPath.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgActivityToolPath */
#define declare_TIE_CATIMfgActivityToolPath(classe) \
 \
 \
class TIECATIMfgActivityToolPath##classe : public CATIMfgActivityToolPath \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgActivityToolPath, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT ComputeAndSetToolPath() ; \
};



#define ENVTIEdeclare_CATIMfgActivityToolPath(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT ComputeAndSetToolPath() ; \


#define ENVTIEdefine_CATIMfgActivityToolPath(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::ComputeAndSetToolPath()  \
{ \
return (ENVTIECALL(CATIMfgActivityToolPath,ENVTIETypeLetter,ENVTIELetter)ComputeAndSetToolPath()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgActivityToolPath(classe)    TIECATIMfgActivityToolPath##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgActivityToolPath(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgActivityToolPath, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgActivityToolPath, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgActivityToolPath, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgActivityToolPath, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgActivityToolPath, classe) \
 \
HRESULT  TIECATIMfgActivityToolPath##classe::ComputeAndSetToolPath()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ComputeAndSetToolPath()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgActivityToolPath(classe) \
 \
 \
declare_TIE_CATIMfgActivityToolPath(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgActivityToolPath##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgActivityToolPath,"CATIMfgActivityToolPath",CATIMfgActivityToolPath::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgActivityToolPath(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgActivityToolPath, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgActivityToolPath##classe(classe::MetaObject(),CATIMfgActivityToolPath::MetaObject(),(void *)CreateTIECATIMfgActivityToolPath##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgActivityToolPath(classe) \
 \
 \
declare_TIE_CATIMfgActivityToolPath(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgActivityToolPath##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgActivityToolPath,"CATIMfgActivityToolPath",CATIMfgActivityToolPath::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgActivityToolPath(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgActivityToolPath, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgActivityToolPath##classe(classe::MetaObject(),CATIMfgActivityToolPath::MetaObject(),(void *)CreateTIECATIMfgActivityToolPath##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgActivityToolPath(classe) TIE_CATIMfgActivityToolPath(classe)
#else
#define BOA_CATIMfgActivityToolPath(classe) CATImplementBOA(CATIMfgActivityToolPath, classe)
#endif

#endif
