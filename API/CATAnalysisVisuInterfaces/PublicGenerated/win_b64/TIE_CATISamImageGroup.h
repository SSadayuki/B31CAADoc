#ifndef __TIE_CATISamImageGroup
#define __TIE_CATISamImageGroup

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISamImageGroup.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISamImageGroup */
#define declare_TIE_CATISamImageGroup(classe) \
 \
 \
class TIECATISamImageGroup##classe : public CATISamImageGroup \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISamImageGroup, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT IsAuthorized ( CATBoolean& oIsAuthorized ) ; \
};



#define ENVTIEdeclare_CATISamImageGroup(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT IsAuthorized ( CATBoolean& oIsAuthorized ) ; \


#define ENVTIEdefine_CATISamImageGroup(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::IsAuthorized ( CATBoolean& oIsAuthorized )  \
{ \
return (ENVTIECALL(CATISamImageGroup,ENVTIETypeLetter,ENVTIELetter)IsAuthorized (oIsAuthorized )); \
} \


/* Name of the TIE class */
#define class_TIE_CATISamImageGroup(classe)    TIECATISamImageGroup##classe


/* Common methods inside a TIE */
#define common_TIE_CATISamImageGroup(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISamImageGroup, classe) \
 \
 \
CATImplementTIEMethods(CATISamImageGroup, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISamImageGroup, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISamImageGroup, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISamImageGroup, classe) \
 \
HRESULT  TIECATISamImageGroup##classe::IsAuthorized ( CATBoolean& oIsAuthorized )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsAuthorized (oIsAuthorized )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISamImageGroup(classe) \
 \
 \
declare_TIE_CATISamImageGroup(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamImageGroup##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamImageGroup,"CATISamImageGroup",CATISamImageGroup::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamImageGroup(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISamImageGroup, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamImageGroup##classe(classe::MetaObject(),CATISamImageGroup::MetaObject(),(void *)CreateTIECATISamImageGroup##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISamImageGroup(classe) \
 \
 \
declare_TIE_CATISamImageGroup(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamImageGroup##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamImageGroup,"CATISamImageGroup",CATISamImageGroup::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamImageGroup(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISamImageGroup, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamImageGroup##classe(classe::MetaObject(),CATISamImageGroup::MetaObject(),(void *)CreateTIECATISamImageGroup##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISamImageGroup(classe) TIE_CATISamImageGroup(classe)
#else
#define BOA_CATISamImageGroup(classe) CATImplementBOA(CATISamImageGroup, classe)
#endif

#endif
