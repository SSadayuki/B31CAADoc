#ifndef __TIE_CATIASchAppMultiImageMaster
#define __TIE_CATIASchAppMultiImageMaster

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchAppMultiImageMaster.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchAppMultiImageMaster */
#define declare_TIE_CATIASchAppMultiImageMaster(classe) \
 \
 \
class TIECATIASchAppMultiImageMaster##classe : public CATIASchAppMultiImageMaster \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchAppMultiImageMaster, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AppListImages(CATIASchListOfBSTRs * iLFilter, CATIASchListOfObjects *& oLImages); \
      virtual HRESULT __stdcall AppIsOKToCreateImage(CATIADocument * iImageDoc, CAT_VARIANT_BOOL & oBYes, CATBSTR & oNLSFileName, CATBSTR & oNLSFileKeyToMessage); \
      virtual HRESULT __stdcall AppAddImage(CATIASchAppConnectable * iImage); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchAppMultiImageMaster(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AppListImages(CATIASchListOfBSTRs * iLFilter, CATIASchListOfObjects *& oLImages); \
virtual HRESULT __stdcall AppIsOKToCreateImage(CATIADocument * iImageDoc, CAT_VARIANT_BOOL & oBYes, CATBSTR & oNLSFileName, CATBSTR & oNLSFileKeyToMessage); \
virtual HRESULT __stdcall AppAddImage(CATIASchAppConnectable * iImage); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchAppMultiImageMaster(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AppListImages(CATIASchListOfBSTRs * iLFilter, CATIASchListOfObjects *& oLImages) \
{ \
return (ENVTIECALL(CATIASchAppMultiImageMaster,ENVTIETypeLetter,ENVTIELetter)AppListImages(iLFilter,oLImages)); \
} \
HRESULT __stdcall  ENVTIEName::AppIsOKToCreateImage(CATIADocument * iImageDoc, CAT_VARIANT_BOOL & oBYes, CATBSTR & oNLSFileName, CATBSTR & oNLSFileKeyToMessage) \
{ \
return (ENVTIECALL(CATIASchAppMultiImageMaster,ENVTIETypeLetter,ENVTIELetter)AppIsOKToCreateImage(iImageDoc,oBYes,oNLSFileName,oNLSFileKeyToMessage)); \
} \
HRESULT __stdcall  ENVTIEName::AppAddImage(CATIASchAppConnectable * iImage) \
{ \
return (ENVTIECALL(CATIASchAppMultiImageMaster,ENVTIETypeLetter,ENVTIELetter)AppAddImage(iImage)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchAppMultiImageMaster,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchAppMultiImageMaster,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchAppMultiImageMaster,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchAppMultiImageMaster,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchAppMultiImageMaster,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchAppMultiImageMaster(classe)    TIECATIASchAppMultiImageMaster##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchAppMultiImageMaster(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchAppMultiImageMaster, classe) \
 \
 \
CATImplementTIEMethods(CATIASchAppMultiImageMaster, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchAppMultiImageMaster, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchAppMultiImageMaster, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchAppMultiImageMaster, classe) \
 \
HRESULT __stdcall  TIECATIASchAppMultiImageMaster##classe::AppListImages(CATIASchListOfBSTRs * iLFilter, CATIASchListOfObjects *& oLImages) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iLFilter,&oLImages); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppListImages(iLFilter,oLImages); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iLFilter,&oLImages); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppMultiImageMaster##classe::AppIsOKToCreateImage(CATIADocument * iImageDoc, CAT_VARIANT_BOOL & oBYes, CATBSTR & oNLSFileName, CATBSTR & oNLSFileKeyToMessage) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iImageDoc,&oBYes,&oNLSFileName,&oNLSFileKeyToMessage); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppIsOKToCreateImage(iImageDoc,oBYes,oNLSFileName,oNLSFileKeyToMessage); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iImageDoc,&oBYes,&oNLSFileName,&oNLSFileKeyToMessage); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppMultiImageMaster##classe::AppAddImage(CATIASchAppConnectable * iImage) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iImage); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppAddImage(iImage); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iImage); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppMultiImageMaster##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppMultiImageMaster##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppMultiImageMaster##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppMultiImageMaster##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppMultiImageMaster##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchAppMultiImageMaster(classe) \
 \
 \
declare_TIE_CATIASchAppMultiImageMaster(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchAppMultiImageMaster##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchAppMultiImageMaster,"CATIASchAppMultiImageMaster",CATIASchAppMultiImageMaster::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchAppMultiImageMaster(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchAppMultiImageMaster, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchAppMultiImageMaster##classe(classe::MetaObject(),CATIASchAppMultiImageMaster::MetaObject(),(void *)CreateTIECATIASchAppMultiImageMaster##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchAppMultiImageMaster(classe) \
 \
 \
declare_TIE_CATIASchAppMultiImageMaster(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchAppMultiImageMaster##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchAppMultiImageMaster,"CATIASchAppMultiImageMaster",CATIASchAppMultiImageMaster::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchAppMultiImageMaster(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchAppMultiImageMaster, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchAppMultiImageMaster##classe(classe::MetaObject(),CATIASchAppMultiImageMaster::MetaObject(),(void *)CreateTIECATIASchAppMultiImageMaster##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchAppMultiImageMaster(classe) TIE_CATIASchAppMultiImageMaster(classe)
#else
#define BOA_CATIASchAppMultiImageMaster(classe) CATImplementBOA(CATIASchAppMultiImageMaster, classe)
#endif

#endif
