#ifndef __TIE_CATISelectShow
#define __TIE_CATISelectShow

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISelectShow.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISelectShow */
#define declare_TIE_CATISelectShow(classe) \
 \
 \
class TIECATISelectShow##classe : public CATISelectShow \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISelectShow, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual const IID & GetSelectShowInterface() ; \
      virtual CATBaseUnknown * GetElement(CATPathElement *iPathElt) ; \
      virtual HRESULT GetElementForHideShow(CATPathElement *iPathElt,CATBaseUnknown *& oSelectedObject, int& oPostProcess) ; \
      virtual HRESULT SelectShowPostProcess(CATPathElement *iPathElt,CATShowAttribut iShowAttr) ; \
};



#define ENVTIEdeclare_CATISelectShow(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual const IID & GetSelectShowInterface() ; \
virtual CATBaseUnknown * GetElement(CATPathElement *iPathElt) ; \
virtual HRESULT GetElementForHideShow(CATPathElement *iPathElt,CATBaseUnknown *& oSelectedObject, int& oPostProcess) ; \
virtual HRESULT SelectShowPostProcess(CATPathElement *iPathElt,CATShowAttribut iShowAttr) ; \


#define ENVTIEdefine_CATISelectShow(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
const IID &  ENVTIEName::GetSelectShowInterface()  \
{ \
return (ENVTIECALL(CATISelectShow,ENVTIETypeLetter,ENVTIELetter)GetSelectShowInterface()); \
} \
CATBaseUnknown *  ENVTIEName::GetElement(CATPathElement *iPathElt)  \
{ \
return (ENVTIECALL(CATISelectShow,ENVTIETypeLetter,ENVTIELetter)GetElement(iPathElt)); \
} \
HRESULT  ENVTIEName::GetElementForHideShow(CATPathElement *iPathElt,CATBaseUnknown *& oSelectedObject, int& oPostProcess)  \
{ \
return (ENVTIECALL(CATISelectShow,ENVTIETypeLetter,ENVTIELetter)GetElementForHideShow(iPathElt,oSelectedObject,oPostProcess)); \
} \
HRESULT  ENVTIEName::SelectShowPostProcess(CATPathElement *iPathElt,CATShowAttribut iShowAttr)  \
{ \
return (ENVTIECALL(CATISelectShow,ENVTIETypeLetter,ENVTIELetter)SelectShowPostProcess(iPathElt,iShowAttr)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISelectShow(classe)    TIECATISelectShow##classe


/* Common methods inside a TIE */
#define common_TIE_CATISelectShow(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISelectShow, classe) \
 \
 \
CATImplementTIEMethods(CATISelectShow, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISelectShow, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISelectShow, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISelectShow, classe) \
 \
const IID &  TIECATISelectShow##classe::GetSelectShowInterface()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSelectShowInterface()); \
} \
CATBaseUnknown *  TIECATISelectShow##classe::GetElement(CATPathElement *iPathElt)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetElement(iPathElt)); \
} \
HRESULT  TIECATISelectShow##classe::GetElementForHideShow(CATPathElement *iPathElt,CATBaseUnknown *& oSelectedObject, int& oPostProcess)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetElementForHideShow(iPathElt,oSelectedObject,oPostProcess)); \
} \
HRESULT  TIECATISelectShow##classe::SelectShowPostProcess(CATPathElement *iPathElt,CATShowAttribut iShowAttr)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SelectShowPostProcess(iPathElt,iShowAttr)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISelectShow(classe) \
 \
 \
declare_TIE_CATISelectShow(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISelectShow##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISelectShow,"CATISelectShow",CATISelectShow::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISelectShow(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISelectShow, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISelectShow##classe(classe::MetaObject(),CATISelectShow::MetaObject(),(void *)CreateTIECATISelectShow##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISelectShow(classe) \
 \
 \
declare_TIE_CATISelectShow(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISelectShow##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISelectShow,"CATISelectShow",CATISelectShow::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISelectShow(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISelectShow, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISelectShow##classe(classe::MetaObject(),CATISelectShow::MetaObject(),(void *)CreateTIECATISelectShow##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISelectShow(classe) TIE_CATISelectShow(classe)
#else
#define BOA_CATISelectShow(classe) CATImplementBOA(CATISelectShow, classe)
#endif

#endif
