#ifndef __TIE_CATIANonSemanticGDT
#define __TIE_CATIANonSemanticGDT

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIANonSemanticGDT.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIANonSemanticGDT */
#define declare_TIE_CATIANonSemanticGDT(classe) \
 \
 \
class TIECATIANonSemanticGDT##classe : public CATIANonSemanticGDT \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIANonSemanticGDT, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Get2dAnnot(CATIADrawingGDT *& oGDT); \
      virtual HRESULT __stdcall TPSParallelOnScreen(CATIATPSParallelOnScreen *& oTPSParallelOnScreen); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIANonSemanticGDT(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Get2dAnnot(CATIADrawingGDT *& oGDT); \
virtual HRESULT __stdcall TPSParallelOnScreen(CATIATPSParallelOnScreen *& oTPSParallelOnScreen); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIANonSemanticGDT(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Get2dAnnot(CATIADrawingGDT *& oGDT) \
{ \
return (ENVTIECALL(CATIANonSemanticGDT,ENVTIETypeLetter,ENVTIELetter)Get2dAnnot(oGDT)); \
} \
HRESULT __stdcall  ENVTIEName::TPSParallelOnScreen(CATIATPSParallelOnScreen *& oTPSParallelOnScreen) \
{ \
return (ENVTIECALL(CATIANonSemanticGDT,ENVTIETypeLetter,ENVTIELetter)TPSParallelOnScreen(oTPSParallelOnScreen)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIANonSemanticGDT,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIANonSemanticGDT,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIANonSemanticGDT,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIANonSemanticGDT,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIANonSemanticGDT,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIANonSemanticGDT(classe)    TIECATIANonSemanticGDT##classe


/* Common methods inside a TIE */
#define common_TIE_CATIANonSemanticGDT(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIANonSemanticGDT, classe) \
 \
 \
CATImplementTIEMethods(CATIANonSemanticGDT, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIANonSemanticGDT, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIANonSemanticGDT, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIANonSemanticGDT, classe) \
 \
HRESULT __stdcall  TIECATIANonSemanticGDT##classe::Get2dAnnot(CATIADrawingGDT *& oGDT) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Get2dAnnot(oGDT)); \
} \
HRESULT __stdcall  TIECATIANonSemanticGDT##classe::TPSParallelOnScreen(CATIATPSParallelOnScreen *& oTPSParallelOnScreen) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->TPSParallelOnScreen(oTPSParallelOnScreen)); \
} \
HRESULT  __stdcall  TIECATIANonSemanticGDT##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIANonSemanticGDT##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIANonSemanticGDT##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIANonSemanticGDT##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIANonSemanticGDT##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIANonSemanticGDT(classe) \
 \
 \
declare_TIE_CATIANonSemanticGDT(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIANonSemanticGDT##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIANonSemanticGDT,"CATIANonSemanticGDT",CATIANonSemanticGDT::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIANonSemanticGDT(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIANonSemanticGDT, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIANonSemanticGDT##classe(classe::MetaObject(),CATIANonSemanticGDT::MetaObject(),(void *)CreateTIECATIANonSemanticGDT##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIANonSemanticGDT(classe) \
 \
 \
declare_TIE_CATIANonSemanticGDT(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIANonSemanticGDT##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIANonSemanticGDT,"CATIANonSemanticGDT",CATIANonSemanticGDT::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIANonSemanticGDT(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIANonSemanticGDT, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIANonSemanticGDT##classe(classe::MetaObject(),CATIANonSemanticGDT::MetaObject(),(void *)CreateTIECATIANonSemanticGDT##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIANonSemanticGDT(classe) TIE_CATIANonSemanticGDT(classe)
#else
#define BOA_CATIANonSemanticGDT(classe) CATImplementBOA(CATIANonSemanticGDT, classe)
#endif

#endif
