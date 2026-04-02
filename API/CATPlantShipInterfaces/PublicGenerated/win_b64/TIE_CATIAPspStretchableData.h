#ifndef __TIE_CATIAPspStretchableData
#define __TIE_CATIAPspStretchableData

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAPspStretchableData.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPspStretchableData */
#define declare_TIE_CATIAPspStretchableData(classe) \
 \
 \
class TIECATIAPspStretchableData##classe : public CATIAPspStretchableData \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPspStretchableData, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall ListDefinitionPoints(CATIAProduct * iRelAxis, CATIAPspListOfDoubles *& oListPoints); \
      virtual HRESULT __stdcall ListBendData(CATIAPspListOfDoubles *& oListOfBendRadius); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAPspStretchableData(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall ListDefinitionPoints(CATIAProduct * iRelAxis, CATIAPspListOfDoubles *& oListPoints); \
virtual HRESULT __stdcall ListBendData(CATIAPspListOfDoubles *& oListOfBendRadius); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAPspStretchableData(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::ListDefinitionPoints(CATIAProduct * iRelAxis, CATIAPspListOfDoubles *& oListPoints) \
{ \
return (ENVTIECALL(CATIAPspStretchableData,ENVTIETypeLetter,ENVTIELetter)ListDefinitionPoints(iRelAxis,oListPoints)); \
} \
HRESULT __stdcall  ENVTIEName::ListBendData(CATIAPspListOfDoubles *& oListOfBendRadius) \
{ \
return (ENVTIECALL(CATIAPspStretchableData,ENVTIETypeLetter,ENVTIELetter)ListBendData(oListOfBendRadius)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPspStretchableData,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPspStretchableData,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspStretchableData,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspStretchableData,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAPspStretchableData,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPspStretchableData(classe)    TIECATIAPspStretchableData##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPspStretchableData(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPspStretchableData, classe) \
 \
 \
CATImplementTIEMethods(CATIAPspStretchableData, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPspStretchableData, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPspStretchableData, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPspStretchableData, classe) \
 \
HRESULT __stdcall  TIECATIAPspStretchableData##classe::ListDefinitionPoints(CATIAProduct * iRelAxis, CATIAPspListOfDoubles *& oListPoints) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iRelAxis,&oListPoints); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListDefinitionPoints(iRelAxis,oListPoints); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iRelAxis,&oListPoints); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspStretchableData##classe::ListBendData(CATIAPspListOfDoubles *& oListOfBendRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oListOfBendRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListBendData(oListOfBendRadius); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oListOfBendRadius); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspStretchableData##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspStretchableData##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspStretchableData##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspStretchableData##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspStretchableData##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPspStretchableData(classe) \
 \
 \
declare_TIE_CATIAPspStretchableData(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspStretchableData##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspStretchableData,"CATIAPspStretchableData",CATIAPspStretchableData::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspStretchableData(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPspStretchableData, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspStretchableData##classe(classe::MetaObject(),CATIAPspStretchableData::MetaObject(),(void *)CreateTIECATIAPspStretchableData##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPspStretchableData(classe) \
 \
 \
declare_TIE_CATIAPspStretchableData(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspStretchableData##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspStretchableData,"CATIAPspStretchableData",CATIAPspStretchableData::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspStretchableData(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPspStretchableData, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspStretchableData##classe(classe::MetaObject(),CATIAPspStretchableData::MetaObject(),(void *)CreateTIECATIAPspStretchableData##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPspStretchableData(classe) TIE_CATIAPspStretchableData(classe)
#else
#define BOA_CATIAPspStretchableData(classe) CATImplementBOA(CATIAPspStretchableData, classe)
#endif

#endif
