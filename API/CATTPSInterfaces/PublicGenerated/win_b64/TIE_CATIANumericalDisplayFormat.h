#ifndef __TIE_CATIANumericalDisplayFormat
#define __TIE_CATIANumericalDisplayFormat

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIANumericalDisplayFormat.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIANumericalDisplayFormat */
#define declare_TIE_CATIANumericalDisplayFormat(classe) \
 \
 \
class TIECATIANumericalDisplayFormat##classe : public CATIANumericalDisplayFormat \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIANumericalDisplayFormat, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Precision(CATLONG & onValue); \
      virtual HRESULT __stdcall put_Precision(CATLONG inValue); \
      virtual HRESULT __stdcall get_Separator(CATLONG & onValue); \
      virtual HRESULT __stdcall put_Separator(CATLONG inValue); \
      virtual HRESULT __stdcall get_DisplayTrailingZero(CATLONG & onValue); \
      virtual HRESULT __stdcall put_DisplayTrailingZero(CATLONG inValue); \
      virtual HRESULT __stdcall get_DisplayLeadingZero(CATLONG & onValue); \
      virtual HRESULT __stdcall put_DisplayLeadingZero(CATLONG inValue); \
      virtual HRESULT __stdcall get_DisplayFactor(CATLONG & onValue); \
      virtual HRESULT __stdcall put_DisplayFactor(CATLONG inValue); \
      virtual HRESULT __stdcall get_AvilableDisplayFactor(CATLONG & onValue); \
      virtual HRESULT __stdcall get_FormatName(CATBSTR & ostrFormatName); \
      virtual HRESULT __stdcall put_FormatName(const CATBSTR & istrFormatName); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIANumericalDisplayFormat(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Precision(CATLONG & onValue); \
virtual HRESULT __stdcall put_Precision(CATLONG inValue); \
virtual HRESULT __stdcall get_Separator(CATLONG & onValue); \
virtual HRESULT __stdcall put_Separator(CATLONG inValue); \
virtual HRESULT __stdcall get_DisplayTrailingZero(CATLONG & onValue); \
virtual HRESULT __stdcall put_DisplayTrailingZero(CATLONG inValue); \
virtual HRESULT __stdcall get_DisplayLeadingZero(CATLONG & onValue); \
virtual HRESULT __stdcall put_DisplayLeadingZero(CATLONG inValue); \
virtual HRESULT __stdcall get_DisplayFactor(CATLONG & onValue); \
virtual HRESULT __stdcall put_DisplayFactor(CATLONG inValue); \
virtual HRESULT __stdcall get_AvilableDisplayFactor(CATLONG & onValue); \
virtual HRESULT __stdcall get_FormatName(CATBSTR & ostrFormatName); \
virtual HRESULT __stdcall put_FormatName(const CATBSTR & istrFormatName); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIANumericalDisplayFormat(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Precision(CATLONG & onValue) \
{ \
return (ENVTIECALL(CATIANumericalDisplayFormat,ENVTIETypeLetter,ENVTIELetter)get_Precision(onValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_Precision(CATLONG inValue) \
{ \
return (ENVTIECALL(CATIANumericalDisplayFormat,ENVTIETypeLetter,ENVTIELetter)put_Precision(inValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_Separator(CATLONG & onValue) \
{ \
return (ENVTIECALL(CATIANumericalDisplayFormat,ENVTIETypeLetter,ENVTIELetter)get_Separator(onValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_Separator(CATLONG inValue) \
{ \
return (ENVTIECALL(CATIANumericalDisplayFormat,ENVTIETypeLetter,ENVTIELetter)put_Separator(inValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_DisplayTrailingZero(CATLONG & onValue) \
{ \
return (ENVTIECALL(CATIANumericalDisplayFormat,ENVTIETypeLetter,ENVTIELetter)get_DisplayTrailingZero(onValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_DisplayTrailingZero(CATLONG inValue) \
{ \
return (ENVTIECALL(CATIANumericalDisplayFormat,ENVTIETypeLetter,ENVTIELetter)put_DisplayTrailingZero(inValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_DisplayLeadingZero(CATLONG & onValue) \
{ \
return (ENVTIECALL(CATIANumericalDisplayFormat,ENVTIETypeLetter,ENVTIELetter)get_DisplayLeadingZero(onValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_DisplayLeadingZero(CATLONG inValue) \
{ \
return (ENVTIECALL(CATIANumericalDisplayFormat,ENVTIETypeLetter,ENVTIELetter)put_DisplayLeadingZero(inValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_DisplayFactor(CATLONG & onValue) \
{ \
return (ENVTIECALL(CATIANumericalDisplayFormat,ENVTIETypeLetter,ENVTIELetter)get_DisplayFactor(onValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_DisplayFactor(CATLONG inValue) \
{ \
return (ENVTIECALL(CATIANumericalDisplayFormat,ENVTIETypeLetter,ENVTIELetter)put_DisplayFactor(inValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_AvilableDisplayFactor(CATLONG & onValue) \
{ \
return (ENVTIECALL(CATIANumericalDisplayFormat,ENVTIETypeLetter,ENVTIELetter)get_AvilableDisplayFactor(onValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_FormatName(CATBSTR & ostrFormatName) \
{ \
return (ENVTIECALL(CATIANumericalDisplayFormat,ENVTIETypeLetter,ENVTIELetter)get_FormatName(ostrFormatName)); \
} \
HRESULT __stdcall  ENVTIEName::put_FormatName(const CATBSTR & istrFormatName) \
{ \
return (ENVTIECALL(CATIANumericalDisplayFormat,ENVTIETypeLetter,ENVTIELetter)put_FormatName(istrFormatName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIANumericalDisplayFormat,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIANumericalDisplayFormat,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIANumericalDisplayFormat,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIANumericalDisplayFormat,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIANumericalDisplayFormat,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIANumericalDisplayFormat(classe)    TIECATIANumericalDisplayFormat##classe


/* Common methods inside a TIE */
#define common_TIE_CATIANumericalDisplayFormat(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIANumericalDisplayFormat, classe) \
 \
 \
CATImplementTIEMethods(CATIANumericalDisplayFormat, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIANumericalDisplayFormat, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIANumericalDisplayFormat, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIANumericalDisplayFormat, classe) \
 \
HRESULT __stdcall  TIECATIANumericalDisplayFormat##classe::get_Precision(CATLONG & onValue) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Precision(onValue)); \
} \
HRESULT __stdcall  TIECATIANumericalDisplayFormat##classe::put_Precision(CATLONG inValue) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Precision(inValue)); \
} \
HRESULT __stdcall  TIECATIANumericalDisplayFormat##classe::get_Separator(CATLONG & onValue) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Separator(onValue)); \
} \
HRESULT __stdcall  TIECATIANumericalDisplayFormat##classe::put_Separator(CATLONG inValue) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Separator(inValue)); \
} \
HRESULT __stdcall  TIECATIANumericalDisplayFormat##classe::get_DisplayTrailingZero(CATLONG & onValue) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DisplayTrailingZero(onValue)); \
} \
HRESULT __stdcall  TIECATIANumericalDisplayFormat##classe::put_DisplayTrailingZero(CATLONG inValue) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DisplayTrailingZero(inValue)); \
} \
HRESULT __stdcall  TIECATIANumericalDisplayFormat##classe::get_DisplayLeadingZero(CATLONG & onValue) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DisplayLeadingZero(onValue)); \
} \
HRESULT __stdcall  TIECATIANumericalDisplayFormat##classe::put_DisplayLeadingZero(CATLONG inValue) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DisplayLeadingZero(inValue)); \
} \
HRESULT __stdcall  TIECATIANumericalDisplayFormat##classe::get_DisplayFactor(CATLONG & onValue) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DisplayFactor(onValue)); \
} \
HRESULT __stdcall  TIECATIANumericalDisplayFormat##classe::put_DisplayFactor(CATLONG inValue) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DisplayFactor(inValue)); \
} \
HRESULT __stdcall  TIECATIANumericalDisplayFormat##classe::get_AvilableDisplayFactor(CATLONG & onValue) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AvilableDisplayFactor(onValue)); \
} \
HRESULT __stdcall  TIECATIANumericalDisplayFormat##classe::get_FormatName(CATBSTR & ostrFormatName) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FormatName(ostrFormatName)); \
} \
HRESULT __stdcall  TIECATIANumericalDisplayFormat##classe::put_FormatName(const CATBSTR & istrFormatName) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FormatName(istrFormatName)); \
} \
HRESULT  __stdcall  TIECATIANumericalDisplayFormat##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIANumericalDisplayFormat##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIANumericalDisplayFormat##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIANumericalDisplayFormat##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIANumericalDisplayFormat##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIANumericalDisplayFormat(classe) \
 \
 \
declare_TIE_CATIANumericalDisplayFormat(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIANumericalDisplayFormat##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIANumericalDisplayFormat,"CATIANumericalDisplayFormat",CATIANumericalDisplayFormat::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIANumericalDisplayFormat(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIANumericalDisplayFormat, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIANumericalDisplayFormat##classe(classe::MetaObject(),CATIANumericalDisplayFormat::MetaObject(),(void *)CreateTIECATIANumericalDisplayFormat##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIANumericalDisplayFormat(classe) \
 \
 \
declare_TIE_CATIANumericalDisplayFormat(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIANumericalDisplayFormat##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIANumericalDisplayFormat,"CATIANumericalDisplayFormat",CATIANumericalDisplayFormat::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIANumericalDisplayFormat(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIANumericalDisplayFormat, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIANumericalDisplayFormat##classe(classe::MetaObject(),CATIANumericalDisplayFormat::MetaObject(),(void *)CreateTIECATIANumericalDisplayFormat##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIANumericalDisplayFormat(classe) TIE_CATIANumericalDisplayFormat(classe)
#else
#define BOA_CATIANumericalDisplayFormat(classe) CATImplementBOA(CATIANumericalDisplayFormat, classe)
#endif

#endif
