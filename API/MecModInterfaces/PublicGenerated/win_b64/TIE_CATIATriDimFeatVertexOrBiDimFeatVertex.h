#ifndef __TIE_CATIATriDimFeatVertexOrBiDimFeatVertex
#define __TIE_CATIATriDimFeatVertexOrBiDimFeatVertex

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIATriDimFeatVertexOrBiDimFeatVertex.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIATriDimFeatVertexOrBiDimFeatVertex */
#define declare_TIE_CATIATriDimFeatVertexOrBiDimFeatVertex(classe) \
 \
 \
class TIECATIATriDimFeatVertexOrBiDimFeatVertex##classe : public CATIATriDimFeatVertexOrBiDimFeatVertex \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIATriDimFeatVertexOrBiDimFeatVertex, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_DisplayName(CATBSTR & oName); \
      virtual HRESULT __stdcall ComposeWith(CATIAReference * iReference, CATIAReference *& oComposedReference); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIATriDimFeatVertexOrBiDimFeatVertex(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_DisplayName(CATBSTR & oName); \
virtual HRESULT __stdcall ComposeWith(CATIAReference * iReference, CATIAReference *& oComposedReference); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIATriDimFeatVertexOrBiDimFeatVertex(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_DisplayName(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIATriDimFeatVertexOrBiDimFeatVertex,ENVTIETypeLetter,ENVTIELetter)get_DisplayName(oName)); \
} \
HRESULT __stdcall  ENVTIEName::ComposeWith(CATIAReference * iReference, CATIAReference *& oComposedReference) \
{ \
return (ENVTIECALL(CATIATriDimFeatVertexOrBiDimFeatVertex,ENVTIETypeLetter,ENVTIELetter)ComposeWith(iReference,oComposedReference)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIATriDimFeatVertexOrBiDimFeatVertex,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIATriDimFeatVertexOrBiDimFeatVertex,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIATriDimFeatVertexOrBiDimFeatVertex,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIATriDimFeatVertexOrBiDimFeatVertex,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIATriDimFeatVertexOrBiDimFeatVertex,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIATriDimFeatVertexOrBiDimFeatVertex(classe)    TIECATIATriDimFeatVertexOrBiDimFeatVertex##classe


/* Common methods inside a TIE */
#define common_TIE_CATIATriDimFeatVertexOrBiDimFeatVertex(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIATriDimFeatVertexOrBiDimFeatVertex, classe) \
 \
 \
CATImplementTIEMethods(CATIATriDimFeatVertexOrBiDimFeatVertex, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIATriDimFeatVertexOrBiDimFeatVertex, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIATriDimFeatVertexOrBiDimFeatVertex, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIATriDimFeatVertexOrBiDimFeatVertex, classe) \
 \
HRESULT __stdcall  TIECATIATriDimFeatVertexOrBiDimFeatVertex##classe::get_DisplayName(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DisplayName(oName); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATriDimFeatVertexOrBiDimFeatVertex##classe::ComposeWith(CATIAReference * iReference, CATIAReference *& oComposedReference) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iReference,&oComposedReference); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ComposeWith(iReference,oComposedReference); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iReference,&oComposedReference); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATriDimFeatVertexOrBiDimFeatVertex##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATriDimFeatVertexOrBiDimFeatVertex##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATriDimFeatVertexOrBiDimFeatVertex##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATriDimFeatVertexOrBiDimFeatVertex##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATriDimFeatVertexOrBiDimFeatVertex##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIATriDimFeatVertexOrBiDimFeatVertex(classe) \
 \
 \
declare_TIE_CATIATriDimFeatVertexOrBiDimFeatVertex(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIATriDimFeatVertexOrBiDimFeatVertex##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIATriDimFeatVertexOrBiDimFeatVertex,"CATIATriDimFeatVertexOrBiDimFeatVertex",CATIATriDimFeatVertexOrBiDimFeatVertex::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIATriDimFeatVertexOrBiDimFeatVertex(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIATriDimFeatVertexOrBiDimFeatVertex, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIATriDimFeatVertexOrBiDimFeatVertex##classe(classe::MetaObject(),CATIATriDimFeatVertexOrBiDimFeatVertex::MetaObject(),(void *)CreateTIECATIATriDimFeatVertexOrBiDimFeatVertex##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIATriDimFeatVertexOrBiDimFeatVertex(classe) \
 \
 \
declare_TIE_CATIATriDimFeatVertexOrBiDimFeatVertex(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIATriDimFeatVertexOrBiDimFeatVertex##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIATriDimFeatVertexOrBiDimFeatVertex,"CATIATriDimFeatVertexOrBiDimFeatVertex",CATIATriDimFeatVertexOrBiDimFeatVertex::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIATriDimFeatVertexOrBiDimFeatVertex(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIATriDimFeatVertexOrBiDimFeatVertex, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIATriDimFeatVertexOrBiDimFeatVertex##classe(classe::MetaObject(),CATIATriDimFeatVertexOrBiDimFeatVertex::MetaObject(),(void *)CreateTIECATIATriDimFeatVertexOrBiDimFeatVertex##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIATriDimFeatVertexOrBiDimFeatVertex(classe) TIE_CATIATriDimFeatVertexOrBiDimFeatVertex(classe)
#else
#define BOA_CATIATriDimFeatVertexOrBiDimFeatVertex(classe) CATImplementBOA(CATIATriDimFeatVertexOrBiDimFeatVertex, classe)
#endif

#endif
