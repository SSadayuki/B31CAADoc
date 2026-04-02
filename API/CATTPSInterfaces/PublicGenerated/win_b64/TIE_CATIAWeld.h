#ifndef __TIE_CATIAWeld
#define __TIE_CATIAWeld

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIAWeld.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAWeld */
#define declare_TIE_CATIAWeld(classe) \
 \
 \
class TIECATIAWeld##classe : public CATIAWeld \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAWeld, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Get2dAnnot(CATIADrawingWelding *& oWeld); \
      virtual HRESULT __stdcall TPSParallelOnScreen(CATIATPSParallelOnScreen *& oTPSParallelOnScreen); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAWeld(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Get2dAnnot(CATIADrawingWelding *& oWeld); \
virtual HRESULT __stdcall TPSParallelOnScreen(CATIATPSParallelOnScreen *& oTPSParallelOnScreen); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAWeld(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Get2dAnnot(CATIADrawingWelding *& oWeld) \
{ \
return (ENVTIECALL(CATIAWeld,ENVTIETypeLetter,ENVTIELetter)Get2dAnnot(oWeld)); \
} \
HRESULT __stdcall  ENVTIEName::TPSParallelOnScreen(CATIATPSParallelOnScreen *& oTPSParallelOnScreen) \
{ \
return (ENVTIECALL(CATIAWeld,ENVTIETypeLetter,ENVTIELetter)TPSParallelOnScreen(oTPSParallelOnScreen)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAWeld,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAWeld,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAWeld,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAWeld,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAWeld,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAWeld(classe)    TIECATIAWeld##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAWeld(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAWeld, classe) \
 \
 \
CATImplementTIEMethods(CATIAWeld, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAWeld, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAWeld, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAWeld, classe) \
 \
HRESULT __stdcall  TIECATIAWeld##classe::Get2dAnnot(CATIADrawingWelding *& oWeld) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Get2dAnnot(oWeld)); \
} \
HRESULT __stdcall  TIECATIAWeld##classe::TPSParallelOnScreen(CATIATPSParallelOnScreen *& oTPSParallelOnScreen) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->TPSParallelOnScreen(oTPSParallelOnScreen)); \
} \
HRESULT  __stdcall  TIECATIAWeld##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIAWeld##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIAWeld##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIAWeld##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIAWeld##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAWeld(classe) \
 \
 \
declare_TIE_CATIAWeld(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAWeld##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAWeld,"CATIAWeld",CATIAWeld::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAWeld(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAWeld, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAWeld##classe(classe::MetaObject(),CATIAWeld::MetaObject(),(void *)CreateTIECATIAWeld##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAWeld(classe) \
 \
 \
declare_TIE_CATIAWeld(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAWeld##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAWeld,"CATIAWeld",CATIAWeld::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAWeld(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAWeld, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAWeld##classe(classe::MetaObject(),CATIAWeld::MetaObject(),(void *)CreateTIECATIAWeld##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAWeld(classe) TIE_CATIAWeld(classe)
#else
#define BOA_CATIAWeld(classe) CATImplementBOA(CATIAWeld, classe)
#endif

#endif
