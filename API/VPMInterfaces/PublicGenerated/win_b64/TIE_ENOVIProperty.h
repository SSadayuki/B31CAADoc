#ifndef __TIE_ENOVIProperty
#define __TIE_ENOVIProperty

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "ENOVIProperty.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface ENOVIProperty */
#define declare_TIE_ENOVIProperty(classe) \
 \
 \
class TIEENOVIProperty##classe : public ENOVIProperty \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(ENOVIProperty, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT get_Owner (CATBaseUnknown*& oowner); \
};



#define ENVTIEdeclare_ENOVIProperty(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT get_Owner (CATBaseUnknown*& oowner); \


#define ENVTIEdefine_ENOVIProperty(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::get_Owner (CATBaseUnknown*& oowner) \
{ \
return (ENVTIECALL(ENOVIProperty,ENVTIETypeLetter,ENVTIELetter)get_Owner (oowner)); \
} \


/* Name of the TIE class */
#define class_TIE_ENOVIProperty(classe)    TIEENOVIProperty##classe


/* Common methods inside a TIE */
#define common_TIE_ENOVIProperty(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(ENOVIProperty, classe) \
 \
 \
CATImplementTIEMethods(ENOVIProperty, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(ENOVIProperty, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(ENOVIProperty, classe) \
CATImplementCATBaseUnknownMethodsForTIE(ENOVIProperty, classe) \
 \
HRESULT  TIEENOVIProperty##classe::get_Owner (CATBaseUnknown*& oowner) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Owner (oowner)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_ENOVIProperty(classe) \
 \
 \
declare_TIE_ENOVIProperty(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIProperty##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIProperty,"ENOVIProperty",ENOVIProperty::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIProperty(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(ENOVIProperty, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIProperty##classe(classe::MetaObject(),ENOVIProperty::MetaObject(),(void *)CreateTIEENOVIProperty##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_ENOVIProperty(classe) \
 \
 \
declare_TIE_ENOVIProperty(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIProperty##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIProperty,"ENOVIProperty",ENOVIProperty::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIProperty(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(ENOVIProperty, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIProperty##classe(classe::MetaObject(),ENOVIProperty::MetaObject(),(void *)CreateTIEENOVIProperty##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_ENOVIProperty(classe) TIE_ENOVIProperty(classe)
#else
#define BOA_ENOVIProperty(classe) CATImplementBOA(ENOVIProperty, classe)
#endif

#endif
