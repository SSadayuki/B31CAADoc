#ifndef __TIE_ENOVIUENamedObject
#define __TIE_ENOVIUENamedObject

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "ENOVIUENamedObject.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface ENOVIUENamedObject */
#define declare_TIE_ENOVIUENamedObject(classe) \
 \
 \
class TIEENOVIUENamedObject##classe : public ENOVIUENamedObject \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(ENOVIUENamedObject, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT get_Name(CATUnicodeString& oName); \
      virtual HRESULT get_LongName(CATUnicodeString& oName); \
};



#define ENVTIEdeclare_ENOVIUENamedObject(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT get_Name(CATUnicodeString& oName); \
virtual HRESULT get_LongName(CATUnicodeString& oName); \


#define ENVTIEdefine_ENOVIUENamedObject(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::get_Name(CATUnicodeString& oName) \
{ \
return (ENVTIECALL(ENOVIUENamedObject,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  ENVTIEName::get_LongName(CATUnicodeString& oName) \
{ \
return (ENVTIECALL(ENOVIUENamedObject,ENVTIETypeLetter,ENVTIELetter)get_LongName(oName)); \
} \


/* Name of the TIE class */
#define class_TIE_ENOVIUENamedObject(classe)    TIEENOVIUENamedObject##classe


/* Common methods inside a TIE */
#define common_TIE_ENOVIUENamedObject(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(ENOVIUENamedObject, classe) \
 \
 \
CATImplementTIEMethods(ENOVIUENamedObject, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(ENOVIUENamedObject, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(ENOVIUENamedObject, classe) \
CATImplementCATBaseUnknownMethodsForTIE(ENOVIUENamedObject, classe) \
 \
HRESULT  TIEENOVIUENamedObject##classe::get_Name(CATUnicodeString& oName) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName)); \
} \
HRESULT  TIEENOVIUENamedObject##classe::get_LongName(CATUnicodeString& oName) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LongName(oName)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_ENOVIUENamedObject(classe) \
 \
 \
declare_TIE_ENOVIUENamedObject(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIUENamedObject##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIUENamedObject,"ENOVIUENamedObject",ENOVIUENamedObject::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIUENamedObject(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(ENOVIUENamedObject, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIUENamedObject##classe(classe::MetaObject(),ENOVIUENamedObject::MetaObject(),(void *)CreateTIEENOVIUENamedObject##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_ENOVIUENamedObject(classe) \
 \
 \
declare_TIE_ENOVIUENamedObject(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIUENamedObject##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIUENamedObject,"ENOVIUENamedObject",ENOVIUENamedObject::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIUENamedObject(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(ENOVIUENamedObject, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIUENamedObject##classe(classe::MetaObject(),ENOVIUENamedObject::MetaObject(),(void *)CreateTIEENOVIUENamedObject##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_ENOVIUENamedObject(classe) TIE_ENOVIUENamedObject(classe)
#else
#define BOA_ENOVIUENamedObject(classe) CATImplementBOA(ENOVIUENamedObject, classe)
#endif

#endif
