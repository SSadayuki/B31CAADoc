#ifndef __TIE_CATISamSharedEdit
#define __TIE_CATISamSharedEdit

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISamSharedEdit.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISamSharedEdit */
#define declare_TIE_CATISamSharedEdit(classe) \
 \
 \
class TIECATISamSharedEdit##classe : public CATISamSharedEdit \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISamSharedEdit, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATCommand * Activate(CATPathElement * iPath) const	; \
};



#define ENVTIEdeclare_CATISamSharedEdit(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATCommand * Activate(CATPathElement * iPath) const	; \


#define ENVTIEdefine_CATISamSharedEdit(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATCommand *  ENVTIEName::Activate(CATPathElement * iPath) const	 \
{ \
return (ENVTIECALL(CATISamSharedEdit,ENVTIETypeLetter,ENVTIELetter)Activate(iPath)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISamSharedEdit(classe)    TIECATISamSharedEdit##classe


/* Common methods inside a TIE */
#define common_TIE_CATISamSharedEdit(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISamSharedEdit, classe) \
 \
 \
CATImplementTIEMethods(CATISamSharedEdit, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISamSharedEdit, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISamSharedEdit, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISamSharedEdit, classe) \
 \
CATCommand *  TIECATISamSharedEdit##classe::Activate(CATPathElement * iPath) const	 \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Activate(iPath)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISamSharedEdit(classe) \
 \
 \
declare_TIE_CATISamSharedEdit(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamSharedEdit##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamSharedEdit,"CATISamSharedEdit",CATISamSharedEdit::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamSharedEdit(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISamSharedEdit, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamSharedEdit##classe(classe::MetaObject(),CATISamSharedEdit::MetaObject(),(void *)CreateTIECATISamSharedEdit##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISamSharedEdit(classe) \
 \
 \
declare_TIE_CATISamSharedEdit(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamSharedEdit##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamSharedEdit,"CATISamSharedEdit",CATISamSharedEdit::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamSharedEdit(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISamSharedEdit, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamSharedEdit##classe(classe::MetaObject(),CATISamSharedEdit::MetaObject(),(void *)CreateTIECATISamSharedEdit##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISamSharedEdit(classe) TIE_CATISamSharedEdit(classe)
#else
#define BOA_CATISamSharedEdit(classe) CATImplementBOA(CATISamSharedEdit, classe)
#endif

#endif
