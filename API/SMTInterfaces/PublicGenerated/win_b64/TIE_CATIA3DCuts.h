#ifndef __TIE_CATIA3DCuts
#define __TIE_CATIA3DCuts

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIA3DCuts.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIA3DCuts */
#define declare_TIE_CATIA3DCuts(classe) \
 \
 \
class TIECATIA3DCuts##classe : public CATIA3DCuts \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIA3DCuts, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Compute3DCut(CATIAGroup * GroupOfSelectedProducts, CATIADocument *& ThreeDCutDocument); \
      virtual HRESULT __stdcall Compute3DCutWithAReference(CATIAGroup * GroupOfSelectedProducts, CATIAProduct * iReferenceProduct, CATIADocument *& ThreeDCutDocument); \
      virtual HRESULT __stdcall GetCompute3DCut(CATIAGroup * GroupOfSelectedProducts, CATIADocument *& ThreeDCutDocument); \
      virtual HRESULT __stdcall GetCompute3DCutWithAReference(CATIAGroup * GroupOfSelectedProducts, CATIAProduct * iReferenceProduct, CATIADocument *& ThreeDCutDocument); \
      virtual HRESULT __stdcall SetBox(double OriginX, double OriginY, double OriginZ, double VX, double VY, double VZ); \
      virtual HRESULT __stdcall SetMatrix(const CATSafeArrayVariant & iComponents); \
      virtual HRESULT __stdcall SetType(CATLONG Type); \
      virtual HRESULT __stdcall SetOnBorders(CATLONG OnBorders); \
      virtual HRESULT __stdcall ThreeDCutShapeName(CATBSTR *& Name); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIA3DCuts(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Compute3DCut(CATIAGroup * GroupOfSelectedProducts, CATIADocument *& ThreeDCutDocument); \
virtual HRESULT __stdcall Compute3DCutWithAReference(CATIAGroup * GroupOfSelectedProducts, CATIAProduct * iReferenceProduct, CATIADocument *& ThreeDCutDocument); \
virtual HRESULT __stdcall GetCompute3DCut(CATIAGroup * GroupOfSelectedProducts, CATIADocument *& ThreeDCutDocument); \
virtual HRESULT __stdcall GetCompute3DCutWithAReference(CATIAGroup * GroupOfSelectedProducts, CATIAProduct * iReferenceProduct, CATIADocument *& ThreeDCutDocument); \
virtual HRESULT __stdcall SetBox(double OriginX, double OriginY, double OriginZ, double VX, double VY, double VZ); \
virtual HRESULT __stdcall SetMatrix(const CATSafeArrayVariant & iComponents); \
virtual HRESULT __stdcall SetType(CATLONG Type); \
virtual HRESULT __stdcall SetOnBorders(CATLONG OnBorders); \
virtual HRESULT __stdcall ThreeDCutShapeName(CATBSTR *& Name); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIA3DCuts(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Compute3DCut(CATIAGroup * GroupOfSelectedProducts, CATIADocument *& ThreeDCutDocument) \
{ \
return (ENVTIECALL(CATIA3DCuts,ENVTIETypeLetter,ENVTIELetter)Compute3DCut(GroupOfSelectedProducts,ThreeDCutDocument)); \
} \
HRESULT __stdcall  ENVTIEName::Compute3DCutWithAReference(CATIAGroup * GroupOfSelectedProducts, CATIAProduct * iReferenceProduct, CATIADocument *& ThreeDCutDocument) \
{ \
return (ENVTIECALL(CATIA3DCuts,ENVTIETypeLetter,ENVTIELetter)Compute3DCutWithAReference(GroupOfSelectedProducts,iReferenceProduct,ThreeDCutDocument)); \
} \
HRESULT __stdcall  ENVTIEName::GetCompute3DCut(CATIAGroup * GroupOfSelectedProducts, CATIADocument *& ThreeDCutDocument) \
{ \
return (ENVTIECALL(CATIA3DCuts,ENVTIETypeLetter,ENVTIELetter)GetCompute3DCut(GroupOfSelectedProducts,ThreeDCutDocument)); \
} \
HRESULT __stdcall  ENVTIEName::GetCompute3DCutWithAReference(CATIAGroup * GroupOfSelectedProducts, CATIAProduct * iReferenceProduct, CATIADocument *& ThreeDCutDocument) \
{ \
return (ENVTIECALL(CATIA3DCuts,ENVTIETypeLetter,ENVTIELetter)GetCompute3DCutWithAReference(GroupOfSelectedProducts,iReferenceProduct,ThreeDCutDocument)); \
} \
HRESULT __stdcall  ENVTIEName::SetBox(double OriginX, double OriginY, double OriginZ, double VX, double VY, double VZ) \
{ \
return (ENVTIECALL(CATIA3DCuts,ENVTIETypeLetter,ENVTIELetter)SetBox(OriginX,OriginY,OriginZ,VX,VY,VZ)); \
} \
HRESULT __stdcall  ENVTIEName::SetMatrix(const CATSafeArrayVariant & iComponents) \
{ \
return (ENVTIECALL(CATIA3DCuts,ENVTIETypeLetter,ENVTIELetter)SetMatrix(iComponents)); \
} \
HRESULT __stdcall  ENVTIEName::SetType(CATLONG Type) \
{ \
return (ENVTIECALL(CATIA3DCuts,ENVTIETypeLetter,ENVTIELetter)SetType(Type)); \
} \
HRESULT __stdcall  ENVTIEName::SetOnBorders(CATLONG OnBorders) \
{ \
return (ENVTIECALL(CATIA3DCuts,ENVTIETypeLetter,ENVTIELetter)SetOnBorders(OnBorders)); \
} \
HRESULT __stdcall  ENVTIEName::ThreeDCutShapeName(CATBSTR *& Name) \
{ \
return (ENVTIECALL(CATIA3DCuts,ENVTIETypeLetter,ENVTIELetter)ThreeDCutShapeName(Name)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIA3DCuts,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIA3DCuts,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIA3DCuts,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIA3DCuts,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIA3DCuts,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIA3DCuts,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIA3DCuts(classe)    TIECATIA3DCuts##classe


/* Common methods inside a TIE */
#define common_TIE_CATIA3DCuts(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIA3DCuts, classe) \
 \
 \
CATImplementTIEMethods(CATIA3DCuts, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIA3DCuts, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIA3DCuts, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIA3DCuts, classe) \
 \
HRESULT __stdcall  TIECATIA3DCuts##classe::Compute3DCut(CATIAGroup * GroupOfSelectedProducts, CATIADocument *& ThreeDCutDocument) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&GroupOfSelectedProducts,&ThreeDCutDocument); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute3DCut(GroupOfSelectedProducts,ThreeDCutDocument); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&GroupOfSelectedProducts,&ThreeDCutDocument); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA3DCuts##classe::Compute3DCutWithAReference(CATIAGroup * GroupOfSelectedProducts, CATIAProduct * iReferenceProduct, CATIADocument *& ThreeDCutDocument) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&GroupOfSelectedProducts,&iReferenceProduct,&ThreeDCutDocument); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute3DCutWithAReference(GroupOfSelectedProducts,iReferenceProduct,ThreeDCutDocument); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&GroupOfSelectedProducts,&iReferenceProduct,&ThreeDCutDocument); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA3DCuts##classe::GetCompute3DCut(CATIAGroup * GroupOfSelectedProducts, CATIADocument *& ThreeDCutDocument) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&GroupOfSelectedProducts,&ThreeDCutDocument); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCompute3DCut(GroupOfSelectedProducts,ThreeDCutDocument); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&GroupOfSelectedProducts,&ThreeDCutDocument); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA3DCuts##classe::GetCompute3DCutWithAReference(CATIAGroup * GroupOfSelectedProducts, CATIAProduct * iReferenceProduct, CATIADocument *& ThreeDCutDocument) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&GroupOfSelectedProducts,&iReferenceProduct,&ThreeDCutDocument); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCompute3DCutWithAReference(GroupOfSelectedProducts,iReferenceProduct,ThreeDCutDocument); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&GroupOfSelectedProducts,&iReferenceProduct,&ThreeDCutDocument); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA3DCuts##classe::SetBox(double OriginX, double OriginY, double OriginZ, double VX, double VY, double VZ) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&OriginX,&OriginY,&OriginZ,&VX,&VY,&VZ); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetBox(OriginX,OriginY,OriginZ,VX,VY,VZ); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&OriginX,&OriginY,&OriginZ,&VX,&VY,&VZ); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA3DCuts##classe::SetMatrix(const CATSafeArrayVariant & iComponents) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iComponents); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMatrix(iComponents); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iComponents); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA3DCuts##classe::SetType(CATLONG Type) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&Type); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetType(Type); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&Type); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA3DCuts##classe::SetOnBorders(CATLONG OnBorders) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&OnBorders); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOnBorders(OnBorders); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&OnBorders); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA3DCuts##classe::ThreeDCutShapeName(CATBSTR *& Name) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&Name); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ThreeDCutShapeName(Name); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&Name); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIA3DCuts##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIA3DCuts##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIA3DCuts##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIA3DCuts##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIA3DCuts##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIA3DCuts##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIA3DCuts(classe) \
 \
 \
declare_TIE_CATIA3DCuts(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIA3DCuts##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIA3DCuts,"CATIA3DCuts",CATIA3DCuts::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIA3DCuts(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIA3DCuts, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIA3DCuts##classe(classe::MetaObject(),CATIA3DCuts::MetaObject(),(void *)CreateTIECATIA3DCuts##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIA3DCuts(classe) \
 \
 \
declare_TIE_CATIA3DCuts(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIA3DCuts##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIA3DCuts,"CATIA3DCuts",CATIA3DCuts::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIA3DCuts(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIA3DCuts, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIA3DCuts##classe(classe::MetaObject(),CATIA3DCuts::MetaObject(),(void *)CreateTIECATIA3DCuts##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIA3DCuts(classe) TIE_CATIA3DCuts(classe)
#else
#define BOA_CATIA3DCuts(classe) CATImplementBOA(CATIA3DCuts, classe)
#endif

#endif
