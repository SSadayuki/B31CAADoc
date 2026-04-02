#ifndef __TIE_CATIASchCntrConnect
#define __TIE_CATIASchCntrConnect

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchCntrConnect.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchCntrConnect */
#define declare_TIE_CATIASchCntrConnect(classe) \
 \
 \
class TIECATIASchCntrConnect##classe : public CATIASchCntrConnect \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchCntrConnect, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall OKToConnect(CATIASchGRRCntr * iGRRCntr, CAT_VARIANT_BOOL & oBYes); \
      virtual HRESULT __stdcall GetTransformMatrix(CATIASchGRRCntr * iGRRCntr, CATIASchListOfDoubles *& oDb6Matrix); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchCntrConnect(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall OKToConnect(CATIASchGRRCntr * iGRRCntr, CAT_VARIANT_BOOL & oBYes); \
virtual HRESULT __stdcall GetTransformMatrix(CATIASchGRRCntr * iGRRCntr, CATIASchListOfDoubles *& oDb6Matrix); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchCntrConnect(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::OKToConnect(CATIASchGRRCntr * iGRRCntr, CAT_VARIANT_BOOL & oBYes) \
{ \
return (ENVTIECALL(CATIASchCntrConnect,ENVTIETypeLetter,ENVTIELetter)OKToConnect(iGRRCntr,oBYes)); \
} \
HRESULT __stdcall  ENVTIEName::GetTransformMatrix(CATIASchGRRCntr * iGRRCntr, CATIASchListOfDoubles *& oDb6Matrix) \
{ \
return (ENVTIECALL(CATIASchCntrConnect,ENVTIETypeLetter,ENVTIELetter)GetTransformMatrix(iGRRCntr,oDb6Matrix)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchCntrConnect,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchCntrConnect,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchCntrConnect,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchCntrConnect,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchCntrConnect,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchCntrConnect(classe)    TIECATIASchCntrConnect##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchCntrConnect(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchCntrConnect, classe) \
 \
 \
CATImplementTIEMethods(CATIASchCntrConnect, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchCntrConnect, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchCntrConnect, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchCntrConnect, classe) \
 \
HRESULT __stdcall  TIECATIASchCntrConnect##classe::OKToConnect(CATIASchGRRCntr * iGRRCntr, CAT_VARIANT_BOOL & oBYes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iGRRCntr,&oBYes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OKToConnect(iGRRCntr,oBYes); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iGRRCntr,&oBYes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchCntrConnect##classe::GetTransformMatrix(CATIASchGRRCntr * iGRRCntr, CATIASchListOfDoubles *& oDb6Matrix) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iGRRCntr,&oDb6Matrix); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTransformMatrix(iGRRCntr,oDb6Matrix); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iGRRCntr,&oDb6Matrix); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchCntrConnect##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchCntrConnect##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchCntrConnect##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchCntrConnect##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchCntrConnect##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchCntrConnect(classe) \
 \
 \
declare_TIE_CATIASchCntrConnect(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchCntrConnect##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchCntrConnect,"CATIASchCntrConnect",CATIASchCntrConnect::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchCntrConnect(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchCntrConnect, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchCntrConnect##classe(classe::MetaObject(),CATIASchCntrConnect::MetaObject(),(void *)CreateTIECATIASchCntrConnect##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchCntrConnect(classe) \
 \
 \
declare_TIE_CATIASchCntrConnect(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchCntrConnect##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchCntrConnect,"CATIASchCntrConnect",CATIASchCntrConnect::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchCntrConnect(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchCntrConnect, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchCntrConnect##classe(classe::MetaObject(),CATIASchCntrConnect::MetaObject(),(void *)CreateTIECATIASchCntrConnect##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchCntrConnect(classe) TIE_CATIASchCntrConnect(classe)
#else
#define BOA_CATIASchCntrConnect(classe) CATImplementBOA(CATIASchCntrConnect, classe)
#endif

#endif
