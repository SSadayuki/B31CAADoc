#ifndef __TIE_CATISchAppClassNavigateObject
#define __TIE_CATISchAppClassNavigateObject

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISchAppClassNavigateObject.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISchAppClassNavigateObject */
#define declare_TIE_CATISchAppClassNavigateObject(classe) \
 \
 \
class TIECATISchAppClassNavigateObject##classe : public CATISchAppClassNavigateObject \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISchAppClassNavigateObject, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATListValCATUnicodeString* GetIdentificators(); \
      virtual CATListValCATBaseUnknown_var* GetChildren(); \
};



#define ENVTIEdeclare_CATISchAppClassNavigateObject(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATListValCATUnicodeString* GetIdentificators(); \
virtual CATListValCATBaseUnknown_var* GetChildren(); \


#define ENVTIEdefine_CATISchAppClassNavigateObject(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATListValCATUnicodeString*  ENVTIEName::GetIdentificators() \
{ \
return (ENVTIECALL(CATISchAppClassNavigateObject,ENVTIETypeLetter,ENVTIELetter)GetIdentificators()); \
} \
CATListValCATBaseUnknown_var*  ENVTIEName::GetChildren() \
{ \
return (ENVTIECALL(CATISchAppClassNavigateObject,ENVTIETypeLetter,ENVTIELetter)GetChildren()); \
} \


/* Name of the TIE class */
#define class_TIE_CATISchAppClassNavigateObject(classe)    TIECATISchAppClassNavigateObject##classe


/* Common methods inside a TIE */
#define common_TIE_CATISchAppClassNavigateObject(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISchAppClassNavigateObject, classe) \
 \
 \
CATImplementTIEMethods(CATISchAppClassNavigateObject, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISchAppClassNavigateObject, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISchAppClassNavigateObject, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISchAppClassNavigateObject, classe) \
 \
CATListValCATUnicodeString*  TIECATISchAppClassNavigateObject##classe::GetIdentificators() \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetIdentificators()); \
} \
CATListValCATBaseUnknown_var*  TIECATISchAppClassNavigateObject##classe::GetChildren() \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetChildren()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISchAppClassNavigateObject(classe) \
 \
 \
declare_TIE_CATISchAppClassNavigateObject(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppClassNavigateObject##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppClassNavigateObject,"CATISchAppClassNavigateObject",CATISchAppClassNavigateObject::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppClassNavigateObject(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISchAppClassNavigateObject, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppClassNavigateObject##classe(classe::MetaObject(),CATISchAppClassNavigateObject::MetaObject(),(void *)CreateTIECATISchAppClassNavigateObject##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISchAppClassNavigateObject(classe) \
 \
 \
declare_TIE_CATISchAppClassNavigateObject(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppClassNavigateObject##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppClassNavigateObject,"CATISchAppClassNavigateObject",CATISchAppClassNavigateObject::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppClassNavigateObject(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISchAppClassNavigateObject, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppClassNavigateObject##classe(classe::MetaObject(),CATISchAppClassNavigateObject::MetaObject(),(void *)CreateTIECATISchAppClassNavigateObject##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISchAppClassNavigateObject(classe) TIE_CATISchAppClassNavigateObject(classe)
#else
#define BOA_CATISchAppClassNavigateObject(classe) CATImplementBOA(CATISchAppClassNavigateObject, classe)
#endif

#endif
