#ifndef __TIE_CATIAPCBArea
#define __TIE_CATIAPCBArea

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAPCBArea.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPCBArea */
#define declare_TIE_CATIAPCBArea(classe) \
 \
 \
class TIECATIAPCBArea##classe : public CATIAPCBArea \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPCBArea, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_AreaType(CATBSTR *& oCstType); \
      virtual HRESULT __stdcall get_OWNER(CATBSTR *& oOwner); \
      virtual HRESULT __stdcall put_OWNER(const CATBSTR & iOwner); \
      virtual HRESULT __stdcall get_LAYER(CATBSTR *& oLayer); \
      virtual HRESULT __stdcall get_Identifier(CATBSTR *& oIdentifier); \
      virtual HRESULT __stdcall put_Identifier(const CATBSTR & iIdentifier); \
      virtual HRESULT __stdcall get_Heightmax(double & oMax); \
      virtual HRESULT __stdcall put_Heightmax(double oMax); \
      virtual HRESULT __stdcall get_Heightmin(double & oMin); \
      virtual HRESULT __stdcall put_Heightmin(double iMin); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAPCBArea(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_AreaType(CATBSTR *& oCstType); \
virtual HRESULT __stdcall get_OWNER(CATBSTR *& oOwner); \
virtual HRESULT __stdcall put_OWNER(const CATBSTR & iOwner); \
virtual HRESULT __stdcall get_LAYER(CATBSTR *& oLayer); \
virtual HRESULT __stdcall get_Identifier(CATBSTR *& oIdentifier); \
virtual HRESULT __stdcall put_Identifier(const CATBSTR & iIdentifier); \
virtual HRESULT __stdcall get_Heightmax(double & oMax); \
virtual HRESULT __stdcall put_Heightmax(double oMax); \
virtual HRESULT __stdcall get_Heightmin(double & oMin); \
virtual HRESULT __stdcall put_Heightmin(double iMin); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAPCBArea(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_AreaType(CATBSTR *& oCstType) \
{ \
return (ENVTIECALL(CATIAPCBArea,ENVTIETypeLetter,ENVTIELetter)get_AreaType(oCstType)); \
} \
HRESULT __stdcall  ENVTIEName::get_OWNER(CATBSTR *& oOwner) \
{ \
return (ENVTIECALL(CATIAPCBArea,ENVTIETypeLetter,ENVTIELetter)get_OWNER(oOwner)); \
} \
HRESULT __stdcall  ENVTIEName::put_OWNER(const CATBSTR & iOwner) \
{ \
return (ENVTIECALL(CATIAPCBArea,ENVTIETypeLetter,ENVTIELetter)put_OWNER(iOwner)); \
} \
HRESULT __stdcall  ENVTIEName::get_LAYER(CATBSTR *& oLayer) \
{ \
return (ENVTIECALL(CATIAPCBArea,ENVTIETypeLetter,ENVTIELetter)get_LAYER(oLayer)); \
} \
HRESULT __stdcall  ENVTIEName::get_Identifier(CATBSTR *& oIdentifier) \
{ \
return (ENVTIECALL(CATIAPCBArea,ENVTIETypeLetter,ENVTIELetter)get_Identifier(oIdentifier)); \
} \
HRESULT __stdcall  ENVTIEName::put_Identifier(const CATBSTR & iIdentifier) \
{ \
return (ENVTIECALL(CATIAPCBArea,ENVTIETypeLetter,ENVTIELetter)put_Identifier(iIdentifier)); \
} \
HRESULT __stdcall  ENVTIEName::get_Heightmax(double & oMax) \
{ \
return (ENVTIECALL(CATIAPCBArea,ENVTIETypeLetter,ENVTIELetter)get_Heightmax(oMax)); \
} \
HRESULT __stdcall  ENVTIEName::put_Heightmax(double oMax) \
{ \
return (ENVTIECALL(CATIAPCBArea,ENVTIETypeLetter,ENVTIELetter)put_Heightmax(oMax)); \
} \
HRESULT __stdcall  ENVTIEName::get_Heightmin(double & oMin) \
{ \
return (ENVTIECALL(CATIAPCBArea,ENVTIETypeLetter,ENVTIELetter)get_Heightmin(oMin)); \
} \
HRESULT __stdcall  ENVTIEName::put_Heightmin(double iMin) \
{ \
return (ENVTIECALL(CATIAPCBArea,ENVTIETypeLetter,ENVTIELetter)put_Heightmin(iMin)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPCBArea,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPCBArea,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAPCBArea,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAPCBArea,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAPCBArea,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPCBArea(classe)    TIECATIAPCBArea##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPCBArea(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPCBArea, classe) \
 \
 \
CATImplementTIEMethods(CATIAPCBArea, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPCBArea, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPCBArea, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPCBArea, classe) \
 \
HRESULT __stdcall  TIECATIAPCBArea##classe::get_AreaType(CATBSTR *& oCstType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oCstType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AreaType(oCstType); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oCstType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPCBArea##classe::get_OWNER(CATBSTR *& oOwner) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oOwner); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_OWNER(oOwner); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oOwner); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPCBArea##classe::put_OWNER(const CATBSTR & iOwner) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iOwner); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_OWNER(iOwner); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iOwner); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPCBArea##classe::get_LAYER(CATBSTR *& oLayer) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oLayer); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LAYER(oLayer); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oLayer); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPCBArea##classe::get_Identifier(CATBSTR *& oIdentifier) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oIdentifier); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Identifier(oIdentifier); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oIdentifier); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPCBArea##classe::put_Identifier(const CATBSTR & iIdentifier) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iIdentifier); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Identifier(iIdentifier); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iIdentifier); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPCBArea##classe::get_Heightmax(double & oMax) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oMax); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Heightmax(oMax); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oMax); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPCBArea##classe::put_Heightmax(double oMax) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oMax); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Heightmax(oMax); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oMax); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPCBArea##classe::get_Heightmin(double & oMin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oMin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Heightmin(oMin); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oMin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPCBArea##classe::put_Heightmin(double iMin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iMin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Heightmin(iMin); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iMin); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPCBArea##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPCBArea##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPCBArea##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPCBArea##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPCBArea##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPCBArea(classe) \
 \
 \
declare_TIE_CATIAPCBArea(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPCBArea##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPCBArea,"CATIAPCBArea",CATIAPCBArea::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPCBArea(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPCBArea, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPCBArea##classe(classe::MetaObject(),CATIAPCBArea::MetaObject(),(void *)CreateTIECATIAPCBArea##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPCBArea(classe) \
 \
 \
declare_TIE_CATIAPCBArea(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPCBArea##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPCBArea,"CATIAPCBArea",CATIAPCBArea::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPCBArea(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPCBArea, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPCBArea##classe(classe::MetaObject(),CATIAPCBArea::MetaObject(),(void *)CreateTIECATIAPCBArea##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPCBArea(classe) TIE_CATIAPCBArea(classe)
#else
#define BOA_CATIAPCBArea(classe) CATImplementBOA(CATIAPCBArea, classe)
#endif

#endif
