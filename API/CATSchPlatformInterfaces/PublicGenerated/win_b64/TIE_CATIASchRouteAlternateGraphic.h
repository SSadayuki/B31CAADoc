#ifndef __TIE_CATIASchRouteAlternateGraphic
#define __TIE_CATIASchRouteAlternateGraphic

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchRouteAlternateGraphic.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchRouteAlternateGraphic */
#define declare_TIE_CATIASchRouteAlternateGraphic(classe) \
 \
 \
class TIECATIASchRouteAlternateGraphic##classe : public CATIASchRouteAlternateGraphic \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchRouteAlternateGraphic, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AddAlternateGraphic(const CATSafeArrayVariant & iInitialXYPosition, CATIASchGRR *& oAddedGRR); \
      virtual HRESULT __stdcall RemoveAlternateGraphic(CATIASchGRR * iGRRToBeRemoved); \
      virtual HRESULT __stdcall ListAlternateGraphics(CATIASchListOfObjects *& oLGRR); \
      virtual HRESULT __stdcall RemoveAllAlternateGraphics(); \
      virtual HRESULT __stdcall RemoveAllAlternateGraphicsOfStyle(CatSchIDLRouteAlternateGraphicStyle iStyle); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchRouteAlternateGraphic(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AddAlternateGraphic(const CATSafeArrayVariant & iInitialXYPosition, CATIASchGRR *& oAddedGRR); \
virtual HRESULT __stdcall RemoveAlternateGraphic(CATIASchGRR * iGRRToBeRemoved); \
virtual HRESULT __stdcall ListAlternateGraphics(CATIASchListOfObjects *& oLGRR); \
virtual HRESULT __stdcall RemoveAllAlternateGraphics(); \
virtual HRESULT __stdcall RemoveAllAlternateGraphicsOfStyle(CatSchIDLRouteAlternateGraphicStyle iStyle); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchRouteAlternateGraphic(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AddAlternateGraphic(const CATSafeArrayVariant & iInitialXYPosition, CATIASchGRR *& oAddedGRR) \
{ \
return (ENVTIECALL(CATIASchRouteAlternateGraphic,ENVTIETypeLetter,ENVTIELetter)AddAlternateGraphic(iInitialXYPosition,oAddedGRR)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveAlternateGraphic(CATIASchGRR * iGRRToBeRemoved) \
{ \
return (ENVTIECALL(CATIASchRouteAlternateGraphic,ENVTIETypeLetter,ENVTIELetter)RemoveAlternateGraphic(iGRRToBeRemoved)); \
} \
HRESULT __stdcall  ENVTIEName::ListAlternateGraphics(CATIASchListOfObjects *& oLGRR) \
{ \
return (ENVTIECALL(CATIASchRouteAlternateGraphic,ENVTIETypeLetter,ENVTIELetter)ListAlternateGraphics(oLGRR)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveAllAlternateGraphics() \
{ \
return (ENVTIECALL(CATIASchRouteAlternateGraphic,ENVTIETypeLetter,ENVTIELetter)RemoveAllAlternateGraphics()); \
} \
HRESULT __stdcall  ENVTIEName::RemoveAllAlternateGraphicsOfStyle(CatSchIDLRouteAlternateGraphicStyle iStyle) \
{ \
return (ENVTIECALL(CATIASchRouteAlternateGraphic,ENVTIETypeLetter,ENVTIELetter)RemoveAllAlternateGraphicsOfStyle(iStyle)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchRouteAlternateGraphic,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchRouteAlternateGraphic,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchRouteAlternateGraphic,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchRouteAlternateGraphic,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchRouteAlternateGraphic,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchRouteAlternateGraphic(classe)    TIECATIASchRouteAlternateGraphic##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchRouteAlternateGraphic(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchRouteAlternateGraphic, classe) \
 \
 \
CATImplementTIEMethods(CATIASchRouteAlternateGraphic, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchRouteAlternateGraphic, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchRouteAlternateGraphic, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchRouteAlternateGraphic, classe) \
 \
HRESULT __stdcall  TIECATIASchRouteAlternateGraphic##classe::AddAlternateGraphic(const CATSafeArrayVariant & iInitialXYPosition, CATIASchGRR *& oAddedGRR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iInitialXYPosition,&oAddedGRR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddAlternateGraphic(iInitialXYPosition,oAddedGRR); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iInitialXYPosition,&oAddedGRR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchRouteAlternateGraphic##classe::RemoveAlternateGraphic(CATIASchGRR * iGRRToBeRemoved) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iGRRToBeRemoved); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAlternateGraphic(iGRRToBeRemoved); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iGRRToBeRemoved); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchRouteAlternateGraphic##classe::ListAlternateGraphics(CATIASchListOfObjects *& oLGRR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oLGRR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListAlternateGraphics(oLGRR); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oLGRR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchRouteAlternateGraphic##classe::RemoveAllAlternateGraphics() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAllAlternateGraphics(); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchRouteAlternateGraphic##classe::RemoveAllAlternateGraphicsOfStyle(CatSchIDLRouteAlternateGraphicStyle iStyle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iStyle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAllAlternateGraphicsOfStyle(iStyle); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iStyle); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchRouteAlternateGraphic##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchRouteAlternateGraphic##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchRouteAlternateGraphic##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchRouteAlternateGraphic##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchRouteAlternateGraphic##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchRouteAlternateGraphic(classe) \
 \
 \
declare_TIE_CATIASchRouteAlternateGraphic(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchRouteAlternateGraphic##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchRouteAlternateGraphic,"CATIASchRouteAlternateGraphic",CATIASchRouteAlternateGraphic::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchRouteAlternateGraphic(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchRouteAlternateGraphic, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchRouteAlternateGraphic##classe(classe::MetaObject(),CATIASchRouteAlternateGraphic::MetaObject(),(void *)CreateTIECATIASchRouteAlternateGraphic##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchRouteAlternateGraphic(classe) \
 \
 \
declare_TIE_CATIASchRouteAlternateGraphic(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchRouteAlternateGraphic##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchRouteAlternateGraphic,"CATIASchRouteAlternateGraphic",CATIASchRouteAlternateGraphic::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchRouteAlternateGraphic(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchRouteAlternateGraphic, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchRouteAlternateGraphic##classe(classe::MetaObject(),CATIASchRouteAlternateGraphic::MetaObject(),(void *)CreateTIECATIASchRouteAlternateGraphic##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchRouteAlternateGraphic(classe) TIE_CATIASchRouteAlternateGraphic(classe)
#else
#define BOA_CATIASchRouteAlternateGraphic(classe) CATImplementBOA(CATIASchRouteAlternateGraphic, classe)
#endif

#endif
