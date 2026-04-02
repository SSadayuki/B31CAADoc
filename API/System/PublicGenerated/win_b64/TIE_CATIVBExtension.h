#ifndef __TIE_CATIVBExtension
#define __TIE_CATIVBExtension

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIVBExtension.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIVBExtension */
#define declare_TIE_CATIVBExtension(classe) \
 \
 \
class TIECATIVBExtension##classe : public CATIVBExtension \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIVBExtension, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetObjects( CATBaseUnknown * iGetItemTarget, CATBaseDispatch *& oGetItemResult) const ; \
};



#define ENVTIEdeclare_CATIVBExtension(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetObjects( CATBaseUnknown * iGetItemTarget, CATBaseDispatch *& oGetItemResult) const ; \


#define ENVTIEdefine_CATIVBExtension(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetObjects( CATBaseUnknown * iGetItemTarget, CATBaseDispatch *& oGetItemResult) const  \
{ \
return (ENVTIECALL(CATIVBExtension,ENVTIETypeLetter,ENVTIELetter)GetObjects(iGetItemTarget,oGetItemResult)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIVBExtension(classe)    TIECATIVBExtension##classe


/* Common methods inside a TIE */
#define common_TIE_CATIVBExtension(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIVBExtension, classe) \
 \
 \
CATImplementTIEMethods(CATIVBExtension, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIVBExtension, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIVBExtension, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIVBExtension, classe) \
 \
HRESULT  TIECATIVBExtension##classe::GetObjects( CATBaseUnknown * iGetItemTarget, CATBaseDispatch *& oGetItemResult) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetObjects(iGetItemTarget,oGetItemResult)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIVBExtension(classe) \
 \
 \
declare_TIE_CATIVBExtension(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIVBExtension##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIVBExtension,"CATIVBExtension",CATIVBExtension::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIVBExtension(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIVBExtension, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIVBExtension##classe(classe::MetaObject(),CATIVBExtension::MetaObject(),(void *)CreateTIECATIVBExtension##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIVBExtension(classe) \
 \
 \
declare_TIE_CATIVBExtension(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIVBExtension##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIVBExtension,"CATIVBExtension",CATIVBExtension::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIVBExtension(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIVBExtension, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIVBExtension##classe(classe::MetaObject(),CATIVBExtension::MetaObject(),(void *)CreateTIECATIVBExtension##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIVBExtension(classe) TIE_CATIVBExtension(classe)
#else
#define BOA_CATIVBExtension(classe) CATImplementBOA(CATIVBExtension, classe)
#endif

#endif
