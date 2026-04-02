#ifndef __TIE_CATIALayout2DLayout
#define __TIE_CATIALayout2DLayout

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIALayout2DLayout.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIALayout2DLayout */
#define declare_TIE_CATIALayout2DLayout(classe) \
 \
 \
class TIECATIALayout2DLayout##classe : public CATIALayout2DLayout \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIALayout2DLayout, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Sheets(CATIALayout2DSheets *& oSheets); \
      virtual HRESULT __stdcall get_Relations(CATIARelations *& oRelations); \
      virtual HRESULT __stdcall get_Parameters(CATIAParameters *& oParameters); \
      virtual HRESULT __stdcall get_ActiveSheet(CATIALayout2DSheet *& oSheet); \
      virtual HRESULT __stdcall put_ActiveSheet(CATIALayout2DSheet * iSheet); \
      virtual HRESULT __stdcall get_Standard(CatDrawingStandard & oStandard); \
      virtual HRESULT __stdcall put_Standard(CatDrawingStandard iStandard); \
      virtual HRESULT __stdcall get_VisuIn3D(CatVisuIn3DMode & oMode); \
      virtual HRESULT __stdcall put_VisuIn3D(CatVisuIn3DMode iMode); \
      virtual HRESULT __stdcall get_RenderingMode(CatRenderingMode & oRenderingMode); \
      virtual HRESULT __stdcall put_RenderingMode(CatRenderingMode iRenderingMode); \
      virtual HRESULT __stdcall reorder_Sheets(const CATSafeArrayVariant & iOrderedSheets); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIALayout2DLayout(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Sheets(CATIALayout2DSheets *& oSheets); \
virtual HRESULT __stdcall get_Relations(CATIARelations *& oRelations); \
virtual HRESULT __stdcall get_Parameters(CATIAParameters *& oParameters); \
virtual HRESULT __stdcall get_ActiveSheet(CATIALayout2DSheet *& oSheet); \
virtual HRESULT __stdcall put_ActiveSheet(CATIALayout2DSheet * iSheet); \
virtual HRESULT __stdcall get_Standard(CatDrawingStandard & oStandard); \
virtual HRESULT __stdcall put_Standard(CatDrawingStandard iStandard); \
virtual HRESULT __stdcall get_VisuIn3D(CatVisuIn3DMode & oMode); \
virtual HRESULT __stdcall put_VisuIn3D(CatVisuIn3DMode iMode); \
virtual HRESULT __stdcall get_RenderingMode(CatRenderingMode & oRenderingMode); \
virtual HRESULT __stdcall put_RenderingMode(CatRenderingMode iRenderingMode); \
virtual HRESULT __stdcall reorder_Sheets(const CATSafeArrayVariant & iOrderedSheets); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIALayout2DLayout(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Sheets(CATIALayout2DSheets *& oSheets) \
{ \
return (ENVTIECALL(CATIALayout2DLayout,ENVTIETypeLetter,ENVTIELetter)get_Sheets(oSheets)); \
} \
HRESULT __stdcall  ENVTIEName::get_Relations(CATIARelations *& oRelations) \
{ \
return (ENVTIECALL(CATIALayout2DLayout,ENVTIETypeLetter,ENVTIELetter)get_Relations(oRelations)); \
} \
HRESULT __stdcall  ENVTIEName::get_Parameters(CATIAParameters *& oParameters) \
{ \
return (ENVTIECALL(CATIALayout2DLayout,ENVTIETypeLetter,ENVTIELetter)get_Parameters(oParameters)); \
} \
HRESULT __stdcall  ENVTIEName::get_ActiveSheet(CATIALayout2DSheet *& oSheet) \
{ \
return (ENVTIECALL(CATIALayout2DLayout,ENVTIETypeLetter,ENVTIELetter)get_ActiveSheet(oSheet)); \
} \
HRESULT __stdcall  ENVTIEName::put_ActiveSheet(CATIALayout2DSheet * iSheet) \
{ \
return (ENVTIECALL(CATIALayout2DLayout,ENVTIETypeLetter,ENVTIELetter)put_ActiveSheet(iSheet)); \
} \
HRESULT __stdcall  ENVTIEName::get_Standard(CatDrawingStandard & oStandard) \
{ \
return (ENVTIECALL(CATIALayout2DLayout,ENVTIETypeLetter,ENVTIELetter)get_Standard(oStandard)); \
} \
HRESULT __stdcall  ENVTIEName::put_Standard(CatDrawingStandard iStandard) \
{ \
return (ENVTIECALL(CATIALayout2DLayout,ENVTIETypeLetter,ENVTIELetter)put_Standard(iStandard)); \
} \
HRESULT __stdcall  ENVTIEName::get_VisuIn3D(CatVisuIn3DMode & oMode) \
{ \
return (ENVTIECALL(CATIALayout2DLayout,ENVTIETypeLetter,ENVTIELetter)get_VisuIn3D(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_VisuIn3D(CatVisuIn3DMode iMode) \
{ \
return (ENVTIECALL(CATIALayout2DLayout,ENVTIETypeLetter,ENVTIELetter)put_VisuIn3D(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_RenderingMode(CatRenderingMode & oRenderingMode) \
{ \
return (ENVTIECALL(CATIALayout2DLayout,ENVTIETypeLetter,ENVTIELetter)get_RenderingMode(oRenderingMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_RenderingMode(CatRenderingMode iRenderingMode) \
{ \
return (ENVTIECALL(CATIALayout2DLayout,ENVTIETypeLetter,ENVTIELetter)put_RenderingMode(iRenderingMode)); \
} \
HRESULT __stdcall  ENVTIEName::reorder_Sheets(const CATSafeArrayVariant & iOrderedSheets) \
{ \
return (ENVTIECALL(CATIALayout2DLayout,ENVTIETypeLetter,ENVTIELetter)reorder_Sheets(iOrderedSheets)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIALayout2DLayout,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIALayout2DLayout,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIALayout2DLayout,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIALayout2DLayout,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIALayout2DLayout,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIALayout2DLayout(classe)    TIECATIALayout2DLayout##classe


/* Common methods inside a TIE */
#define common_TIE_CATIALayout2DLayout(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIALayout2DLayout, classe) \
 \
 \
CATImplementTIEMethods(CATIALayout2DLayout, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIALayout2DLayout, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIALayout2DLayout, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIALayout2DLayout, classe) \
 \
HRESULT __stdcall  TIECATIALayout2DLayout##classe::get_Sheets(CATIALayout2DSheets *& oSheets) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oSheets); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Sheets(oSheets); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oSheets); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DLayout##classe::get_Relations(CATIARelations *& oRelations) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oRelations); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Relations(oRelations); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oRelations); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DLayout##classe::get_Parameters(CATIAParameters *& oParameters) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oParameters); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parameters(oParameters); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oParameters); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DLayout##classe::get_ActiveSheet(CATIALayout2DSheet *& oSheet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oSheet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ActiveSheet(oSheet); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oSheet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DLayout##classe::put_ActiveSheet(CATIALayout2DSheet * iSheet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iSheet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ActiveSheet(iSheet); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iSheet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DLayout##classe::get_Standard(CatDrawingStandard & oStandard) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oStandard); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Standard(oStandard); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oStandard); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DLayout##classe::put_Standard(CatDrawingStandard iStandard) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iStandard); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Standard(iStandard); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iStandard); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DLayout##classe::get_VisuIn3D(CatVisuIn3DMode & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_VisuIn3D(oMode); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DLayout##classe::put_VisuIn3D(CatVisuIn3DMode iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_VisuIn3D(iMode); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DLayout##classe::get_RenderingMode(CatRenderingMode & oRenderingMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oRenderingMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RenderingMode(oRenderingMode); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oRenderingMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DLayout##classe::put_RenderingMode(CatRenderingMode iRenderingMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iRenderingMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RenderingMode(iRenderingMode); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iRenderingMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DLayout##classe::reorder_Sheets(const CATSafeArrayVariant & iOrderedSheets) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iOrderedSheets); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->reorder_Sheets(iOrderedSheets); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iOrderedSheets); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALayout2DLayout##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALayout2DLayout##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALayout2DLayout##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALayout2DLayout##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALayout2DLayout##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIALayout2DLayout(classe) \
 \
 \
declare_TIE_CATIALayout2DLayout(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIALayout2DLayout##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIALayout2DLayout,"CATIALayout2DLayout",CATIALayout2DLayout::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIALayout2DLayout(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIALayout2DLayout, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIALayout2DLayout##classe(classe::MetaObject(),CATIALayout2DLayout::MetaObject(),(void *)CreateTIECATIALayout2DLayout##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIALayout2DLayout(classe) \
 \
 \
declare_TIE_CATIALayout2DLayout(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIALayout2DLayout##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIALayout2DLayout,"CATIALayout2DLayout",CATIALayout2DLayout::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIALayout2DLayout(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIALayout2DLayout, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIALayout2DLayout##classe(classe::MetaObject(),CATIALayout2DLayout::MetaObject(),(void *)CreateTIECATIALayout2DLayout##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIALayout2DLayout(classe) TIE_CATIALayout2DLayout(classe)
#else
#define BOA_CATIALayout2DLayout(classe) CATImplementBOA(CATIALayout2DLayout, classe)
#endif

#endif
