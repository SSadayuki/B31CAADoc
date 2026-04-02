#ifndef __TIE_CATISchAppObsoleteClass
#define __TIE_CATISchAppObsoleteClass

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISchAppObsoleteClass.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISchAppObsoleteClass */
#define declare_TIE_CATISchAppObsoleteClass(classe) \
 \
 \
class TIECATISchAppObsoleteClass##classe : public CATISchAppObsoleteClass \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISchAppObsoleteClass, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT AppCreateObsoleteNotif(CATSchNotification **oSchNotif) ; \
};



#define ENVTIEdeclare_CATISchAppObsoleteClass(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT AppCreateObsoleteNotif(CATSchNotification **oSchNotif) ; \


#define ENVTIEdefine_CATISchAppObsoleteClass(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::AppCreateObsoleteNotif(CATSchNotification **oSchNotif)  \
{ \
return (ENVTIECALL(CATISchAppObsoleteClass,ENVTIETypeLetter,ENVTIELetter)AppCreateObsoleteNotif(oSchNotif)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISchAppObsoleteClass(classe)    TIECATISchAppObsoleteClass##classe


/* Common methods inside a TIE */
#define common_TIE_CATISchAppObsoleteClass(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISchAppObsoleteClass, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATISchAppObsoleteClass, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATISchAppObsoleteClass, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATISchAppObsoleteClass, classe) \
 \
HRESULT  TIECATISchAppObsoleteClass##classe::AppCreateObsoleteNotif(CATSchNotification **oSchNotif)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppCreateObsoleteNotif(oSchNotif)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISchAppObsoleteClass(classe) \
 \
 \
declare_TIE_CATISchAppObsoleteClass(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppObsoleteClass##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppObsoleteClass,"CATISchAppObsoleteClass",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppObsoleteClass(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISchAppObsoleteClass, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppObsoleteClass##classe(classe::MetaObject(),TIECATISchAppObsoleteClass##classe::MetaObject(),(void *)CreateTIECATISchAppObsoleteClass##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISchAppObsoleteClass(classe) \
 \
 \
declare_TIE_CATISchAppObsoleteClass(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppObsoleteClass##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppObsoleteClass,"CATISchAppObsoleteClass",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppObsoleteClass(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISchAppObsoleteClass, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppObsoleteClass##classe(classe::MetaObject(),TIECATISchAppObsoleteClass##classe::MetaObject(),(void *)CreateTIECATISchAppObsoleteClass##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISchAppObsoleteClass(classe) TIE_CATISchAppObsoleteClass(classe)
#else
#define BOA_CATISchAppObsoleteClass(classe) CATImplementBOA(CATISchAppObsoleteClass, classe)
#endif

#endif
