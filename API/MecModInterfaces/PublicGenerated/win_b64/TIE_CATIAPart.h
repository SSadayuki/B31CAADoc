#ifndef __TIE_CATIAPart
#define __TIE_CATIAPart

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAPart.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPart */
#define declare_TIE_CATIAPart(classe) \
 \
 \
class TIECATIAPart##classe : public CATIAPart \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPart, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_MainBody(CATIABody *& oMainBody); \
      virtual HRESULT __stdcall put_MainBody(CATIABody * iNewMainBody); \
      virtual HRESULT __stdcall get_InWorkObject(CATIABase *& oInWorkObject); \
      virtual HRESULT __stdcall put_InWorkObject(CATIABase * iInWorkObject); \
      virtual HRESULT __stdcall get_Bodies(CATIABodies *& oBodies); \
      virtual HRESULT __stdcall get_HybridBodies(CATIAHybridBodies *& oHybridBodies); \
      virtual HRESULT __stdcall get_ShapeFactory(CATIAFactory *& oShapeFactory); \
      virtual HRESULT __stdcall get_HybridShapeFactory(CATIAFactory *& oHybridShapeFactory); \
      virtual HRESULT __stdcall get_SheetMetalFactory(CATIAFactory *& oSheetMetalFactory); \
      virtual HRESULT __stdcall get_SheetMetalParameters(CATIABase *& oSheetMetalParameters); \
      virtual HRESULT __stdcall get_GeometricElements(CATIAGeometricElements *& oGeometricElements); \
      virtual HRESULT __stdcall get_Constraints(CATIAConstraints *& oConstraints); \
      virtual HRESULT __stdcall get_Relations(CATIARelations *& oRelations); \
      virtual HRESULT __stdcall get_Parameters(CATIAParameters *& oParameters); \
      virtual HRESULT __stdcall get_AnnotationSets(CATIACollection *& oAnnotationSets); \
      virtual HRESULT __stdcall get_UserSurfaces(CATIACollection *& oUserSurfaces); \
      virtual HRESULT __stdcall get_AxisSystems(CATIAAxisSystems *& oAxisSystems); \
      virtual HRESULT __stdcall get_OriginElements(CATIAOriginElements *& oOrigin); \
      virtual HRESULT __stdcall get_Density(double & oDensity); \
      virtual HRESULT __stdcall CreateReferenceFromName(const CATBSTR & iLabel, CATIAReference *& oRef); \
      virtual HRESULT __stdcall CreateReferenceFromGeometry(CATIABase * iObject, CATIAReference *& oRef); \
      virtual HRESULT __stdcall CreateReferenceFromObject(CATIABase * iObject, CATIAReference *& oRef); \
      virtual HRESULT __stdcall FindObjectByName(const CATBSTR & iObjName, CATIABase *& oObject); \
      virtual HRESULT __stdcall Update(); \
      virtual HRESULT __stdcall UpdateObject(CATIABase * iObject); \
      virtual HRESULT __stdcall IsUpToDate(CATIABase * iObject, CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall Inactivate(CATIABase * iObject); \
      virtual HRESULT __stdcall Activate(CATIABase * iObject); \
      virtual HRESULT __stdcall IsInactive(CATIABase * iObject, CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall CreateReferenceFromBRepName(const CATBSTR & iLabel, CATIABase * iObjectContext, CATIAReference *& oRef); \
      virtual HRESULT __stdcall GetCustomerFactory(const CATBSTR & iFactoryIID, CATIAFactory *& oCustomerFactory); \
      virtual HRESULT __stdcall get_OrderedGeometricalSets(CATIAOrderedGeometricalSets *& oOrderedGeometricalSets); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAPart(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_MainBody(CATIABody *& oMainBody); \
virtual HRESULT __stdcall put_MainBody(CATIABody * iNewMainBody); \
virtual HRESULT __stdcall get_InWorkObject(CATIABase *& oInWorkObject); \
virtual HRESULT __stdcall put_InWorkObject(CATIABase * iInWorkObject); \
virtual HRESULT __stdcall get_Bodies(CATIABodies *& oBodies); \
virtual HRESULT __stdcall get_HybridBodies(CATIAHybridBodies *& oHybridBodies); \
virtual HRESULT __stdcall get_ShapeFactory(CATIAFactory *& oShapeFactory); \
virtual HRESULT __stdcall get_HybridShapeFactory(CATIAFactory *& oHybridShapeFactory); \
virtual HRESULT __stdcall get_SheetMetalFactory(CATIAFactory *& oSheetMetalFactory); \
virtual HRESULT __stdcall get_SheetMetalParameters(CATIABase *& oSheetMetalParameters); \
virtual HRESULT __stdcall get_GeometricElements(CATIAGeometricElements *& oGeometricElements); \
virtual HRESULT __stdcall get_Constraints(CATIAConstraints *& oConstraints); \
virtual HRESULT __stdcall get_Relations(CATIARelations *& oRelations); \
virtual HRESULT __stdcall get_Parameters(CATIAParameters *& oParameters); \
virtual HRESULT __stdcall get_AnnotationSets(CATIACollection *& oAnnotationSets); \
virtual HRESULT __stdcall get_UserSurfaces(CATIACollection *& oUserSurfaces); \
virtual HRESULT __stdcall get_AxisSystems(CATIAAxisSystems *& oAxisSystems); \
virtual HRESULT __stdcall get_OriginElements(CATIAOriginElements *& oOrigin); \
virtual HRESULT __stdcall get_Density(double & oDensity); \
virtual HRESULT __stdcall CreateReferenceFromName(const CATBSTR & iLabel, CATIAReference *& oRef); \
virtual HRESULT __stdcall CreateReferenceFromGeometry(CATIABase * iObject, CATIAReference *& oRef); \
virtual HRESULT __stdcall CreateReferenceFromObject(CATIABase * iObject, CATIAReference *& oRef); \
virtual HRESULT __stdcall FindObjectByName(const CATBSTR & iObjName, CATIABase *& oObject); \
virtual HRESULT __stdcall Update(); \
virtual HRESULT __stdcall UpdateObject(CATIABase * iObject); \
virtual HRESULT __stdcall IsUpToDate(CATIABase * iObject, CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall Inactivate(CATIABase * iObject); \
virtual HRESULT __stdcall Activate(CATIABase * iObject); \
virtual HRESULT __stdcall IsInactive(CATIABase * iObject, CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall CreateReferenceFromBRepName(const CATBSTR & iLabel, CATIABase * iObjectContext, CATIAReference *& oRef); \
virtual HRESULT __stdcall GetCustomerFactory(const CATBSTR & iFactoryIID, CATIAFactory *& oCustomerFactory); \
virtual HRESULT __stdcall get_OrderedGeometricalSets(CATIAOrderedGeometricalSets *& oOrderedGeometricalSets); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAPart(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_MainBody(CATIABody *& oMainBody) \
{ \
return (ENVTIECALL(CATIAPart,ENVTIETypeLetter,ENVTIELetter)get_MainBody(oMainBody)); \
} \
HRESULT __stdcall  ENVTIEName::put_MainBody(CATIABody * iNewMainBody) \
{ \
return (ENVTIECALL(CATIAPart,ENVTIETypeLetter,ENVTIELetter)put_MainBody(iNewMainBody)); \
} \
HRESULT __stdcall  ENVTIEName::get_InWorkObject(CATIABase *& oInWorkObject) \
{ \
return (ENVTIECALL(CATIAPart,ENVTIETypeLetter,ENVTIELetter)get_InWorkObject(oInWorkObject)); \
} \
HRESULT __stdcall  ENVTIEName::put_InWorkObject(CATIABase * iInWorkObject) \
{ \
return (ENVTIECALL(CATIAPart,ENVTIETypeLetter,ENVTIELetter)put_InWorkObject(iInWorkObject)); \
} \
HRESULT __stdcall  ENVTIEName::get_Bodies(CATIABodies *& oBodies) \
{ \
return (ENVTIECALL(CATIAPart,ENVTIETypeLetter,ENVTIELetter)get_Bodies(oBodies)); \
} \
HRESULT __stdcall  ENVTIEName::get_HybridBodies(CATIAHybridBodies *& oHybridBodies) \
{ \
return (ENVTIECALL(CATIAPart,ENVTIETypeLetter,ENVTIELetter)get_HybridBodies(oHybridBodies)); \
} \
HRESULT __stdcall  ENVTIEName::get_ShapeFactory(CATIAFactory *& oShapeFactory) \
{ \
return (ENVTIECALL(CATIAPart,ENVTIETypeLetter,ENVTIELetter)get_ShapeFactory(oShapeFactory)); \
} \
HRESULT __stdcall  ENVTIEName::get_HybridShapeFactory(CATIAFactory *& oHybridShapeFactory) \
{ \
return (ENVTIECALL(CATIAPart,ENVTIETypeLetter,ENVTIELetter)get_HybridShapeFactory(oHybridShapeFactory)); \
} \
HRESULT __stdcall  ENVTIEName::get_SheetMetalFactory(CATIAFactory *& oSheetMetalFactory) \
{ \
return (ENVTIECALL(CATIAPart,ENVTIETypeLetter,ENVTIELetter)get_SheetMetalFactory(oSheetMetalFactory)); \
} \
HRESULT __stdcall  ENVTIEName::get_SheetMetalParameters(CATIABase *& oSheetMetalParameters) \
{ \
return (ENVTIECALL(CATIAPart,ENVTIETypeLetter,ENVTIELetter)get_SheetMetalParameters(oSheetMetalParameters)); \
} \
HRESULT __stdcall  ENVTIEName::get_GeometricElements(CATIAGeometricElements *& oGeometricElements) \
{ \
return (ENVTIECALL(CATIAPart,ENVTIETypeLetter,ENVTIELetter)get_GeometricElements(oGeometricElements)); \
} \
HRESULT __stdcall  ENVTIEName::get_Constraints(CATIAConstraints *& oConstraints) \
{ \
return (ENVTIECALL(CATIAPart,ENVTIETypeLetter,ENVTIELetter)get_Constraints(oConstraints)); \
} \
HRESULT __stdcall  ENVTIEName::get_Relations(CATIARelations *& oRelations) \
{ \
return (ENVTIECALL(CATIAPart,ENVTIETypeLetter,ENVTIELetter)get_Relations(oRelations)); \
} \
HRESULT __stdcall  ENVTIEName::get_Parameters(CATIAParameters *& oParameters) \
{ \
return (ENVTIECALL(CATIAPart,ENVTIETypeLetter,ENVTIELetter)get_Parameters(oParameters)); \
} \
HRESULT __stdcall  ENVTIEName::get_AnnotationSets(CATIACollection *& oAnnotationSets) \
{ \
return (ENVTIECALL(CATIAPart,ENVTIETypeLetter,ENVTIELetter)get_AnnotationSets(oAnnotationSets)); \
} \
HRESULT __stdcall  ENVTIEName::get_UserSurfaces(CATIACollection *& oUserSurfaces) \
{ \
return (ENVTIECALL(CATIAPart,ENVTIETypeLetter,ENVTIELetter)get_UserSurfaces(oUserSurfaces)); \
} \
HRESULT __stdcall  ENVTIEName::get_AxisSystems(CATIAAxisSystems *& oAxisSystems) \
{ \
return (ENVTIECALL(CATIAPart,ENVTIETypeLetter,ENVTIELetter)get_AxisSystems(oAxisSystems)); \
} \
HRESULT __stdcall  ENVTIEName::get_OriginElements(CATIAOriginElements *& oOrigin) \
{ \
return (ENVTIECALL(CATIAPart,ENVTIETypeLetter,ENVTIELetter)get_OriginElements(oOrigin)); \
} \
HRESULT __stdcall  ENVTIEName::get_Density(double & oDensity) \
{ \
return (ENVTIECALL(CATIAPart,ENVTIETypeLetter,ENVTIELetter)get_Density(oDensity)); \
} \
HRESULT __stdcall  ENVTIEName::CreateReferenceFromName(const CATBSTR & iLabel, CATIAReference *& oRef) \
{ \
return (ENVTIECALL(CATIAPart,ENVTIETypeLetter,ENVTIELetter)CreateReferenceFromName(iLabel,oRef)); \
} \
HRESULT __stdcall  ENVTIEName::CreateReferenceFromGeometry(CATIABase * iObject, CATIAReference *& oRef) \
{ \
return (ENVTIECALL(CATIAPart,ENVTIETypeLetter,ENVTIELetter)CreateReferenceFromGeometry(iObject,oRef)); \
} \
HRESULT __stdcall  ENVTIEName::CreateReferenceFromObject(CATIABase * iObject, CATIAReference *& oRef) \
{ \
return (ENVTIECALL(CATIAPart,ENVTIETypeLetter,ENVTIELetter)CreateReferenceFromObject(iObject,oRef)); \
} \
HRESULT __stdcall  ENVTIEName::FindObjectByName(const CATBSTR & iObjName, CATIABase *& oObject) \
{ \
return (ENVTIECALL(CATIAPart,ENVTIETypeLetter,ENVTIELetter)FindObjectByName(iObjName,oObject)); \
} \
HRESULT __stdcall  ENVTIEName::Update() \
{ \
return (ENVTIECALL(CATIAPart,ENVTIETypeLetter,ENVTIELetter)Update()); \
} \
HRESULT __stdcall  ENVTIEName::UpdateObject(CATIABase * iObject) \
{ \
return (ENVTIECALL(CATIAPart,ENVTIETypeLetter,ENVTIELetter)UpdateObject(iObject)); \
} \
HRESULT __stdcall  ENVTIEName::IsUpToDate(CATIABase * iObject, CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAPart,ENVTIETypeLetter,ENVTIELetter)IsUpToDate(iObject,oValue)); \
} \
HRESULT __stdcall  ENVTIEName::Inactivate(CATIABase * iObject) \
{ \
return (ENVTIECALL(CATIAPart,ENVTIETypeLetter,ENVTIELetter)Inactivate(iObject)); \
} \
HRESULT __stdcall  ENVTIEName::Activate(CATIABase * iObject) \
{ \
return (ENVTIECALL(CATIAPart,ENVTIETypeLetter,ENVTIELetter)Activate(iObject)); \
} \
HRESULT __stdcall  ENVTIEName::IsInactive(CATIABase * iObject, CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAPart,ENVTIETypeLetter,ENVTIELetter)IsInactive(iObject,oValue)); \
} \
HRESULT __stdcall  ENVTIEName::CreateReferenceFromBRepName(const CATBSTR & iLabel, CATIABase * iObjectContext, CATIAReference *& oRef) \
{ \
return (ENVTIECALL(CATIAPart,ENVTIETypeLetter,ENVTIELetter)CreateReferenceFromBRepName(iLabel,iObjectContext,oRef)); \
} \
HRESULT __stdcall  ENVTIEName::GetCustomerFactory(const CATBSTR & iFactoryIID, CATIAFactory *& oCustomerFactory) \
{ \
return (ENVTIECALL(CATIAPart,ENVTIETypeLetter,ENVTIELetter)GetCustomerFactory(iFactoryIID,oCustomerFactory)); \
} \
HRESULT __stdcall  ENVTIEName::get_OrderedGeometricalSets(CATIAOrderedGeometricalSets *& oOrderedGeometricalSets) \
{ \
return (ENVTIECALL(CATIAPart,ENVTIETypeLetter,ENVTIELetter)get_OrderedGeometricalSets(oOrderedGeometricalSets)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPart,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPart,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAPart,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAPart,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAPart,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPart(classe)    TIECATIAPart##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPart(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPart, classe) \
 \
 \
CATImplementTIEMethods(CATIAPart, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPart, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPart, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPart, classe) \
 \
HRESULT __stdcall  TIECATIAPart##classe::get_MainBody(CATIABody *& oMainBody) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oMainBody); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MainBody(oMainBody); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oMainBody); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPart##classe::put_MainBody(CATIABody * iNewMainBody) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iNewMainBody); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MainBody(iNewMainBody); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iNewMainBody); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPart##classe::get_InWorkObject(CATIABase *& oInWorkObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oInWorkObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_InWorkObject(oInWorkObject); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oInWorkObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPart##classe::put_InWorkObject(CATIABase * iInWorkObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iInWorkObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_InWorkObject(iInWorkObject); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iInWorkObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPart##classe::get_Bodies(CATIABodies *& oBodies) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oBodies); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Bodies(oBodies); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oBodies); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPart##classe::get_HybridBodies(CATIAHybridBodies *& oHybridBodies) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oHybridBodies); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_HybridBodies(oHybridBodies); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oHybridBodies); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPart##classe::get_ShapeFactory(CATIAFactory *& oShapeFactory) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oShapeFactory); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ShapeFactory(oShapeFactory); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oShapeFactory); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPart##classe::get_HybridShapeFactory(CATIAFactory *& oHybridShapeFactory) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oHybridShapeFactory); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_HybridShapeFactory(oHybridShapeFactory); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oHybridShapeFactory); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPart##classe::get_SheetMetalFactory(CATIAFactory *& oSheetMetalFactory) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oSheetMetalFactory); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SheetMetalFactory(oSheetMetalFactory); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oSheetMetalFactory); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPart##classe::get_SheetMetalParameters(CATIABase *& oSheetMetalParameters) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oSheetMetalParameters); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SheetMetalParameters(oSheetMetalParameters); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oSheetMetalParameters); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPart##classe::get_GeometricElements(CATIAGeometricElements *& oGeometricElements) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oGeometricElements); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GeometricElements(oGeometricElements); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oGeometricElements); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPart##classe::get_Constraints(CATIAConstraints *& oConstraints) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oConstraints); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Constraints(oConstraints); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oConstraints); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPart##classe::get_Relations(CATIARelations *& oRelations) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oRelations); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Relations(oRelations); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oRelations); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPart##classe::get_Parameters(CATIAParameters *& oParameters) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oParameters); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parameters(oParameters); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oParameters); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPart##classe::get_AnnotationSets(CATIACollection *& oAnnotationSets) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oAnnotationSets); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnnotationSets(oAnnotationSets); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oAnnotationSets); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPart##classe::get_UserSurfaces(CATIACollection *& oUserSurfaces) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oUserSurfaces); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_UserSurfaces(oUserSurfaces); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oUserSurfaces); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPart##classe::get_AxisSystems(CATIAAxisSystems *& oAxisSystems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oAxisSystems); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AxisSystems(oAxisSystems); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oAxisSystems); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPart##classe::get_OriginElements(CATIAOriginElements *& oOrigin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oOrigin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_OriginElements(oOrigin); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oOrigin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPart##classe::get_Density(double & oDensity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oDensity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Density(oDensity); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oDensity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPart##classe::CreateReferenceFromName(const CATBSTR & iLabel, CATIAReference *& oRef) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iLabel,&oRef); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateReferenceFromName(iLabel,oRef); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iLabel,&oRef); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPart##classe::CreateReferenceFromGeometry(CATIABase * iObject, CATIAReference *& oRef) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iObject,&oRef); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateReferenceFromGeometry(iObject,oRef); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iObject,&oRef); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPart##classe::CreateReferenceFromObject(CATIABase * iObject, CATIAReference *& oRef) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iObject,&oRef); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateReferenceFromObject(iObject,oRef); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iObject,&oRef); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPart##classe::FindObjectByName(const CATBSTR & iObjName, CATIABase *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iObjName,&oObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->FindObjectByName(iObjName,oObject); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iObjName,&oObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPart##classe::Update() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Update(); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPart##classe::UpdateObject(CATIABase * iObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UpdateObject(iObject); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPart##classe::IsUpToDate(CATIABase * iObject, CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iObject,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsUpToDate(iObject,oValue); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iObject,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPart##classe::Inactivate(CATIABase * iObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&iObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Inactivate(iObject); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&iObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPart##classe::Activate(CATIABase * iObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Activate(iObject); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPart##classe::IsInactive(CATIABase * iObject, CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&iObject,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsInactive(iObject,oValue); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&iObject,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPart##classe::CreateReferenceFromBRepName(const CATBSTR & iLabel, CATIABase * iObjectContext, CATIAReference *& oRef) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&iLabel,&iObjectContext,&oRef); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateReferenceFromBRepName(iLabel,iObjectContext,oRef); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&iLabel,&iObjectContext,&oRef); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPart##classe::GetCustomerFactory(const CATBSTR & iFactoryIID, CATIAFactory *& oCustomerFactory) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&iFactoryIID,&oCustomerFactory); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCustomerFactory(iFactoryIID,oCustomerFactory); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&iFactoryIID,&oCustomerFactory); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPart##classe::get_OrderedGeometricalSets(CATIAOrderedGeometricalSets *& oOrderedGeometricalSets) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&oOrderedGeometricalSets); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_OrderedGeometricalSets(oOrderedGeometricalSets); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&oOrderedGeometricalSets); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPart##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPart##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPart##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPart##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPart##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPart(classe) \
 \
 \
declare_TIE_CATIAPart(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPart##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPart,"CATIAPart",CATIAPart::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPart(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPart, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPart##classe(classe::MetaObject(),CATIAPart::MetaObject(),(void *)CreateTIECATIAPart##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPart(classe) \
 \
 \
declare_TIE_CATIAPart(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPart##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPart,"CATIAPart",CATIAPart::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPart(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPart, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPart##classe(classe::MetaObject(),CATIAPart::MetaObject(),(void *)CreateTIECATIAPart##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPart(classe) TIE_CATIAPart(classe)
#else
#define BOA_CATIAPart(classe) CATImplementBOA(CATIAPart, classe)
#endif

#endif
