#ifndef __TIE_CATIAManufacturingToolAssembly2
#define __TIE_CATIAManufacturingToolAssembly2

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAManufacturingToolAssembly2.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAManufacturingToolAssembly2 */
#define declare_TIE_CATIAManufacturingToolAssembly2(classe) \
 \
 \
class TIECATIAManufacturingToolAssembly2##classe : public CATIAManufacturingToolAssembly2 \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAManufacturingToolAssembly2, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall put_Tool(CATIAManufacturingTool * iMfgTool); \
      virtual HRESULT __stdcall put_Insert(CATIAManufacturingInsert * iMfgInsert); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAManufacturingToolAssembly2(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall put_Tool(CATIAManufacturingTool * iMfgTool); \
virtual HRESULT __stdcall put_Insert(CATIAManufacturingInsert * iMfgInsert); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAManufacturingToolAssembly2(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::put_Tool(CATIAManufacturingTool * iMfgTool) \
{ \
return (ENVTIECALL(CATIAManufacturingToolAssembly2,ENVTIETypeLetter,ENVTIELetter)put_Tool(iMfgTool)); \
} \
HRESULT __stdcall  ENVTIEName::put_Insert(CATIAManufacturingInsert * iMfgInsert) \
{ \
return (ENVTIECALL(CATIAManufacturingToolAssembly2,ENVTIETypeLetter,ENVTIELetter)put_Insert(iMfgInsert)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAManufacturingToolAssembly2,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAManufacturingToolAssembly2,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingToolAssembly2,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingToolAssembly2,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAManufacturingToolAssembly2,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAManufacturingToolAssembly2(classe)    TIECATIAManufacturingToolAssembly2##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAManufacturingToolAssembly2(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAManufacturingToolAssembly2, classe) \
 \
 \
CATImplementTIEMethods(CATIAManufacturingToolAssembly2, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAManufacturingToolAssembly2, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAManufacturingToolAssembly2, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAManufacturingToolAssembly2, classe) \
 \
HRESULT __stdcall  TIECATIAManufacturingToolAssembly2##classe::put_Tool(CATIAManufacturingTool * iMfgTool) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iMfgTool); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Tool(iMfgTool); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iMfgTool); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingToolAssembly2##classe::put_Insert(CATIAManufacturingInsert * iMfgInsert) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iMfgInsert); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Insert(iMfgInsert); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iMfgInsert); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingToolAssembly2##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingToolAssembly2##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingToolAssembly2##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingToolAssembly2##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingToolAssembly2##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAManufacturingToolAssembly2(classe) \
 \
 \
declare_TIE_CATIAManufacturingToolAssembly2(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingToolAssembly2##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingToolAssembly2,"CATIAManufacturingToolAssembly2",CATIAManufacturingToolAssembly2::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingToolAssembly2(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAManufacturingToolAssembly2, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingToolAssembly2##classe(classe::MetaObject(),CATIAManufacturingToolAssembly2::MetaObject(),(void *)CreateTIECATIAManufacturingToolAssembly2##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAManufacturingToolAssembly2(classe) \
 \
 \
declare_TIE_CATIAManufacturingToolAssembly2(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingToolAssembly2##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingToolAssembly2,"CATIAManufacturingToolAssembly2",CATIAManufacturingToolAssembly2::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingToolAssembly2(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAManufacturingToolAssembly2, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingToolAssembly2##classe(classe::MetaObject(),CATIAManufacturingToolAssembly2::MetaObject(),(void *)CreateTIECATIAManufacturingToolAssembly2##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAManufacturingToolAssembly2(classe) TIE_CATIAManufacturingToolAssembly2(classe)
#else
#define BOA_CATIAManufacturingToolAssembly2(classe) CATImplementBOA(CATIAManufacturingToolAssembly2, classe)
#endif

#endif
