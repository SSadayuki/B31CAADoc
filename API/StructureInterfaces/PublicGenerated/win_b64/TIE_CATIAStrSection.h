#ifndef __TIE_CATIAStrSection
#define __TIE_CATIAStrSection

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAStrSection.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAStrSection */
#define declare_TIE_CATIAStrSection(classe) \
 \
 \
class TIECATIAStrSection##classe : public CATIAStrSection \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAStrSection, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_StrAnchorPoints(CATIAStrAnchorPoints *& oAnchorPoints); \
      virtual HRESULT __stdcall get_SectionName(CATIAParameter *& oParameter); \
      virtual HRESULT __stdcall get_FamilyName(CATIAParameter *& oParameter); \
      virtual HRESULT __stdcall get_CatalogName(CATIAParameter *& oParameter); \
      virtual HRESULT __stdcall get_ProfileType(CATIAParameter *& oParameter); \
      virtual HRESULT __stdcall GetProperty(CATStrSectionProperties iProperty, double & oValue); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAStrSection(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_StrAnchorPoints(CATIAStrAnchorPoints *& oAnchorPoints); \
virtual HRESULT __stdcall get_SectionName(CATIAParameter *& oParameter); \
virtual HRESULT __stdcall get_FamilyName(CATIAParameter *& oParameter); \
virtual HRESULT __stdcall get_CatalogName(CATIAParameter *& oParameter); \
virtual HRESULT __stdcall get_ProfileType(CATIAParameter *& oParameter); \
virtual HRESULT __stdcall GetProperty(CATStrSectionProperties iProperty, double & oValue); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAStrSection(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_StrAnchorPoints(CATIAStrAnchorPoints *& oAnchorPoints) \
{ \
return (ENVTIECALL(CATIAStrSection,ENVTIETypeLetter,ENVTIELetter)get_StrAnchorPoints(oAnchorPoints)); \
} \
HRESULT __stdcall  ENVTIEName::get_SectionName(CATIAParameter *& oParameter) \
{ \
return (ENVTIECALL(CATIAStrSection,ENVTIETypeLetter,ENVTIELetter)get_SectionName(oParameter)); \
} \
HRESULT __stdcall  ENVTIEName::get_FamilyName(CATIAParameter *& oParameter) \
{ \
return (ENVTIECALL(CATIAStrSection,ENVTIETypeLetter,ENVTIELetter)get_FamilyName(oParameter)); \
} \
HRESULT __stdcall  ENVTIEName::get_CatalogName(CATIAParameter *& oParameter) \
{ \
return (ENVTIECALL(CATIAStrSection,ENVTIETypeLetter,ENVTIELetter)get_CatalogName(oParameter)); \
} \
HRESULT __stdcall  ENVTIEName::get_ProfileType(CATIAParameter *& oParameter) \
{ \
return (ENVTIECALL(CATIAStrSection,ENVTIETypeLetter,ENVTIELetter)get_ProfileType(oParameter)); \
} \
HRESULT __stdcall  ENVTIEName::GetProperty(CATStrSectionProperties iProperty, double & oValue) \
{ \
return (ENVTIECALL(CATIAStrSection,ENVTIETypeLetter,ENVTIELetter)GetProperty(iProperty,oValue)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAStrSection,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAStrSection,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAStrSection,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAStrSection,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAStrSection,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAStrSection(classe)    TIECATIAStrSection##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAStrSection(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAStrSection, classe) \
 \
 \
CATImplementTIEMethods(CATIAStrSection, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAStrSection, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAStrSection, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAStrSection, classe) \
 \
HRESULT __stdcall  TIECATIAStrSection##classe::get_StrAnchorPoints(CATIAStrAnchorPoints *& oAnchorPoints) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oAnchorPoints); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_StrAnchorPoints(oAnchorPoints); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oAnchorPoints); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrSection##classe::get_SectionName(CATIAParameter *& oParameter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oParameter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SectionName(oParameter); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oParameter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrSection##classe::get_FamilyName(CATIAParameter *& oParameter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oParameter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FamilyName(oParameter); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oParameter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrSection##classe::get_CatalogName(CATIAParameter *& oParameter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oParameter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CatalogName(oParameter); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oParameter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrSection##classe::get_ProfileType(CATIAParameter *& oParameter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParameter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ProfileType(oParameter); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParameter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrSection##classe::GetProperty(CATStrSectionProperties iProperty, double & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iProperty,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetProperty(iProperty,oValue); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iProperty,&oValue); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStrSection##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStrSection##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStrSection##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStrSection##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStrSection##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAStrSection(classe) \
 \
 \
declare_TIE_CATIAStrSection(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAStrSection##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAStrSection,"CATIAStrSection",CATIAStrSection::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAStrSection(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAStrSection, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAStrSection##classe(classe::MetaObject(),CATIAStrSection::MetaObject(),(void *)CreateTIECATIAStrSection##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAStrSection(classe) \
 \
 \
declare_TIE_CATIAStrSection(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAStrSection##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAStrSection,"CATIAStrSection",CATIAStrSection::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAStrSection(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAStrSection, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAStrSection##classe(classe::MetaObject(),CATIAStrSection::MetaObject(),(void *)CreateTIECATIAStrSection##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAStrSection(classe) TIE_CATIAStrSection(classe)
#else
#define BOA_CATIAStrSection(classe) CATImplementBOA(CATIAStrSection, classe)
#endif

#endif
