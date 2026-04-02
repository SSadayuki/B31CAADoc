#ifndef __TIE_CATIAFunctionalObjectProxy
#define __TIE_CATIAFunctionalObjectProxy

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAFunctionalObjectProxy.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAFunctionalObjectProxy */
#define declare_TIE_CATIAFunctionalObjectProxy(classe) \
 \
 \
class TIECATIAFunctionalObjectProxy##classe : public CATIAFunctionalObjectProxy \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAFunctionalObjectProxy, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Description(CATIAFunctionalDescription *& oDesc); \
      virtual HRESULT __stdcall set_Description(CATIAFunctionalDescription * iDesc); \
      virtual HRESULT __stdcall GetFacet(CATIAFunctionalFacetMgr * iFM, CATIAFunctionalFacet *& oFacet); \
      virtual HRESULT __stdcall GetFacetByName(const CATBSTR & iFM, CATIAFunctionalFacet *& oFacet); \
      virtual HRESULT __stdcall SearchFacet(CATIAFunctionalFacetMgr * iFM, CAT_VARIANT_BOOL iCreateIfNecessary, CATIAFunctionalFacet *& oFacet); \
      virtual HRESULT __stdcall SearchFacetByName(const CATBSTR & iFM, CAT_VARIANT_BOOL iCreateIfNecessary, CATIAFunctionalFacet *& oFacet); \
      virtual HRESULT __stdcall get_X(double & oX); \
      virtual HRESULT __stdcall get_Y(double & oY); \
      virtual HRESULT __stdcall SetCoords(double iX, double iY); \
      virtual HRESULT __stdcall get_Document(CATIAFunctionalDocument *& oDocument); \
      virtual HRESULT __stdcall get_Parameters(CATIAParameters *& oParameters); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAFunctionalObjectProxy(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Description(CATIAFunctionalDescription *& oDesc); \
virtual HRESULT __stdcall set_Description(CATIAFunctionalDescription * iDesc); \
virtual HRESULT __stdcall GetFacet(CATIAFunctionalFacetMgr * iFM, CATIAFunctionalFacet *& oFacet); \
virtual HRESULT __stdcall GetFacetByName(const CATBSTR & iFM, CATIAFunctionalFacet *& oFacet); \
virtual HRESULT __stdcall SearchFacet(CATIAFunctionalFacetMgr * iFM, CAT_VARIANT_BOOL iCreateIfNecessary, CATIAFunctionalFacet *& oFacet); \
virtual HRESULT __stdcall SearchFacetByName(const CATBSTR & iFM, CAT_VARIANT_BOOL iCreateIfNecessary, CATIAFunctionalFacet *& oFacet); \
virtual HRESULT __stdcall get_X(double & oX); \
virtual HRESULT __stdcall get_Y(double & oY); \
virtual HRESULT __stdcall SetCoords(double iX, double iY); \
virtual HRESULT __stdcall get_Document(CATIAFunctionalDocument *& oDocument); \
virtual HRESULT __stdcall get_Parameters(CATIAParameters *& oParameters); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAFunctionalObjectProxy(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Description(CATIAFunctionalDescription *& oDesc) \
{ \
return (ENVTIECALL(CATIAFunctionalObjectProxy,ENVTIETypeLetter,ENVTIELetter)get_Description(oDesc)); \
} \
HRESULT __stdcall  ENVTIEName::set_Description(CATIAFunctionalDescription * iDesc) \
{ \
return (ENVTIECALL(CATIAFunctionalObjectProxy,ENVTIETypeLetter,ENVTIELetter)set_Description(iDesc)); \
} \
HRESULT __stdcall  ENVTIEName::GetFacet(CATIAFunctionalFacetMgr * iFM, CATIAFunctionalFacet *& oFacet) \
{ \
return (ENVTIECALL(CATIAFunctionalObjectProxy,ENVTIETypeLetter,ENVTIELetter)GetFacet(iFM,oFacet)); \
} \
HRESULT __stdcall  ENVTIEName::GetFacetByName(const CATBSTR & iFM, CATIAFunctionalFacet *& oFacet) \
{ \
return (ENVTIECALL(CATIAFunctionalObjectProxy,ENVTIETypeLetter,ENVTIELetter)GetFacetByName(iFM,oFacet)); \
} \
HRESULT __stdcall  ENVTIEName::SearchFacet(CATIAFunctionalFacetMgr * iFM, CAT_VARIANT_BOOL iCreateIfNecessary, CATIAFunctionalFacet *& oFacet) \
{ \
return (ENVTIECALL(CATIAFunctionalObjectProxy,ENVTIETypeLetter,ENVTIELetter)SearchFacet(iFM,iCreateIfNecessary,oFacet)); \
} \
HRESULT __stdcall  ENVTIEName::SearchFacetByName(const CATBSTR & iFM, CAT_VARIANT_BOOL iCreateIfNecessary, CATIAFunctionalFacet *& oFacet) \
{ \
return (ENVTIECALL(CATIAFunctionalObjectProxy,ENVTIETypeLetter,ENVTIELetter)SearchFacetByName(iFM,iCreateIfNecessary,oFacet)); \
} \
HRESULT __stdcall  ENVTIEName::get_X(double & oX) \
{ \
return (ENVTIECALL(CATIAFunctionalObjectProxy,ENVTIETypeLetter,ENVTIELetter)get_X(oX)); \
} \
HRESULT __stdcall  ENVTIEName::get_Y(double & oY) \
{ \
return (ENVTIECALL(CATIAFunctionalObjectProxy,ENVTIETypeLetter,ENVTIELetter)get_Y(oY)); \
} \
HRESULT __stdcall  ENVTIEName::SetCoords(double iX, double iY) \
{ \
return (ENVTIECALL(CATIAFunctionalObjectProxy,ENVTIETypeLetter,ENVTIELetter)SetCoords(iX,iY)); \
} \
HRESULT __stdcall  ENVTIEName::get_Document(CATIAFunctionalDocument *& oDocument) \
{ \
return (ENVTIECALL(CATIAFunctionalObjectProxy,ENVTIETypeLetter,ENVTIELetter)get_Document(oDocument)); \
} \
HRESULT __stdcall  ENVTIEName::get_Parameters(CATIAParameters *& oParameters) \
{ \
return (ENVTIECALL(CATIAFunctionalObjectProxy,ENVTIETypeLetter,ENVTIELetter)get_Parameters(oParameters)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAFunctionalObjectProxy,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAFunctionalObjectProxy,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAFunctionalObjectProxy,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAFunctionalObjectProxy,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAFunctionalObjectProxy,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAFunctionalObjectProxy(classe)    TIECATIAFunctionalObjectProxy##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAFunctionalObjectProxy(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAFunctionalObjectProxy, classe) \
 \
 \
CATImplementTIEMethods(CATIAFunctionalObjectProxy, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAFunctionalObjectProxy, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAFunctionalObjectProxy, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAFunctionalObjectProxy, classe) \
 \
HRESULT __stdcall  TIECATIAFunctionalObjectProxy##classe::get_Description(CATIAFunctionalDescription *& oDesc) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oDesc); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Description(oDesc); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oDesc); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalObjectProxy##classe::set_Description(CATIAFunctionalDescription * iDesc) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iDesc); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->set_Description(iDesc); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iDesc); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalObjectProxy##classe::GetFacet(CATIAFunctionalFacetMgr * iFM, CATIAFunctionalFacet *& oFacet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iFM,&oFacet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFacet(iFM,oFacet); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iFM,&oFacet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalObjectProxy##classe::GetFacetByName(const CATBSTR & iFM, CATIAFunctionalFacet *& oFacet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iFM,&oFacet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFacetByName(iFM,oFacet); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iFM,&oFacet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalObjectProxy##classe::SearchFacet(CATIAFunctionalFacetMgr * iFM, CAT_VARIANT_BOOL iCreateIfNecessary, CATIAFunctionalFacet *& oFacet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iFM,&iCreateIfNecessary,&oFacet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SearchFacet(iFM,iCreateIfNecessary,oFacet); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iFM,&iCreateIfNecessary,&oFacet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalObjectProxy##classe::SearchFacetByName(const CATBSTR & iFM, CAT_VARIANT_BOOL iCreateIfNecessary, CATIAFunctionalFacet *& oFacet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iFM,&iCreateIfNecessary,&oFacet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SearchFacetByName(iFM,iCreateIfNecessary,oFacet); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iFM,&iCreateIfNecessary,&oFacet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalObjectProxy##classe::get_X(double & oX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_X(oX); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalObjectProxy##classe::get_Y(double & oY) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oY); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Y(oY); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oY); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalObjectProxy##classe::SetCoords(double iX, double iY) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iX,&iY); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCoords(iX,iY); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iX,&iY); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalObjectProxy##classe::get_Document(CATIAFunctionalDocument *& oDocument) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oDocument); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Document(oDocument); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oDocument); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalObjectProxy##classe::get_Parameters(CATIAParameters *& oParameters) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oParameters); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parameters(oParameters); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oParameters); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctionalObjectProxy##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctionalObjectProxy##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctionalObjectProxy##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctionalObjectProxy##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctionalObjectProxy##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAFunctionalObjectProxy(classe) \
 \
 \
declare_TIE_CATIAFunctionalObjectProxy(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFunctionalObjectProxy##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFunctionalObjectProxy,"CATIAFunctionalObjectProxy",CATIAFunctionalObjectProxy::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFunctionalObjectProxy(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAFunctionalObjectProxy, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFunctionalObjectProxy##classe(classe::MetaObject(),CATIAFunctionalObjectProxy::MetaObject(),(void *)CreateTIECATIAFunctionalObjectProxy##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAFunctionalObjectProxy(classe) \
 \
 \
declare_TIE_CATIAFunctionalObjectProxy(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFunctionalObjectProxy##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFunctionalObjectProxy,"CATIAFunctionalObjectProxy",CATIAFunctionalObjectProxy::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFunctionalObjectProxy(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAFunctionalObjectProxy, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFunctionalObjectProxy##classe(classe::MetaObject(),CATIAFunctionalObjectProxy::MetaObject(),(void *)CreateTIECATIAFunctionalObjectProxy##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAFunctionalObjectProxy(classe) TIE_CATIAFunctionalObjectProxy(classe)
#else
#define BOA_CATIAFunctionalObjectProxy(classe) CATImplementBOA(CATIAFunctionalObjectProxy, classe)
#endif

#endif
