#ifndef __TIE_CATISamEditWithFrame
#define __TIE_CATISamEditWithFrame

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISamEditWithFrame.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISamEditWithFrame */
#define declare_TIE_CATISamEditWithFrame(classe) \
 \
 \
class TIECATISamEditWithFrame##classe : public CATISamEditWithFrame \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISamEditWithFrame, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATDlgFrame * GetModificationFrame(CATDialog * iParent) ; \
};



#define ENVTIEdeclare_CATISamEditWithFrame(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATDlgFrame * GetModificationFrame(CATDialog * iParent) ; \


#define ENVTIEdefine_CATISamEditWithFrame(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATDlgFrame *  ENVTIEName::GetModificationFrame(CATDialog * iParent)  \
{ \
return (ENVTIECALL(CATISamEditWithFrame,ENVTIETypeLetter,ENVTIELetter)GetModificationFrame(iParent)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISamEditWithFrame(classe)    TIECATISamEditWithFrame##classe


/* Common methods inside a TIE */
#define common_TIE_CATISamEditWithFrame(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISamEditWithFrame, classe) \
 \
 \
CATImplementTIEMethods(CATISamEditWithFrame, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISamEditWithFrame, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISamEditWithFrame, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISamEditWithFrame, classe) \
 \
CATDlgFrame *  TIECATISamEditWithFrame##classe::GetModificationFrame(CATDialog * iParent)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetModificationFrame(iParent)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISamEditWithFrame(classe) \
 \
 \
declare_TIE_CATISamEditWithFrame(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamEditWithFrame##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamEditWithFrame,"CATISamEditWithFrame",CATISamEditWithFrame::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamEditWithFrame(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISamEditWithFrame, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamEditWithFrame##classe(classe::MetaObject(),CATISamEditWithFrame::MetaObject(),(void *)CreateTIECATISamEditWithFrame##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISamEditWithFrame(classe) \
 \
 \
declare_TIE_CATISamEditWithFrame(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamEditWithFrame##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamEditWithFrame,"CATISamEditWithFrame",CATISamEditWithFrame::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamEditWithFrame(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISamEditWithFrame, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamEditWithFrame##classe(classe::MetaObject(),CATISamEditWithFrame::MetaObject(),(void *)CreateTIECATISamEditWithFrame##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISamEditWithFrame(classe) TIE_CATISamEditWithFrame(classe)
#else
#define BOA_CATISamEditWithFrame(classe) CATImplementBOA(CATISamEditWithFrame, classe)
#endif

#endif
