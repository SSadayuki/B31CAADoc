#ifndef __TIE_CATISamEditionFrame
#define __TIE_CATISamEditionFrame

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISamEditionFrame.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISamEditionFrame */
#define declare_TIE_CATISamEditionFrame(classe) \
 \
 \
class TIECATISamEditionFrame##classe : public CATISamEditionFrame \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISamEditionFrame, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void GetModificationNotification(CATCommand * &oFromCmd,CATNotification * &oNotif) ; \
      virtual void UpdateFrame() ; \
};



#define ENVTIEdeclare_CATISamEditionFrame(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void GetModificationNotification(CATCommand * &oFromCmd,CATNotification * &oNotif) ; \
virtual void UpdateFrame() ; \


#define ENVTIEdefine_CATISamEditionFrame(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void  ENVTIEName::GetModificationNotification(CATCommand * &oFromCmd,CATNotification * &oNotif)  \
{ \
 (ENVTIECALL(CATISamEditionFrame,ENVTIETypeLetter,ENVTIELetter)GetModificationNotification(oFromCmd,oNotif)); \
} \
void  ENVTIEName::UpdateFrame()  \
{ \
 (ENVTIECALL(CATISamEditionFrame,ENVTIETypeLetter,ENVTIELetter)UpdateFrame()); \
} \


/* Name of the TIE class */
#define class_TIE_CATISamEditionFrame(classe)    TIECATISamEditionFrame##classe


/* Common methods inside a TIE */
#define common_TIE_CATISamEditionFrame(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISamEditionFrame, classe) \
 \
 \
CATImplementTIEMethods(CATISamEditionFrame, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISamEditionFrame, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISamEditionFrame, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISamEditionFrame, classe) \
 \
void  TIECATISamEditionFrame##classe::GetModificationNotification(CATCommand * &oFromCmd,CATNotification * &oNotif)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetModificationNotification(oFromCmd,oNotif); \
} \
void  TIECATISamEditionFrame##classe::UpdateFrame()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UpdateFrame(); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISamEditionFrame(classe) \
 \
 \
declare_TIE_CATISamEditionFrame(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamEditionFrame##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamEditionFrame,"CATISamEditionFrame",CATISamEditionFrame::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamEditionFrame(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISamEditionFrame, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamEditionFrame##classe(classe::MetaObject(),CATISamEditionFrame::MetaObject(),(void *)CreateTIECATISamEditionFrame##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISamEditionFrame(classe) \
 \
 \
declare_TIE_CATISamEditionFrame(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamEditionFrame##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamEditionFrame,"CATISamEditionFrame",CATISamEditionFrame::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamEditionFrame(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISamEditionFrame, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamEditionFrame##classe(classe::MetaObject(),CATISamEditionFrame::MetaObject(),(void *)CreateTIECATISamEditionFrame##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISamEditionFrame(classe) TIE_CATISamEditionFrame(classe)
#else
#define BOA_CATISamEditionFrame(classe) CATImplementBOA(CATISamEditionFrame, classe)
#endif

#endif
