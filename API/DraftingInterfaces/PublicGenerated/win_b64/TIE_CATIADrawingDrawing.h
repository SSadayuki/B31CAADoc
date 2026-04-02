#ifndef __TIE_CATIADrawingDrawing
#define __TIE_CATIADrawingDrawing

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIADrawingDrawing.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIADrawingDrawing */
#define declare_TIE_CATIADrawingDrawing(classe) \
 \
 \
class TIECATIADrawingDrawing##classe : public CATIADrawingDrawing \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIADrawingDrawing, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_ActiveSheet(CATIADrawingSheet *& oSheet); \
      virtual HRESULT __stdcall put_ActiveSheet(CATIADrawingSheet * iSheet); \
      virtual HRESULT __stdcall get_Sheets(CATIADrawingSheets *& oSheets); \
      virtual HRESULT __stdcall get_Standard(CatDrawingStandard & oStandard); \
      virtual HRESULT __stdcall put_Standard(CatDrawingStandard iStandard); \
      virtual HRESULT __stdcall Update(); \
      virtual HRESULT __stdcall get_Parameters(CATIAParameters *& oParameters); \
      virtual HRESULT __stdcall get_Relations(CATIARelations *& oRelations); \
      virtual HRESULT __stdcall Isolate(); \
      virtual HRESULT __stdcall reorder_Sheets(const CATSafeArrayVariant & iOrderedSheets); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIADrawingDrawing(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_ActiveSheet(CATIADrawingSheet *& oSheet); \
virtual HRESULT __stdcall put_ActiveSheet(CATIADrawingSheet * iSheet); \
virtual HRESULT __stdcall get_Sheets(CATIADrawingSheets *& oSheets); \
virtual HRESULT __stdcall get_Standard(CatDrawingStandard & oStandard); \
virtual HRESULT __stdcall put_Standard(CatDrawingStandard iStandard); \
virtual HRESULT __stdcall Update(); \
virtual HRESULT __stdcall get_Parameters(CATIAParameters *& oParameters); \
virtual HRESULT __stdcall get_Relations(CATIARelations *& oRelations); \
virtual HRESULT __stdcall Isolate(); \
virtual HRESULT __stdcall reorder_Sheets(const CATSafeArrayVariant & iOrderedSheets); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIADrawingDrawing(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_ActiveSheet(CATIADrawingSheet *& oSheet) \
{ \
return (ENVTIECALL(CATIADrawingDrawing,ENVTIETypeLetter,ENVTIELetter)get_ActiveSheet(oSheet)); \
} \
HRESULT __stdcall  ENVTIEName::put_ActiveSheet(CATIADrawingSheet * iSheet) \
{ \
return (ENVTIECALL(CATIADrawingDrawing,ENVTIETypeLetter,ENVTIELetter)put_ActiveSheet(iSheet)); \
} \
HRESULT __stdcall  ENVTIEName::get_Sheets(CATIADrawingSheets *& oSheets) \
{ \
return (ENVTIECALL(CATIADrawingDrawing,ENVTIETypeLetter,ENVTIELetter)get_Sheets(oSheets)); \
} \
HRESULT __stdcall  ENVTIEName::get_Standard(CatDrawingStandard & oStandard) \
{ \
return (ENVTIECALL(CATIADrawingDrawing,ENVTIETypeLetter,ENVTIELetter)get_Standard(oStandard)); \
} \
HRESULT __stdcall  ENVTIEName::put_Standard(CatDrawingStandard iStandard) \
{ \
return (ENVTIECALL(CATIADrawingDrawing,ENVTIETypeLetter,ENVTIELetter)put_Standard(iStandard)); \
} \
HRESULT __stdcall  ENVTIEName::Update() \
{ \
return (ENVTIECALL(CATIADrawingDrawing,ENVTIETypeLetter,ENVTIELetter)Update()); \
} \
HRESULT __stdcall  ENVTIEName::get_Parameters(CATIAParameters *& oParameters) \
{ \
return (ENVTIECALL(CATIADrawingDrawing,ENVTIETypeLetter,ENVTIELetter)get_Parameters(oParameters)); \
} \
HRESULT __stdcall  ENVTIEName::get_Relations(CATIARelations *& oRelations) \
{ \
return (ENVTIECALL(CATIADrawingDrawing,ENVTIETypeLetter,ENVTIELetter)get_Relations(oRelations)); \
} \
HRESULT __stdcall  ENVTIEName::Isolate() \
{ \
return (ENVTIECALL(CATIADrawingDrawing,ENVTIETypeLetter,ENVTIELetter)Isolate()); \
} \
HRESULT __stdcall  ENVTIEName::reorder_Sheets(const CATSafeArrayVariant & iOrderedSheets) \
{ \
return (ENVTIECALL(CATIADrawingDrawing,ENVTIETypeLetter,ENVTIELetter)reorder_Sheets(iOrderedSheets)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIADrawingDrawing,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIADrawingDrawing,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIADrawingDrawing,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIADrawingDrawing,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIADrawingDrawing,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIADrawingDrawing(classe)    TIECATIADrawingDrawing##classe


/* Common methods inside a TIE */
#define common_TIE_CATIADrawingDrawing(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIADrawingDrawing, classe) \
 \
 \
CATImplementTIEMethods(CATIADrawingDrawing, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIADrawingDrawing, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIADrawingDrawing, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIADrawingDrawing, classe) \
 \
HRESULT __stdcall  TIECATIADrawingDrawing##classe::get_ActiveSheet(CATIADrawingSheet *& oSheet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oSheet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ActiveSheet(oSheet); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oSheet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDrawing##classe::put_ActiveSheet(CATIADrawingSheet * iSheet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iSheet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ActiveSheet(iSheet); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iSheet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDrawing##classe::get_Sheets(CATIADrawingSheets *& oSheets) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oSheets); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Sheets(oSheets); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oSheets); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDrawing##classe::get_Standard(CatDrawingStandard & oStandard) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oStandard); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Standard(oStandard); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oStandard); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDrawing##classe::put_Standard(CatDrawingStandard iStandard) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iStandard); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Standard(iStandard); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iStandard); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDrawing##classe::Update() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Update(); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDrawing##classe::get_Parameters(CATIAParameters *& oParameters) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oParameters); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parameters(oParameters); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oParameters); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDrawing##classe::get_Relations(CATIARelations *& oRelations) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oRelations); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Relations(oRelations); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oRelations); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDrawing##classe::Isolate() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Isolate(); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDrawing##classe::reorder_Sheets(const CATSafeArrayVariant & iOrderedSheets) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iOrderedSheets); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->reorder_Sheets(iOrderedSheets); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iOrderedSheets); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingDrawing##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingDrawing##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingDrawing##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingDrawing##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingDrawing##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIADrawingDrawing(classe) \
 \
 \
declare_TIE_CATIADrawingDrawing(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADrawingDrawing##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADrawingDrawing,"CATIADrawingDrawing",CATIADrawingDrawing::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADrawingDrawing(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIADrawingDrawing, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADrawingDrawing##classe(classe::MetaObject(),CATIADrawingDrawing::MetaObject(),(void *)CreateTIECATIADrawingDrawing##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIADrawingDrawing(classe) \
 \
 \
declare_TIE_CATIADrawingDrawing(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADrawingDrawing##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADrawingDrawing,"CATIADrawingDrawing",CATIADrawingDrawing::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADrawingDrawing(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIADrawingDrawing, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADrawingDrawing##classe(classe::MetaObject(),CATIADrawingDrawing::MetaObject(),(void *)CreateTIECATIADrawingDrawing##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIADrawingDrawing(classe) TIE_CATIADrawingDrawing(classe)
#else
#define BOA_CATIADrawingDrawing(classe) CATImplementBOA(CATIADrawingDrawing, classe)
#endif

#endif
