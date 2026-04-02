#ifndef __TIE_CATINavigateObject
#define __TIE_CATINavigateObject

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATINavigateObject.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATINavigateObject */
#define declare_TIE_CATINavigateObject(classe) \
 \
 \
class TIECATINavigateObject##classe : public CATINavigateObject \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATINavigateObject, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATListValCATUnicodeString* GetIdentificators(); \
      virtual CATListValCATBaseUnknown_var* GetChildren(); \
};



#define ENVTIEdeclare_CATINavigateObject(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATListValCATUnicodeString* GetIdentificators(); \
virtual CATListValCATBaseUnknown_var* GetChildren(); \


#define ENVTIEdefine_CATINavigateObject(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATListValCATUnicodeString*  ENVTIEName::GetIdentificators() \
{ \
return (ENVTIECALL(CATINavigateObject,ENVTIETypeLetter,ENVTIELetter)GetIdentificators()); \
} \
CATListValCATBaseUnknown_var*  ENVTIEName::GetChildren() \
{ \
return (ENVTIECALL(CATINavigateObject,ENVTIETypeLetter,ENVTIELetter)GetChildren()); \
} \


/* Name of the TIE class */
#define class_TIE_CATINavigateObject(classe)    TIECATINavigateObject##classe


/* Common methods inside a TIE */
#define common_TIE_CATINavigateObject(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATINavigateObject, classe) \
 \
 \
CATImplementTIEMethods(CATINavigateObject, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATINavigateObject, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATINavigateObject, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATINavigateObject, classe) \
 \
CATListValCATUnicodeString*  TIECATINavigateObject##classe::GetIdentificators() \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetIdentificators()); \
} \
CATListValCATBaseUnknown_var*  TIECATINavigateObject##classe::GetChildren() \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetChildren()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATINavigateObject(classe) \
 \
 \
declare_TIE_CATINavigateObject(classe) \
 \
 \
CATMetaClass * __stdcall TIECATINavigateObject##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATINavigateObject,"CATINavigateObject",CATINavigateObject::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATINavigateObject(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATINavigateObject, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATINavigateObject##classe(classe::MetaObject(),CATINavigateObject::MetaObject(),(void *)CreateTIECATINavigateObject##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATINavigateObject(classe) \
 \
 \
declare_TIE_CATINavigateObject(classe) \
 \
 \
CATMetaClass * __stdcall TIECATINavigateObject##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATINavigateObject,"CATINavigateObject",CATINavigateObject::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATINavigateObject(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATINavigateObject, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATINavigateObject##classe(classe::MetaObject(),CATINavigateObject::MetaObject(),(void *)CreateTIECATINavigateObject##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATINavigateObject(classe) TIE_CATINavigateObject(classe)
#else
#define BOA_CATINavigateObject(classe) CATImplementBOA(CATINavigateObject, classe)
#endif

#endif
