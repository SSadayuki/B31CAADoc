#ifndef __TIE_SWKIALineOfSightNode
#define __TIE_SWKIALineOfSightNode

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "SWKIALineOfSightNode.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface SWKIALineOfSightNode */
#define declare_TIE_SWKIALineOfSightNode(classe) \
 \
 \
class TIESWKIALineOfSightNode##classe : public SWKIALineOfSightNode \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(SWKIALineOfSightNode, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall ResetPosture(CATLONG piDOFId); \
      virtual HRESULT __stdcall LockPosture(CATLONG piDOFId); \
      virtual HRESULT __stdcall ResetPrefAngles(CATLONG piDOFId); \
      virtual HRESULT __stdcall ResetAngularLimitations(CATLONG piDOFId, CATLONG piReset); \
      virtual HRESULT __stdcall Optimize(CATLONG piDOFId); \
      virtual HRESULT __stdcall SetPercentage(double piPercentage, CATLONG piDOFId); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_SWKIALineOfSightNode(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall ResetPosture(CATLONG piDOFId); \
virtual HRESULT __stdcall LockPosture(CATLONG piDOFId); \
virtual HRESULT __stdcall ResetPrefAngles(CATLONG piDOFId); \
virtual HRESULT __stdcall ResetAngularLimitations(CATLONG piDOFId, CATLONG piReset); \
virtual HRESULT __stdcall Optimize(CATLONG piDOFId); \
virtual HRESULT __stdcall SetPercentage(double piPercentage, CATLONG piDOFId); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_SWKIALineOfSightNode(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::ResetPosture(CATLONG piDOFId) \
{ \
return (ENVTIECALL(SWKIALineOfSightNode,ENVTIETypeLetter,ENVTIELetter)ResetPosture(piDOFId)); \
} \
HRESULT __stdcall  ENVTIEName::LockPosture(CATLONG piDOFId) \
{ \
return (ENVTIECALL(SWKIALineOfSightNode,ENVTIETypeLetter,ENVTIELetter)LockPosture(piDOFId)); \
} \
HRESULT __stdcall  ENVTIEName::ResetPrefAngles(CATLONG piDOFId) \
{ \
return (ENVTIECALL(SWKIALineOfSightNode,ENVTIETypeLetter,ENVTIELetter)ResetPrefAngles(piDOFId)); \
} \
HRESULT __stdcall  ENVTIEName::ResetAngularLimitations(CATLONG piDOFId, CATLONG piReset) \
{ \
return (ENVTIECALL(SWKIALineOfSightNode,ENVTIETypeLetter,ENVTIELetter)ResetAngularLimitations(piDOFId,piReset)); \
} \
HRESULT __stdcall  ENVTIEName::Optimize(CATLONG piDOFId) \
{ \
return (ENVTIECALL(SWKIALineOfSightNode,ENVTIETypeLetter,ENVTIELetter)Optimize(piDOFId)); \
} \
HRESULT __stdcall  ENVTIEName::SetPercentage(double piPercentage, CATLONG piDOFId) \
{ \
return (ENVTIECALL(SWKIALineOfSightNode,ENVTIETypeLetter,ENVTIELetter)SetPercentage(piPercentage,piDOFId)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(SWKIALineOfSightNode,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(SWKIALineOfSightNode,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(SWKIALineOfSightNode,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(SWKIALineOfSightNode,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(SWKIALineOfSightNode,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_SWKIALineOfSightNode(classe)    TIESWKIALineOfSightNode##classe


/* Common methods inside a TIE */
#define common_TIE_SWKIALineOfSightNode(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(SWKIALineOfSightNode, classe) \
 \
 \
CATImplementTIEMethods(SWKIALineOfSightNode, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(SWKIALineOfSightNode, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(SWKIALineOfSightNode, classe) \
CATImplementCATBaseUnknownMethodsForTIE(SWKIALineOfSightNode, classe) \
 \
HRESULT __stdcall  TIESWKIALineOfSightNode##classe::ResetPosture(CATLONG piDOFId) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&piDOFId); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetPosture(piDOFId); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&piDOFId); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIALineOfSightNode##classe::LockPosture(CATLONG piDOFId) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&piDOFId); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->LockPosture(piDOFId); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&piDOFId); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIALineOfSightNode##classe::ResetPrefAngles(CATLONG piDOFId) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&piDOFId); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetPrefAngles(piDOFId); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&piDOFId); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIALineOfSightNode##classe::ResetAngularLimitations(CATLONG piDOFId, CATLONG piReset) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&piDOFId,&piReset); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetAngularLimitations(piDOFId,piReset); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&piDOFId,&piReset); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIALineOfSightNode##classe::Optimize(CATLONG piDOFId) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&piDOFId); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Optimize(piDOFId); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&piDOFId); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIALineOfSightNode##classe::SetPercentage(double piPercentage, CATLONG piDOFId) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&piPercentage,&piDOFId); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPercentage(piPercentage,piDOFId); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&piPercentage,&piDOFId); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIALineOfSightNode##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIALineOfSightNode##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIALineOfSightNode##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIALineOfSightNode##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIALineOfSightNode##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_SWKIALineOfSightNode(classe) \
 \
 \
declare_TIE_SWKIALineOfSightNode(classe) \
 \
 \
CATMetaClass * __stdcall TIESWKIALineOfSightNode##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_SWKIALineOfSightNode,"SWKIALineOfSightNode",SWKIALineOfSightNode::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_SWKIALineOfSightNode(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(SWKIALineOfSightNode, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicSWKIALineOfSightNode##classe(classe::MetaObject(),SWKIALineOfSightNode::MetaObject(),(void *)CreateTIESWKIALineOfSightNode##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_SWKIALineOfSightNode(classe) \
 \
 \
declare_TIE_SWKIALineOfSightNode(classe) \
 \
 \
CATMetaClass * __stdcall TIESWKIALineOfSightNode##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_SWKIALineOfSightNode,"SWKIALineOfSightNode",SWKIALineOfSightNode::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_SWKIALineOfSightNode(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(SWKIALineOfSightNode, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicSWKIALineOfSightNode##classe(classe::MetaObject(),SWKIALineOfSightNode::MetaObject(),(void *)CreateTIESWKIALineOfSightNode##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_SWKIALineOfSightNode(classe) TIE_SWKIALineOfSightNode(classe)
#else
#define BOA_SWKIALineOfSightNode(classe) CATImplementBOA(SWKIALineOfSightNode, classe)
#endif

#endif
