#ifndef __TIE_CATIACaptureFactory
#define __TIE_CATIACaptureFactory

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIACaptureFactory.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIACaptureFactory */
#define declare_TIE_CATIACaptureFactory(classe) \
 \
 \
class TIECATIACaptureFactory##classe : public CATIACaptureFactory \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIACaptureFactory, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall CreateCapture(CATIACapture *& oCapture); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIACaptureFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall CreateCapture(CATIACapture *& oCapture); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIACaptureFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::CreateCapture(CATIACapture *& oCapture) \
{ \
return (ENVTIECALL(CATIACaptureFactory,ENVTIETypeLetter,ENVTIELetter)CreateCapture(oCapture)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIACaptureFactory,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIACaptureFactory,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIACaptureFactory,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIACaptureFactory,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIACaptureFactory,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIACaptureFactory(classe)    TIECATIACaptureFactory##classe


/* Common methods inside a TIE */
#define common_TIE_CATIACaptureFactory(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIACaptureFactory, classe) \
 \
 \
CATImplementTIEMethods(CATIACaptureFactory, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIACaptureFactory, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIACaptureFactory, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIACaptureFactory, classe) \
 \
HRESULT __stdcall  TIECATIACaptureFactory##classe::CreateCapture(CATIACapture *& oCapture) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCapture(oCapture)); \
} \
HRESULT  __stdcall  TIECATIACaptureFactory##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIACaptureFactory##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIACaptureFactory##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIACaptureFactory##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIACaptureFactory##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIACaptureFactory(classe) \
 \
 \
declare_TIE_CATIACaptureFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIACaptureFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIACaptureFactory,"CATIACaptureFactory",CATIACaptureFactory::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIACaptureFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIACaptureFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIACaptureFactory##classe(classe::MetaObject(),CATIACaptureFactory::MetaObject(),(void *)CreateTIECATIACaptureFactory##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIACaptureFactory(classe) \
 \
 \
declare_TIE_CATIACaptureFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIACaptureFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIACaptureFactory,"CATIACaptureFactory",CATIACaptureFactory::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIACaptureFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIACaptureFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIACaptureFactory##classe(classe::MetaObject(),CATIACaptureFactory::MetaObject(),(void *)CreateTIECATIACaptureFactory##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIACaptureFactory(classe) TIE_CATIACaptureFactory(classe)
#else
#define BOA_CATIACaptureFactory(classe) CATImplementBOA(CATIACaptureFactory, classe)
#endif

#endif
