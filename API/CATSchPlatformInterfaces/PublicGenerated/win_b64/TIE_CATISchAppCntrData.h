#ifndef __TIE_CATISchAppCntrData
#define __TIE_CATISchAppCntrData

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISchAppCntrData.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISchAppCntrData */
#define declare_TIE_CATISchAppCntrData(classe) \
 \
 \
class TIECATISchAppCntrData##classe : public CATISchAppCntrData \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISchAppCntrData, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT AppSetApplicationData (const CATListOfCATUnicodeString &iLAppData) ; \
      virtual HRESULT AppGetApplicationData (CATListOfCATUnicodeString &iLAppData, CATListOfCATUnicodeString &iLAppNlsData) ; \
      virtual HRESULT AppListPotentialData (CATListOfCATUnicodeString &iLAppData, CATListOfCATUnicodeString &iLAppNlsData) ; \
};



#define ENVTIEdeclare_CATISchAppCntrData(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT AppSetApplicationData (const CATListOfCATUnicodeString &iLAppData) ; \
virtual HRESULT AppGetApplicationData (CATListOfCATUnicodeString &iLAppData, CATListOfCATUnicodeString &iLAppNlsData) ; \
virtual HRESULT AppListPotentialData (CATListOfCATUnicodeString &iLAppData, CATListOfCATUnicodeString &iLAppNlsData) ; \


#define ENVTIEdefine_CATISchAppCntrData(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::AppSetApplicationData (const CATListOfCATUnicodeString &iLAppData)  \
{ \
return (ENVTIECALL(CATISchAppCntrData,ENVTIETypeLetter,ENVTIELetter)AppSetApplicationData (iLAppData)); \
} \
HRESULT  ENVTIEName::AppGetApplicationData (CATListOfCATUnicodeString &iLAppData, CATListOfCATUnicodeString &iLAppNlsData)  \
{ \
return (ENVTIECALL(CATISchAppCntrData,ENVTIETypeLetter,ENVTIELetter)AppGetApplicationData (iLAppData,iLAppNlsData)); \
} \
HRESULT  ENVTIEName::AppListPotentialData (CATListOfCATUnicodeString &iLAppData, CATListOfCATUnicodeString &iLAppNlsData)  \
{ \
return (ENVTIECALL(CATISchAppCntrData,ENVTIETypeLetter,ENVTIELetter)AppListPotentialData (iLAppData,iLAppNlsData)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISchAppCntrData(classe)    TIECATISchAppCntrData##classe


/* Common methods inside a TIE */
#define common_TIE_CATISchAppCntrData(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISchAppCntrData, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATISchAppCntrData, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATISchAppCntrData, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATISchAppCntrData, classe) \
 \
HRESULT  TIECATISchAppCntrData##classe::AppSetApplicationData (const CATListOfCATUnicodeString &iLAppData)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppSetApplicationData (iLAppData)); \
} \
HRESULT  TIECATISchAppCntrData##classe::AppGetApplicationData (CATListOfCATUnicodeString &iLAppData, CATListOfCATUnicodeString &iLAppNlsData)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppGetApplicationData (iLAppData,iLAppNlsData)); \
} \
HRESULT  TIECATISchAppCntrData##classe::AppListPotentialData (CATListOfCATUnicodeString &iLAppData, CATListOfCATUnicodeString &iLAppNlsData)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppListPotentialData (iLAppData,iLAppNlsData)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISchAppCntrData(classe) \
 \
 \
declare_TIE_CATISchAppCntrData(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppCntrData##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppCntrData,"CATISchAppCntrData",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppCntrData(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISchAppCntrData, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppCntrData##classe(classe::MetaObject(),TIECATISchAppCntrData##classe::MetaObject(),(void *)CreateTIECATISchAppCntrData##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISchAppCntrData(classe) \
 \
 \
declare_TIE_CATISchAppCntrData(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppCntrData##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppCntrData,"CATISchAppCntrData",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppCntrData(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISchAppCntrData, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppCntrData##classe(classe::MetaObject(),TIECATISchAppCntrData##classe::MetaObject(),(void *)CreateTIECATISchAppCntrData##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISchAppCntrData(classe) TIE_CATISchAppCntrData(classe)
#else
#define BOA_CATISchAppCntrData(classe) CATImplementBOA(CATISchAppCntrData, classe)
#endif

#endif
