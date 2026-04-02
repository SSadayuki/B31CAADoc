#ifndef __TIE_CATIAPspPlacePart
#define __TIE_CATIAPspPlacePart

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAPspPlacePart.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPspPlacePart */
#define declare_TIE_CATIAPspPlacePart(classe) \
 \
 \
class TIECATIAPspPlacePart##classe : public CATIAPspPlacePart \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPspPlacePart, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall PlacePartInSpace(const CATBSTR & iuStandard, const CATBSTR & iuFunctionType, CATIABase * ipiReferencePart, CATIABase * ipiParentProduct, CATIABase * ipiLogicalLine, const CATBSTR & iuPlacedPartID, CATIAPspListOfDoubles * iUpDirection, CATIAPspListOfDoubles * iHorizontalOrientation, CATIAPspListOfDoubles * iPosition, CATIABase *& opiInstancePart); \
      virtual HRESULT __stdcall RouteStringPartInSpace(const CATBSTR & iuStandard, const CATBSTR & iuFunctionType, CATIABase * ipiReferencePart, CATIABase * ipiParentProduct, CATIABase * ipiLogicalLine, const CATBSTR & iuPlacedPartID, CATIAPspListOfDoubles * iFirstPointUpDirection, CATIAPspListOfObjects * ipiListPoints, CATIAPspListOfDoubles * iListBendRadii, CATIABase *& opiInstancePart); \
      virtual HRESULT __stdcall get_ErrorMessage(CATBSTR *& obErrorMessage); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAPspPlacePart(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall PlacePartInSpace(const CATBSTR & iuStandard, const CATBSTR & iuFunctionType, CATIABase * ipiReferencePart, CATIABase * ipiParentProduct, CATIABase * ipiLogicalLine, const CATBSTR & iuPlacedPartID, CATIAPspListOfDoubles * iUpDirection, CATIAPspListOfDoubles * iHorizontalOrientation, CATIAPspListOfDoubles * iPosition, CATIABase *& opiInstancePart); \
virtual HRESULT __stdcall RouteStringPartInSpace(const CATBSTR & iuStandard, const CATBSTR & iuFunctionType, CATIABase * ipiReferencePart, CATIABase * ipiParentProduct, CATIABase * ipiLogicalLine, const CATBSTR & iuPlacedPartID, CATIAPspListOfDoubles * iFirstPointUpDirection, CATIAPspListOfObjects * ipiListPoints, CATIAPspListOfDoubles * iListBendRadii, CATIABase *& opiInstancePart); \
virtual HRESULT __stdcall get_ErrorMessage(CATBSTR *& obErrorMessage); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAPspPlacePart(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::PlacePartInSpace(const CATBSTR & iuStandard, const CATBSTR & iuFunctionType, CATIABase * ipiReferencePart, CATIABase * ipiParentProduct, CATIABase * ipiLogicalLine, const CATBSTR & iuPlacedPartID, CATIAPspListOfDoubles * iUpDirection, CATIAPspListOfDoubles * iHorizontalOrientation, CATIAPspListOfDoubles * iPosition, CATIABase *& opiInstancePart) \
{ \
return (ENVTIECALL(CATIAPspPlacePart,ENVTIETypeLetter,ENVTIELetter)PlacePartInSpace(iuStandard,iuFunctionType,ipiReferencePart,ipiParentProduct,ipiLogicalLine,iuPlacedPartID,iUpDirection,iHorizontalOrientation,iPosition,opiInstancePart)); \
} \
HRESULT __stdcall  ENVTIEName::RouteStringPartInSpace(const CATBSTR & iuStandard, const CATBSTR & iuFunctionType, CATIABase * ipiReferencePart, CATIABase * ipiParentProduct, CATIABase * ipiLogicalLine, const CATBSTR & iuPlacedPartID, CATIAPspListOfDoubles * iFirstPointUpDirection, CATIAPspListOfObjects * ipiListPoints, CATIAPspListOfDoubles * iListBendRadii, CATIABase *& opiInstancePart) \
{ \
return (ENVTIECALL(CATIAPspPlacePart,ENVTIETypeLetter,ENVTIELetter)RouteStringPartInSpace(iuStandard,iuFunctionType,ipiReferencePart,ipiParentProduct,ipiLogicalLine,iuPlacedPartID,iFirstPointUpDirection,ipiListPoints,iListBendRadii,opiInstancePart)); \
} \
HRESULT __stdcall  ENVTIEName::get_ErrorMessage(CATBSTR *& obErrorMessage) \
{ \
return (ENVTIECALL(CATIAPspPlacePart,ENVTIETypeLetter,ENVTIELetter)get_ErrorMessage(obErrorMessage)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPspPlacePart,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPspPlacePart,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspPlacePart,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspPlacePart,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAPspPlacePart,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPspPlacePart(classe)    TIECATIAPspPlacePart##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPspPlacePart(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPspPlacePart, classe) \
 \
 \
CATImplementTIEMethods(CATIAPspPlacePart, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPspPlacePart, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPspPlacePart, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPspPlacePart, classe) \
 \
HRESULT __stdcall  TIECATIAPspPlacePart##classe::PlacePartInSpace(const CATBSTR & iuStandard, const CATBSTR & iuFunctionType, CATIABase * ipiReferencePart, CATIABase * ipiParentProduct, CATIABase * ipiLogicalLine, const CATBSTR & iuPlacedPartID, CATIAPspListOfDoubles * iUpDirection, CATIAPspListOfDoubles * iHorizontalOrientation, CATIAPspListOfDoubles * iPosition, CATIABase *& opiInstancePart) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iuStandard,&iuFunctionType,&ipiReferencePart,&ipiParentProduct,&ipiLogicalLine,&iuPlacedPartID,&iUpDirection,&iHorizontalOrientation,&iPosition,&opiInstancePart); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PlacePartInSpace(iuStandard,iuFunctionType,ipiReferencePart,ipiParentProduct,ipiLogicalLine,iuPlacedPartID,iUpDirection,iHorizontalOrientation,iPosition,opiInstancePart); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iuStandard,&iuFunctionType,&ipiReferencePart,&ipiParentProduct,&ipiLogicalLine,&iuPlacedPartID,&iUpDirection,&iHorizontalOrientation,&iPosition,&opiInstancePart); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspPlacePart##classe::RouteStringPartInSpace(const CATBSTR & iuStandard, const CATBSTR & iuFunctionType, CATIABase * ipiReferencePart, CATIABase * ipiParentProduct, CATIABase * ipiLogicalLine, const CATBSTR & iuPlacedPartID, CATIAPspListOfDoubles * iFirstPointUpDirection, CATIAPspListOfObjects * ipiListPoints, CATIAPspListOfDoubles * iListBendRadii, CATIABase *& opiInstancePart) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iuStandard,&iuFunctionType,&ipiReferencePart,&ipiParentProduct,&ipiLogicalLine,&iuPlacedPartID,&iFirstPointUpDirection,&ipiListPoints,&iListBendRadii,&opiInstancePart); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RouteStringPartInSpace(iuStandard,iuFunctionType,ipiReferencePart,ipiParentProduct,ipiLogicalLine,iuPlacedPartID,iFirstPointUpDirection,ipiListPoints,iListBendRadii,opiInstancePart); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iuStandard,&iuFunctionType,&ipiReferencePart,&ipiParentProduct,&ipiLogicalLine,&iuPlacedPartID,&iFirstPointUpDirection,&ipiListPoints,&iListBendRadii,&opiInstancePart); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspPlacePart##classe::get_ErrorMessage(CATBSTR *& obErrorMessage) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&obErrorMessage); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ErrorMessage(obErrorMessage); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&obErrorMessage); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspPlacePart##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspPlacePart##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspPlacePart##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspPlacePart##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspPlacePart##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPspPlacePart(classe) \
 \
 \
declare_TIE_CATIAPspPlacePart(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspPlacePart##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspPlacePart,"CATIAPspPlacePart",CATIAPspPlacePart::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspPlacePart(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPspPlacePart, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspPlacePart##classe(classe::MetaObject(),CATIAPspPlacePart::MetaObject(),(void *)CreateTIECATIAPspPlacePart##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPspPlacePart(classe) \
 \
 \
declare_TIE_CATIAPspPlacePart(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspPlacePart##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspPlacePart,"CATIAPspPlacePart",CATIAPspPlacePart::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspPlacePart(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPspPlacePart, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspPlacePart##classe(classe::MetaObject(),CATIAPspPlacePart::MetaObject(),(void *)CreateTIECATIAPspPlacePart##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPspPlacePart(classe) TIE_CATIAPspPlacePart(classe)
#else
#define BOA_CATIAPspPlacePart(classe) CATImplementBOA(CATIAPspPlacePart, classe)
#endif

#endif
