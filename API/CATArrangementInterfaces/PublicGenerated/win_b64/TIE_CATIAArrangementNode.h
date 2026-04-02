#ifndef __TIE_CATIAArrangementNode
#define __TIE_CATIAArrangementNode

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAArrangementNode.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAArrangementNode */
#define declare_TIE_CATIAArrangementNode(classe) \
 \
 \
class TIECATIAArrangementNode##classe : public CATIAArrangementNode \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAArrangementNode, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_BendRadius(double & oNodeBendRadius); \
      virtual HRESULT __stdcall put_BendRadius(double iNodeBendRadius); \
      virtual HRESULT __stdcall get_BendAngle(double & oNodeBendAngle); \
      virtual HRESULT __stdcall GetPoint(CATIAMove * iRelAxis, CATSafeArrayVariant & ioNodeLocation); \
      virtual HRESULT __stdcall SetPoint(CATIAMove * iRelAxis, const CATSafeArrayVariant & iNodeLocation); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAArrangementNode(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_BendRadius(double & oNodeBendRadius); \
virtual HRESULT __stdcall put_BendRadius(double iNodeBendRadius); \
virtual HRESULT __stdcall get_BendAngle(double & oNodeBendAngle); \
virtual HRESULT __stdcall GetPoint(CATIAMove * iRelAxis, CATSafeArrayVariant & ioNodeLocation); \
virtual HRESULT __stdcall SetPoint(CATIAMove * iRelAxis, const CATSafeArrayVariant & iNodeLocation); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAArrangementNode(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_BendRadius(double & oNodeBendRadius) \
{ \
return (ENVTIECALL(CATIAArrangementNode,ENVTIETypeLetter,ENVTIELetter)get_BendRadius(oNodeBendRadius)); \
} \
HRESULT __stdcall  ENVTIEName::put_BendRadius(double iNodeBendRadius) \
{ \
return (ENVTIECALL(CATIAArrangementNode,ENVTIETypeLetter,ENVTIELetter)put_BendRadius(iNodeBendRadius)); \
} \
HRESULT __stdcall  ENVTIEName::get_BendAngle(double & oNodeBendAngle) \
{ \
return (ENVTIECALL(CATIAArrangementNode,ENVTIETypeLetter,ENVTIELetter)get_BendAngle(oNodeBendAngle)); \
} \
HRESULT __stdcall  ENVTIEName::GetPoint(CATIAMove * iRelAxis, CATSafeArrayVariant & ioNodeLocation) \
{ \
return (ENVTIECALL(CATIAArrangementNode,ENVTIETypeLetter,ENVTIELetter)GetPoint(iRelAxis,ioNodeLocation)); \
} \
HRESULT __stdcall  ENVTIEName::SetPoint(CATIAMove * iRelAxis, const CATSafeArrayVariant & iNodeLocation) \
{ \
return (ENVTIECALL(CATIAArrangementNode,ENVTIETypeLetter,ENVTIELetter)SetPoint(iRelAxis,iNodeLocation)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAArrangementNode,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAArrangementNode,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAArrangementNode,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAArrangementNode,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAArrangementNode,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAArrangementNode(classe)    TIECATIAArrangementNode##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAArrangementNode(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAArrangementNode, classe) \
 \
 \
CATImplementTIEMethods(CATIAArrangementNode, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAArrangementNode, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAArrangementNode, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAArrangementNode, classe) \
 \
HRESULT __stdcall  TIECATIAArrangementNode##classe::get_BendRadius(double & oNodeBendRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oNodeBendRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BendRadius(oNodeBendRadius); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oNodeBendRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementNode##classe::put_BendRadius(double iNodeBendRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iNodeBendRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_BendRadius(iNodeBendRadius); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iNodeBendRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementNode##classe::get_BendAngle(double & oNodeBendAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oNodeBendAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BendAngle(oNodeBendAngle); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oNodeBendAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementNode##classe::GetPoint(CATIAMove * iRelAxis, CATSafeArrayVariant & ioNodeLocation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iRelAxis,&ioNodeLocation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPoint(iRelAxis,ioNodeLocation); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iRelAxis,&ioNodeLocation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementNode##classe::SetPoint(CATIAMove * iRelAxis, const CATSafeArrayVariant & iNodeLocation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iRelAxis,&iNodeLocation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPoint(iRelAxis,iNodeLocation); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iRelAxis,&iNodeLocation); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementNode##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementNode##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementNode##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementNode##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementNode##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAArrangementNode(classe) \
 \
 \
declare_TIE_CATIAArrangementNode(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAArrangementNode##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAArrangementNode,"CATIAArrangementNode",CATIAArrangementNode::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAArrangementNode(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAArrangementNode, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAArrangementNode##classe(classe::MetaObject(),CATIAArrangementNode::MetaObject(),(void *)CreateTIECATIAArrangementNode##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAArrangementNode(classe) \
 \
 \
declare_TIE_CATIAArrangementNode(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAArrangementNode##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAArrangementNode,"CATIAArrangementNode",CATIAArrangementNode::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAArrangementNode(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAArrangementNode, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAArrangementNode##classe(classe::MetaObject(),CATIAArrangementNode::MetaObject(),(void *)CreateTIECATIAArrangementNode##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAArrangementNode(classe) TIE_CATIAArrangementNode(classe)
#else
#define BOA_CATIAArrangementNode(classe) CATImplementBOA(CATIAArrangementNode, classe)
#endif

#endif
