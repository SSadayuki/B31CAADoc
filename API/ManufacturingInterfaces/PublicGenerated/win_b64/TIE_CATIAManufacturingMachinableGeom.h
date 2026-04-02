#ifndef __TIE_CATIAManufacturingMachinableGeom
#define __TIE_CATIAManufacturingMachinableGeom

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAManufacturingMachinableGeom.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAManufacturingMachinableGeom */
#define declare_TIE_CATIAManufacturingMachinableGeom(classe) \
 \
 \
class TIECATIAManufacturingMachinableGeom##classe : public CATIAManufacturingMachinableGeom \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAManufacturingMachinableGeom, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Shared(CAT_VARIANT_BOOL & oShared); \
      virtual HRESULT __stdcall put_Shared(CAT_VARIANT_BOOL iShared); \
      virtual HRESULT __stdcall PointedGeometryCount(CATLONG & oPointedGeometryCount); \
      virtual HRESULT __stdcall ListPointedGeometry(CATLONG iIndex, CATIABase *& oGeometry, CATIAProduct *& oProduct, CATLONG & oNbShapes); \
      virtual HRESULT __stdcall ListShapesOfPointedGeometry(CATLONG iIndex, CATSafeArrayVariant *& oShapes); \
      virtual HRESULT __stdcall AddPointedGeometry(CATIABase * iGeometry, CATIAProduct * iProduct, const CATSafeArrayVariant & iShapes); \
      virtual HRESULT __stdcall AddPointedGeometryWithNoDuplicatedCheck(CATIABase * iGeometry, CATIAProduct * iProduct, const CATSafeArrayVariant & iShapes); \
      virtual HRESULT __stdcall RemovePointedGeometry(CATLONG iIndex); \
      virtual HRESULT __stdcall AddPointedGeometryNotify(CATIABase * iGeometry, CATIAProduct * iProduct, const CATSafeArrayVariant & iShapes, short iNotify); \
      virtual HRESULT __stdcall AddPointedGeometryWithNoDuplicatedCheckNotify(CATIABase * iGeometry, CATIAProduct * iProduct, const CATSafeArrayVariant & iShapes, short iNotify); \
      virtual HRESULT __stdcall GetOrigin(double & oX, double & oY, double & oZ, CATLONG IndexOfPointedGeom); \
      virtual HRESULT __stdcall GetDirection(double & oX, double & oY, double & oZ, CATLONG IndexOfPointedGeom); \
      virtual HRESULT __stdcall GetAssociatedTPSCount(CATLONG IndexOfPointedGeom, CATLONG & oAnnotationsListCount); \
      virtual HRESULT __stdcall GetAssociatedTPS(CATLONG IndexOfPointedGeom, CATSafeArrayVariant & oAnnotationsList); \
      virtual HRESULT __stdcall GetAllAssociatedTPSCount(CATLONG & oAnnotationsListCount); \
      virtual HRESULT __stdcall GetAllAssociatedTPS(CATSafeArrayVariant & oAnnotationsList); \
      virtual HRESULT __stdcall GetFeatureParameterCount(CATIABase * iGeometry, CATLONG & oParamCount); \
      virtual HRESULT __stdcall GetFeatureParameters(CATIABase * iGeometry, CATSafeArrayVariant & oParamList); \
      virtual HRESULT __stdcall get_FeatType(CATBSTR & oFeatType); \
      virtual HRESULT __stdcall put_FeatType(const CATBSTR & iFeatType); \
      virtual HRESULT __stdcall get_FeatRemark(CATBSTR & oFeatRemark); \
      virtual HRESULT __stdcall put_FeatRemark(const CATBSTR & iFeatRemark); \
      virtual HRESULT __stdcall GetAGeometricAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAManufacturingMachinableGeom(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Shared(CAT_VARIANT_BOOL & oShared); \
virtual HRESULT __stdcall put_Shared(CAT_VARIANT_BOOL iShared); \
virtual HRESULT __stdcall PointedGeometryCount(CATLONG & oPointedGeometryCount); \
virtual HRESULT __stdcall ListPointedGeometry(CATLONG iIndex, CATIABase *& oGeometry, CATIAProduct *& oProduct, CATLONG & oNbShapes); \
virtual HRESULT __stdcall ListShapesOfPointedGeometry(CATLONG iIndex, CATSafeArrayVariant *& oShapes); \
virtual HRESULT __stdcall AddPointedGeometry(CATIABase * iGeometry, CATIAProduct * iProduct, const CATSafeArrayVariant & iShapes); \
virtual HRESULT __stdcall AddPointedGeometryWithNoDuplicatedCheck(CATIABase * iGeometry, CATIAProduct * iProduct, const CATSafeArrayVariant & iShapes); \
virtual HRESULT __stdcall RemovePointedGeometry(CATLONG iIndex); \
virtual HRESULT __stdcall AddPointedGeometryNotify(CATIABase * iGeometry, CATIAProduct * iProduct, const CATSafeArrayVariant & iShapes, short iNotify); \
virtual HRESULT __stdcall AddPointedGeometryWithNoDuplicatedCheckNotify(CATIABase * iGeometry, CATIAProduct * iProduct, const CATSafeArrayVariant & iShapes, short iNotify); \
virtual HRESULT __stdcall GetOrigin(double & oX, double & oY, double & oZ, CATLONG IndexOfPointedGeom); \
virtual HRESULT __stdcall GetDirection(double & oX, double & oY, double & oZ, CATLONG IndexOfPointedGeom); \
virtual HRESULT __stdcall GetAssociatedTPSCount(CATLONG IndexOfPointedGeom, CATLONG & oAnnotationsListCount); \
virtual HRESULT __stdcall GetAssociatedTPS(CATLONG IndexOfPointedGeom, CATSafeArrayVariant & oAnnotationsList); \
virtual HRESULT __stdcall GetAllAssociatedTPSCount(CATLONG & oAnnotationsListCount); \
virtual HRESULT __stdcall GetAllAssociatedTPS(CATSafeArrayVariant & oAnnotationsList); \
virtual HRESULT __stdcall GetFeatureParameterCount(CATIABase * iGeometry, CATLONG & oParamCount); \
virtual HRESULT __stdcall GetFeatureParameters(CATIABase * iGeometry, CATSafeArrayVariant & oParamList); \
virtual HRESULT __stdcall get_FeatType(CATBSTR & oFeatType); \
virtual HRESULT __stdcall put_FeatType(const CATBSTR & iFeatType); \
virtual HRESULT __stdcall get_FeatRemark(CATBSTR & oFeatRemark); \
virtual HRESULT __stdcall put_FeatRemark(const CATBSTR & iFeatRemark); \
virtual HRESULT __stdcall GetAGeometricAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAManufacturingMachinableGeom(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Shared(CAT_VARIANT_BOOL & oShared) \
{ \
return (ENVTIECALL(CATIAManufacturingMachinableGeom,ENVTIETypeLetter,ENVTIELetter)get_Shared(oShared)); \
} \
HRESULT __stdcall  ENVTIEName::put_Shared(CAT_VARIANT_BOOL iShared) \
{ \
return (ENVTIECALL(CATIAManufacturingMachinableGeom,ENVTIETypeLetter,ENVTIELetter)put_Shared(iShared)); \
} \
HRESULT __stdcall  ENVTIEName::PointedGeometryCount(CATLONG & oPointedGeometryCount) \
{ \
return (ENVTIECALL(CATIAManufacturingMachinableGeom,ENVTIETypeLetter,ENVTIELetter)PointedGeometryCount(oPointedGeometryCount)); \
} \
HRESULT __stdcall  ENVTIEName::ListPointedGeometry(CATLONG iIndex, CATIABase *& oGeometry, CATIAProduct *& oProduct, CATLONG & oNbShapes) \
{ \
return (ENVTIECALL(CATIAManufacturingMachinableGeom,ENVTIETypeLetter,ENVTIELetter)ListPointedGeometry(iIndex,oGeometry,oProduct,oNbShapes)); \
} \
HRESULT __stdcall  ENVTIEName::ListShapesOfPointedGeometry(CATLONG iIndex, CATSafeArrayVariant *& oShapes) \
{ \
return (ENVTIECALL(CATIAManufacturingMachinableGeom,ENVTIETypeLetter,ENVTIELetter)ListShapesOfPointedGeometry(iIndex,oShapes)); \
} \
HRESULT __stdcall  ENVTIEName::AddPointedGeometry(CATIABase * iGeometry, CATIAProduct * iProduct, const CATSafeArrayVariant & iShapes) \
{ \
return (ENVTIECALL(CATIAManufacturingMachinableGeom,ENVTIETypeLetter,ENVTIELetter)AddPointedGeometry(iGeometry,iProduct,iShapes)); \
} \
HRESULT __stdcall  ENVTIEName::AddPointedGeometryWithNoDuplicatedCheck(CATIABase * iGeometry, CATIAProduct * iProduct, const CATSafeArrayVariant & iShapes) \
{ \
return (ENVTIECALL(CATIAManufacturingMachinableGeom,ENVTIETypeLetter,ENVTIELetter)AddPointedGeometryWithNoDuplicatedCheck(iGeometry,iProduct,iShapes)); \
} \
HRESULT __stdcall  ENVTIEName::RemovePointedGeometry(CATLONG iIndex) \
{ \
return (ENVTIECALL(CATIAManufacturingMachinableGeom,ENVTIETypeLetter,ENVTIELetter)RemovePointedGeometry(iIndex)); \
} \
HRESULT __stdcall  ENVTIEName::AddPointedGeometryNotify(CATIABase * iGeometry, CATIAProduct * iProduct, const CATSafeArrayVariant & iShapes, short iNotify) \
{ \
return (ENVTIECALL(CATIAManufacturingMachinableGeom,ENVTIETypeLetter,ENVTIELetter)AddPointedGeometryNotify(iGeometry,iProduct,iShapes,iNotify)); \
} \
HRESULT __stdcall  ENVTIEName::AddPointedGeometryWithNoDuplicatedCheckNotify(CATIABase * iGeometry, CATIAProduct * iProduct, const CATSafeArrayVariant & iShapes, short iNotify) \
{ \
return (ENVTIECALL(CATIAManufacturingMachinableGeom,ENVTIETypeLetter,ENVTIELetter)AddPointedGeometryWithNoDuplicatedCheckNotify(iGeometry,iProduct,iShapes,iNotify)); \
} \
HRESULT __stdcall  ENVTIEName::GetOrigin(double & oX, double & oY, double & oZ, CATLONG IndexOfPointedGeom) \
{ \
return (ENVTIECALL(CATIAManufacturingMachinableGeom,ENVTIETypeLetter,ENVTIELetter)GetOrigin(oX,oY,oZ,IndexOfPointedGeom)); \
} \
HRESULT __stdcall  ENVTIEName::GetDirection(double & oX, double & oY, double & oZ, CATLONG IndexOfPointedGeom) \
{ \
return (ENVTIECALL(CATIAManufacturingMachinableGeom,ENVTIETypeLetter,ENVTIELetter)GetDirection(oX,oY,oZ,IndexOfPointedGeom)); \
} \
HRESULT __stdcall  ENVTIEName::GetAssociatedTPSCount(CATLONG IndexOfPointedGeom, CATLONG & oAnnotationsListCount) \
{ \
return (ENVTIECALL(CATIAManufacturingMachinableGeom,ENVTIETypeLetter,ENVTIELetter)GetAssociatedTPSCount(IndexOfPointedGeom,oAnnotationsListCount)); \
} \
HRESULT __stdcall  ENVTIEName::GetAssociatedTPS(CATLONG IndexOfPointedGeom, CATSafeArrayVariant & oAnnotationsList) \
{ \
return (ENVTIECALL(CATIAManufacturingMachinableGeom,ENVTIETypeLetter,ENVTIELetter)GetAssociatedTPS(IndexOfPointedGeom,oAnnotationsList)); \
} \
HRESULT __stdcall  ENVTIEName::GetAllAssociatedTPSCount(CATLONG & oAnnotationsListCount) \
{ \
return (ENVTIECALL(CATIAManufacturingMachinableGeom,ENVTIETypeLetter,ENVTIELetter)GetAllAssociatedTPSCount(oAnnotationsListCount)); \
} \
HRESULT __stdcall  ENVTIEName::GetAllAssociatedTPS(CATSafeArrayVariant & oAnnotationsList) \
{ \
return (ENVTIECALL(CATIAManufacturingMachinableGeom,ENVTIETypeLetter,ENVTIELetter)GetAllAssociatedTPS(oAnnotationsList)); \
} \
HRESULT __stdcall  ENVTIEName::GetFeatureParameterCount(CATIABase * iGeometry, CATLONG & oParamCount) \
{ \
return (ENVTIECALL(CATIAManufacturingMachinableGeom,ENVTIETypeLetter,ENVTIELetter)GetFeatureParameterCount(iGeometry,oParamCount)); \
} \
HRESULT __stdcall  ENVTIEName::GetFeatureParameters(CATIABase * iGeometry, CATSafeArrayVariant & oParamList) \
{ \
return (ENVTIECALL(CATIAManufacturingMachinableGeom,ENVTIETypeLetter,ENVTIELetter)GetFeatureParameters(iGeometry,oParamList)); \
} \
HRESULT __stdcall  ENVTIEName::get_FeatType(CATBSTR & oFeatType) \
{ \
return (ENVTIECALL(CATIAManufacturingMachinableGeom,ENVTIETypeLetter,ENVTIELetter)get_FeatType(oFeatType)); \
} \
HRESULT __stdcall  ENVTIEName::put_FeatType(const CATBSTR & iFeatType) \
{ \
return (ENVTIECALL(CATIAManufacturingMachinableGeom,ENVTIETypeLetter,ENVTIELetter)put_FeatType(iFeatType)); \
} \
HRESULT __stdcall  ENVTIEName::get_FeatRemark(CATBSTR & oFeatRemark) \
{ \
return (ENVTIECALL(CATIAManufacturingMachinableGeom,ENVTIETypeLetter,ENVTIELetter)get_FeatRemark(oFeatRemark)); \
} \
HRESULT __stdcall  ENVTIEName::put_FeatRemark(const CATBSTR & iFeatRemark) \
{ \
return (ENVTIECALL(CATIAManufacturingMachinableGeom,ENVTIETypeLetter,ENVTIELetter)put_FeatRemark(iFeatRemark)); \
} \
HRESULT __stdcall  ENVTIEName::GetAGeometricAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke) \
{ \
return (ENVTIECALL(CATIAManufacturingMachinableGeom,ENVTIETypeLetter,ENVTIELetter)GetAGeometricAttribute(iAttribut,oAttributCke)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAManufacturingMachinableGeom,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAManufacturingMachinableGeom,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingMachinableGeom,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingMachinableGeom,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAManufacturingMachinableGeom,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAManufacturingMachinableGeom(classe)    TIECATIAManufacturingMachinableGeom##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAManufacturingMachinableGeom(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAManufacturingMachinableGeom, classe) \
 \
 \
CATImplementTIEMethods(CATIAManufacturingMachinableGeom, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAManufacturingMachinableGeom, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAManufacturingMachinableGeom, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAManufacturingMachinableGeom, classe) \
 \
HRESULT __stdcall  TIECATIAManufacturingMachinableGeom##classe::get_Shared(CAT_VARIANT_BOOL & oShared) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oShared); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Shared(oShared); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oShared); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachinableGeom##classe::put_Shared(CAT_VARIANT_BOOL iShared) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iShared); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Shared(iShared); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iShared); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachinableGeom##classe::PointedGeometryCount(CATLONG & oPointedGeometryCount) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oPointedGeometryCount); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PointedGeometryCount(oPointedGeometryCount); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oPointedGeometryCount); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachinableGeom##classe::ListPointedGeometry(CATLONG iIndex, CATIABase *& oGeometry, CATIAProduct *& oProduct, CATLONG & oNbShapes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iIndex,&oGeometry,&oProduct,&oNbShapes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListPointedGeometry(iIndex,oGeometry,oProduct,oNbShapes); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iIndex,&oGeometry,&oProduct,&oNbShapes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachinableGeom##classe::ListShapesOfPointedGeometry(CATLONG iIndex, CATSafeArrayVariant *& oShapes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iIndex,&oShapes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListShapesOfPointedGeometry(iIndex,oShapes); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iIndex,&oShapes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachinableGeom##classe::AddPointedGeometry(CATIABase * iGeometry, CATIAProduct * iProduct, const CATSafeArrayVariant & iShapes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iGeometry,&iProduct,&iShapes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddPointedGeometry(iGeometry,iProduct,iShapes); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iGeometry,&iProduct,&iShapes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachinableGeom##classe::AddPointedGeometryWithNoDuplicatedCheck(CATIABase * iGeometry, CATIAProduct * iProduct, const CATSafeArrayVariant & iShapes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iGeometry,&iProduct,&iShapes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddPointedGeometryWithNoDuplicatedCheck(iGeometry,iProduct,iShapes); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iGeometry,&iProduct,&iShapes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachinableGeom##classe::RemovePointedGeometry(CATLONG iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemovePointedGeometry(iIndex); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachinableGeom##classe::AddPointedGeometryNotify(CATIABase * iGeometry, CATIAProduct * iProduct, const CATSafeArrayVariant & iShapes, short iNotify) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iGeometry,&iProduct,&iShapes,&iNotify); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddPointedGeometryNotify(iGeometry,iProduct,iShapes,iNotify); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iGeometry,&iProduct,&iShapes,&iNotify); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachinableGeom##classe::AddPointedGeometryWithNoDuplicatedCheckNotify(CATIABase * iGeometry, CATIAProduct * iProduct, const CATSafeArrayVariant & iShapes, short iNotify) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iGeometry,&iProduct,&iShapes,&iNotify); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddPointedGeometryWithNoDuplicatedCheckNotify(iGeometry,iProduct,iShapes,iNotify); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iGeometry,&iProduct,&iShapes,&iNotify); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachinableGeom##classe::GetOrigin(double & oX, double & oY, double & oZ, CATLONG IndexOfPointedGeom) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oX,&oY,&oZ,&IndexOfPointedGeom); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOrigin(oX,oY,oZ,IndexOfPointedGeom); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oX,&oY,&oZ,&IndexOfPointedGeom); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachinableGeom##classe::GetDirection(double & oX, double & oY, double & oZ, CATLONG IndexOfPointedGeom) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oX,&oY,&oZ,&IndexOfPointedGeom); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDirection(oX,oY,oZ,IndexOfPointedGeom); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oX,&oY,&oZ,&IndexOfPointedGeom); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachinableGeom##classe::GetAssociatedTPSCount(CATLONG IndexOfPointedGeom, CATLONG & oAnnotationsListCount) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&IndexOfPointedGeom,&oAnnotationsListCount); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAssociatedTPSCount(IndexOfPointedGeom,oAnnotationsListCount); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&IndexOfPointedGeom,&oAnnotationsListCount); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachinableGeom##classe::GetAssociatedTPS(CATLONG IndexOfPointedGeom, CATSafeArrayVariant & oAnnotationsList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&IndexOfPointedGeom,&oAnnotationsList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAssociatedTPS(IndexOfPointedGeom,oAnnotationsList); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&IndexOfPointedGeom,&oAnnotationsList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachinableGeom##classe::GetAllAssociatedTPSCount(CATLONG & oAnnotationsListCount) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oAnnotationsListCount); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAllAssociatedTPSCount(oAnnotationsListCount); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oAnnotationsListCount); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachinableGeom##classe::GetAllAssociatedTPS(CATSafeArrayVariant & oAnnotationsList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oAnnotationsList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAllAssociatedTPS(oAnnotationsList); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oAnnotationsList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachinableGeom##classe::GetFeatureParameterCount(CATIABase * iGeometry, CATLONG & oParamCount) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iGeometry,&oParamCount); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFeatureParameterCount(iGeometry,oParamCount); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iGeometry,&oParamCount); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachinableGeom##classe::GetFeatureParameters(CATIABase * iGeometry, CATSafeArrayVariant & oParamList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iGeometry,&oParamList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFeatureParameters(iGeometry,oParamList); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iGeometry,&oParamList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachinableGeom##classe::get_FeatType(CATBSTR & oFeatType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oFeatType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FeatType(oFeatType); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oFeatType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachinableGeom##classe::put_FeatType(const CATBSTR & iFeatType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iFeatType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FeatType(iFeatType); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iFeatType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachinableGeom##classe::get_FeatRemark(CATBSTR & oFeatRemark) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oFeatRemark); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FeatRemark(oFeatRemark); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oFeatRemark); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachinableGeom##classe::put_FeatRemark(const CATBSTR & iFeatRemark) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iFeatRemark); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FeatRemark(iFeatRemark); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iFeatRemark); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachinableGeom##classe::GetAGeometricAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iAttribut,&oAttributCke); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAGeometricAttribute(iAttribut,oAttributCke); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iAttribut,&oAttributCke); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingMachinableGeom##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingMachinableGeom##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingMachinableGeom##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingMachinableGeom##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingMachinableGeom##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAManufacturingMachinableGeom(classe) \
 \
 \
declare_TIE_CATIAManufacturingMachinableGeom(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingMachinableGeom##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingMachinableGeom,"CATIAManufacturingMachinableGeom",CATIAManufacturingMachinableGeom::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingMachinableGeom(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAManufacturingMachinableGeom, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingMachinableGeom##classe(classe::MetaObject(),CATIAManufacturingMachinableGeom::MetaObject(),(void *)CreateTIECATIAManufacturingMachinableGeom##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAManufacturingMachinableGeom(classe) \
 \
 \
declare_TIE_CATIAManufacturingMachinableGeom(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingMachinableGeom##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingMachinableGeom,"CATIAManufacturingMachinableGeom",CATIAManufacturingMachinableGeom::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingMachinableGeom(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAManufacturingMachinableGeom, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingMachinableGeom##classe(classe::MetaObject(),CATIAManufacturingMachinableGeom::MetaObject(),(void *)CreateTIECATIAManufacturingMachinableGeom##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAManufacturingMachinableGeom(classe) TIE_CATIAManufacturingMachinableGeom(classe)
#else
#define BOA_CATIAManufacturingMachinableGeom(classe) CATImplementBOA(CATIAManufacturingMachinableGeom, classe)
#endif

#endif
