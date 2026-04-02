#ifndef __TIE_CATIGeomExtendAttrBehavior
#define __TIE_CATIGeomExtendAttrBehavior

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIGeomExtendAttrBehavior.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIGeomExtendAttrBehavior */
#define declare_TIE_CATIGeomExtendAttrBehavior(classe) \
 \
 \
class TIECATIGeomExtendAttrBehavior##classe : public CATIGeomExtendAttrBehavior \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIGeomExtendAttrBehavior, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetRequestedBehavior(const CATUnicodeString* iAttrName, CATListBehaviorSpecs& oBehaviorList) ; \
};



#define ENVTIEdeclare_CATIGeomExtendAttrBehavior(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetRequestedBehavior(const CATUnicodeString* iAttrName, CATListBehaviorSpecs& oBehaviorList) ; \


#define ENVTIEdefine_CATIGeomExtendAttrBehavior(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetRequestedBehavior(const CATUnicodeString* iAttrName, CATListBehaviorSpecs& oBehaviorList)  \
{ \
return (ENVTIECALL(CATIGeomExtendAttrBehavior,ENVTIETypeLetter,ENVTIELetter)GetRequestedBehavior(iAttrName,oBehaviorList)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIGeomExtendAttrBehavior(classe)    TIECATIGeomExtendAttrBehavior##classe


/* Common methods inside a TIE */
#define common_TIE_CATIGeomExtendAttrBehavior(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIGeomExtendAttrBehavior, classe) \
 \
 \
CATImplementTIEMethods(CATIGeomExtendAttrBehavior, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIGeomExtendAttrBehavior, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIGeomExtendAttrBehavior, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIGeomExtendAttrBehavior, classe) \
 \
HRESULT  TIECATIGeomExtendAttrBehavior##classe::GetRequestedBehavior(const CATUnicodeString* iAttrName, CATListBehaviorSpecs& oBehaviorList)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRequestedBehavior(iAttrName,oBehaviorList)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIGeomExtendAttrBehavior(classe) \
 \
 \
declare_TIE_CATIGeomExtendAttrBehavior(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIGeomExtendAttrBehavior##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIGeomExtendAttrBehavior,"CATIGeomExtendAttrBehavior",CATIGeomExtendAttrBehavior::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIGeomExtendAttrBehavior(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIGeomExtendAttrBehavior, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIGeomExtendAttrBehavior##classe(classe::MetaObject(),CATIGeomExtendAttrBehavior::MetaObject(),(void *)CreateTIECATIGeomExtendAttrBehavior##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIGeomExtendAttrBehavior(classe) \
 \
 \
declare_TIE_CATIGeomExtendAttrBehavior(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIGeomExtendAttrBehavior##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIGeomExtendAttrBehavior,"CATIGeomExtendAttrBehavior",CATIGeomExtendAttrBehavior::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIGeomExtendAttrBehavior(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIGeomExtendAttrBehavior, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIGeomExtendAttrBehavior##classe(classe::MetaObject(),CATIGeomExtendAttrBehavior::MetaObject(),(void *)CreateTIECATIGeomExtendAttrBehavior##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIGeomExtendAttrBehavior(classe) TIE_CATIGeomExtendAttrBehavior(classe)
#else
#define BOA_CATIGeomExtendAttrBehavior(classe) CATImplementBOA(CATIGeomExtendAttrBehavior, classe)
#endif

#endif
