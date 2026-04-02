#ifndef __TIE_CATIARemoveFace
#define __TIE_CATIARemoveFace

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIARemoveFace.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIARemoveFace */
#define declare_TIE_CATIARemoveFace(classe) \
 \
 \
class TIECATIARemoveFace##classe : public CATIARemoveFace \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIARemoveFace, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall put_KeepFace(CATIAReference * iKeepFace); \
      virtual HRESULT __stdcall remove_KeepFace(CATIAReference * iKeepFace); \
      virtual HRESULT __stdcall put_RemoveFace(CATIAReference * iRemoveFace); \
      virtual HRESULT __stdcall remove_RemoveFace(CATIAReference * iRemoveFace); \
      virtual HRESULT __stdcall get_KeepFaces(CATIAReferences *& oKeepFaces); \
      virtual HRESULT __stdcall get_RemoveFaces(CATIAReferences *& oRemoveFaces); \
      virtual HRESULT __stdcall get_Propagation(CATIAReferences *& oPropagateFaces); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIARemoveFace(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall put_KeepFace(CATIAReference * iKeepFace); \
virtual HRESULT __stdcall remove_KeepFace(CATIAReference * iKeepFace); \
virtual HRESULT __stdcall put_RemoveFace(CATIAReference * iRemoveFace); \
virtual HRESULT __stdcall remove_RemoveFace(CATIAReference * iRemoveFace); \
virtual HRESULT __stdcall get_KeepFaces(CATIAReferences *& oKeepFaces); \
virtual HRESULT __stdcall get_RemoveFaces(CATIAReferences *& oRemoveFaces); \
virtual HRESULT __stdcall get_Propagation(CATIAReferences *& oPropagateFaces); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIARemoveFace(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::put_KeepFace(CATIAReference * iKeepFace) \
{ \
return (ENVTIECALL(CATIARemoveFace,ENVTIETypeLetter,ENVTIELetter)put_KeepFace(iKeepFace)); \
} \
HRESULT __stdcall  ENVTIEName::remove_KeepFace(CATIAReference * iKeepFace) \
{ \
return (ENVTIECALL(CATIARemoveFace,ENVTIETypeLetter,ENVTIELetter)remove_KeepFace(iKeepFace)); \
} \
HRESULT __stdcall  ENVTIEName::put_RemoveFace(CATIAReference * iRemoveFace) \
{ \
return (ENVTIECALL(CATIARemoveFace,ENVTIETypeLetter,ENVTIELetter)put_RemoveFace(iRemoveFace)); \
} \
HRESULT __stdcall  ENVTIEName::remove_RemoveFace(CATIAReference * iRemoveFace) \
{ \
return (ENVTIECALL(CATIARemoveFace,ENVTIETypeLetter,ENVTIELetter)remove_RemoveFace(iRemoveFace)); \
} \
HRESULT __stdcall  ENVTIEName::get_KeepFaces(CATIAReferences *& oKeepFaces) \
{ \
return (ENVTIECALL(CATIARemoveFace,ENVTIETypeLetter,ENVTIELetter)get_KeepFaces(oKeepFaces)); \
} \
HRESULT __stdcall  ENVTIEName::get_RemoveFaces(CATIAReferences *& oRemoveFaces) \
{ \
return (ENVTIECALL(CATIARemoveFace,ENVTIETypeLetter,ENVTIELetter)get_RemoveFaces(oRemoveFaces)); \
} \
HRESULT __stdcall  ENVTIEName::get_Propagation(CATIAReferences *& oPropagateFaces) \
{ \
return (ENVTIECALL(CATIARemoveFace,ENVTIETypeLetter,ENVTIELetter)get_Propagation(oPropagateFaces)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIARemoveFace,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIARemoveFace,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIARemoveFace,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIARemoveFace,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIARemoveFace,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIARemoveFace(classe)    TIECATIARemoveFace##classe


/* Common methods inside a TIE */
#define common_TIE_CATIARemoveFace(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIARemoveFace, classe) \
 \
 \
CATImplementTIEMethods(CATIARemoveFace, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIARemoveFace, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIARemoveFace, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIARemoveFace, classe) \
 \
HRESULT __stdcall  TIECATIARemoveFace##classe::put_KeepFace(CATIAReference * iKeepFace) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iKeepFace); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_KeepFace(iKeepFace); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iKeepFace); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARemoveFace##classe::remove_KeepFace(CATIAReference * iKeepFace) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iKeepFace); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->remove_KeepFace(iKeepFace); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iKeepFace); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARemoveFace##classe::put_RemoveFace(CATIAReference * iRemoveFace) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iRemoveFace); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RemoveFace(iRemoveFace); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iRemoveFace); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARemoveFace##classe::remove_RemoveFace(CATIAReference * iRemoveFace) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iRemoveFace); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->remove_RemoveFace(iRemoveFace); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iRemoveFace); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARemoveFace##classe::get_KeepFaces(CATIAReferences *& oKeepFaces) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oKeepFaces); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_KeepFaces(oKeepFaces); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oKeepFaces); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARemoveFace##classe::get_RemoveFaces(CATIAReferences *& oRemoveFaces) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oRemoveFaces); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RemoveFaces(oRemoveFaces); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oRemoveFaces); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARemoveFace##classe::get_Propagation(CATIAReferences *& oPropagateFaces) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oPropagateFaces); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Propagation(oPropagateFaces); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oPropagateFaces); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARemoveFace##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARemoveFace##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARemoveFace##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARemoveFace##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARemoveFace##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIARemoveFace(classe) \
 \
 \
declare_TIE_CATIARemoveFace(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIARemoveFace##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIARemoveFace,"CATIARemoveFace",CATIARemoveFace::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIARemoveFace(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIARemoveFace, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIARemoveFace##classe(classe::MetaObject(),CATIARemoveFace::MetaObject(),(void *)CreateTIECATIARemoveFace##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIARemoveFace(classe) \
 \
 \
declare_TIE_CATIARemoveFace(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIARemoveFace##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIARemoveFace,"CATIARemoveFace",CATIARemoveFace::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIARemoveFace(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIARemoveFace, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIARemoveFace##classe(classe::MetaObject(),CATIARemoveFace::MetaObject(),(void *)CreateTIECATIARemoveFace##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIARemoveFace(classe) TIE_CATIARemoveFace(classe)
#else
#define BOA_CATIARemoveFace(classe) CATImplementBOA(CATIARemoveFace, classe)
#endif

#endif
