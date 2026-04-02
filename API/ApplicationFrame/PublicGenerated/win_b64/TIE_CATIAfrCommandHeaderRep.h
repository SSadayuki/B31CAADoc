#ifndef __TIE_CATIAfrCommandHeaderRep
#define __TIE_CATIAfrCommandHeaderRep

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIAfrCommandHeaderRep.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAfrCommandHeaderRep */
#define declare_TIE_CATIAfrCommandHeaderRep(classe) \
 \
 \
class TIECATIAfrCommandHeaderRep##classe : public CATIAfrCommandHeaderRep \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAfrCommandHeaderRep, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT CreateToolbarRep (const CATDialog * iParent, CATAfrCommandHeaderRep ** oHdrRep) ; \
      virtual HRESULT CreateMenuRep (const CATDialog * iParent, CATAfrCommandHeaderRep ** oHdrRep) ; \
      virtual HRESULT CreateCtxMenuRep (const CATDialog * iParent, CATAfrCommandHeaderRep ** oHdrRep) ; \
};



#define ENVTIEdeclare_CATIAfrCommandHeaderRep(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT CreateToolbarRep (const CATDialog * iParent, CATAfrCommandHeaderRep ** oHdrRep) ; \
virtual HRESULT CreateMenuRep (const CATDialog * iParent, CATAfrCommandHeaderRep ** oHdrRep) ; \
virtual HRESULT CreateCtxMenuRep (const CATDialog * iParent, CATAfrCommandHeaderRep ** oHdrRep) ; \


#define ENVTIEdefine_CATIAfrCommandHeaderRep(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::CreateToolbarRep (const CATDialog * iParent, CATAfrCommandHeaderRep ** oHdrRep)  \
{ \
return (ENVTIECALL(CATIAfrCommandHeaderRep,ENVTIETypeLetter,ENVTIELetter)CreateToolbarRep (iParent,oHdrRep)); \
} \
HRESULT  ENVTIEName::CreateMenuRep (const CATDialog * iParent, CATAfrCommandHeaderRep ** oHdrRep)  \
{ \
return (ENVTIECALL(CATIAfrCommandHeaderRep,ENVTIETypeLetter,ENVTIELetter)CreateMenuRep (iParent,oHdrRep)); \
} \
HRESULT  ENVTIEName::CreateCtxMenuRep (const CATDialog * iParent, CATAfrCommandHeaderRep ** oHdrRep)  \
{ \
return (ENVTIECALL(CATIAfrCommandHeaderRep,ENVTIETypeLetter,ENVTIELetter)CreateCtxMenuRep (iParent,oHdrRep)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAfrCommandHeaderRep(classe)    TIECATIAfrCommandHeaderRep##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAfrCommandHeaderRep(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAfrCommandHeaderRep, classe) \
 \
 \
CATImplementTIEMethods(CATIAfrCommandHeaderRep, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAfrCommandHeaderRep, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAfrCommandHeaderRep, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAfrCommandHeaderRep, classe) \
 \
HRESULT  TIECATIAfrCommandHeaderRep##classe::CreateToolbarRep (const CATDialog * iParent, CATAfrCommandHeaderRep ** oHdrRep)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbarRep (iParent,oHdrRep)); \
} \
HRESULT  TIECATIAfrCommandHeaderRep##classe::CreateMenuRep (const CATDialog * iParent, CATAfrCommandHeaderRep ** oHdrRep)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateMenuRep (iParent,oHdrRep)); \
} \
HRESULT  TIECATIAfrCommandHeaderRep##classe::CreateCtxMenuRep (const CATDialog * iParent, CATAfrCommandHeaderRep ** oHdrRep)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCtxMenuRep (iParent,oHdrRep)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAfrCommandHeaderRep(classe) \
 \
 \
declare_TIE_CATIAfrCommandHeaderRep(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAfrCommandHeaderRep##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAfrCommandHeaderRep,"CATIAfrCommandHeaderRep",CATIAfrCommandHeaderRep::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAfrCommandHeaderRep(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAfrCommandHeaderRep, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAfrCommandHeaderRep##classe(classe::MetaObject(),CATIAfrCommandHeaderRep::MetaObject(),(void *)CreateTIECATIAfrCommandHeaderRep##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAfrCommandHeaderRep(classe) \
 \
 \
declare_TIE_CATIAfrCommandHeaderRep(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAfrCommandHeaderRep##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAfrCommandHeaderRep,"CATIAfrCommandHeaderRep",CATIAfrCommandHeaderRep::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAfrCommandHeaderRep(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAfrCommandHeaderRep, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAfrCommandHeaderRep##classe(classe::MetaObject(),CATIAfrCommandHeaderRep::MetaObject(),(void *)CreateTIECATIAfrCommandHeaderRep##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAfrCommandHeaderRep(classe) TIE_CATIAfrCommandHeaderRep(classe)
#else
#define BOA_CATIAfrCommandHeaderRep(classe) CATImplementBOA(CATIAfrCommandHeaderRep, classe)
#endif

#endif
