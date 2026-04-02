#ifndef __TIE_SWKIAManikin
#define __TIE_SWKIAManikin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "SWKIAManikin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface SWKIAManikin */
#define declare_TIE_SWKIAManikin(classe) \
 \
 \
class TIESWKIAManikin##classe : public SWKIAManikin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(SWKIAManikin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Body(SWKIABody *& poBody); \
      virtual HRESULT __stdcall get_BodyNode(SWKIASegmentNode *& poBodyNode); \
      virtual HRESULT __stdcall get_Anthro(SWKIAAnthro *& poAnthro); \
      virtual HRESULT __stdcall get_Vision(SWKIAVision *& poVision); \
      virtual HRESULT __stdcall get_Ergo(SWKIAErgo *& poErgo); \
      virtual HRESULT __stdcall get_IKManager(SWKIAIKManager *& poIKManager); \
      virtual HRESULT __stdcall get_Move(CATIAMove *& poMove); \
      virtual HRESULT __stdcall get_SettingsNode(SWKIANode *& poNode); \
      virtual HRESULT __stdcall get_LineOfSightNode(SWKIALineOfSightNode *& poNode); \
      virtual HRESULT __stdcall get_ProfilesNode(SWKIANode *& poNode); \
      virtual HRESULT __stdcall get_Memo(CATBSTR & pioText); \
      virtual HRESULT __stdcall put_Memo(const CATBSTR & piText); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_SWKIAManikin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Body(SWKIABody *& poBody); \
virtual HRESULT __stdcall get_BodyNode(SWKIASegmentNode *& poBodyNode); \
virtual HRESULT __stdcall get_Anthro(SWKIAAnthro *& poAnthro); \
virtual HRESULT __stdcall get_Vision(SWKIAVision *& poVision); \
virtual HRESULT __stdcall get_Ergo(SWKIAErgo *& poErgo); \
virtual HRESULT __stdcall get_IKManager(SWKIAIKManager *& poIKManager); \
virtual HRESULT __stdcall get_Move(CATIAMove *& poMove); \
virtual HRESULT __stdcall get_SettingsNode(SWKIANode *& poNode); \
virtual HRESULT __stdcall get_LineOfSightNode(SWKIALineOfSightNode *& poNode); \
virtual HRESULT __stdcall get_ProfilesNode(SWKIANode *& poNode); \
virtual HRESULT __stdcall get_Memo(CATBSTR & pioText); \
virtual HRESULT __stdcall put_Memo(const CATBSTR & piText); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_SWKIAManikin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Body(SWKIABody *& poBody) \
{ \
return (ENVTIECALL(SWKIAManikin,ENVTIETypeLetter,ENVTIELetter)get_Body(poBody)); \
} \
HRESULT __stdcall  ENVTIEName::get_BodyNode(SWKIASegmentNode *& poBodyNode) \
{ \
return (ENVTIECALL(SWKIAManikin,ENVTIETypeLetter,ENVTIELetter)get_BodyNode(poBodyNode)); \
} \
HRESULT __stdcall  ENVTIEName::get_Anthro(SWKIAAnthro *& poAnthro) \
{ \
return (ENVTIECALL(SWKIAManikin,ENVTIETypeLetter,ENVTIELetter)get_Anthro(poAnthro)); \
} \
HRESULT __stdcall  ENVTIEName::get_Vision(SWKIAVision *& poVision) \
{ \
return (ENVTIECALL(SWKIAManikin,ENVTIETypeLetter,ENVTIELetter)get_Vision(poVision)); \
} \
HRESULT __stdcall  ENVTIEName::get_Ergo(SWKIAErgo *& poErgo) \
{ \
return (ENVTIECALL(SWKIAManikin,ENVTIETypeLetter,ENVTIELetter)get_Ergo(poErgo)); \
} \
HRESULT __stdcall  ENVTIEName::get_IKManager(SWKIAIKManager *& poIKManager) \
{ \
return (ENVTIECALL(SWKIAManikin,ENVTIETypeLetter,ENVTIELetter)get_IKManager(poIKManager)); \
} \
HRESULT __stdcall  ENVTIEName::get_Move(CATIAMove *& poMove) \
{ \
return (ENVTIECALL(SWKIAManikin,ENVTIETypeLetter,ENVTIELetter)get_Move(poMove)); \
} \
HRESULT __stdcall  ENVTIEName::get_SettingsNode(SWKIANode *& poNode) \
{ \
return (ENVTIECALL(SWKIAManikin,ENVTIETypeLetter,ENVTIELetter)get_SettingsNode(poNode)); \
} \
HRESULT __stdcall  ENVTIEName::get_LineOfSightNode(SWKIALineOfSightNode *& poNode) \
{ \
return (ENVTIECALL(SWKIAManikin,ENVTIETypeLetter,ENVTIELetter)get_LineOfSightNode(poNode)); \
} \
HRESULT __stdcall  ENVTIEName::get_ProfilesNode(SWKIANode *& poNode) \
{ \
return (ENVTIECALL(SWKIAManikin,ENVTIETypeLetter,ENVTIELetter)get_ProfilesNode(poNode)); \
} \
HRESULT __stdcall  ENVTIEName::get_Memo(CATBSTR & pioText) \
{ \
return (ENVTIECALL(SWKIAManikin,ENVTIETypeLetter,ENVTIELetter)get_Memo(pioText)); \
} \
HRESULT __stdcall  ENVTIEName::put_Memo(const CATBSTR & piText) \
{ \
return (ENVTIECALL(SWKIAManikin,ENVTIETypeLetter,ENVTIELetter)put_Memo(piText)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(SWKIAManikin,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(SWKIAManikin,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(SWKIAManikin,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(SWKIAManikin,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(SWKIAManikin,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_SWKIAManikin(classe)    TIESWKIAManikin##classe


/* Common methods inside a TIE */
#define common_TIE_SWKIAManikin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(SWKIAManikin, classe) \
 \
 \
CATImplementTIEMethods(SWKIAManikin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(SWKIAManikin, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(SWKIAManikin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(SWKIAManikin, classe) \
 \
HRESULT __stdcall  TIESWKIAManikin##classe::get_Body(SWKIABody *& poBody) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&poBody); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Body(poBody); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&poBody); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAManikin##classe::get_BodyNode(SWKIASegmentNode *& poBodyNode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&poBodyNode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BodyNode(poBodyNode); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&poBodyNode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAManikin##classe::get_Anthro(SWKIAAnthro *& poAnthro) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&poAnthro); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Anthro(poAnthro); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&poAnthro); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAManikin##classe::get_Vision(SWKIAVision *& poVision) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&poVision); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Vision(poVision); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&poVision); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAManikin##classe::get_Ergo(SWKIAErgo *& poErgo) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&poErgo); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Ergo(poErgo); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&poErgo); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAManikin##classe::get_IKManager(SWKIAIKManager *& poIKManager) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&poIKManager); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_IKManager(poIKManager); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&poIKManager); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAManikin##classe::get_Move(CATIAMove *& poMove) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&poMove); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Move(poMove); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&poMove); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAManikin##classe::get_SettingsNode(SWKIANode *& poNode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&poNode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SettingsNode(poNode); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&poNode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAManikin##classe::get_LineOfSightNode(SWKIALineOfSightNode *& poNode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&poNode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LineOfSightNode(poNode); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&poNode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAManikin##classe::get_ProfilesNode(SWKIANode *& poNode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&poNode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ProfilesNode(poNode); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&poNode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAManikin##classe::get_Memo(CATBSTR & pioText) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&pioText); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Memo(pioText); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&pioText); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAManikin##classe::put_Memo(const CATBSTR & piText) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&piText); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Memo(piText); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&piText); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAManikin##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAManikin##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAManikin##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAManikin##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAManikin##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_SWKIAManikin(classe) \
 \
 \
declare_TIE_SWKIAManikin(classe) \
 \
 \
CATMetaClass * __stdcall TIESWKIAManikin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_SWKIAManikin,"SWKIAManikin",SWKIAManikin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_SWKIAManikin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(SWKIAManikin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicSWKIAManikin##classe(classe::MetaObject(),SWKIAManikin::MetaObject(),(void *)CreateTIESWKIAManikin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_SWKIAManikin(classe) \
 \
 \
declare_TIE_SWKIAManikin(classe) \
 \
 \
CATMetaClass * __stdcall TIESWKIAManikin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_SWKIAManikin,"SWKIAManikin",SWKIAManikin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_SWKIAManikin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(SWKIAManikin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicSWKIAManikin##classe(classe::MetaObject(),SWKIAManikin::MetaObject(),(void *)CreateTIESWKIAManikin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_SWKIAManikin(classe) TIE_SWKIAManikin(classe)
#else
#define BOA_SWKIAManikin(classe) CATImplementBOA(SWKIAManikin, classe)
#endif

#endif
