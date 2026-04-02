#ifndef __TIE_CATIParmValuator
#define __TIE_CATIParmValuator

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIParmValuator.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIParmValuator */
#define declare_TIE_CATIParmValuator(classe) \
 \
 \
class TIECATIParmValuator##classe : public CATIParmValuator \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIParmValuator, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATUnicodeString  Show    () const ; \
      virtual HRESULT AllowLinkRemoval(const CATICkeParm_var &parm) ; \
      virtual HRESULT RemoveLink(const CATICkeParm_var &parm) ; \
};



#define ENVTIEdeclare_CATIParmValuator(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATUnicodeString  Show    () const ; \
virtual HRESULT AllowLinkRemoval(const CATICkeParm_var &parm) ; \
virtual HRESULT RemoveLink(const CATICkeParm_var &parm) ; \


#define ENVTIEdefine_CATIParmValuator(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATUnicodeString   ENVTIEName::Show    () const  \
{ \
return (ENVTIECALL(CATIParmValuator,ENVTIETypeLetter,ENVTIELetter)Show    ()); \
} \
HRESULT  ENVTIEName::AllowLinkRemoval(const CATICkeParm_var &parm)  \
{ \
return (ENVTIECALL(CATIParmValuator,ENVTIETypeLetter,ENVTIELetter)AllowLinkRemoval(parm)); \
} \
HRESULT  ENVTIEName::RemoveLink(const CATICkeParm_var &parm)  \
{ \
return (ENVTIECALL(CATIParmValuator,ENVTIETypeLetter,ENVTIELetter)RemoveLink(parm)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIParmValuator(classe)    TIECATIParmValuator##classe


/* Common methods inside a TIE */
#define common_TIE_CATIParmValuator(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIParmValuator, classe) \
 \
 \
CATImplementTIEMethods(CATIParmValuator, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIParmValuator, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIParmValuator, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIParmValuator, classe) \
 \
CATUnicodeString   TIECATIParmValuator##classe::Show    () const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Show    ()); \
} \
HRESULT  TIECATIParmValuator##classe::AllowLinkRemoval(const CATICkeParm_var &parm)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AllowLinkRemoval(parm)); \
} \
HRESULT  TIECATIParmValuator##classe::RemoveLink(const CATICkeParm_var &parm)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveLink(parm)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIParmValuator(classe) \
 \
 \
declare_TIE_CATIParmValuator(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIParmValuator##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIParmValuator,"CATIParmValuator",CATIParmValuator::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIParmValuator(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIParmValuator, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIParmValuator##classe(classe::MetaObject(),CATIParmValuator::MetaObject(),(void *)CreateTIECATIParmValuator##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIParmValuator(classe) \
 \
 \
declare_TIE_CATIParmValuator(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIParmValuator##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIParmValuator,"CATIParmValuator",CATIParmValuator::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIParmValuator(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIParmValuator, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIParmValuator##classe(classe::MetaObject(),CATIParmValuator::MetaObject(),(void *)CreateTIECATIParmValuator##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIParmValuator(classe) TIE_CATIParmValuator(classe)
#else
#define BOA_CATIParmValuator(classe) CATImplementBOA(CATIParmValuator, classe)
#endif

#endif
