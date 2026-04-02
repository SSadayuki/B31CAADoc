#ifndef __TIE_CATIASchematicExtension
#define __TIE_CATIASchematicExtension

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchematicExtension.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchematicExtension */
#define declare_TIE_CATIASchematicExtension(classe) \
 \
 \
class TIECATIASchematicExtension##classe : public CATIASchematicExtension \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchematicExtension, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AddExtension(CATIABase * iAppObjToBeExtended, CatSchIDLExtensionType iExtensionType, CATIASchListOfObjects * iLGRR); \
      virtual HRESULT __stdcall RemoveExtension(CATIABase * iAppExtendedObj, CatSchIDLExtensionType iExtensionType); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchematicExtension(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AddExtension(CATIABase * iAppObjToBeExtended, CatSchIDLExtensionType iExtensionType, CATIASchListOfObjects * iLGRR); \
virtual HRESULT __stdcall RemoveExtension(CATIABase * iAppExtendedObj, CatSchIDLExtensionType iExtensionType); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchematicExtension(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AddExtension(CATIABase * iAppObjToBeExtended, CatSchIDLExtensionType iExtensionType, CATIASchListOfObjects * iLGRR) \
{ \
return (ENVTIECALL(CATIASchematicExtension,ENVTIETypeLetter,ENVTIELetter)AddExtension(iAppObjToBeExtended,iExtensionType,iLGRR)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveExtension(CATIABase * iAppExtendedObj, CatSchIDLExtensionType iExtensionType) \
{ \
return (ENVTIECALL(CATIASchematicExtension,ENVTIETypeLetter,ENVTIELetter)RemoveExtension(iAppExtendedObj,iExtensionType)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchematicExtension,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchematicExtension,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchematicExtension,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchematicExtension,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchematicExtension,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchematicExtension(classe)    TIECATIASchematicExtension##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchematicExtension(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchematicExtension, classe) \
 \
 \
CATImplementTIEMethods(CATIASchematicExtension, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchematicExtension, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchematicExtension, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchematicExtension, classe) \
 \
HRESULT __stdcall  TIECATIASchematicExtension##classe::AddExtension(CATIABase * iAppObjToBeExtended, CatSchIDLExtensionType iExtensionType, CATIASchListOfObjects * iLGRR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iAppObjToBeExtended,&iExtensionType,&iLGRR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddExtension(iAppObjToBeExtended,iExtensionType,iLGRR); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iAppObjToBeExtended,&iExtensionType,&iLGRR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchematicExtension##classe::RemoveExtension(CATIABase * iAppExtendedObj, CatSchIDLExtensionType iExtensionType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iAppExtendedObj,&iExtensionType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveExtension(iAppExtendedObj,iExtensionType); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iAppExtendedObj,&iExtensionType); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchematicExtension##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchematicExtension##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchematicExtension##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchematicExtension##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchematicExtension##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchematicExtension(classe) \
 \
 \
declare_TIE_CATIASchematicExtension(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchematicExtension##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchematicExtension,"CATIASchematicExtension",CATIASchematicExtension::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchematicExtension(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchematicExtension, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchematicExtension##classe(classe::MetaObject(),CATIASchematicExtension::MetaObject(),(void *)CreateTIECATIASchematicExtension##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchematicExtension(classe) \
 \
 \
declare_TIE_CATIASchematicExtension(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchematicExtension##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchematicExtension,"CATIASchematicExtension",CATIASchematicExtension::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchematicExtension(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchematicExtension, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchematicExtension##classe(classe::MetaObject(),CATIASchematicExtension::MetaObject(),(void *)CreateTIECATIASchematicExtension##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchematicExtension(classe) TIE_CATIASchematicExtension(classe)
#else
#define BOA_CATIASchematicExtension(classe) CATImplementBOA(CATIASchematicExtension, classe)
#endif

#endif
