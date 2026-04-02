#ifndef __TIE_ENOVIUEModify
#define __TIE_ENOVIUEModify

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "ENOVIUEModify.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface ENOVIUEModify */
#define declare_TIE_ENOVIUEModify(classe) \
 \
 \
class TIEENOVIUEModify##classe : public ENOVIUEModify \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(ENOVIUEModify, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT IsModify(const CATTime & iRefDate); \
};



#define ENVTIEdeclare_ENOVIUEModify(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT IsModify(const CATTime & iRefDate); \


#define ENVTIEdefine_ENOVIUEModify(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::IsModify(const CATTime & iRefDate) \
{ \
return (ENVTIECALL(ENOVIUEModify,ENVTIETypeLetter,ENVTIELetter)IsModify(iRefDate)); \
} \


/* Name of the TIE class */
#define class_TIE_ENOVIUEModify(classe)    TIEENOVIUEModify##classe


/* Common methods inside a TIE */
#define common_TIE_ENOVIUEModify(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(ENOVIUEModify, classe) \
 \
 \
CATImplementTIEMethods(ENOVIUEModify, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(ENOVIUEModify, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(ENOVIUEModify, classe) \
CATImplementCATBaseUnknownMethodsForTIE(ENOVIUEModify, classe) \
 \
HRESULT  TIEENOVIUEModify##classe::IsModify(const CATTime & iRefDate) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsModify(iRefDate)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_ENOVIUEModify(classe) \
 \
 \
declare_TIE_ENOVIUEModify(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIUEModify##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIUEModify,"ENOVIUEModify",ENOVIUEModify::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIUEModify(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(ENOVIUEModify, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIUEModify##classe(classe::MetaObject(),ENOVIUEModify::MetaObject(),(void *)CreateTIEENOVIUEModify##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_ENOVIUEModify(classe) \
 \
 \
declare_TIE_ENOVIUEModify(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIUEModify##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIUEModify,"ENOVIUEModify",ENOVIUEModify::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIUEModify(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(ENOVIUEModify, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIUEModify##classe(classe::MetaObject(),ENOVIUEModify::MetaObject(),(void *)CreateTIEENOVIUEModify##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_ENOVIUEModify(classe) TIE_ENOVIUEModify(classe)
#else
#define BOA_ENOVIUEModify(classe) CATImplementBOA(ENOVIUEModify, classe)
#endif

#endif
