#ifndef __TIE_CATIMfgMacroMotionsGeomMapping
#define __TIE_CATIMfgMacroMotionsGeomMapping

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgMacroMotionsGeomMapping.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgMacroMotionsGeomMapping */
#define declare_TIE_CATIMfgMacroMotionsGeomMapping(classe) \
 \
 \
class TIECATIMfgMacroMotionsGeomMapping##classe : public CATIMfgMacroMotionsGeomMapping \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgMacroMotionsGeomMapping, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT MapGeomOnApproachMacroMotion (CATUnicodeString iActivityType, int iMacroMotionType, CATListOfInt iElementaryMotionTypeList, CATListValCATBaseUnknown_var &oGeometryList) ; \
      virtual HRESULT MapGeomOnRetractMacroMotion (CATUnicodeString iActivityType, int iMacroMotionType, CATListOfInt iElementaryMotionTypeList, CATListValCATBaseUnknown_var &oGeometryList) ; \
};



#define ENVTIEdeclare_CATIMfgMacroMotionsGeomMapping(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT MapGeomOnApproachMacroMotion (CATUnicodeString iActivityType, int iMacroMotionType, CATListOfInt iElementaryMotionTypeList, CATListValCATBaseUnknown_var &oGeometryList) ; \
virtual HRESULT MapGeomOnRetractMacroMotion (CATUnicodeString iActivityType, int iMacroMotionType, CATListOfInt iElementaryMotionTypeList, CATListValCATBaseUnknown_var &oGeometryList) ; \


#define ENVTIEdefine_CATIMfgMacroMotionsGeomMapping(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::MapGeomOnApproachMacroMotion (CATUnicodeString iActivityType, int iMacroMotionType, CATListOfInt iElementaryMotionTypeList, CATListValCATBaseUnknown_var &oGeometryList)  \
{ \
return (ENVTIECALL(CATIMfgMacroMotionsGeomMapping,ENVTIETypeLetter,ENVTIELetter)MapGeomOnApproachMacroMotion (iActivityType,iMacroMotionType,iElementaryMotionTypeList,oGeometryList)); \
} \
HRESULT  ENVTIEName::MapGeomOnRetractMacroMotion (CATUnicodeString iActivityType, int iMacroMotionType, CATListOfInt iElementaryMotionTypeList, CATListValCATBaseUnknown_var &oGeometryList)  \
{ \
return (ENVTIECALL(CATIMfgMacroMotionsGeomMapping,ENVTIETypeLetter,ENVTIELetter)MapGeomOnRetractMacroMotion (iActivityType,iMacroMotionType,iElementaryMotionTypeList,oGeometryList)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgMacroMotionsGeomMapping(classe)    TIECATIMfgMacroMotionsGeomMapping##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgMacroMotionsGeomMapping(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgMacroMotionsGeomMapping, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgMacroMotionsGeomMapping, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgMacroMotionsGeomMapping, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgMacroMotionsGeomMapping, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgMacroMotionsGeomMapping, classe) \
 \
HRESULT  TIECATIMfgMacroMotionsGeomMapping##classe::MapGeomOnApproachMacroMotion (CATUnicodeString iActivityType, int iMacroMotionType, CATListOfInt iElementaryMotionTypeList, CATListValCATBaseUnknown_var &oGeometryList)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->MapGeomOnApproachMacroMotion (iActivityType,iMacroMotionType,iElementaryMotionTypeList,oGeometryList)); \
} \
HRESULT  TIECATIMfgMacroMotionsGeomMapping##classe::MapGeomOnRetractMacroMotion (CATUnicodeString iActivityType, int iMacroMotionType, CATListOfInt iElementaryMotionTypeList, CATListValCATBaseUnknown_var &oGeometryList)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->MapGeomOnRetractMacroMotion (iActivityType,iMacroMotionType,iElementaryMotionTypeList,oGeometryList)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgMacroMotionsGeomMapping(classe) \
 \
 \
declare_TIE_CATIMfgMacroMotionsGeomMapping(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgMacroMotionsGeomMapping##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgMacroMotionsGeomMapping,"CATIMfgMacroMotionsGeomMapping",CATIMfgMacroMotionsGeomMapping::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgMacroMotionsGeomMapping(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgMacroMotionsGeomMapping, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgMacroMotionsGeomMapping##classe(classe::MetaObject(),CATIMfgMacroMotionsGeomMapping::MetaObject(),(void *)CreateTIECATIMfgMacroMotionsGeomMapping##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgMacroMotionsGeomMapping(classe) \
 \
 \
declare_TIE_CATIMfgMacroMotionsGeomMapping(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgMacroMotionsGeomMapping##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgMacroMotionsGeomMapping,"CATIMfgMacroMotionsGeomMapping",CATIMfgMacroMotionsGeomMapping::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgMacroMotionsGeomMapping(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgMacroMotionsGeomMapping, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgMacroMotionsGeomMapping##classe(classe::MetaObject(),CATIMfgMacroMotionsGeomMapping::MetaObject(),(void *)CreateTIECATIMfgMacroMotionsGeomMapping##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgMacroMotionsGeomMapping(classe) TIE_CATIMfgMacroMotionsGeomMapping(classe)
#else
#define BOA_CATIMfgMacroMotionsGeomMapping(classe) CATImplementBOA(CATIMfgMacroMotionsGeomMapping, classe)
#endif

#endif
