#ifndef __TIE_CATIMfgReplayToolPathCustom
#define __TIE_CATIMfgReplayToolPathCustom

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgReplayToolPathCustom.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgReplayToolPathCustom */
#define declare_TIE_CATIMfgReplayToolPathCustom(classe) \
 \
 \
class TIECATIMfgReplayToolPathCustom##classe : public CATIMfgReplayToolPathCustom \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgReplayToolPathCustom, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATRep* CustomizeToolPathRep (const CATBaseUnknown_var& iOperation,int iStartPoint,int iEndPoint) ; \
};



#define ENVTIEdeclare_CATIMfgReplayToolPathCustom(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATRep* CustomizeToolPathRep (const CATBaseUnknown_var& iOperation,int iStartPoint,int iEndPoint) ; \


#define ENVTIEdefine_CATIMfgReplayToolPathCustom(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATRep*  ENVTIEName::CustomizeToolPathRep (const CATBaseUnknown_var& iOperation,int iStartPoint,int iEndPoint)  \
{ \
return (ENVTIECALL(CATIMfgReplayToolPathCustom,ENVTIETypeLetter,ENVTIELetter)CustomizeToolPathRep (iOperation,iStartPoint,iEndPoint)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgReplayToolPathCustom(classe)    TIECATIMfgReplayToolPathCustom##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgReplayToolPathCustom(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgReplayToolPathCustom, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgReplayToolPathCustom, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgReplayToolPathCustom, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgReplayToolPathCustom, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgReplayToolPathCustom, classe) \
 \
CATRep*  TIECATIMfgReplayToolPathCustom##classe::CustomizeToolPathRep (const CATBaseUnknown_var& iOperation,int iStartPoint,int iEndPoint)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CustomizeToolPathRep (iOperation,iStartPoint,iEndPoint)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgReplayToolPathCustom(classe) \
 \
 \
declare_TIE_CATIMfgReplayToolPathCustom(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgReplayToolPathCustom##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgReplayToolPathCustom,"CATIMfgReplayToolPathCustom",CATIMfgReplayToolPathCustom::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgReplayToolPathCustom(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgReplayToolPathCustom, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgReplayToolPathCustom##classe(classe::MetaObject(),CATIMfgReplayToolPathCustom::MetaObject(),(void *)CreateTIECATIMfgReplayToolPathCustom##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgReplayToolPathCustom(classe) \
 \
 \
declare_TIE_CATIMfgReplayToolPathCustom(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgReplayToolPathCustom##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgReplayToolPathCustom,"CATIMfgReplayToolPathCustom",CATIMfgReplayToolPathCustom::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgReplayToolPathCustom(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgReplayToolPathCustom, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgReplayToolPathCustom##classe(classe::MetaObject(),CATIMfgReplayToolPathCustom::MetaObject(),(void *)CreateTIECATIMfgReplayToolPathCustom##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgReplayToolPathCustom(classe) TIE_CATIMfgReplayToolPathCustom(classe)
#else
#define BOA_CATIMfgReplayToolPathCustom(classe) CATImplementBOA(CATIMfgReplayToolPathCustom, classe)
#endif

#endif
