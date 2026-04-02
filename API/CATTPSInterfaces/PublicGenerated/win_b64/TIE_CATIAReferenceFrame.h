#ifndef __TIE_CATIAReferenceFrame
#define __TIE_CATIAReferenceFrame

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIAReferenceFrame.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAReferenceFrame */
#define declare_TIE_CATIAReferenceFrame(classe) \
 \
 \
class TIECATIAReferenceFrame##classe : public CATIAReferenceFrame \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAReferenceFrame, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Frame(CATBSTR & oFirstBox, CATBSTR & oSecondBox, CATBSTR & oThirdBox); \
      virtual HRESULT __stdcall SetFrame(const CATBSTR & iFirstBox, const CATBSTR & iSecondBox, const CATBSTR & iThirdBox); \
      virtual HRESULT __stdcall get_AllDatumsSimple(CATIAAnnotations *& opiListDatumsSimple); \
      virtual HRESULT __stdcall SetAxisSystemTTRS(CATIAUserSurface * ipAxisSystemTTRS); \
      virtual HRESULT __stdcall GetAxisSystemTTRS(CATIAUserSurface *& opAxisSystemTTRS); \
      virtual HRESULT __stdcall SetDegreesOfFreedom(const CATVariant & inBox, const CATBSTR & iValue); \
      virtual HRESULT __stdcall GetDegreesOfFreedom(const CATVariant & inBox, CATBSTR & oValue); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAReferenceFrame(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Frame(CATBSTR & oFirstBox, CATBSTR & oSecondBox, CATBSTR & oThirdBox); \
virtual HRESULT __stdcall SetFrame(const CATBSTR & iFirstBox, const CATBSTR & iSecondBox, const CATBSTR & iThirdBox); \
virtual HRESULT __stdcall get_AllDatumsSimple(CATIAAnnotations *& opiListDatumsSimple); \
virtual HRESULT __stdcall SetAxisSystemTTRS(CATIAUserSurface * ipAxisSystemTTRS); \
virtual HRESULT __stdcall GetAxisSystemTTRS(CATIAUserSurface *& opAxisSystemTTRS); \
virtual HRESULT __stdcall SetDegreesOfFreedom(const CATVariant & inBox, const CATBSTR & iValue); \
virtual HRESULT __stdcall GetDegreesOfFreedom(const CATVariant & inBox, CATBSTR & oValue); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAReferenceFrame(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Frame(CATBSTR & oFirstBox, CATBSTR & oSecondBox, CATBSTR & oThirdBox) \
{ \
return (ENVTIECALL(CATIAReferenceFrame,ENVTIETypeLetter,ENVTIELetter)Frame(oFirstBox,oSecondBox,oThirdBox)); \
} \
HRESULT __stdcall  ENVTIEName::SetFrame(const CATBSTR & iFirstBox, const CATBSTR & iSecondBox, const CATBSTR & iThirdBox) \
{ \
return (ENVTIECALL(CATIAReferenceFrame,ENVTIETypeLetter,ENVTIELetter)SetFrame(iFirstBox,iSecondBox,iThirdBox)); \
} \
HRESULT __stdcall  ENVTIEName::get_AllDatumsSimple(CATIAAnnotations *& opiListDatumsSimple) \
{ \
return (ENVTIECALL(CATIAReferenceFrame,ENVTIETypeLetter,ENVTIELetter)get_AllDatumsSimple(opiListDatumsSimple)); \
} \
HRESULT __stdcall  ENVTIEName::SetAxisSystemTTRS(CATIAUserSurface * ipAxisSystemTTRS) \
{ \
return (ENVTIECALL(CATIAReferenceFrame,ENVTIETypeLetter,ENVTIELetter)SetAxisSystemTTRS(ipAxisSystemTTRS)); \
} \
HRESULT __stdcall  ENVTIEName::GetAxisSystemTTRS(CATIAUserSurface *& opAxisSystemTTRS) \
{ \
return (ENVTIECALL(CATIAReferenceFrame,ENVTIETypeLetter,ENVTIELetter)GetAxisSystemTTRS(opAxisSystemTTRS)); \
} \
HRESULT __stdcall  ENVTIEName::SetDegreesOfFreedom(const CATVariant & inBox, const CATBSTR & iValue) \
{ \
return (ENVTIECALL(CATIAReferenceFrame,ENVTIETypeLetter,ENVTIELetter)SetDegreesOfFreedom(inBox,iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetDegreesOfFreedom(const CATVariant & inBox, CATBSTR & oValue) \
{ \
return (ENVTIECALL(CATIAReferenceFrame,ENVTIETypeLetter,ENVTIELetter)GetDegreesOfFreedom(inBox,oValue)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAReferenceFrame,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAReferenceFrame,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAReferenceFrame,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAReferenceFrame,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAReferenceFrame,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAReferenceFrame(classe)    TIECATIAReferenceFrame##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAReferenceFrame(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAReferenceFrame, classe) \
 \
 \
CATImplementTIEMethods(CATIAReferenceFrame, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAReferenceFrame, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAReferenceFrame, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAReferenceFrame, classe) \
 \
HRESULT __stdcall  TIECATIAReferenceFrame##classe::Frame(CATBSTR & oFirstBox, CATBSTR & oSecondBox, CATBSTR & oThirdBox) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Frame(oFirstBox,oSecondBox,oThirdBox)); \
} \
HRESULT __stdcall  TIECATIAReferenceFrame##classe::SetFrame(const CATBSTR & iFirstBox, const CATBSTR & iSecondBox, const CATBSTR & iThirdBox) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetFrame(iFirstBox,iSecondBox,iThirdBox)); \
} \
HRESULT __stdcall  TIECATIAReferenceFrame##classe::get_AllDatumsSimple(CATIAAnnotations *& opiListDatumsSimple) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AllDatumsSimple(opiListDatumsSimple)); \
} \
HRESULT __stdcall  TIECATIAReferenceFrame##classe::SetAxisSystemTTRS(CATIAUserSurface * ipAxisSystemTTRS) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAxisSystemTTRS(ipAxisSystemTTRS)); \
} \
HRESULT __stdcall  TIECATIAReferenceFrame##classe::GetAxisSystemTTRS(CATIAUserSurface *& opAxisSystemTTRS) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAxisSystemTTRS(opAxisSystemTTRS)); \
} \
HRESULT __stdcall  TIECATIAReferenceFrame##classe::SetDegreesOfFreedom(const CATVariant & inBox, const CATBSTR & iValue) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDegreesOfFreedom(inBox,iValue)); \
} \
HRESULT __stdcall  TIECATIAReferenceFrame##classe::GetDegreesOfFreedom(const CATVariant & inBox, CATBSTR & oValue) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDegreesOfFreedom(inBox,oValue)); \
} \
HRESULT  __stdcall  TIECATIAReferenceFrame##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIAReferenceFrame##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIAReferenceFrame##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIAReferenceFrame##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIAReferenceFrame##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAReferenceFrame(classe) \
 \
 \
declare_TIE_CATIAReferenceFrame(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAReferenceFrame##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAReferenceFrame,"CATIAReferenceFrame",CATIAReferenceFrame::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAReferenceFrame(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAReferenceFrame, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAReferenceFrame##classe(classe::MetaObject(),CATIAReferenceFrame::MetaObject(),(void *)CreateTIECATIAReferenceFrame##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAReferenceFrame(classe) \
 \
 \
declare_TIE_CATIAReferenceFrame(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAReferenceFrame##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAReferenceFrame,"CATIAReferenceFrame",CATIAReferenceFrame::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAReferenceFrame(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAReferenceFrame, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAReferenceFrame##classe(classe::MetaObject(),CATIAReferenceFrame::MetaObject(),(void *)CreateTIECATIAReferenceFrame##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAReferenceFrame(classe) TIE_CATIAReferenceFrame(classe)
#else
#define BOA_CATIAReferenceFrame(classe) CATImplementBOA(CATIAReferenceFrame, classe)
#endif

#endif
