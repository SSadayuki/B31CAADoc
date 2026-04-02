#ifndef __TIE_CATIMfgMIK1
#define __TIE_CATIMfgMIK1

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgMIK1.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgMIK1 */
#define declare_TIE_CATIMfgMIK1(classe) \
 \
 \
class TIECATIMfgMIK1##classe : public CATIMfgMIK1 \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgMIK1, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT MIKInit(int iMode, CATUnicodeString iPPARFilePath) ; \
      virtual HRESULT MIKCreateDOFTable(double iTimeIncr) ; \
      virtual HRESULT MIKExit() ; \
      virtual HRESULT IsMIKAvailable(const CATUnicodeString& iPPARFilePath) ; \
};



#define ENVTIEdeclare_CATIMfgMIK1(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT MIKInit(int iMode, CATUnicodeString iPPARFilePath) ; \
virtual HRESULT MIKCreateDOFTable(double iTimeIncr) ; \
virtual HRESULT MIKExit() ; \
virtual HRESULT IsMIKAvailable(const CATUnicodeString& iPPARFilePath) ; \


#define ENVTIEdefine_CATIMfgMIK1(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::MIKInit(int iMode, CATUnicodeString iPPARFilePath)  \
{ \
return (ENVTIECALL(CATIMfgMIK1,ENVTIETypeLetter,ENVTIELetter)MIKInit(iMode,iPPARFilePath)); \
} \
HRESULT  ENVTIEName::MIKCreateDOFTable(double iTimeIncr)  \
{ \
return (ENVTIECALL(CATIMfgMIK1,ENVTIETypeLetter,ENVTIELetter)MIKCreateDOFTable(iTimeIncr)); \
} \
HRESULT  ENVTIEName::MIKExit()  \
{ \
return (ENVTIECALL(CATIMfgMIK1,ENVTIETypeLetter,ENVTIELetter)MIKExit()); \
} \
HRESULT  ENVTIEName::IsMIKAvailable(const CATUnicodeString& iPPARFilePath)  \
{ \
return (ENVTIECALL(CATIMfgMIK1,ENVTIETypeLetter,ENVTIELetter)IsMIKAvailable(iPPARFilePath)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgMIK1(classe)    TIECATIMfgMIK1##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgMIK1(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgMIK1, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgMIK1, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgMIK1, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgMIK1, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgMIK1, classe) \
 \
HRESULT  TIECATIMfgMIK1##classe::MIKInit(int iMode, CATUnicodeString iPPARFilePath)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->MIKInit(iMode,iPPARFilePath)); \
} \
HRESULT  TIECATIMfgMIK1##classe::MIKCreateDOFTable(double iTimeIncr)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->MIKCreateDOFTable(iTimeIncr)); \
} \
HRESULT  TIECATIMfgMIK1##classe::MIKExit()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->MIKExit()); \
} \
HRESULT  TIECATIMfgMIK1##classe::IsMIKAvailable(const CATUnicodeString& iPPARFilePath)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsMIKAvailable(iPPARFilePath)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgMIK1(classe) \
 \
 \
declare_TIE_CATIMfgMIK1(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgMIK1##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgMIK1,"CATIMfgMIK1",CATIMfgMIK1::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgMIK1(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgMIK1, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgMIK1##classe(classe::MetaObject(),CATIMfgMIK1::MetaObject(),(void *)CreateTIECATIMfgMIK1##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgMIK1(classe) \
 \
 \
declare_TIE_CATIMfgMIK1(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgMIK1##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgMIK1,"CATIMfgMIK1",CATIMfgMIK1::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgMIK1(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgMIK1, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgMIK1##classe(classe::MetaObject(),CATIMfgMIK1::MetaObject(),(void *)CreateTIECATIMfgMIK1##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgMIK1(classe) TIE_CATIMfgMIK1(classe)
#else
#define BOA_CATIMfgMIK1(classe) CATImplementBOA(CATIMfgMIK1, classe)
#endif

#endif
