#ifndef __TIE_DNBIAMfgAssembly
#define __TIE_DNBIAMfgAssembly

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "DNBIAMfgAssembly.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface DNBIAMfgAssembly */
#define declare_TIE_DNBIAMfgAssembly(classe) \
 \
 \
class TIEDNBIAMfgAssembly##classe : public DNBIAMfgAssembly \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(DNBIAMfgAssembly, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_MAName(CATBSTR & oMAName); \
      virtual HRESULT __stdcall put_MAName(const CATBSTR & iMAName); \
      virtual HRESULT __stdcall get_MAPartNumber(CATBSTR & oMAPartNumber); \
      virtual HRESULT __stdcall put_MAPartNumber(const CATBSTR & iMAPartNumber); \
      virtual HRESULT __stdcall get_MAType(DNBIAMfgAssemblyType & oMAType); \
      virtual HRESULT __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAItem *& oItem); \
      virtual HRESULT __stdcall AddPart(CATIAItem * iItem); \
      virtual HRESULT __stdcall RemovePart(CATIAItem * iItem); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_DNBIAMfgAssembly(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_MAName(CATBSTR & oMAName); \
virtual HRESULT __stdcall put_MAName(const CATBSTR & iMAName); \
virtual HRESULT __stdcall get_MAPartNumber(CATBSTR & oMAPartNumber); \
virtual HRESULT __stdcall put_MAPartNumber(const CATBSTR & iMAPartNumber); \
virtual HRESULT __stdcall get_MAType(DNBIAMfgAssemblyType & oMAType); \
virtual HRESULT __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAItem *& oItem); \
virtual HRESULT __stdcall AddPart(CATIAItem * iItem); \
virtual HRESULT __stdcall RemovePart(CATIAItem * iItem); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_DNBIAMfgAssembly(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_MAName(CATBSTR & oMAName) \
{ \
return (ENVTIECALL(DNBIAMfgAssembly,ENVTIETypeLetter,ENVTIELetter)get_MAName(oMAName)); \
} \
HRESULT __stdcall  ENVTIEName::put_MAName(const CATBSTR & iMAName) \
{ \
return (ENVTIECALL(DNBIAMfgAssembly,ENVTIETypeLetter,ENVTIELetter)put_MAName(iMAName)); \
} \
HRESULT __stdcall  ENVTIEName::get_MAPartNumber(CATBSTR & oMAPartNumber) \
{ \
return (ENVTIECALL(DNBIAMfgAssembly,ENVTIETypeLetter,ENVTIELetter)get_MAPartNumber(oMAPartNumber)); \
} \
HRESULT __stdcall  ENVTIEName::put_MAPartNumber(const CATBSTR & iMAPartNumber) \
{ \
return (ENVTIECALL(DNBIAMfgAssembly,ENVTIETypeLetter,ENVTIELetter)put_MAPartNumber(iMAPartNumber)); \
} \
HRESULT __stdcall  ENVTIEName::get_MAType(DNBIAMfgAssemblyType & oMAType) \
{ \
return (ENVTIECALL(DNBIAMfgAssembly,ENVTIETypeLetter,ENVTIELetter)get_MAType(oMAType)); \
} \
HRESULT __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(DNBIAMfgAssembly,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIAItem *& oItem) \
{ \
return (ENVTIECALL(DNBIAMfgAssembly,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oItem)); \
} \
HRESULT __stdcall  ENVTIEName::AddPart(CATIAItem * iItem) \
{ \
return (ENVTIECALL(DNBIAMfgAssembly,ENVTIETypeLetter,ENVTIELetter)AddPart(iItem)); \
} \
HRESULT __stdcall  ENVTIEName::RemovePart(CATIAItem * iItem) \
{ \
return (ENVTIECALL(DNBIAMfgAssembly,ENVTIETypeLetter,ENVTIELetter)RemovePart(iItem)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(DNBIAMfgAssembly,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(DNBIAMfgAssembly,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(DNBIAMfgAssembly,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(DNBIAMfgAssembly,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(DNBIAMfgAssembly,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_DNBIAMfgAssembly(classe)    TIEDNBIAMfgAssembly##classe


/* Common methods inside a TIE */
#define common_TIE_DNBIAMfgAssembly(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(DNBIAMfgAssembly, classe) \
 \
 \
CATImplementTIEMethods(DNBIAMfgAssembly, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(DNBIAMfgAssembly, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(DNBIAMfgAssembly, classe) \
CATImplementCATBaseUnknownMethodsForTIE(DNBIAMfgAssembly, classe) \
 \
HRESULT __stdcall  TIEDNBIAMfgAssembly##classe::get_MAName(CATBSTR & oMAName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oMAName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MAName(oMAName); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oMAName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEDNBIAMfgAssembly##classe::put_MAName(const CATBSTR & iMAName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iMAName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MAName(iMAName); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iMAName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEDNBIAMfgAssembly##classe::get_MAPartNumber(CATBSTR & oMAPartNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oMAPartNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MAPartNumber(oMAPartNumber); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oMAPartNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEDNBIAMfgAssembly##classe::put_MAPartNumber(const CATBSTR & iMAPartNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iMAPartNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MAPartNumber(iMAPartNumber); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iMAPartNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEDNBIAMfgAssembly##classe::get_MAType(DNBIAMfgAssemblyType & oMAType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oMAType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MAType(oMAType); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oMAType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEDNBIAMfgAssembly##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNbItems); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEDNBIAMfgAssembly##classe::Item(const CATVariant & iIndex, CATIAItem *& oItem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iIndex,&oItem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oItem); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iIndex,&oItem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEDNBIAMfgAssembly##classe::AddPart(CATIAItem * iItem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iItem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddPart(iItem); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iItem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEDNBIAMfgAssembly##classe::RemovePart(CATIAItem * iItem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iItem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemovePart(iItem); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iItem); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEDNBIAMfgAssembly##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEDNBIAMfgAssembly##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEDNBIAMfgAssembly##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEDNBIAMfgAssembly##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEDNBIAMfgAssembly##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_DNBIAMfgAssembly(classe) \
 \
 \
declare_TIE_DNBIAMfgAssembly(classe) \
 \
 \
CATMetaClass * __stdcall TIEDNBIAMfgAssembly##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_DNBIAMfgAssembly,"DNBIAMfgAssembly",DNBIAMfgAssembly::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_DNBIAMfgAssembly(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(DNBIAMfgAssembly, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicDNBIAMfgAssembly##classe(classe::MetaObject(),DNBIAMfgAssembly::MetaObject(),(void *)CreateTIEDNBIAMfgAssembly##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_DNBIAMfgAssembly(classe) \
 \
 \
declare_TIE_DNBIAMfgAssembly(classe) \
 \
 \
CATMetaClass * __stdcall TIEDNBIAMfgAssembly##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_DNBIAMfgAssembly,"DNBIAMfgAssembly",DNBIAMfgAssembly::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_DNBIAMfgAssembly(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(DNBIAMfgAssembly, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicDNBIAMfgAssembly##classe(classe::MetaObject(),DNBIAMfgAssembly::MetaObject(),(void *)CreateTIEDNBIAMfgAssembly##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_DNBIAMfgAssembly(classe) TIE_DNBIAMfgAssembly(classe)
#else
#define BOA_DNBIAMfgAssembly(classe) CATImplementBOA(DNBIAMfgAssembly, classe)
#endif

#endif
