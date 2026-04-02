#ifndef __TIE_CATIEleUipFilteringCriteria
#define __TIE_CATIEleUipFilteringCriteria

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIEleUipFilteringCriteria.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIEleUipFilteringCriteria */
#define declare_TIE_CATIEleUipFilteringCriteria(classe) \
 \
 \
class TIECATIEleUipFilteringCriteria##classe : public CATIEleUipFilteringCriteria \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIEleUipFilteringCriteria, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT ListCriteria(const CATListValCATUnicodeString *iListOfSystems, CATListValCATUnicodeString *&oListOfCriteria) ; \
      virtual HRESULT ListWires(const CATListValCATUnicodeString *iListOfSystems, const CATListValCATUnicodeString *iListOfCriteria, CATListValCATUnicodeString *&oListOfWires) ; \
};



#define ENVTIEdeclare_CATIEleUipFilteringCriteria(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT ListCriteria(const CATListValCATUnicodeString *iListOfSystems, CATListValCATUnicodeString *&oListOfCriteria) ; \
virtual HRESULT ListWires(const CATListValCATUnicodeString *iListOfSystems, const CATListValCATUnicodeString *iListOfCriteria, CATListValCATUnicodeString *&oListOfWires) ; \


#define ENVTIEdefine_CATIEleUipFilteringCriteria(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::ListCriteria(const CATListValCATUnicodeString *iListOfSystems, CATListValCATUnicodeString *&oListOfCriteria)  \
{ \
return (ENVTIECALL(CATIEleUipFilteringCriteria,ENVTIETypeLetter,ENVTIELetter)ListCriteria(iListOfSystems,oListOfCriteria)); \
} \
HRESULT  ENVTIEName::ListWires(const CATListValCATUnicodeString *iListOfSystems, const CATListValCATUnicodeString *iListOfCriteria, CATListValCATUnicodeString *&oListOfWires)  \
{ \
return (ENVTIECALL(CATIEleUipFilteringCriteria,ENVTIETypeLetter,ENVTIELetter)ListWires(iListOfSystems,iListOfCriteria,oListOfWires)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIEleUipFilteringCriteria(classe)    TIECATIEleUipFilteringCriteria##classe


/* Common methods inside a TIE */
#define common_TIE_CATIEleUipFilteringCriteria(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIEleUipFilteringCriteria, classe) \
 \
 \
CATImplementTIEMethods(CATIEleUipFilteringCriteria, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIEleUipFilteringCriteria, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIEleUipFilteringCriteria, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIEleUipFilteringCriteria, classe) \
 \
HRESULT  TIECATIEleUipFilteringCriteria##classe::ListCriteria(const CATListValCATUnicodeString *iListOfSystems, CATListValCATUnicodeString *&oListOfCriteria)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListCriteria(iListOfSystems,oListOfCriteria)); \
} \
HRESULT  TIECATIEleUipFilteringCriteria##classe::ListWires(const CATListValCATUnicodeString *iListOfSystems, const CATListValCATUnicodeString *iListOfCriteria, CATListValCATUnicodeString *&oListOfWires)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListWires(iListOfSystems,iListOfCriteria,oListOfWires)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIEleUipFilteringCriteria(classe) \
 \
 \
declare_TIE_CATIEleUipFilteringCriteria(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIEleUipFilteringCriteria##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIEleUipFilteringCriteria,"CATIEleUipFilteringCriteria",CATIEleUipFilteringCriteria::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIEleUipFilteringCriteria(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIEleUipFilteringCriteria, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIEleUipFilteringCriteria##classe(classe::MetaObject(),CATIEleUipFilteringCriteria::MetaObject(),(void *)CreateTIECATIEleUipFilteringCriteria##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIEleUipFilteringCriteria(classe) \
 \
 \
declare_TIE_CATIEleUipFilteringCriteria(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIEleUipFilteringCriteria##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIEleUipFilteringCriteria,"CATIEleUipFilteringCriteria",CATIEleUipFilteringCriteria::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIEleUipFilteringCriteria(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIEleUipFilteringCriteria, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIEleUipFilteringCriteria##classe(classe::MetaObject(),CATIEleUipFilteringCriteria::MetaObject(),(void *)CreateTIECATIEleUipFilteringCriteria##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIEleUipFilteringCriteria(classe) TIE_CATIEleUipFilteringCriteria(classe)
#else
#define BOA_CATIEleUipFilteringCriteria(classe) CATImplementBOA(CATIEleUipFilteringCriteria, classe)
#endif

#endif
