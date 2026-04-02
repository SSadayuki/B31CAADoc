#ifndef __TIE_CATIAReplaceFace
#define __TIE_CATIAReplaceFace

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAReplaceFace.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAReplaceFace */
#define declare_TIE_CATIAReplaceFace(classe) \
 \
 \
class TIECATIAReplaceFace##classe : public CATIAReplaceFace \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAReplaceFace, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_RemoveFace(CATIAReferences *& oRemoveFaces); \
      virtual HRESULT __stdcall get_SplittingSide(CatSplitSide & oSplittingSide); \
      virtual HRESULT __stdcall put_SplittingSide(CatSplitSide iSplittingSide); \
      virtual HRESULT __stdcall DeleteRemoveFace(CATIAReference * iRemoveFace); \
      virtual HRESULT __stdcall AddRemoveFace(CATIAReference * iRemoveFace); \
      virtual HRESULT __stdcall AddSplitPlane(CATIAReference * iSplitPlane); \
      virtual HRESULT __stdcall get_Surface(CATIAReference *& oSurface); \
      virtual HRESULT __stdcall put_Surface(CATIAReference * iSurface); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAReplaceFace(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_RemoveFace(CATIAReferences *& oRemoveFaces); \
virtual HRESULT __stdcall get_SplittingSide(CatSplitSide & oSplittingSide); \
virtual HRESULT __stdcall put_SplittingSide(CatSplitSide iSplittingSide); \
virtual HRESULT __stdcall DeleteRemoveFace(CATIAReference * iRemoveFace); \
virtual HRESULT __stdcall AddRemoveFace(CATIAReference * iRemoveFace); \
virtual HRESULT __stdcall AddSplitPlane(CATIAReference * iSplitPlane); \
virtual HRESULT __stdcall get_Surface(CATIAReference *& oSurface); \
virtual HRESULT __stdcall put_Surface(CATIAReference * iSurface); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAReplaceFace(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_RemoveFace(CATIAReferences *& oRemoveFaces) \
{ \
return (ENVTIECALL(CATIAReplaceFace,ENVTIETypeLetter,ENVTIELetter)get_RemoveFace(oRemoveFaces)); \
} \
HRESULT __stdcall  ENVTIEName::get_SplittingSide(CatSplitSide & oSplittingSide) \
{ \
return (ENVTIECALL(CATIAReplaceFace,ENVTIETypeLetter,ENVTIELetter)get_SplittingSide(oSplittingSide)); \
} \
HRESULT __stdcall  ENVTIEName::put_SplittingSide(CatSplitSide iSplittingSide) \
{ \
return (ENVTIECALL(CATIAReplaceFace,ENVTIETypeLetter,ENVTIELetter)put_SplittingSide(iSplittingSide)); \
} \
HRESULT __stdcall  ENVTIEName::DeleteRemoveFace(CATIAReference * iRemoveFace) \
{ \
return (ENVTIECALL(CATIAReplaceFace,ENVTIETypeLetter,ENVTIELetter)DeleteRemoveFace(iRemoveFace)); \
} \
HRESULT __stdcall  ENVTIEName::AddRemoveFace(CATIAReference * iRemoveFace) \
{ \
return (ENVTIECALL(CATIAReplaceFace,ENVTIETypeLetter,ENVTIELetter)AddRemoveFace(iRemoveFace)); \
} \
HRESULT __stdcall  ENVTIEName::AddSplitPlane(CATIAReference * iSplitPlane) \
{ \
return (ENVTIECALL(CATIAReplaceFace,ENVTIETypeLetter,ENVTIELetter)AddSplitPlane(iSplitPlane)); \
} \
HRESULT __stdcall  ENVTIEName::get_Surface(CATIAReference *& oSurface) \
{ \
return (ENVTIECALL(CATIAReplaceFace,ENVTIETypeLetter,ENVTIELetter)get_Surface(oSurface)); \
} \
HRESULT __stdcall  ENVTIEName::put_Surface(CATIAReference * iSurface) \
{ \
return (ENVTIECALL(CATIAReplaceFace,ENVTIETypeLetter,ENVTIELetter)put_Surface(iSurface)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAReplaceFace,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAReplaceFace,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAReplaceFace,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAReplaceFace,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAReplaceFace,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAReplaceFace(classe)    TIECATIAReplaceFace##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAReplaceFace(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAReplaceFace, classe) \
 \
 \
CATImplementTIEMethods(CATIAReplaceFace, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAReplaceFace, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAReplaceFace, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAReplaceFace, classe) \
 \
HRESULT __stdcall  TIECATIAReplaceFace##classe::get_RemoveFace(CATIAReferences *& oRemoveFaces) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oRemoveFaces); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RemoveFace(oRemoveFaces); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oRemoveFaces); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReplaceFace##classe::get_SplittingSide(CatSplitSide & oSplittingSide) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oSplittingSide); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SplittingSide(oSplittingSide); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oSplittingSide); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReplaceFace##classe::put_SplittingSide(CatSplitSide iSplittingSide) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iSplittingSide); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SplittingSide(iSplittingSide); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iSplittingSide); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReplaceFace##classe::DeleteRemoveFace(CATIAReference * iRemoveFace) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iRemoveFace); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DeleteRemoveFace(iRemoveFace); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iRemoveFace); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReplaceFace##classe::AddRemoveFace(CATIAReference * iRemoveFace) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iRemoveFace); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddRemoveFace(iRemoveFace); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iRemoveFace); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReplaceFace##classe::AddSplitPlane(CATIAReference * iSplitPlane) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iSplitPlane); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddSplitPlane(iSplitPlane); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iSplitPlane); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReplaceFace##classe::get_Surface(CATIAReference *& oSurface) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oSurface); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Surface(oSurface); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oSurface); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReplaceFace##classe::put_Surface(CATIAReference * iSurface) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iSurface); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Surface(iSurface); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iSurface); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAReplaceFace##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAReplaceFace##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAReplaceFace##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAReplaceFace##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAReplaceFace##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAReplaceFace(classe) \
 \
 \
declare_TIE_CATIAReplaceFace(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAReplaceFace##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAReplaceFace,"CATIAReplaceFace",CATIAReplaceFace::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAReplaceFace(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAReplaceFace, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAReplaceFace##classe(classe::MetaObject(),CATIAReplaceFace::MetaObject(),(void *)CreateTIECATIAReplaceFace##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAReplaceFace(classe) \
 \
 \
declare_TIE_CATIAReplaceFace(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAReplaceFace##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAReplaceFace,"CATIAReplaceFace",CATIAReplaceFace::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAReplaceFace(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAReplaceFace, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAReplaceFace##classe(classe::MetaObject(),CATIAReplaceFace::MetaObject(),(void *)CreateTIECATIAReplaceFace##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAReplaceFace(classe) TIE_CATIAReplaceFace(classe)
#else
#define BOA_CATIAReplaceFace(classe) CATImplementBOA(CATIAReplaceFace, classe)
#endif

#endif
