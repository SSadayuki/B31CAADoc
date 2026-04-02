#ifndef __TIE_CATIMessageReceiver
#define __TIE_CATIMessageReceiver

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMessageReceiver.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMessageReceiver */
#define declare_TIE_CATIMessageReceiver(classe) \
 \
 \
class TIECATIMessageReceiver##classe : public CATIMessageReceiver \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMessageReceiver, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void HandleMessage(CATICommMsg *iMessage); \
};



#define ENVTIEdeclare_CATIMessageReceiver(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void HandleMessage(CATICommMsg *iMessage); \


#define ENVTIEdefine_CATIMessageReceiver(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void  ENVTIEName::HandleMessage(CATICommMsg *iMessage) \
{ \
 (ENVTIECALL(CATIMessageReceiver,ENVTIETypeLetter,ENVTIELetter)HandleMessage(iMessage)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMessageReceiver(classe)    TIECATIMessageReceiver##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMessageReceiver(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMessageReceiver, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATIMessageReceiver, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATIMessageReceiver, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMessageReceiver, classe) \
 \
void  TIECATIMessageReceiver##classe::HandleMessage(CATICommMsg *iMessage) \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->HandleMessage(iMessage); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMessageReceiver(classe) \
 \
 \
declare_TIE_CATIMessageReceiver(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMessageReceiver##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMessageReceiver,"CATIMessageReceiver",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMessageReceiver(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMessageReceiver, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMessageReceiver##classe(classe::MetaObject(),TIECATIMessageReceiver##classe::MetaObject(),(void *)CreateTIECATIMessageReceiver##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMessageReceiver(classe) \
 \
 \
declare_TIE_CATIMessageReceiver(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMessageReceiver##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMessageReceiver,"CATIMessageReceiver",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMessageReceiver(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMessageReceiver, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMessageReceiver##classe(classe::MetaObject(),TIECATIMessageReceiver##classe::MetaObject(),(void *)CreateTIECATIMessageReceiver##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMessageReceiver(classe) TIE_CATIMessageReceiver(classe)
#else
#define BOA_CATIMessageReceiver(classe) CATImplementBOA(CATIMessageReceiver, classe)
#endif

#endif
