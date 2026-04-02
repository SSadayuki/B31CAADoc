#ifndef __TIE_CATIADimensionPattern
#define __TIE_CATIADimensionPattern

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIADimensionPattern.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIADimensionPattern */
#define declare_TIE_CATIADimensionPattern(classe) \
 \
 \
class TIECATIADimensionPattern##classe : public CATIADimensionPattern \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIADimensionPattern, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_InstanceCount(double & oInstanceCount); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIADimensionPattern(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_InstanceCount(double & oInstanceCount); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIADimensionPattern(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_InstanceCount(double & oInstanceCount) \
{ \
return (ENVTIECALL(CATIADimensionPattern,ENVTIETypeLetter,ENVTIELetter)get_InstanceCount(oInstanceCount)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIADimensionPattern,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIADimensionPattern,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIADimensionPattern,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIADimensionPattern,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIADimensionPattern,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIADimensionPattern(classe)    TIECATIADimensionPattern##classe


/* Common methods inside a TIE */
#define common_TIE_CATIADimensionPattern(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIADimensionPattern, classe) \
 \
 \
CATImplementTIEMethods(CATIADimensionPattern, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIADimensionPattern, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIADimensionPattern, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIADimensionPattern, classe) \
 \
HRESULT __stdcall  TIECATIADimensionPattern##classe::get_InstanceCount(double & oInstanceCount) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_InstanceCount(oInstanceCount)); \
} \
HRESULT  __stdcall  TIECATIADimensionPattern##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIADimensionPattern##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIADimensionPattern##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIADimensionPattern##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIADimensionPattern##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIADimensionPattern(classe) \
 \
 \
declare_TIE_CATIADimensionPattern(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADimensionPattern##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADimensionPattern,"CATIADimensionPattern",CATIADimensionPattern::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADimensionPattern(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIADimensionPattern, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADimensionPattern##classe(classe::MetaObject(),CATIADimensionPattern::MetaObject(),(void *)CreateTIECATIADimensionPattern##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIADimensionPattern(classe) \
 \
 \
declare_TIE_CATIADimensionPattern(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADimensionPattern##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADimensionPattern,"CATIADimensionPattern",CATIADimensionPattern::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADimensionPattern(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIADimensionPattern, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADimensionPattern##classe(classe::MetaObject(),CATIADimensionPattern::MetaObject(),(void *)CreateTIECATIADimensionPattern##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIADimensionPattern(classe) TIE_CATIADimensionPattern(classe)
#else
#define BOA_CATIADimensionPattern(classe) CATImplementBOA(CATIADimensionPattern, classe)
#endif

#endif
