#ifndef __TIE_CATIASchGRRCntr
#define __TIE_CATIASchGRRCntr

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchGRRCntr.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchGRRCntr */
#define declare_TIE_CATIASchGRRCntr(classe) \
 \
 \
class TIECATIASchGRRCntr##classe : public CATIASchGRRCntr \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchGRRCntr, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall SetSymbol(CATIASchGRR * iGRRSymbol, CatSchIDLCntrSymbolType iESymbolType); \
      virtual HRESULT __stdcall RemoveSymbol(); \
      virtual HRESULT __stdcall GetSymbol(CATIASchGRR *& oGRR, CatSchIDLCntrSymbolType & oESymbolType); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchGRRCntr(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall SetSymbol(CATIASchGRR * iGRRSymbol, CatSchIDLCntrSymbolType iESymbolType); \
virtual HRESULT __stdcall RemoveSymbol(); \
virtual HRESULT __stdcall GetSymbol(CATIASchGRR *& oGRR, CatSchIDLCntrSymbolType & oESymbolType); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchGRRCntr(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::SetSymbol(CATIASchGRR * iGRRSymbol, CatSchIDLCntrSymbolType iESymbolType) \
{ \
return (ENVTIECALL(CATIASchGRRCntr,ENVTIETypeLetter,ENVTIELetter)SetSymbol(iGRRSymbol,iESymbolType)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveSymbol() \
{ \
return (ENVTIECALL(CATIASchGRRCntr,ENVTIETypeLetter,ENVTIELetter)RemoveSymbol()); \
} \
HRESULT __stdcall  ENVTIEName::GetSymbol(CATIASchGRR *& oGRR, CatSchIDLCntrSymbolType & oESymbolType) \
{ \
return (ENVTIECALL(CATIASchGRRCntr,ENVTIETypeLetter,ENVTIELetter)GetSymbol(oGRR,oESymbolType)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchGRRCntr,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchGRRCntr,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchGRRCntr,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchGRRCntr,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchGRRCntr,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchGRRCntr(classe)    TIECATIASchGRRCntr##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchGRRCntr(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchGRRCntr, classe) \
 \
 \
CATImplementTIEMethods(CATIASchGRRCntr, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchGRRCntr, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchGRRCntr, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchGRRCntr, classe) \
 \
HRESULT __stdcall  TIECATIASchGRRCntr##classe::SetSymbol(CATIASchGRR * iGRRSymbol, CatSchIDLCntrSymbolType iESymbolType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iGRRSymbol,&iESymbolType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSymbol(iGRRSymbol,iESymbolType); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iGRRSymbol,&iESymbolType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchGRRCntr##classe::RemoveSymbol() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveSymbol(); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchGRRCntr##classe::GetSymbol(CATIASchGRR *& oGRR, CatSchIDLCntrSymbolType & oESymbolType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oGRR,&oESymbolType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSymbol(oGRR,oESymbolType); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oGRR,&oESymbolType); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchGRRCntr##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchGRRCntr##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchGRRCntr##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchGRRCntr##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchGRRCntr##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchGRRCntr(classe) \
 \
 \
declare_TIE_CATIASchGRRCntr(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchGRRCntr##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchGRRCntr,"CATIASchGRRCntr",CATIASchGRRCntr::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchGRRCntr(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchGRRCntr, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchGRRCntr##classe(classe::MetaObject(),CATIASchGRRCntr::MetaObject(),(void *)CreateTIECATIASchGRRCntr##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchGRRCntr(classe) \
 \
 \
declare_TIE_CATIASchGRRCntr(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchGRRCntr##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchGRRCntr,"CATIASchGRRCntr",CATIASchGRRCntr::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchGRRCntr(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchGRRCntr, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchGRRCntr##classe(classe::MetaObject(),CATIASchGRRCntr::MetaObject(),(void *)CreateTIECATIASchGRRCntr##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchGRRCntr(classe) TIE_CATIASchGRRCntr(classe)
#else
#define BOA_CATIASchGRRCntr(classe) CATImplementBOA(CATIASchGRRCntr, classe)
#endif

#endif
