#ifndef __TIE_CATIMf3DBehavior
#define __TIE_CATIMf3DBehavior

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMf3DBehavior.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMf3DBehavior */
#define declare_TIE_CATIMf3DBehavior(classe) \
 \
 \
class TIECATIMf3DBehavior##classe : public CATIMf3DBehavior \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMf3DBehavior, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT IsASolid() const  ; \
      virtual HRESULT IsAShape() const  ; \
      virtual HRESULT IsADatum() const ; \
};



#define ENVTIEdeclare_CATIMf3DBehavior(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT IsASolid() const  ; \
virtual HRESULT IsAShape() const  ; \
virtual HRESULT IsADatum() const ; \


#define ENVTIEdefine_CATIMf3DBehavior(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::IsASolid() const   \
{ \
return (ENVTIECALL(CATIMf3DBehavior,ENVTIETypeLetter,ENVTIELetter)IsASolid()); \
} \
HRESULT  ENVTIEName::IsAShape() const   \
{ \
return (ENVTIECALL(CATIMf3DBehavior,ENVTIETypeLetter,ENVTIELetter)IsAShape()); \
} \
HRESULT  ENVTIEName::IsADatum() const  \
{ \
return (ENVTIECALL(CATIMf3DBehavior,ENVTIETypeLetter,ENVTIELetter)IsADatum()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMf3DBehavior(classe)    TIECATIMf3DBehavior##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMf3DBehavior(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMf3DBehavior, classe) \
 \
 \
CATImplementTIEMethods(CATIMf3DBehavior, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMf3DBehavior, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMf3DBehavior, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMf3DBehavior, classe) \
 \
HRESULT  TIECATIMf3DBehavior##classe::IsASolid() const   \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsASolid()); \
} \
HRESULT  TIECATIMf3DBehavior##classe::IsAShape() const   \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsAShape()); \
} \
HRESULT  TIECATIMf3DBehavior##classe::IsADatum() const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsADatum()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMf3DBehavior(classe) \
 \
 \
declare_TIE_CATIMf3DBehavior(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMf3DBehavior##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMf3DBehavior,"CATIMf3DBehavior",CATIMf3DBehavior::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMf3DBehavior(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMf3DBehavior, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMf3DBehavior##classe(classe::MetaObject(),CATIMf3DBehavior::MetaObject(),(void *)CreateTIECATIMf3DBehavior##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMf3DBehavior(classe) \
 \
 \
declare_TIE_CATIMf3DBehavior(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMf3DBehavior##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMf3DBehavior,"CATIMf3DBehavior",CATIMf3DBehavior::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMf3DBehavior(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMf3DBehavior, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMf3DBehavior##classe(classe::MetaObject(),CATIMf3DBehavior::MetaObject(),(void *)CreateTIECATIMf3DBehavior##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMf3DBehavior(classe) TIE_CATIMf3DBehavior(classe)
#else
#define BOA_CATIMf3DBehavior(classe) CATImplementBOA(CATIMf3DBehavior, classe)
#endif

#endif
