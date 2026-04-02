#ifndef __TIE_SWKIASegmentNode
#define __TIE_SWKIASegmentNode

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "SWKIASegmentNode.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface SWKIASegmentNode */
#define declare_TIE_SWKIASegmentNode(classe) \
 \
 \
class TIESWKIASegmentNode##classe : public SWKIASegmentNode \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(SWKIASegmentNode, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_NbChildrenSegments(CATLONG & poNbChildrenSegments); \
      virtual HRESULT __stdcall GetSegment(CATLONG piIndex, SWKIASegment *& poSegment); \
      virtual HRESULT __stdcall get_NbChildrenNodes(CATLONG & poNbChildrenNodes); \
      virtual HRESULT __stdcall GetSegmentNode(CATLONG piIndex, SWKIASegmentNode *& poSegmentNode); \
      virtual HRESULT __stdcall ResetPosture(); \
      virtual HRESULT __stdcall MirrorCopyPosture(); \
      virtual HRESULT __stdcall SwapPosture(); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_SWKIASegmentNode(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_NbChildrenSegments(CATLONG & poNbChildrenSegments); \
virtual HRESULT __stdcall GetSegment(CATLONG piIndex, SWKIASegment *& poSegment); \
virtual HRESULT __stdcall get_NbChildrenNodes(CATLONG & poNbChildrenNodes); \
virtual HRESULT __stdcall GetSegmentNode(CATLONG piIndex, SWKIASegmentNode *& poSegmentNode); \
virtual HRESULT __stdcall ResetPosture(); \
virtual HRESULT __stdcall MirrorCopyPosture(); \
virtual HRESULT __stdcall SwapPosture(); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_SWKIASegmentNode(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_NbChildrenSegments(CATLONG & poNbChildrenSegments) \
{ \
return (ENVTIECALL(SWKIASegmentNode,ENVTIETypeLetter,ENVTIELetter)get_NbChildrenSegments(poNbChildrenSegments)); \
} \
HRESULT __stdcall  ENVTIEName::GetSegment(CATLONG piIndex, SWKIASegment *& poSegment) \
{ \
return (ENVTIECALL(SWKIASegmentNode,ENVTIETypeLetter,ENVTIELetter)GetSegment(piIndex,poSegment)); \
} \
HRESULT __stdcall  ENVTIEName::get_NbChildrenNodes(CATLONG & poNbChildrenNodes) \
{ \
return (ENVTIECALL(SWKIASegmentNode,ENVTIETypeLetter,ENVTIELetter)get_NbChildrenNodes(poNbChildrenNodes)); \
} \
HRESULT __stdcall  ENVTIEName::GetSegmentNode(CATLONG piIndex, SWKIASegmentNode *& poSegmentNode) \
{ \
return (ENVTIECALL(SWKIASegmentNode,ENVTIETypeLetter,ENVTIELetter)GetSegmentNode(piIndex,poSegmentNode)); \
} \
HRESULT __stdcall  ENVTIEName::ResetPosture() \
{ \
return (ENVTIECALL(SWKIASegmentNode,ENVTIETypeLetter,ENVTIELetter)ResetPosture()); \
} \
HRESULT __stdcall  ENVTIEName::MirrorCopyPosture() \
{ \
return (ENVTIECALL(SWKIASegmentNode,ENVTIETypeLetter,ENVTIELetter)MirrorCopyPosture()); \
} \
HRESULT __stdcall  ENVTIEName::SwapPosture() \
{ \
return (ENVTIECALL(SWKIASegmentNode,ENVTIETypeLetter,ENVTIELetter)SwapPosture()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(SWKIASegmentNode,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(SWKIASegmentNode,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(SWKIASegmentNode,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(SWKIASegmentNode,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(SWKIASegmentNode,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_SWKIASegmentNode(classe)    TIESWKIASegmentNode##classe


/* Common methods inside a TIE */
#define common_TIE_SWKIASegmentNode(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(SWKIASegmentNode, classe) \
 \
 \
CATImplementTIEMethods(SWKIASegmentNode, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(SWKIASegmentNode, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(SWKIASegmentNode, classe) \
CATImplementCATBaseUnknownMethodsForTIE(SWKIASegmentNode, classe) \
 \
HRESULT __stdcall  TIESWKIASegmentNode##classe::get_NbChildrenSegments(CATLONG & poNbChildrenSegments) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&poNbChildrenSegments); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NbChildrenSegments(poNbChildrenSegments); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&poNbChildrenSegments); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegmentNode##classe::GetSegment(CATLONG piIndex, SWKIASegment *& poSegment) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&piIndex,&poSegment); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSegment(piIndex,poSegment); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&piIndex,&poSegment); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegmentNode##classe::get_NbChildrenNodes(CATLONG & poNbChildrenNodes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&poNbChildrenNodes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NbChildrenNodes(poNbChildrenNodes); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&poNbChildrenNodes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegmentNode##classe::GetSegmentNode(CATLONG piIndex, SWKIASegmentNode *& poSegmentNode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&piIndex,&poSegmentNode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSegmentNode(piIndex,poSegmentNode); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&piIndex,&poSegmentNode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegmentNode##classe::ResetPosture() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetPosture(); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegmentNode##classe::MirrorCopyPosture() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->MirrorCopyPosture(); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegmentNode##classe::SwapPosture() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SwapPosture(); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIASegmentNode##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIASegmentNode##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIASegmentNode##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIASegmentNode##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIASegmentNode##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_SWKIASegmentNode(classe) \
 \
 \
declare_TIE_SWKIASegmentNode(classe) \
 \
 \
CATMetaClass * __stdcall TIESWKIASegmentNode##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_SWKIASegmentNode,"SWKIASegmentNode",SWKIASegmentNode::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_SWKIASegmentNode(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(SWKIASegmentNode, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicSWKIASegmentNode##classe(classe::MetaObject(),SWKIASegmentNode::MetaObject(),(void *)CreateTIESWKIASegmentNode##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_SWKIASegmentNode(classe) \
 \
 \
declare_TIE_SWKIASegmentNode(classe) \
 \
 \
CATMetaClass * __stdcall TIESWKIASegmentNode##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_SWKIASegmentNode,"SWKIASegmentNode",SWKIASegmentNode::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_SWKIASegmentNode(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(SWKIASegmentNode, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicSWKIASegmentNode##classe(classe::MetaObject(),SWKIASegmentNode::MetaObject(),(void *)CreateTIESWKIASegmentNode##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_SWKIASegmentNode(classe) TIE_SWKIASegmentNode(classe)
#else
#define BOA_SWKIASegmentNode(classe) CATImplementBOA(SWKIASegmentNode, classe)
#endif

#endif
