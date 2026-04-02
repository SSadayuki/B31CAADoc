#ifndef __TIE_CATIMfgMIK2
#define __TIE_CATIMfgMIK2

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgMIK2.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgMIK2 */
#define declare_TIE_CATIMfgMIK2(classe) \
 \
 \
class TIECATIMfgMIK2##classe : public CATIMfgMIK2 \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgMIK2, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT MIKInit(int iMode, CATUnicodeString iFilePath) ; \
      virtual HRESULT MIKCreateDOFTable(double iTimeIncr) ; \
      virtual HRESULT MIKExit() ; \
};



#define ENVTIEdeclare_CATIMfgMIK2(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT MIKInit(int iMode, CATUnicodeString iFilePath) ; \
virtual HRESULT MIKCreateDOFTable(double iTimeIncr) ; \
virtual HRESULT MIKExit() ; \


#define ENVTIEdefine_CATIMfgMIK2(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::MIKInit(int iMode, CATUnicodeString iFilePath)  \
{ \
return (ENVTIECALL(CATIMfgMIK2,ENVTIETypeLetter,ENVTIELetter)MIKInit(iMode,iFilePath)); \
} \
HRESULT  ENVTIEName::MIKCreateDOFTable(double iTimeIncr)  \
{ \
return (ENVTIECALL(CATIMfgMIK2,ENVTIETypeLetter,ENVTIELetter)MIKCreateDOFTable(iTimeIncr)); \
} \
HRESULT  ENVTIEName::MIKExit()  \
{ \
return (ENVTIECALL(CATIMfgMIK2,ENVTIETypeLetter,ENVTIELetter)MIKExit()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgMIK2(classe)    TIECATIMfgMIK2##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgMIK2(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgMIK2, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgMIK2, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgMIK2, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgMIK2, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgMIK2, classe) \
 \
HRESULT  TIECATIMfgMIK2##classe::MIKInit(int iMode, CATUnicodeString iFilePath)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->MIKInit(iMode,iFilePath)); \
} \
HRESULT  TIECATIMfgMIK2##classe::MIKCreateDOFTable(double iTimeIncr)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->MIKCreateDOFTable(iTimeIncr)); \
} \
HRESULT  TIECATIMfgMIK2##classe::MIKExit()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->MIKExit()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgMIK2(classe) \
 \
 \
declare_TIE_CATIMfgMIK2(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgMIK2##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgMIK2,"CATIMfgMIK2",CATIMfgMIK2::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgMIK2(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgMIK2, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgMIK2##classe(classe::MetaObject(),CATIMfgMIK2::MetaObject(),(void *)CreateTIECATIMfgMIK2##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgMIK2(classe) \
 \
 \
declare_TIE_CATIMfgMIK2(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgMIK2##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgMIK2,"CATIMfgMIK2",CATIMfgMIK2::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgMIK2(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgMIK2, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgMIK2##classe(classe::MetaObject(),CATIMfgMIK2::MetaObject(),(void *)CreateTIECATIMfgMIK2##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgMIK2(classe) TIE_CATIMfgMIK2(classe)
#else
#define BOA_CATIMfgMIK2(classe) CATImplementBOA(CATIMfgMIK2, classe)
#endif

#endif
