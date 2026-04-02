#ifndef __TIE_CATIEwrUipWires
#define __TIE_CATIEwrUipWires

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIEwrUipWires.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIEwrUipWires */
#define declare_TIE_CATIEwrUipWires(classe) \
 \
 \
class TIECATIEwrUipWires##classe : public CATIEwrUipWires \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIEwrUipWires, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT ListWires(const CATListValCATUnicodeString *iListOfSystems, const CATListValCATUnicodeString *iListOfCriteria, CATLONG32 &oWiresCount, CATEwrWire *&oListOfWires) ; \
};



#define ENVTIEdeclare_CATIEwrUipWires(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT ListWires(const CATListValCATUnicodeString *iListOfSystems, const CATListValCATUnicodeString *iListOfCriteria, CATLONG32 &oWiresCount, CATEwrWire *&oListOfWires) ; \


#define ENVTIEdefine_CATIEwrUipWires(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::ListWires(const CATListValCATUnicodeString *iListOfSystems, const CATListValCATUnicodeString *iListOfCriteria, CATLONG32 &oWiresCount, CATEwrWire *&oListOfWires)  \
{ \
return (ENVTIECALL(CATIEwrUipWires,ENVTIETypeLetter,ENVTIELetter)ListWires(iListOfSystems,iListOfCriteria,oWiresCount,oListOfWires)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIEwrUipWires(classe)    TIECATIEwrUipWires##classe


/* Common methods inside a TIE */
#define common_TIE_CATIEwrUipWires(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIEwrUipWires, classe) \
 \
 \
CATImplementTIEMethods(CATIEwrUipWires, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIEwrUipWires, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIEwrUipWires, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIEwrUipWires, classe) \
 \
HRESULT  TIECATIEwrUipWires##classe::ListWires(const CATListValCATUnicodeString *iListOfSystems, const CATListValCATUnicodeString *iListOfCriteria, CATLONG32 &oWiresCount, CATEwrWire *&oListOfWires)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListWires(iListOfSystems,iListOfCriteria,oWiresCount,oListOfWires)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIEwrUipWires(classe) \
 \
 \
declare_TIE_CATIEwrUipWires(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIEwrUipWires##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIEwrUipWires,"CATIEwrUipWires",CATIEwrUipWires::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIEwrUipWires(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIEwrUipWires, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIEwrUipWires##classe(classe::MetaObject(),CATIEwrUipWires::MetaObject(),(void *)CreateTIECATIEwrUipWires##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIEwrUipWires(classe) \
 \
 \
declare_TIE_CATIEwrUipWires(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIEwrUipWires##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIEwrUipWires,"CATIEwrUipWires",CATIEwrUipWires::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIEwrUipWires(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIEwrUipWires, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIEwrUipWires##classe(classe::MetaObject(),CATIEwrUipWires::MetaObject(),(void *)CreateTIECATIEwrUipWires##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIEwrUipWires(classe) TIE_CATIEwrUipWires(classe)
#else
#define BOA_CATIEwrUipWires(classe) CATImplementBOA(CATIEwrUipWires, classe)
#endif

#endif
