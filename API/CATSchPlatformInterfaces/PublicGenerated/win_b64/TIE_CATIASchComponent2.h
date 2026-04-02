#ifndef __TIE_CATIASchComponent2
#define __TIE_CATIASchComponent2

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchComponent2.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchComponent2 */
#define declare_TIE_CATIASchComponent2(classe) \
 \
 \
class TIECATIASchComponent2##classe : public CATIASchComponent2 \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchComponent2, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall PlaceInSpace(CATIASchGRRComp * iGRR, const CATSafeArrayVariant & iDb6Axis, CATIADocument * iDoc, CATIASchComponent *& oNewComponent); \
      virtual HRESULT __stdcall PlaceOnObject(CATIASchGRRComp * iGRR, const CATSafeArrayVariant & iDb6Axis, CATIASchAppConnectable * iObjectToConnect, CATIADocument * iDoc, CATIASchComponent *& oNewComponent); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchComponent2(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall PlaceInSpace(CATIASchGRRComp * iGRR, const CATSafeArrayVariant & iDb6Axis, CATIADocument * iDoc, CATIASchComponent *& oNewComponent); \
virtual HRESULT __stdcall PlaceOnObject(CATIASchGRRComp * iGRR, const CATSafeArrayVariant & iDb6Axis, CATIASchAppConnectable * iObjectToConnect, CATIADocument * iDoc, CATIASchComponent *& oNewComponent); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchComponent2(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::PlaceInSpace(CATIASchGRRComp * iGRR, const CATSafeArrayVariant & iDb6Axis, CATIADocument * iDoc, CATIASchComponent *& oNewComponent) \
{ \
return (ENVTIECALL(CATIASchComponent2,ENVTIETypeLetter,ENVTIELetter)PlaceInSpace(iGRR,iDb6Axis,iDoc,oNewComponent)); \
} \
HRESULT __stdcall  ENVTIEName::PlaceOnObject(CATIASchGRRComp * iGRR, const CATSafeArrayVariant & iDb6Axis, CATIASchAppConnectable * iObjectToConnect, CATIADocument * iDoc, CATIASchComponent *& oNewComponent) \
{ \
return (ENVTIECALL(CATIASchComponent2,ENVTIETypeLetter,ENVTIELetter)PlaceOnObject(iGRR,iDb6Axis,iObjectToConnect,iDoc,oNewComponent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchComponent2,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchComponent2,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchComponent2,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchComponent2,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchComponent2,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchComponent2(classe)    TIECATIASchComponent2##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchComponent2(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchComponent2, classe) \
 \
 \
CATImplementTIEMethods(CATIASchComponent2, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchComponent2, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchComponent2, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchComponent2, classe) \
 \
HRESULT __stdcall  TIECATIASchComponent2##classe::PlaceInSpace(CATIASchGRRComp * iGRR, const CATSafeArrayVariant & iDb6Axis, CATIADocument * iDoc, CATIASchComponent *& oNewComponent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iGRR,&iDb6Axis,&iDoc,&oNewComponent); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PlaceInSpace(iGRR,iDb6Axis,iDoc,oNewComponent); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iGRR,&iDb6Axis,&iDoc,&oNewComponent); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchComponent2##classe::PlaceOnObject(CATIASchGRRComp * iGRR, const CATSafeArrayVariant & iDb6Axis, CATIASchAppConnectable * iObjectToConnect, CATIADocument * iDoc, CATIASchComponent *& oNewComponent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iGRR,&iDb6Axis,&iObjectToConnect,&iDoc,&oNewComponent); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PlaceOnObject(iGRR,iDb6Axis,iObjectToConnect,iDoc,oNewComponent); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iGRR,&iDb6Axis,&iObjectToConnect,&iDoc,&oNewComponent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchComponent2##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchComponent2##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchComponent2##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchComponent2##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchComponent2##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchComponent2(classe) \
 \
 \
declare_TIE_CATIASchComponent2(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchComponent2##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchComponent2,"CATIASchComponent2",CATIASchComponent2::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchComponent2(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchComponent2, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchComponent2##classe(classe::MetaObject(),CATIASchComponent2::MetaObject(),(void *)CreateTIECATIASchComponent2##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchComponent2(classe) \
 \
 \
declare_TIE_CATIASchComponent2(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchComponent2##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchComponent2,"CATIASchComponent2",CATIASchComponent2::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchComponent2(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchComponent2, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchComponent2##classe(classe::MetaObject(),CATIASchComponent2::MetaObject(),(void *)CreateTIECATIASchComponent2##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchComponent2(classe) TIE_CATIASchComponent2(classe)
#else
#define BOA_CATIASchComponent2(classe) CATImplementBOA(CATIASchComponent2, classe)
#endif

#endif
