#ifndef __TIE_CATIEwrUipWireGroups
#define __TIE_CATIEwrUipWireGroups

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIEwrUipWireGroups.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIEwrUipWireGroups */
#define declare_TIE_CATIEwrUipWireGroups(classe) \
 \
 \
class TIECATIEwrUipWireGroups##classe : public CATIEwrUipWireGroups \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIEwrUipWireGroups, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT ListWireGroups(const CATListValCATUnicodeString *iListOfSystems, const CATListValCATUnicodeString *iListOfCriteria, CATULONG32 &oWireGroupsCount, CATEwrWireGroup *&oListOfWireGroups) ; \
};



#define ENVTIEdeclare_CATIEwrUipWireGroups(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT ListWireGroups(const CATListValCATUnicodeString *iListOfSystems, const CATListValCATUnicodeString *iListOfCriteria, CATULONG32 &oWireGroupsCount, CATEwrWireGroup *&oListOfWireGroups) ; \


#define ENVTIEdefine_CATIEwrUipWireGroups(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::ListWireGroups(const CATListValCATUnicodeString *iListOfSystems, const CATListValCATUnicodeString *iListOfCriteria, CATULONG32 &oWireGroupsCount, CATEwrWireGroup *&oListOfWireGroups)  \
{ \
return (ENVTIECALL(CATIEwrUipWireGroups,ENVTIETypeLetter,ENVTIELetter)ListWireGroups(iListOfSystems,iListOfCriteria,oWireGroupsCount,oListOfWireGroups)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIEwrUipWireGroups(classe)    TIECATIEwrUipWireGroups##classe


/* Common methods inside a TIE */
#define common_TIE_CATIEwrUipWireGroups(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIEwrUipWireGroups, classe) \
 \
 \
CATImplementTIEMethods(CATIEwrUipWireGroups, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIEwrUipWireGroups, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIEwrUipWireGroups, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIEwrUipWireGroups, classe) \
 \
HRESULT  TIECATIEwrUipWireGroups##classe::ListWireGroups(const CATListValCATUnicodeString *iListOfSystems, const CATListValCATUnicodeString *iListOfCriteria, CATULONG32 &oWireGroupsCount, CATEwrWireGroup *&oListOfWireGroups)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListWireGroups(iListOfSystems,iListOfCriteria,oWireGroupsCount,oListOfWireGroups)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIEwrUipWireGroups(classe) \
 \
 \
declare_TIE_CATIEwrUipWireGroups(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIEwrUipWireGroups##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIEwrUipWireGroups,"CATIEwrUipWireGroups",CATIEwrUipWireGroups::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIEwrUipWireGroups(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIEwrUipWireGroups, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIEwrUipWireGroups##classe(classe::MetaObject(),CATIEwrUipWireGroups::MetaObject(),(void *)CreateTIECATIEwrUipWireGroups##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIEwrUipWireGroups(classe) \
 \
 \
declare_TIE_CATIEwrUipWireGroups(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIEwrUipWireGroups##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIEwrUipWireGroups,"CATIEwrUipWireGroups",CATIEwrUipWireGroups::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIEwrUipWireGroups(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIEwrUipWireGroups, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIEwrUipWireGroups##classe(classe::MetaObject(),CATIEwrUipWireGroups::MetaObject(),(void *)CreateTIECATIEwrUipWireGroups##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIEwrUipWireGroups(classe) TIE_CATIEwrUipWireGroups(classe)
#else
#define BOA_CATIEwrUipWireGroups(classe) CATImplementBOA(CATIEwrUipWireGroups, classe)
#endif

#endif
