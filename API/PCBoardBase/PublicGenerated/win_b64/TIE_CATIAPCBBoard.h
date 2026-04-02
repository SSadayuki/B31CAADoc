#ifndef __TIE_CATIAPCBBoard
#define __TIE_CATIAPCBBoard

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAPCBBoard.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPCBBoard */
#define declare_TIE_CATIAPCBBoard(classe) \
 \
 \
class TIECATIAPCBBoard##classe : public CATIAPCBBoard \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPCBBoard, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Part(CATIAPad *& oPad); \
      virtual HRESULT __stdcall put_Part(CATIAPad * iPad); \
      virtual HRESULT __stdcall create_zone(const CATBSTR & zonetype, CATIAPad * iPad); \
      virtual HRESULT __stdcall get_Owner(CATBSTR *& oOwner); \
      virtual HRESULT __stdcall put_Owner(const CATBSTR & iOwner); \
      virtual HRESULT __stdcall create_pcbhole(CATIAHole * iHole, const CATBSTR & iplatingStyle, const CATBSTR & iAssociatedPartName, const CATBSTR & iHoleType, const CATBSTR & iHoleOwner); \
      virtual HRESULT __stdcall create_pcbpattern(CATIAPattern * iPattern, const CATBSTR & iplatingStyle, const CATBSTR & iAssociatedPartName, const CATBSTR & iHoleType, const CATBSTR & iHoleOwner); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAPCBBoard(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Part(CATIAPad *& oPad); \
virtual HRESULT __stdcall put_Part(CATIAPad * iPad); \
virtual HRESULT __stdcall create_zone(const CATBSTR & zonetype, CATIAPad * iPad); \
virtual HRESULT __stdcall get_Owner(CATBSTR *& oOwner); \
virtual HRESULT __stdcall put_Owner(const CATBSTR & iOwner); \
virtual HRESULT __stdcall create_pcbhole(CATIAHole * iHole, const CATBSTR & iplatingStyle, const CATBSTR & iAssociatedPartName, const CATBSTR & iHoleType, const CATBSTR & iHoleOwner); \
virtual HRESULT __stdcall create_pcbpattern(CATIAPattern * iPattern, const CATBSTR & iplatingStyle, const CATBSTR & iAssociatedPartName, const CATBSTR & iHoleType, const CATBSTR & iHoleOwner); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAPCBBoard(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Part(CATIAPad *& oPad) \
{ \
return (ENVTIECALL(CATIAPCBBoard,ENVTIETypeLetter,ENVTIELetter)get_Part(oPad)); \
} \
HRESULT __stdcall  ENVTIEName::put_Part(CATIAPad * iPad) \
{ \
return (ENVTIECALL(CATIAPCBBoard,ENVTIETypeLetter,ENVTIELetter)put_Part(iPad)); \
} \
HRESULT __stdcall  ENVTIEName::create_zone(const CATBSTR & zonetype, CATIAPad * iPad) \
{ \
return (ENVTIECALL(CATIAPCBBoard,ENVTIETypeLetter,ENVTIELetter)create_zone(zonetype,iPad)); \
} \
HRESULT __stdcall  ENVTIEName::get_Owner(CATBSTR *& oOwner) \
{ \
return (ENVTIECALL(CATIAPCBBoard,ENVTIETypeLetter,ENVTIELetter)get_Owner(oOwner)); \
} \
HRESULT __stdcall  ENVTIEName::put_Owner(const CATBSTR & iOwner) \
{ \
return (ENVTIECALL(CATIAPCBBoard,ENVTIETypeLetter,ENVTIELetter)put_Owner(iOwner)); \
} \
HRESULT __stdcall  ENVTIEName::create_pcbhole(CATIAHole * iHole, const CATBSTR & iplatingStyle, const CATBSTR & iAssociatedPartName, const CATBSTR & iHoleType, const CATBSTR & iHoleOwner) \
{ \
return (ENVTIECALL(CATIAPCBBoard,ENVTIETypeLetter,ENVTIELetter)create_pcbhole(iHole,iplatingStyle,iAssociatedPartName,iHoleType,iHoleOwner)); \
} \
HRESULT __stdcall  ENVTIEName::create_pcbpattern(CATIAPattern * iPattern, const CATBSTR & iplatingStyle, const CATBSTR & iAssociatedPartName, const CATBSTR & iHoleType, const CATBSTR & iHoleOwner) \
{ \
return (ENVTIECALL(CATIAPCBBoard,ENVTIETypeLetter,ENVTIELetter)create_pcbpattern(iPattern,iplatingStyle,iAssociatedPartName,iHoleType,iHoleOwner)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPCBBoard,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPCBBoard,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAPCBBoard,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAPCBBoard,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAPCBBoard,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPCBBoard(classe)    TIECATIAPCBBoard##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPCBBoard(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPCBBoard, classe) \
 \
 \
CATImplementTIEMethods(CATIAPCBBoard, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPCBBoard, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPCBBoard, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPCBBoard, classe) \
 \
HRESULT __stdcall  TIECATIAPCBBoard##classe::get_Part(CATIAPad *& oPad) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oPad); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Part(oPad); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oPad); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPCBBoard##classe::put_Part(CATIAPad * iPad) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iPad); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Part(iPad); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iPad); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPCBBoard##classe::create_zone(const CATBSTR & zonetype, CATIAPad * iPad) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&zonetype,&iPad); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->create_zone(zonetype,iPad); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&zonetype,&iPad); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPCBBoard##classe::get_Owner(CATBSTR *& oOwner) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oOwner); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Owner(oOwner); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oOwner); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPCBBoard##classe::put_Owner(const CATBSTR & iOwner) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iOwner); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Owner(iOwner); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iOwner); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPCBBoard##classe::create_pcbhole(CATIAHole * iHole, const CATBSTR & iplatingStyle, const CATBSTR & iAssociatedPartName, const CATBSTR & iHoleType, const CATBSTR & iHoleOwner) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iHole,&iplatingStyle,&iAssociatedPartName,&iHoleType,&iHoleOwner); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->create_pcbhole(iHole,iplatingStyle,iAssociatedPartName,iHoleType,iHoleOwner); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iHole,&iplatingStyle,&iAssociatedPartName,&iHoleType,&iHoleOwner); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPCBBoard##classe::create_pcbpattern(CATIAPattern * iPattern, const CATBSTR & iplatingStyle, const CATBSTR & iAssociatedPartName, const CATBSTR & iHoleType, const CATBSTR & iHoleOwner) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iPattern,&iplatingStyle,&iAssociatedPartName,&iHoleType,&iHoleOwner); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->create_pcbpattern(iPattern,iplatingStyle,iAssociatedPartName,iHoleType,iHoleOwner); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iPattern,&iplatingStyle,&iAssociatedPartName,&iHoleType,&iHoleOwner); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPCBBoard##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPCBBoard##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPCBBoard##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPCBBoard##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPCBBoard##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPCBBoard(classe) \
 \
 \
declare_TIE_CATIAPCBBoard(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPCBBoard##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPCBBoard,"CATIAPCBBoard",CATIAPCBBoard::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPCBBoard(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPCBBoard, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPCBBoard##classe(classe::MetaObject(),CATIAPCBBoard::MetaObject(),(void *)CreateTIECATIAPCBBoard##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPCBBoard(classe) \
 \
 \
declare_TIE_CATIAPCBBoard(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPCBBoard##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPCBBoard,"CATIAPCBBoard",CATIAPCBBoard::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPCBBoard(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPCBBoard, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPCBBoard##classe(classe::MetaObject(),CATIAPCBBoard::MetaObject(),(void *)CreateTIECATIAPCBBoard##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPCBBoard(classe) TIE_CATIAPCBBoard(classe)
#else
#define BOA_CATIAPCBBoard(classe) CATImplementBOA(CATIAPCBBoard, classe)
#endif

#endif
