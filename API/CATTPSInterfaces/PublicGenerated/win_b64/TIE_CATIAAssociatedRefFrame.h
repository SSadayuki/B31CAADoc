#ifndef __TIE_CATIAAssociatedRefFrame
#define __TIE_CATIAAssociatedRefFrame

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIAAssociatedRefFrame.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAssociatedRefFrame */
#define declare_TIE_CATIAAssociatedRefFrame(classe) \
 \
 \
class TIECATIAAssociatedRefFrame##classe : public CATIAAssociatedRefFrame \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAssociatedRefFrame, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_ReferenceFrame(CATIAAnnotation *& oRefFrame); \
      virtual HRESULT __stdcall get_ReferenceFrame2(CATIAAnnotation2 *& oRefFrame); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAAssociatedRefFrame(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_ReferenceFrame(CATIAAnnotation *& oRefFrame); \
virtual HRESULT __stdcall get_ReferenceFrame2(CATIAAnnotation2 *& oRefFrame); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAAssociatedRefFrame(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_ReferenceFrame(CATIAAnnotation *& oRefFrame) \
{ \
return (ENVTIECALL(CATIAAssociatedRefFrame,ENVTIETypeLetter,ENVTIELetter)get_ReferenceFrame(oRefFrame)); \
} \
HRESULT __stdcall  ENVTIEName::get_ReferenceFrame2(CATIAAnnotation2 *& oRefFrame) \
{ \
return (ENVTIECALL(CATIAAssociatedRefFrame,ENVTIETypeLetter,ENVTIELetter)get_ReferenceFrame2(oRefFrame)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAssociatedRefFrame,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAssociatedRefFrame,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAAssociatedRefFrame,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAAssociatedRefFrame,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAAssociatedRefFrame,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAssociatedRefFrame(classe)    TIECATIAAssociatedRefFrame##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAssociatedRefFrame(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAssociatedRefFrame, classe) \
 \
 \
CATImplementTIEMethods(CATIAAssociatedRefFrame, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAssociatedRefFrame, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAssociatedRefFrame, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAssociatedRefFrame, classe) \
 \
HRESULT __stdcall  TIECATIAAssociatedRefFrame##classe::get_ReferenceFrame(CATIAAnnotation *& oRefFrame) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ReferenceFrame(oRefFrame)); \
} \
HRESULT __stdcall  TIECATIAAssociatedRefFrame##classe::get_ReferenceFrame2(CATIAAnnotation2 *& oRefFrame) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ReferenceFrame2(oRefFrame)); \
} \
HRESULT  __stdcall  TIECATIAAssociatedRefFrame##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIAAssociatedRefFrame##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIAAssociatedRefFrame##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIAAssociatedRefFrame##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIAAssociatedRefFrame##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAssociatedRefFrame(classe) \
 \
 \
declare_TIE_CATIAAssociatedRefFrame(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAssociatedRefFrame##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAssociatedRefFrame,"CATIAAssociatedRefFrame",CATIAAssociatedRefFrame::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAssociatedRefFrame(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAssociatedRefFrame, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAssociatedRefFrame##classe(classe::MetaObject(),CATIAAssociatedRefFrame::MetaObject(),(void *)CreateTIECATIAAssociatedRefFrame##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAssociatedRefFrame(classe) \
 \
 \
declare_TIE_CATIAAssociatedRefFrame(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAssociatedRefFrame##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAssociatedRefFrame,"CATIAAssociatedRefFrame",CATIAAssociatedRefFrame::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAssociatedRefFrame(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAssociatedRefFrame, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAssociatedRefFrame##classe(classe::MetaObject(),CATIAAssociatedRefFrame::MetaObject(),(void *)CreateTIECATIAAssociatedRefFrame##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAssociatedRefFrame(classe) TIE_CATIAAssociatedRefFrame(classe)
#else
#define BOA_CATIAAssociatedRefFrame(classe) CATImplementBOA(CATIAAssociatedRefFrame, classe)
#endif

#endif
