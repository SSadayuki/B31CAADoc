#ifndef __TIE_CATIMf3DBehavior2
#define __TIE_CATIMf3DBehavior2

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMf3DBehavior2.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMf3DBehavior2 */
#define declare_TIE_CATIMf3DBehavior2(classe) \
 \
 \
class TIECATIMf3DBehavior2##classe : public CATIMf3DBehavior2 \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMf3DBehavior2, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT IsAVolume() const ; \
};



#define ENVTIEdeclare_CATIMf3DBehavior2(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT IsAVolume() const ; \


#define ENVTIEdefine_CATIMf3DBehavior2(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::IsAVolume() const  \
{ \
return (ENVTIECALL(CATIMf3DBehavior2,ENVTIETypeLetter,ENVTIELetter)IsAVolume()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMf3DBehavior2(classe)    TIECATIMf3DBehavior2##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMf3DBehavior2(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMf3DBehavior2, classe) \
 \
 \
CATImplementTIEMethods(CATIMf3DBehavior2, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMf3DBehavior2, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMf3DBehavior2, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMf3DBehavior2, classe) \
 \
HRESULT  TIECATIMf3DBehavior2##classe::IsAVolume() const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsAVolume()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMf3DBehavior2(classe) \
 \
 \
declare_TIE_CATIMf3DBehavior2(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMf3DBehavior2##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMf3DBehavior2,"CATIMf3DBehavior2",CATIMf3DBehavior2::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMf3DBehavior2(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMf3DBehavior2, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMf3DBehavior2##classe(classe::MetaObject(),CATIMf3DBehavior2::MetaObject(),(void *)CreateTIECATIMf3DBehavior2##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMf3DBehavior2(classe) \
 \
 \
declare_TIE_CATIMf3DBehavior2(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMf3DBehavior2##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMf3DBehavior2,"CATIMf3DBehavior2",CATIMf3DBehavior2::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMf3DBehavior2(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMf3DBehavior2, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMf3DBehavior2##classe(classe::MetaObject(),CATIMf3DBehavior2::MetaObject(),(void *)CreateTIECATIMf3DBehavior2##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMf3DBehavior2(classe) TIE_CATIMf3DBehavior2(classe)
#else
#define BOA_CATIMf3DBehavior2(classe) CATImplementBOA(CATIMf3DBehavior2, classe)
#endif

#endif
