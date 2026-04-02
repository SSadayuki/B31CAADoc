#ifndef __TIE_CATIAFunctionalObject
#define __TIE_CATIAFunctionalObject

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAFunctionalObject.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAFunctionalObject */
#define declare_TIE_CATIAFunctionalObject(classe) \
 \
 \
class TIECATIAFunctionalObject##classe : public CATIAFunctionalObject \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAFunctionalObject, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
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



#define ENVTIEdeclare_CATIAFunctionalObject(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
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


#define ENVTIEdefine_CATIAFunctionalObject(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetFacet(CATIAFunctionalFacetMgr * iFM, CATIAFunctionalFacet *& oFacet) \
{ \
return (ENVTIECALL(CATIAFunctionalObject,ENVTIETypeLetter,ENVTIELetter)GetFacet(iFM,oFacet)); \
} \
HRESULT __stdcall  ENVTIEName::GetFacetByName(const CATBSTR & iFM, CATIAFunctionalFacet *& oFacet) \
{ \
return (ENVTIECALL(CATIAFunctionalObject,ENVTIETypeLetter,ENVTIELetter)GetFacetByName(iFM,oFacet)); \
} \
HRESULT __stdcall  ENVTIEName::SearchFacet(CATIAFunctionalFacetMgr * iFM, CAT_VARIANT_BOOL iCreateIfNecessary, CATIAFunctionalFacet *& oFacet) \
{ \
return (ENVTIECALL(CATIAFunctionalObject,ENVTIETypeLetter,ENVTIELetter)SearchFacet(iFM,iCreateIfNecessary,oFacet)); \
} \
HRESULT __stdcall  ENVTIEName::SearchFacetByName(const CATBSTR & iFM, CAT_VARIANT_BOOL iCreateIfNecessary, CATIAFunctionalFacet *& oFacet) \
{ \
return (ENVTIECALL(CATIAFunctionalObject,ENVTIETypeLetter,ENVTIELetter)SearchFacetByName(iFM,iCreateIfNecessary,oFacet)); \
} \
HRESULT __stdcall  ENVTIEName::get_X(double & oX) \
{ \
return (ENVTIECALL(CATIAFunctionalObject,ENVTIETypeLetter,ENVTIELetter)get_X(oX)); \
} \
HRESULT __stdcall  ENVTIEName::get_Y(double & oY) \
{ \
return (ENVTIECALL(CATIAFunctionalObject,ENVTIETypeLetter,ENVTIELetter)get_Y(oY)); \
} \
HRESULT __stdcall  ENVTIEName::SetCoords(double iX, double iY) \
{ \
return (ENVTIECALL(CATIAFunctionalObject,ENVTIETypeLetter,ENVTIELetter)SetCoords(iX,iY)); \
} \
HRESULT __stdcall  ENVTIEName::get_Document(CATIAFunctionalDocument *& oDocument) \
{ \
return (ENVTIECALL(CATIAFunctionalObject,ENVTIETypeLetter,ENVTIELetter)get_Document(oDocument)); \
} \
HRESULT __stdcall  ENVTIEName::get_Parameters(CATIAParameters *& oParameters) \
{ \
return (ENVTIECALL(CATIAFunctionalObject,ENVTIETypeLetter,ENVTIELetter)get_Parameters(oParameters)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAFunctionalObject,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAFunctionalObject,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAFunctionalObject,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAFunctionalObject,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAFunctionalObject,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAFunctionalObject(classe)    TIECATIAFunctionalObject##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAFunctionalObject(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAFunctionalObject, classe) \
 \
 \
CATImplementTIEMethods(CATIAFunctionalObject, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAFunctionalObject, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAFunctionalObject, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAFunctionalObject, classe) \
 \
HRESULT __stdcall  TIECATIAFunctionalObject##classe::GetFacet(CATIAFunctionalFacetMgr * iFM, CATIAFunctionalFacet *& oFacet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iFM,&oFacet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFacet(iFM,oFacet); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iFM,&oFacet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalObject##classe::GetFacetByName(const CATBSTR & iFM, CATIAFunctionalFacet *& oFacet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iFM,&oFacet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFacetByName(iFM,oFacet); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iFM,&oFacet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalObject##classe::SearchFacet(CATIAFunctionalFacetMgr * iFM, CAT_VARIANT_BOOL iCreateIfNecessary, CATIAFunctionalFacet *& oFacet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iFM,&iCreateIfNecessary,&oFacet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SearchFacet(iFM,iCreateIfNecessary,oFacet); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iFM,&iCreateIfNecessary,&oFacet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalObject##classe::SearchFacetByName(const CATBSTR & iFM, CAT_VARIANT_BOOL iCreateIfNecessary, CATIAFunctionalFacet *& oFacet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iFM,&iCreateIfNecessary,&oFacet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SearchFacetByName(iFM,iCreateIfNecessary,oFacet); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iFM,&iCreateIfNecessary,&oFacet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalObject##classe::get_X(double & oX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_X(oX); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalObject##classe::get_Y(double & oY) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oY); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Y(oY); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oY); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalObject##classe::SetCoords(double iX, double iY) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iX,&iY); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCoords(iX,iY); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iX,&iY); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalObject##classe::get_Document(CATIAFunctionalDocument *& oDocument) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oDocument); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Document(oDocument); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oDocument); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalObject##classe::get_Parameters(CATIAParameters *& oParameters) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oParameters); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parameters(oParameters); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oParameters); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctionalObject##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctionalObject##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctionalObject##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctionalObject##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctionalObject##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAFunctionalObject(classe) \
 \
 \
declare_TIE_CATIAFunctionalObject(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFunctionalObject##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFunctionalObject,"CATIAFunctionalObject",CATIAFunctionalObject::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFunctionalObject(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAFunctionalObject, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFunctionalObject##classe(classe::MetaObject(),CATIAFunctionalObject::MetaObject(),(void *)CreateTIECATIAFunctionalObject##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAFunctionalObject(classe) \
 \
 \
declare_TIE_CATIAFunctionalObject(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFunctionalObject##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFunctionalObject,"CATIAFunctionalObject",CATIAFunctionalObject::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFunctionalObject(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAFunctionalObject, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFunctionalObject##classe(classe::MetaObject(),CATIAFunctionalObject::MetaObject(),(void *)CreateTIECATIAFunctionalObject##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAFunctionalObject(classe) TIE_CATIAFunctionalObject(classe)
#else
#define BOA_CATIAFunctionalObject(classe) CATImplementBOA(CATIAFunctionalObject, classe)
#endif

#endif
