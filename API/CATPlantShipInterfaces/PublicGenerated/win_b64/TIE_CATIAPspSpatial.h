#ifndef __TIE_CATIAPspSpatial
#define __TIE_CATIAPspSpatial

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAPspSpatial.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPspSpatial */
#define declare_TIE_CATIAPspSpatial(classe) \
 \
 \
class TIECATIAPspSpatial##classe : public CATIAPspSpatial \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPspSpatial, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Physicals(CATIAPspListOfObjects *& oLPspPhysicals); \
      virtual HRESULT __stdcall GetConnectedPhysicals(CATIABase * ispNode, CATIAPspListOfObjects *& oLPspConnectors, CATIAPspListOfObjects *& oLPspPhysicals); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAPspSpatial(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Physicals(CATIAPspListOfObjects *& oLPspPhysicals); \
virtual HRESULT __stdcall GetConnectedPhysicals(CATIABase * ispNode, CATIAPspListOfObjects *& oLPspConnectors, CATIAPspListOfObjects *& oLPspPhysicals); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAPspSpatial(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Physicals(CATIAPspListOfObjects *& oLPspPhysicals) \
{ \
return (ENVTIECALL(CATIAPspSpatial,ENVTIETypeLetter,ENVTIELetter)get_Physicals(oLPspPhysicals)); \
} \
HRESULT __stdcall  ENVTIEName::GetConnectedPhysicals(CATIABase * ispNode, CATIAPspListOfObjects *& oLPspConnectors, CATIAPspListOfObjects *& oLPspPhysicals) \
{ \
return (ENVTIECALL(CATIAPspSpatial,ENVTIETypeLetter,ENVTIELetter)GetConnectedPhysicals(ispNode,oLPspConnectors,oLPspPhysicals)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPspSpatial,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPspSpatial,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspSpatial,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspSpatial,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAPspSpatial,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPspSpatial(classe)    TIECATIAPspSpatial##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPspSpatial(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPspSpatial, classe) \
 \
 \
CATImplementTIEMethods(CATIAPspSpatial, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPspSpatial, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPspSpatial, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPspSpatial, classe) \
 \
HRESULT __stdcall  TIECATIAPspSpatial##classe::get_Physicals(CATIAPspListOfObjects *& oLPspPhysicals) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oLPspPhysicals); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Physicals(oLPspPhysicals); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oLPspPhysicals); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspSpatial##classe::GetConnectedPhysicals(CATIABase * ispNode, CATIAPspListOfObjects *& oLPspConnectors, CATIAPspListOfObjects *& oLPspPhysicals) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&ispNode,&oLPspConnectors,&oLPspPhysicals); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetConnectedPhysicals(ispNode,oLPspConnectors,oLPspPhysicals); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&ispNode,&oLPspConnectors,&oLPspPhysicals); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspSpatial##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspSpatial##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspSpatial##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspSpatial##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspSpatial##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPspSpatial(classe) \
 \
 \
declare_TIE_CATIAPspSpatial(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspSpatial##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspSpatial,"CATIAPspSpatial",CATIAPspSpatial::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspSpatial(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPspSpatial, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspSpatial##classe(classe::MetaObject(),CATIAPspSpatial::MetaObject(),(void *)CreateTIECATIAPspSpatial##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPspSpatial(classe) \
 \
 \
declare_TIE_CATIAPspSpatial(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspSpatial##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspSpatial,"CATIAPspSpatial",CATIAPspSpatial::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspSpatial(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPspSpatial, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspSpatial##classe(classe::MetaObject(),CATIAPspSpatial::MetaObject(),(void *)CreateTIECATIAPspSpatial##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPspSpatial(classe) TIE_CATIAPspSpatial(classe)
#else
#define BOA_CATIAPspSpatial(classe) CATImplementBOA(CATIAPspSpatial, classe)
#endif

#endif
