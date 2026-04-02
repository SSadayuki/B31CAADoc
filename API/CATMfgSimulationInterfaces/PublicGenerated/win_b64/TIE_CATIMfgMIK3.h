#ifndef __TIE_CATIMfgMIK3
#define __TIE_CATIMfgMIK3

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgMIK3.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgMIK3 */
#define declare_TIE_CATIMfgMIK3(classe) \
 \
 \
class TIECATIMfgMIK3##classe : public CATIMfgMIK3 \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgMIK3, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT MIKInit(int iMode, CATUnicodeString iFilePath) ; \
      virtual HRESULT MIKCreateDOFTable(double iTimeIncr) ; \
      virtual HRESULT MIKExit() ; \
};



#define ENVTIEdeclare_CATIMfgMIK3(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT MIKInit(int iMode, CATUnicodeString iFilePath) ; \
virtual HRESULT MIKCreateDOFTable(double iTimeIncr) ; \
virtual HRESULT MIKExit() ; \


#define ENVTIEdefine_CATIMfgMIK3(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::MIKInit(int iMode, CATUnicodeString iFilePath)  \
{ \
return (ENVTIECALL(CATIMfgMIK3,ENVTIETypeLetter,ENVTIELetter)MIKInit(iMode,iFilePath)); \
} \
HRESULT  ENVTIEName::MIKCreateDOFTable(double iTimeIncr)  \
{ \
return (ENVTIECALL(CATIMfgMIK3,ENVTIETypeLetter,ENVTIELetter)MIKCreateDOFTable(iTimeIncr)); \
} \
HRESULT  ENVTIEName::MIKExit()  \
{ \
return (ENVTIECALL(CATIMfgMIK3,ENVTIETypeLetter,ENVTIELetter)MIKExit()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgMIK3(classe)    TIECATIMfgMIK3##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgMIK3(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgMIK3, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgMIK3, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgMIK3, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgMIK3, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgMIK3, classe) \
 \
HRESULT  TIECATIMfgMIK3##classe::MIKInit(int iMode, CATUnicodeString iFilePath)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->MIKInit(iMode,iFilePath)); \
} \
HRESULT  TIECATIMfgMIK3##classe::MIKCreateDOFTable(double iTimeIncr)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->MIKCreateDOFTable(iTimeIncr)); \
} \
HRESULT  TIECATIMfgMIK3##classe::MIKExit()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->MIKExit()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgMIK3(classe) \
 \
 \
declare_TIE_CATIMfgMIK3(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgMIK3##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgMIK3,"CATIMfgMIK3",CATIMfgMIK3::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgMIK3(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgMIK3, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgMIK3##classe(classe::MetaObject(),CATIMfgMIK3::MetaObject(),(void *)CreateTIECATIMfgMIK3##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgMIK3(classe) \
 \
 \
declare_TIE_CATIMfgMIK3(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgMIK3##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgMIK3,"CATIMfgMIK3",CATIMfgMIK3::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgMIK3(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgMIK3, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgMIK3##classe(classe::MetaObject(),CATIMfgMIK3::MetaObject(),(void *)CreateTIECATIMfgMIK3##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgMIK3(classe) TIE_CATIMfgMIK3(classe)
#else
#define BOA_CATIMfgMIK3(classe) CATImplementBOA(CATIMfgMIK3, classe)
#endif

#endif
