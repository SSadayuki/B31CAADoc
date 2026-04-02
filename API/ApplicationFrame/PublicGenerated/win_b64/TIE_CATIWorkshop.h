#ifndef __TIE_CATIWorkshop
#define __TIE_CATIWorkshop

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIWorkshop.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIWorkshop */
#define declare_TIE_CATIWorkshop(classe) \
 \
 \
class TIECATIWorkshop##classe : public CATIWorkshop \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIWorkshop, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void             CreateCommands ()        ; \
      virtual CATCmdWorkshop * CreateWorkshop ()        ; \
      virtual CATClassId       GetWorkbenchInterface () ; \
      virtual CATClassId       GetAddinInterface ()     ; \
};



#define ENVTIEdeclare_CATIWorkshop(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void             CreateCommands ()        ; \
virtual CATCmdWorkshop * CreateWorkshop ()        ; \
virtual CATClassId       GetWorkbenchInterface () ; \
virtual CATClassId       GetAddinInterface ()     ; \


#define ENVTIEdefine_CATIWorkshop(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void              ENVTIEName::CreateCommands ()         \
{ \
 (ENVTIECALL(CATIWorkshop,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdWorkshop *  ENVTIEName::CreateWorkshop ()         \
{ \
return (ENVTIECALL(CATIWorkshop,ENVTIETypeLetter,ENVTIELetter)CreateWorkshop ()); \
} \
CATClassId        ENVTIEName::GetWorkbenchInterface ()  \
{ \
return (ENVTIECALL(CATIWorkshop,ENVTIETypeLetter,ENVTIELetter)GetWorkbenchInterface ()); \
} \
CATClassId        ENVTIEName::GetAddinInterface ()      \
{ \
return (ENVTIECALL(CATIWorkshop,ENVTIETypeLetter,ENVTIELetter)GetAddinInterface ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIWorkshop(classe)    TIECATIWorkshop##classe


/* Common methods inside a TIE */
#define common_TIE_CATIWorkshop(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIWorkshop, classe) \
 \
 \
CATImplementTIEMethods(CATIWorkshop, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIWorkshop, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIWorkshop, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIWorkshop, classe) \
 \
void              TIECATIWorkshop##classe::CreateCommands ()         \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdWorkshop *  TIECATIWorkshop##classe::CreateWorkshop ()         \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateWorkshop ()); \
} \
CATClassId        TIECATIWorkshop##classe::GetWorkbenchInterface ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetWorkbenchInterface ()); \
} \
CATClassId        TIECATIWorkshop##classe::GetAddinInterface ()      \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAddinInterface ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIWorkshop(classe) \
 \
 \
declare_TIE_CATIWorkshop(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIWorkshop##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIWorkshop,"CATIWorkshop",CATIWorkshop::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIWorkshop(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIWorkshop, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIWorkshop##classe(classe::MetaObject(),CATIWorkshop::MetaObject(),(void *)CreateTIECATIWorkshop##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIWorkshop(classe) \
 \
 \
declare_TIE_CATIWorkshop(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIWorkshop##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIWorkshop,"CATIWorkshop",CATIWorkshop::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIWorkshop(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIWorkshop, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIWorkshop##classe(classe::MetaObject(),CATIWorkshop::MetaObject(),(void *)CreateTIECATIWorkshop##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIWorkshop(classe) TIE_CATIWorkshop(classe)
#else
#define BOA_CATIWorkshop(classe) CATImplementBOA(CATIWorkshop, classe)
#endif

#endif
