#ifndef __TIE_CATIAAnalysisImages
#define __TIE_CATIAAnalysisImages

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAAnalysisImages.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAnalysisImages */
#define declare_TIE_CATIAAnalysisImages(classe) \
 \
 \
class TIECATIAAnalysisImages##classe : public CATIAAnalysisImages \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAnalysisImages, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Add(const CATBSTR & iImageName, const CATVariant & iHideExistingImages, const CATVariant & iShowMesh, const CATVariant & iDuplicate, CATIAAnalysisImage *& oImage); \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAAnalysisImage *& oImage); \
      virtual HRESULT __stdcall RemoveImage(const CATVariant & iImageIdentifier); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIAAnalysisImages(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Add(const CATBSTR & iImageName, const CATVariant & iHideExistingImages, const CATVariant & iShowMesh, const CATVariant & iDuplicate, CATIAAnalysisImage *& oImage); \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAAnalysisImage *& oImage); \
virtual HRESULT __stdcall RemoveImage(const CATVariant & iImageIdentifier); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIAAnalysisImages(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Add(const CATBSTR & iImageName, const CATVariant & iHideExistingImages, const CATVariant & iShowMesh, const CATVariant & iDuplicate, CATIAAnalysisImage *& oImage) \
{ \
return (ENVTIECALL(CATIAAnalysisImages,ENVTIETypeLetter,ENVTIELetter)Add(iImageName,iHideExistingImages,iShowMesh,iDuplicate,oImage)); \
} \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIAAnalysisImage *& oImage) \
{ \
return (ENVTIECALL(CATIAAnalysisImages,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oImage)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveImage(const CATVariant & iImageIdentifier) \
{ \
return (ENVTIECALL(CATIAAnalysisImages,ENVTIETypeLetter,ENVTIELetter)RemoveImage(iImageIdentifier)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAnalysisImages,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAnalysisImages,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAAnalysisImages,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAAnalysisImages,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAAnalysisImages,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIAAnalysisImages,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAnalysisImages(classe)    TIECATIAAnalysisImages##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAnalysisImages(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAnalysisImages, classe) \
 \
 \
CATImplementTIEMethods(CATIAAnalysisImages, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAnalysisImages, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAnalysisImages, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAnalysisImages, classe) \
 \
HRESULT __stdcall  TIECATIAAnalysisImages##classe::Add(const CATBSTR & iImageName, const CATVariant & iHideExistingImages, const CATVariant & iShowMesh, const CATVariant & iDuplicate, CATIAAnalysisImage *& oImage) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iImageName,&iHideExistingImages,&iShowMesh,&iDuplicate,&oImage); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add(iImageName,iHideExistingImages,iShowMesh,iDuplicate,oImage); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iImageName,&iHideExistingImages,&iShowMesh,&iDuplicate,&oImage); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisImages##classe::Item(const CATVariant & iIndex, CATIAAnalysisImage *& oImage) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iIndex,&oImage); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oImage); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iIndex,&oImage); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisImages##classe::RemoveImage(const CATVariant & iImageIdentifier) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iImageIdentifier); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveImage(iImageIdentifier); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iImageIdentifier); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisImages##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisImages##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisImages##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisImages##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisImages##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisImages##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAnalysisImages(classe) \
 \
 \
declare_TIE_CATIAAnalysisImages(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnalysisImages##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnalysisImages,"CATIAAnalysisImages",CATIAAnalysisImages::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnalysisImages(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAnalysisImages, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnalysisImages##classe(classe::MetaObject(),CATIAAnalysisImages::MetaObject(),(void *)CreateTIECATIAAnalysisImages##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAnalysisImages(classe) \
 \
 \
declare_TIE_CATIAAnalysisImages(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnalysisImages##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnalysisImages,"CATIAAnalysisImages",CATIAAnalysisImages::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnalysisImages(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAnalysisImages, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnalysisImages##classe(classe::MetaObject(),CATIAAnalysisImages::MetaObject(),(void *)CreateTIECATIAAnalysisImages##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAnalysisImages(classe) TIE_CATIAAnalysisImages(classe)
#else
#define BOA_CATIAAnalysisImages(classe) CATImplementBOA(CATIAAnalysisImages, classe)
#endif

#endif
