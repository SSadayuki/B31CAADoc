#ifndef __TIE_CATISchAppRouteAlternateGraphic
#define __TIE_CATISchAppRouteAlternateGraphic

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISchAppRouteAlternateGraphic.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISchAppRouteAlternateGraphic */
#define declare_TIE_CATISchAppRouteAlternateGraphic(classe) \
 \
 \
class TIECATISchAppRouteAlternateGraphic##classe : public CATISchAppRouteAlternateGraphic \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISchAppRouteAlternateGraphic, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT AppGetAssemblyGraphicStyle (CATSchRouteAlternateGraphicStyle *oEGraphicStyle) ; \
};



#define ENVTIEdeclare_CATISchAppRouteAlternateGraphic(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT AppGetAssemblyGraphicStyle (CATSchRouteAlternateGraphicStyle *oEGraphicStyle) ; \


#define ENVTIEdefine_CATISchAppRouteAlternateGraphic(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::AppGetAssemblyGraphicStyle (CATSchRouteAlternateGraphicStyle *oEGraphicStyle)  \
{ \
return (ENVTIECALL(CATISchAppRouteAlternateGraphic,ENVTIETypeLetter,ENVTIELetter)AppGetAssemblyGraphicStyle (oEGraphicStyle)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISchAppRouteAlternateGraphic(classe)    TIECATISchAppRouteAlternateGraphic##classe


/* Common methods inside a TIE */
#define common_TIE_CATISchAppRouteAlternateGraphic(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISchAppRouteAlternateGraphic, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATISchAppRouteAlternateGraphic, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATISchAppRouteAlternateGraphic, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATISchAppRouteAlternateGraphic, classe) \
 \
HRESULT  TIECATISchAppRouteAlternateGraphic##classe::AppGetAssemblyGraphicStyle (CATSchRouteAlternateGraphicStyle *oEGraphicStyle)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppGetAssemblyGraphicStyle (oEGraphicStyle)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISchAppRouteAlternateGraphic(classe) \
 \
 \
declare_TIE_CATISchAppRouteAlternateGraphic(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppRouteAlternateGraphic##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppRouteAlternateGraphic,"CATISchAppRouteAlternateGraphic",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppRouteAlternateGraphic(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISchAppRouteAlternateGraphic, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppRouteAlternateGraphic##classe(classe::MetaObject(),TIECATISchAppRouteAlternateGraphic##classe::MetaObject(),(void *)CreateTIECATISchAppRouteAlternateGraphic##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISchAppRouteAlternateGraphic(classe) \
 \
 \
declare_TIE_CATISchAppRouteAlternateGraphic(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppRouteAlternateGraphic##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppRouteAlternateGraphic,"CATISchAppRouteAlternateGraphic",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppRouteAlternateGraphic(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISchAppRouteAlternateGraphic, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppRouteAlternateGraphic##classe(classe::MetaObject(),TIECATISchAppRouteAlternateGraphic##classe::MetaObject(),(void *)CreateTIECATISchAppRouteAlternateGraphic##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISchAppRouteAlternateGraphic(classe) TIE_CATISchAppRouteAlternateGraphic(classe)
#else
#define BOA_CATISchAppRouteAlternateGraphic(classe) CATImplementBOA(CATISchAppRouteAlternateGraphic, classe)
#endif

#endif
