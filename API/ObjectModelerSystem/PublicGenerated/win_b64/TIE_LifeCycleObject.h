#ifndef __TIE_LifeCycleObject
#define __TIE_LifeCycleObject

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "LifeCycleObject.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface LifeCycleObject */
#define declare_TIE_LifeCycleObject(classe) \
 \
 \
class TIELifeCycleObject##classe : public LifeCycleObject \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(LifeCycleObject, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void           remove( int iForCloseContext=0 ) ; \
};



#define ENVTIEdeclare_LifeCycleObject(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void           remove( int iForCloseContext=0 ) ; \


#define ENVTIEdefine_LifeCycleObject(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void            ENVTIEName::remove( int iForCloseContext)  \
{ \
 (ENVTIECALL(LifeCycleObject,ENVTIETypeLetter,ENVTIELetter)remove(iForCloseContext)); \
} \


/* Name of the TIE class */
#define class_TIE_LifeCycleObject(classe)    TIELifeCycleObject##classe


/* Common methods inside a TIE */
#define common_TIE_LifeCycleObject(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(LifeCycleObject, classe) \
 \
 \
CATImplementTIEMethods(LifeCycleObject, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(LifeCycleObject, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(LifeCycleObject, classe) \
CATImplementCATBaseUnknownMethodsForTIE(LifeCycleObject, classe) \
 \
void            TIELifeCycleObject##classe::remove( int iForCloseContext)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->remove(iForCloseContext); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_LifeCycleObject(classe) \
 \
 \
declare_TIE_LifeCycleObject(classe) \
 \
 \
CATMetaClass * __stdcall TIELifeCycleObject##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_LifeCycleObject,"LifeCycleObject",LifeCycleObject::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_LifeCycleObject(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(LifeCycleObject, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicLifeCycleObject##classe(classe::MetaObject(),LifeCycleObject::MetaObject(),(void *)CreateTIELifeCycleObject##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_LifeCycleObject(classe) \
 \
 \
declare_TIE_LifeCycleObject(classe) \
 \
 \
CATMetaClass * __stdcall TIELifeCycleObject##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_LifeCycleObject,"LifeCycleObject",LifeCycleObject::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_LifeCycleObject(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(LifeCycleObject, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicLifeCycleObject##classe(classe::MetaObject(),LifeCycleObject::MetaObject(),(void *)CreateTIELifeCycleObject##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_LifeCycleObject(classe) TIE_LifeCycleObject(classe)
#else
#define BOA_LifeCycleObject(classe) CATImplementBOA(LifeCycleObject, classe)
#endif

#endif
