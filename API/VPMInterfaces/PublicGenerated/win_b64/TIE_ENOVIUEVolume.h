#ifndef __TIE_ENOVIUEVolume
#define __TIE_ENOVIUEVolume

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "ENOVIUEVolume.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface ENOVIUEVolume */
#define declare_TIE_ENOVIUEVolume(classe) \
 \
 \
class TIEENOVIUEVolume##classe : public ENOVIUEVolume \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(ENOVIUEVolume, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT get_Documents(CATListOfCATIAVPMDocumentVersion& oDocument); \
};



#define ENVTIEdeclare_ENOVIUEVolume(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT get_Documents(CATListOfCATIAVPMDocumentVersion& oDocument); \


#define ENVTIEdefine_ENOVIUEVolume(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::get_Documents(CATListOfCATIAVPMDocumentVersion& oDocument) \
{ \
return (ENVTIECALL(ENOVIUEVolume,ENVTIETypeLetter,ENVTIELetter)get_Documents(oDocument)); \
} \


/* Name of the TIE class */
#define class_TIE_ENOVIUEVolume(classe)    TIEENOVIUEVolume##classe


/* Common methods inside a TIE */
#define common_TIE_ENOVIUEVolume(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(ENOVIUEVolume, classe) \
 \
 \
CATImplementTIEMethods(ENOVIUEVolume, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(ENOVIUEVolume, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(ENOVIUEVolume, classe) \
CATImplementCATBaseUnknownMethodsForTIE(ENOVIUEVolume, classe) \
 \
HRESULT  TIEENOVIUEVolume##classe::get_Documents(CATListOfCATIAVPMDocumentVersion& oDocument) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Documents(oDocument)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_ENOVIUEVolume(classe) \
 \
 \
declare_TIE_ENOVIUEVolume(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIUEVolume##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIUEVolume,"ENOVIUEVolume",ENOVIUEVolume::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIUEVolume(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(ENOVIUEVolume, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIUEVolume##classe(classe::MetaObject(),ENOVIUEVolume::MetaObject(),(void *)CreateTIEENOVIUEVolume##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_ENOVIUEVolume(classe) \
 \
 \
declare_TIE_ENOVIUEVolume(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIUEVolume##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIUEVolume,"ENOVIUEVolume",ENOVIUEVolume::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIUEVolume(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(ENOVIUEVolume, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIUEVolume##classe(classe::MetaObject(),ENOVIUEVolume::MetaObject(),(void *)CreateTIEENOVIUEVolume##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_ENOVIUEVolume(classe) TIE_ENOVIUEVolume(classe)
#else
#define BOA_ENOVIUEVolume(classe) CATImplementBOA(ENOVIUEVolume, classe)
#endif

#endif
