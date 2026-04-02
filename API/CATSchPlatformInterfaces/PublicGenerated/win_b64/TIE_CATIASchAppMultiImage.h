#ifndef __TIE_CATIASchAppMultiImage
#define __TIE_CATIASchAppMultiImage

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchAppMultiImage.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchAppMultiImage */
#define declare_TIE_CATIASchAppMultiImage(classe) \
 \
 \
class TIECATIASchAppMultiImage##classe : public CATIASchAppMultiImage \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchAppMultiImage, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AppGetMasterObject(CATIASchAppMultiImageMaster *& oMasterImage); \
      virtual HRESULT __stdcall AppGetMasterDocument(CATIADocument *& oDocument, CATBSTR & oDocumentName, CATBSTR & oSymbolicLinkName); \
      virtual HRESULT __stdcall AppUpdate(CATIASchAppMultiImageMaster * iMasterImage, CATIASchAppMultiImage *& oImage); \
      virtual HRESULT __stdcall AppIsUpToDate(CatSchIDLMultiImageStatus & oStatus); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchAppMultiImage(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AppGetMasterObject(CATIASchAppMultiImageMaster *& oMasterImage); \
virtual HRESULT __stdcall AppGetMasterDocument(CATIADocument *& oDocument, CATBSTR & oDocumentName, CATBSTR & oSymbolicLinkName); \
virtual HRESULT __stdcall AppUpdate(CATIASchAppMultiImageMaster * iMasterImage, CATIASchAppMultiImage *& oImage); \
virtual HRESULT __stdcall AppIsUpToDate(CatSchIDLMultiImageStatus & oStatus); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchAppMultiImage(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AppGetMasterObject(CATIASchAppMultiImageMaster *& oMasterImage) \
{ \
return (ENVTIECALL(CATIASchAppMultiImage,ENVTIETypeLetter,ENVTIELetter)AppGetMasterObject(oMasterImage)); \
} \
HRESULT __stdcall  ENVTIEName::AppGetMasterDocument(CATIADocument *& oDocument, CATBSTR & oDocumentName, CATBSTR & oSymbolicLinkName) \
{ \
return (ENVTIECALL(CATIASchAppMultiImage,ENVTIETypeLetter,ENVTIELetter)AppGetMasterDocument(oDocument,oDocumentName,oSymbolicLinkName)); \
} \
HRESULT __stdcall  ENVTIEName::AppUpdate(CATIASchAppMultiImageMaster * iMasterImage, CATIASchAppMultiImage *& oImage) \
{ \
return (ENVTIECALL(CATIASchAppMultiImage,ENVTIETypeLetter,ENVTIELetter)AppUpdate(iMasterImage,oImage)); \
} \
HRESULT __stdcall  ENVTIEName::AppIsUpToDate(CatSchIDLMultiImageStatus & oStatus) \
{ \
return (ENVTIECALL(CATIASchAppMultiImage,ENVTIETypeLetter,ENVTIELetter)AppIsUpToDate(oStatus)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchAppMultiImage,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchAppMultiImage,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchAppMultiImage,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchAppMultiImage,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchAppMultiImage,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchAppMultiImage(classe)    TIECATIASchAppMultiImage##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchAppMultiImage(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchAppMultiImage, classe) \
 \
 \
CATImplementTIEMethods(CATIASchAppMultiImage, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchAppMultiImage, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchAppMultiImage, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchAppMultiImage, classe) \
 \
HRESULT __stdcall  TIECATIASchAppMultiImage##classe::AppGetMasterObject(CATIASchAppMultiImageMaster *& oMasterImage) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oMasterImage); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppGetMasterObject(oMasterImage); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oMasterImage); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppMultiImage##classe::AppGetMasterDocument(CATIADocument *& oDocument, CATBSTR & oDocumentName, CATBSTR & oSymbolicLinkName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oDocument,&oDocumentName,&oSymbolicLinkName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppGetMasterDocument(oDocument,oDocumentName,oSymbolicLinkName); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oDocument,&oDocumentName,&oSymbolicLinkName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppMultiImage##classe::AppUpdate(CATIASchAppMultiImageMaster * iMasterImage, CATIASchAppMultiImage *& oImage) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iMasterImage,&oImage); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppUpdate(iMasterImage,oImage); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iMasterImage,&oImage); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppMultiImage##classe::AppIsUpToDate(CatSchIDLMultiImageStatus & oStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppIsUpToDate(oStatus); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oStatus); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppMultiImage##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppMultiImage##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppMultiImage##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppMultiImage##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppMultiImage##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchAppMultiImage(classe) \
 \
 \
declare_TIE_CATIASchAppMultiImage(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchAppMultiImage##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchAppMultiImage,"CATIASchAppMultiImage",CATIASchAppMultiImage::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchAppMultiImage(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchAppMultiImage, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchAppMultiImage##classe(classe::MetaObject(),CATIASchAppMultiImage::MetaObject(),(void *)CreateTIECATIASchAppMultiImage##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchAppMultiImage(classe) \
 \
 \
declare_TIE_CATIASchAppMultiImage(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchAppMultiImage##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchAppMultiImage,"CATIASchAppMultiImage",CATIASchAppMultiImage::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchAppMultiImage(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchAppMultiImage, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchAppMultiImage##classe(classe::MetaObject(),CATIASchAppMultiImage::MetaObject(),(void *)CreateTIECATIASchAppMultiImage##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchAppMultiImage(classe) TIE_CATIASchAppMultiImage(classe)
#else
#define BOA_CATIASchAppMultiImage(classe) CATImplementBOA(CATIASchAppMultiImage, classe)
#endif

#endif
