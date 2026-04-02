#ifndef __TIE_CATInPlaceSite
#define __TIE_CATInPlaceSite

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATInPlaceSite.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATInPlaceSite */
#define declare_TIE_CATInPlaceSite(classe) \
 \
 \
class TIECATInPlaceSite##classe : public CATInPlaceSite \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATInPlaceSite, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual int  CanInPlaceActivate () ; \
      virtual int  OnInPlaceActivate () ; \
      virtual int  OnUIActivate () ; \
      virtual int  OnInPlaceDeactivate () ; \
      virtual int  OnUIDeactivate () ; \
};



#define ENVTIEdeclare_CATInPlaceSite(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual int  CanInPlaceActivate () ; \
virtual int  OnInPlaceActivate () ; \
virtual int  OnUIActivate () ; \
virtual int  OnInPlaceDeactivate () ; \
virtual int  OnUIDeactivate () ; \


#define ENVTIEdefine_CATInPlaceSite(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
int   ENVTIEName::CanInPlaceActivate ()  \
{ \
return (ENVTIECALL(CATInPlaceSite,ENVTIETypeLetter,ENVTIELetter)CanInPlaceActivate ()); \
} \
int   ENVTIEName::OnInPlaceActivate ()  \
{ \
return (ENVTIECALL(CATInPlaceSite,ENVTIETypeLetter,ENVTIELetter)OnInPlaceActivate ()); \
} \
int   ENVTIEName::OnUIActivate ()  \
{ \
return (ENVTIECALL(CATInPlaceSite,ENVTIETypeLetter,ENVTIELetter)OnUIActivate ()); \
} \
int   ENVTIEName::OnInPlaceDeactivate ()  \
{ \
return (ENVTIECALL(CATInPlaceSite,ENVTIETypeLetter,ENVTIELetter)OnInPlaceDeactivate ()); \
} \
int   ENVTIEName::OnUIDeactivate ()  \
{ \
return (ENVTIECALL(CATInPlaceSite,ENVTIETypeLetter,ENVTIELetter)OnUIDeactivate ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATInPlaceSite(classe)    TIECATInPlaceSite##classe


/* Common methods inside a TIE */
#define common_TIE_CATInPlaceSite(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATInPlaceSite, classe) \
 \
 \
CATImplementTIEMethods(CATInPlaceSite, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATInPlaceSite, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATInPlaceSite, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATInPlaceSite, classe) \
 \
int   TIECATInPlaceSite##classe::CanInPlaceActivate ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CanInPlaceActivate ()); \
} \
int   TIECATInPlaceSite##classe::OnInPlaceActivate ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OnInPlaceActivate ()); \
} \
int   TIECATInPlaceSite##classe::OnUIActivate ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OnUIActivate ()); \
} \
int   TIECATInPlaceSite##classe::OnInPlaceDeactivate ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OnInPlaceDeactivate ()); \
} \
int   TIECATInPlaceSite##classe::OnUIDeactivate ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OnUIDeactivate ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATInPlaceSite(classe) \
 \
 \
declare_TIE_CATInPlaceSite(classe) \
 \
 \
CATMetaClass * __stdcall TIECATInPlaceSite##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATInPlaceSite,"CATInPlaceSite",CATInPlaceSite::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATInPlaceSite(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATInPlaceSite, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATInPlaceSite##classe(classe::MetaObject(),CATInPlaceSite::MetaObject(),(void *)CreateTIECATInPlaceSite##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATInPlaceSite(classe) \
 \
 \
declare_TIE_CATInPlaceSite(classe) \
 \
 \
CATMetaClass * __stdcall TIECATInPlaceSite##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATInPlaceSite,"CATInPlaceSite",CATInPlaceSite::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATInPlaceSite(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATInPlaceSite, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATInPlaceSite##classe(classe::MetaObject(),CATInPlaceSite::MetaObject(),(void *)CreateTIECATInPlaceSite##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATInPlaceSite(classe) TIE_CATInPlaceSite(classe)
#else
#define BOA_CATInPlaceSite(classe) CATImplementBOA(CATInPlaceSite, classe)
#endif

#endif
