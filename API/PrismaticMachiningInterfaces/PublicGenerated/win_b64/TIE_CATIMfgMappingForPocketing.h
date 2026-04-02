#ifndef __TIE_CATIMfgMappingForPocketing
#define __TIE_CATIMfgMappingForPocketing

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgMappingForPocketing.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgMappingForPocketing */
#define declare_TIE_CATIMfgMappingForPocketing(classe) \
 \
 \
class TIECATIMfgMappingForPocketing##classe : public CATIMfgMappingForPocketing \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgMappingForPocketing, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetPart (CATBaseUnknown_var& oPart) ; \
      virtual HRESULT GetRelimitingPlane (CATBaseUnknown_var & oRelimitingPlane) ; \
      virtual HRESULT GetGuidingCurves (CATListValCATBaseUnknown_var & oGuidingElements) ; \
      virtual HRESULT GetIslands (CATListValCATBaseUnknown_var& oListOfIslands, CATListOfInt& oNbOfCurvesByIsland) ; \
};



#define ENVTIEdeclare_CATIMfgMappingForPocketing(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetPart (CATBaseUnknown_var& oPart) ; \
virtual HRESULT GetRelimitingPlane (CATBaseUnknown_var & oRelimitingPlane) ; \
virtual HRESULT GetGuidingCurves (CATListValCATBaseUnknown_var & oGuidingElements) ; \
virtual HRESULT GetIslands (CATListValCATBaseUnknown_var& oListOfIslands, CATListOfInt& oNbOfCurvesByIsland) ; \


#define ENVTIEdefine_CATIMfgMappingForPocketing(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetPart (CATBaseUnknown_var& oPart)  \
{ \
return (ENVTIECALL(CATIMfgMappingForPocketing,ENVTIETypeLetter,ENVTIELetter)GetPart (oPart)); \
} \
HRESULT  ENVTIEName::GetRelimitingPlane (CATBaseUnknown_var & oRelimitingPlane)  \
{ \
return (ENVTIECALL(CATIMfgMappingForPocketing,ENVTIETypeLetter,ENVTIELetter)GetRelimitingPlane (oRelimitingPlane)); \
} \
HRESULT  ENVTIEName::GetGuidingCurves (CATListValCATBaseUnknown_var & oGuidingElements)  \
{ \
return (ENVTIECALL(CATIMfgMappingForPocketing,ENVTIETypeLetter,ENVTIELetter)GetGuidingCurves (oGuidingElements)); \
} \
HRESULT  ENVTIEName::GetIslands (CATListValCATBaseUnknown_var& oListOfIslands, CATListOfInt& oNbOfCurvesByIsland)  \
{ \
return (ENVTIECALL(CATIMfgMappingForPocketing,ENVTIETypeLetter,ENVTIELetter)GetIslands (oListOfIslands,oNbOfCurvesByIsland)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgMappingForPocketing(classe)    TIECATIMfgMappingForPocketing##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgMappingForPocketing(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgMappingForPocketing, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgMappingForPocketing, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgMappingForPocketing, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgMappingForPocketing, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgMappingForPocketing, classe) \
 \
HRESULT  TIECATIMfgMappingForPocketing##classe::GetPart (CATBaseUnknown_var& oPart)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPart (oPart)); \
} \
HRESULT  TIECATIMfgMappingForPocketing##classe::GetRelimitingPlane (CATBaseUnknown_var & oRelimitingPlane)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRelimitingPlane (oRelimitingPlane)); \
} \
HRESULT  TIECATIMfgMappingForPocketing##classe::GetGuidingCurves (CATListValCATBaseUnknown_var & oGuidingElements)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGuidingCurves (oGuidingElements)); \
} \
HRESULT  TIECATIMfgMappingForPocketing##classe::GetIslands (CATListValCATBaseUnknown_var& oListOfIslands, CATListOfInt& oNbOfCurvesByIsland)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetIslands (oListOfIslands,oNbOfCurvesByIsland)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgMappingForPocketing(classe) \
 \
 \
declare_TIE_CATIMfgMappingForPocketing(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgMappingForPocketing##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgMappingForPocketing,"CATIMfgMappingForPocketing",CATIMfgMappingForPocketing::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgMappingForPocketing(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgMappingForPocketing, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgMappingForPocketing##classe(classe::MetaObject(),CATIMfgMappingForPocketing::MetaObject(),(void *)CreateTIECATIMfgMappingForPocketing##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgMappingForPocketing(classe) \
 \
 \
declare_TIE_CATIMfgMappingForPocketing(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgMappingForPocketing##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgMappingForPocketing,"CATIMfgMappingForPocketing",CATIMfgMappingForPocketing::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgMappingForPocketing(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgMappingForPocketing, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgMappingForPocketing##classe(classe::MetaObject(),CATIMfgMappingForPocketing::MetaObject(),(void *)CreateTIECATIMfgMappingForPocketing##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgMappingForPocketing(classe) TIE_CATIMfgMappingForPocketing(classe)
#else
#define BOA_CATIMfgMappingForPocketing(classe) CATImplementBOA(CATIMfgMappingForPocketing, classe)
#endif

#endif
