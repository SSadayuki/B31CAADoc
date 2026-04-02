#ifndef __TIE_CATIACoordDim
#define __TIE_CATIACoordDim

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIACoordDim.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIACoordDim */
#define declare_TIE_CATIACoordDim(classe) \
 \
 \
class TIECATIACoordDim##classe : public CATIACoordDim \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIACoordDim, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Get2dAnnot(CATIADrawingCoordDim *& oCoorddim); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIACoordDim(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Get2dAnnot(CATIADrawingCoordDim *& oCoorddim); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIACoordDim(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Get2dAnnot(CATIADrawingCoordDim *& oCoorddim) \
{ \
return (ENVTIECALL(CATIACoordDim,ENVTIETypeLetter,ENVTIELetter)Get2dAnnot(oCoorddim)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIACoordDim,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIACoordDim,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIACoordDim,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIACoordDim,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIACoordDim,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIACoordDim(classe)    TIECATIACoordDim##classe


/* Common methods inside a TIE */
#define common_TIE_CATIACoordDim(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIACoordDim, classe) \
 \
 \
CATImplementTIEMethods(CATIACoordDim, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIACoordDim, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIACoordDim, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIACoordDim, classe) \
 \
HRESULT __stdcall  TIECATIACoordDim##classe::Get2dAnnot(CATIADrawingCoordDim *& oCoorddim) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Get2dAnnot(oCoorddim)); \
} \
HRESULT  __stdcall  TIECATIACoordDim##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIACoordDim##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIACoordDim##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIACoordDim##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIACoordDim##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIACoordDim(classe) \
 \
 \
declare_TIE_CATIACoordDim(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIACoordDim##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIACoordDim,"CATIACoordDim",CATIACoordDim::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIACoordDim(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIACoordDim, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIACoordDim##classe(classe::MetaObject(),CATIACoordDim::MetaObject(),(void *)CreateTIECATIACoordDim##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIACoordDim(classe) \
 \
 \
declare_TIE_CATIACoordDim(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIACoordDim##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIACoordDim,"CATIACoordDim",CATIACoordDim::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIACoordDim(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIACoordDim, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIACoordDim##classe(classe::MetaObject(),CATIACoordDim::MetaObject(),(void *)CreateTIECATIACoordDim##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIACoordDim(classe) TIE_CATIACoordDim(classe)
#else
#define BOA_CATIACoordDim(classe) CATImplementBOA(CATIACoordDim, classe)
#endif

#endif
