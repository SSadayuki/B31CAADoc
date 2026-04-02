#ifndef __TIE_DNBIAPertNode
#define __TIE_DNBIAPertNode

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "DNBIAPertNode.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface DNBIAPertNode */
#define declare_TIE_DNBIAPertNode(classe) \
 \
 \
class TIEDNBIAPertNode##classe : public DNBIAPertNode \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(DNBIAPertNode, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall SetLocation(double xx, double yy); \
      virtual HRESULT __stdcall GetLocation(double & xx, double & yy); \
      virtual HRESULT __stdcall SetIcon(const CATBSTR & iFileName); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_DNBIAPertNode(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall SetLocation(double xx, double yy); \
virtual HRESULT __stdcall GetLocation(double & xx, double & yy); \
virtual HRESULT __stdcall SetIcon(const CATBSTR & iFileName); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_DNBIAPertNode(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::SetLocation(double xx, double yy) \
{ \
return (ENVTIECALL(DNBIAPertNode,ENVTIETypeLetter,ENVTIELetter)SetLocation(xx,yy)); \
} \
HRESULT __stdcall  ENVTIEName::GetLocation(double & xx, double & yy) \
{ \
return (ENVTIECALL(DNBIAPertNode,ENVTIETypeLetter,ENVTIELetter)GetLocation(xx,yy)); \
} \
HRESULT __stdcall  ENVTIEName::SetIcon(const CATBSTR & iFileName) \
{ \
return (ENVTIECALL(DNBIAPertNode,ENVTIETypeLetter,ENVTIELetter)SetIcon(iFileName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(DNBIAPertNode,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(DNBIAPertNode,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(DNBIAPertNode,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(DNBIAPertNode,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(DNBIAPertNode,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_DNBIAPertNode(classe)    TIEDNBIAPertNode##classe


/* Common methods inside a TIE */
#define common_TIE_DNBIAPertNode(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(DNBIAPertNode, classe) \
 \
 \
CATImplementTIEMethods(DNBIAPertNode, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(DNBIAPertNode, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(DNBIAPertNode, classe) \
CATImplementCATBaseUnknownMethodsForTIE(DNBIAPertNode, classe) \
 \
HRESULT __stdcall  TIEDNBIAPertNode##classe::SetLocation(double xx, double yy) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&xx,&yy); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLocation(xx,yy); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&xx,&yy); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEDNBIAPertNode##classe::GetLocation(double & xx, double & yy) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&xx,&yy); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLocation(xx,yy); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&xx,&yy); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEDNBIAPertNode##classe::SetIcon(const CATBSTR & iFileName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iFileName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetIcon(iFileName); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iFileName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEDNBIAPertNode##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEDNBIAPertNode##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEDNBIAPertNode##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEDNBIAPertNode##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEDNBIAPertNode##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_DNBIAPertNode(classe) \
 \
 \
declare_TIE_DNBIAPertNode(classe) \
 \
 \
CATMetaClass * __stdcall TIEDNBIAPertNode##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_DNBIAPertNode,"DNBIAPertNode",DNBIAPertNode::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_DNBIAPertNode(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(DNBIAPertNode, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicDNBIAPertNode##classe(classe::MetaObject(),DNBIAPertNode::MetaObject(),(void *)CreateTIEDNBIAPertNode##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_DNBIAPertNode(classe) \
 \
 \
declare_TIE_DNBIAPertNode(classe) \
 \
 \
CATMetaClass * __stdcall TIEDNBIAPertNode##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_DNBIAPertNode,"DNBIAPertNode",DNBIAPertNode::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_DNBIAPertNode(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(DNBIAPertNode, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicDNBIAPertNode##classe(classe::MetaObject(),DNBIAPertNode::MetaObject(),(void *)CreateTIEDNBIAPertNode##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_DNBIAPertNode(classe) TIE_DNBIAPertNode(classe)
#else
#define BOA_DNBIAPertNode(classe) CATImplementBOA(DNBIAPertNode, classe)
#endif

#endif
