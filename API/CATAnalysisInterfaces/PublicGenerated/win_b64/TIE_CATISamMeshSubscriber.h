#ifndef __TIE_CATISamMeshSubscriber
#define __TIE_CATISamMeshSubscriber

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISamMeshSubscriber.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISamMeshSubscriber */
#define declare_TIE_CATISamMeshSubscriber(classe) \
 \
 \
class TIECATISamMeshSubscriber##classe : public CATISamMeshSubscriber \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISamMeshSubscriber, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT Clean() ; \
      virtual CATBoolean CheckIfNeedToSubScribe() const ; \
};



#define ENVTIEdeclare_CATISamMeshSubscriber(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT Clean() ; \
virtual CATBoolean CheckIfNeedToSubScribe() const ; \


#define ENVTIEdefine_CATISamMeshSubscriber(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::Clean()  \
{ \
return (ENVTIECALL(CATISamMeshSubscriber,ENVTIETypeLetter,ENVTIELetter)Clean()); \
} \
CATBoolean  ENVTIEName::CheckIfNeedToSubScribe() const  \
{ \
return (ENVTIECALL(CATISamMeshSubscriber,ENVTIETypeLetter,ENVTIELetter)CheckIfNeedToSubScribe()); \
} \


/* Name of the TIE class */
#define class_TIE_CATISamMeshSubscriber(classe)    TIECATISamMeshSubscriber##classe


/* Common methods inside a TIE */
#define common_TIE_CATISamMeshSubscriber(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISamMeshSubscriber, classe) \
 \
 \
CATImplementTIEMethods(CATISamMeshSubscriber, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISamMeshSubscriber, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISamMeshSubscriber, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISamMeshSubscriber, classe) \
 \
HRESULT  TIECATISamMeshSubscriber##classe::Clean()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Clean()); \
} \
CATBoolean  TIECATISamMeshSubscriber##classe::CheckIfNeedToSubScribe() const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CheckIfNeedToSubScribe()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISamMeshSubscriber(classe) \
 \
 \
declare_TIE_CATISamMeshSubscriber(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamMeshSubscriber##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamMeshSubscriber,"CATISamMeshSubscriber",CATISamMeshSubscriber::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamMeshSubscriber(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISamMeshSubscriber, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamMeshSubscriber##classe(classe::MetaObject(),CATISamMeshSubscriber::MetaObject(),(void *)CreateTIECATISamMeshSubscriber##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISamMeshSubscriber(classe) \
 \
 \
declare_TIE_CATISamMeshSubscriber(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamMeshSubscriber##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamMeshSubscriber,"CATISamMeshSubscriber",CATISamMeshSubscriber::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamMeshSubscriber(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISamMeshSubscriber, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamMeshSubscriber##classe(classe::MetaObject(),CATISamMeshSubscriber::MetaObject(),(void *)CreateTIECATISamMeshSubscriber##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISamMeshSubscriber(classe) TIE_CATISamMeshSubscriber(classe)
#else
#define BOA_CATISamMeshSubscriber(classe) CATImplementBOA(CATISamMeshSubscriber, classe)
#endif

#endif
