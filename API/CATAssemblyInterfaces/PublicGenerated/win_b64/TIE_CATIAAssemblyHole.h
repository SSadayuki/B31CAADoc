#ifndef __TIE_CATIAAssemblyHole
#define __TIE_CATIAAssemblyHole

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAAssemblyHole.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAssemblyHole */
#define declare_TIE_CATIAAssemblyHole(classe) \
 \
 \
class TIECATIAAssemblyHole##classe : public CATIAAssemblyHole \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAssemblyHole, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Type(CatHoleType & oType); \
      virtual HRESULT __stdcall put_Type(CatHoleType iType); \
      virtual HRESULT __stdcall get_Diameter(CATIALength *& oDiameter); \
      virtual HRESULT __stdcall get_HeadDiameter(CATIALength *& oHeadDiameter); \
      virtual HRESULT __stdcall get_HeadDepth(CATIALength *& oHeadDepth); \
      virtual HRESULT __stdcall get_HeadAngle(CATIAAngle *& oHeadAngle); \
      virtual HRESULT __stdcall get_AnchorMode(CatHoleAnchorMode & oMode); \
      virtual HRESULT __stdcall put_AnchorMode(CatHoleAnchorMode iMode); \
      virtual HRESULT __stdcall get_BottomType(CatHoleBottomType & oBottomType); \
      virtual HRESULT __stdcall put_BottomType(CatHoleBottomType iBottomType); \
      virtual HRESULT __stdcall get_BottomAngle(CATIAAngle *& oBottomAngle); \
      virtual HRESULT __stdcall get_BottomLimit(CATIALimit *& oLimit); \
      virtual HRESULT __stdcall get_Sketch(CATIASketch *& oSketch); \
      virtual HRESULT __stdcall get_SketchComponent(CATIAProduct *& oSketchComp); \
      virtual HRESULT __stdcall GetOrigin(CATSafeArrayVariant & ioOrigin); \
      virtual HRESULT __stdcall GetDirection(CATSafeArrayVariant & ioDirection); \
      virtual HRESULT __stdcall SetDirection(CATIAReference * iLine, CATIAProduct * iLineComp); \
      virtual HRESULT __stdcall AddAffectedComponent(CATIAProduct * iComponent); \
      virtual HRESULT __stdcall RemoveAffectedComponent(CATIAProduct * iComponent); \
      virtual HRESULT __stdcall ListAffectedComponents(CATSafeArrayVariant & oListOfComponents); \
      virtual HRESULT __stdcall AffectedComponentsCount(CATLONG & oComponentCount); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAAssemblyHole(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Type(CatHoleType & oType); \
virtual HRESULT __stdcall put_Type(CatHoleType iType); \
virtual HRESULT __stdcall get_Diameter(CATIALength *& oDiameter); \
virtual HRESULT __stdcall get_HeadDiameter(CATIALength *& oHeadDiameter); \
virtual HRESULT __stdcall get_HeadDepth(CATIALength *& oHeadDepth); \
virtual HRESULT __stdcall get_HeadAngle(CATIAAngle *& oHeadAngle); \
virtual HRESULT __stdcall get_AnchorMode(CatHoleAnchorMode & oMode); \
virtual HRESULT __stdcall put_AnchorMode(CatHoleAnchorMode iMode); \
virtual HRESULT __stdcall get_BottomType(CatHoleBottomType & oBottomType); \
virtual HRESULT __stdcall put_BottomType(CatHoleBottomType iBottomType); \
virtual HRESULT __stdcall get_BottomAngle(CATIAAngle *& oBottomAngle); \
virtual HRESULT __stdcall get_BottomLimit(CATIALimit *& oLimit); \
virtual HRESULT __stdcall get_Sketch(CATIASketch *& oSketch); \
virtual HRESULT __stdcall get_SketchComponent(CATIAProduct *& oSketchComp); \
virtual HRESULT __stdcall GetOrigin(CATSafeArrayVariant & ioOrigin); \
virtual HRESULT __stdcall GetDirection(CATSafeArrayVariant & ioDirection); \
virtual HRESULT __stdcall SetDirection(CATIAReference * iLine, CATIAProduct * iLineComp); \
virtual HRESULT __stdcall AddAffectedComponent(CATIAProduct * iComponent); \
virtual HRESULT __stdcall RemoveAffectedComponent(CATIAProduct * iComponent); \
virtual HRESULT __stdcall ListAffectedComponents(CATSafeArrayVariant & oListOfComponents); \
virtual HRESULT __stdcall AffectedComponentsCount(CATLONG & oComponentCount); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAAssemblyHole(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Type(CatHoleType & oType) \
{ \
return (ENVTIECALL(CATIAAssemblyHole,ENVTIETypeLetter,ENVTIELetter)get_Type(oType)); \
} \
HRESULT __stdcall  ENVTIEName::put_Type(CatHoleType iType) \
{ \
return (ENVTIECALL(CATIAAssemblyHole,ENVTIETypeLetter,ENVTIELetter)put_Type(iType)); \
} \
HRESULT __stdcall  ENVTIEName::get_Diameter(CATIALength *& oDiameter) \
{ \
return (ENVTIECALL(CATIAAssemblyHole,ENVTIETypeLetter,ENVTIELetter)get_Diameter(oDiameter)); \
} \
HRESULT __stdcall  ENVTIEName::get_HeadDiameter(CATIALength *& oHeadDiameter) \
{ \
return (ENVTIECALL(CATIAAssemblyHole,ENVTIETypeLetter,ENVTIELetter)get_HeadDiameter(oHeadDiameter)); \
} \
HRESULT __stdcall  ENVTIEName::get_HeadDepth(CATIALength *& oHeadDepth) \
{ \
return (ENVTIECALL(CATIAAssemblyHole,ENVTIETypeLetter,ENVTIELetter)get_HeadDepth(oHeadDepth)); \
} \
HRESULT __stdcall  ENVTIEName::get_HeadAngle(CATIAAngle *& oHeadAngle) \
{ \
return (ENVTIECALL(CATIAAssemblyHole,ENVTIETypeLetter,ENVTIELetter)get_HeadAngle(oHeadAngle)); \
} \
HRESULT __stdcall  ENVTIEName::get_AnchorMode(CatHoleAnchorMode & oMode) \
{ \
return (ENVTIECALL(CATIAAssemblyHole,ENVTIETypeLetter,ENVTIELetter)get_AnchorMode(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_AnchorMode(CatHoleAnchorMode iMode) \
{ \
return (ENVTIECALL(CATIAAssemblyHole,ENVTIETypeLetter,ENVTIELetter)put_AnchorMode(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_BottomType(CatHoleBottomType & oBottomType) \
{ \
return (ENVTIECALL(CATIAAssemblyHole,ENVTIETypeLetter,ENVTIELetter)get_BottomType(oBottomType)); \
} \
HRESULT __stdcall  ENVTIEName::put_BottomType(CatHoleBottomType iBottomType) \
{ \
return (ENVTIECALL(CATIAAssemblyHole,ENVTIETypeLetter,ENVTIELetter)put_BottomType(iBottomType)); \
} \
HRESULT __stdcall  ENVTIEName::get_BottomAngle(CATIAAngle *& oBottomAngle) \
{ \
return (ENVTIECALL(CATIAAssemblyHole,ENVTIETypeLetter,ENVTIELetter)get_BottomAngle(oBottomAngle)); \
} \
HRESULT __stdcall  ENVTIEName::get_BottomLimit(CATIALimit *& oLimit) \
{ \
return (ENVTIECALL(CATIAAssemblyHole,ENVTIETypeLetter,ENVTIELetter)get_BottomLimit(oLimit)); \
} \
HRESULT __stdcall  ENVTIEName::get_Sketch(CATIASketch *& oSketch) \
{ \
return (ENVTIECALL(CATIAAssemblyHole,ENVTIETypeLetter,ENVTIELetter)get_Sketch(oSketch)); \
} \
HRESULT __stdcall  ENVTIEName::get_SketchComponent(CATIAProduct *& oSketchComp) \
{ \
return (ENVTIECALL(CATIAAssemblyHole,ENVTIETypeLetter,ENVTIELetter)get_SketchComponent(oSketchComp)); \
} \
HRESULT __stdcall  ENVTIEName::GetOrigin(CATSafeArrayVariant & ioOrigin) \
{ \
return (ENVTIECALL(CATIAAssemblyHole,ENVTIETypeLetter,ENVTIELetter)GetOrigin(ioOrigin)); \
} \
HRESULT __stdcall  ENVTIEName::GetDirection(CATSafeArrayVariant & ioDirection) \
{ \
return (ENVTIECALL(CATIAAssemblyHole,ENVTIETypeLetter,ENVTIELetter)GetDirection(ioDirection)); \
} \
HRESULT __stdcall  ENVTIEName::SetDirection(CATIAReference * iLine, CATIAProduct * iLineComp) \
{ \
return (ENVTIECALL(CATIAAssemblyHole,ENVTIETypeLetter,ENVTIELetter)SetDirection(iLine,iLineComp)); \
} \
HRESULT __stdcall  ENVTIEName::AddAffectedComponent(CATIAProduct * iComponent) \
{ \
return (ENVTIECALL(CATIAAssemblyHole,ENVTIETypeLetter,ENVTIELetter)AddAffectedComponent(iComponent)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveAffectedComponent(CATIAProduct * iComponent) \
{ \
return (ENVTIECALL(CATIAAssemblyHole,ENVTIETypeLetter,ENVTIELetter)RemoveAffectedComponent(iComponent)); \
} \
HRESULT __stdcall  ENVTIEName::ListAffectedComponents(CATSafeArrayVariant & oListOfComponents) \
{ \
return (ENVTIECALL(CATIAAssemblyHole,ENVTIETypeLetter,ENVTIELetter)ListAffectedComponents(oListOfComponents)); \
} \
HRESULT __stdcall  ENVTIEName::AffectedComponentsCount(CATLONG & oComponentCount) \
{ \
return (ENVTIECALL(CATIAAssemblyHole,ENVTIETypeLetter,ENVTIELetter)AffectedComponentsCount(oComponentCount)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAssemblyHole,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAssemblyHole,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAAssemblyHole,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAAssemblyHole,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAAssemblyHole,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAssemblyHole(classe)    TIECATIAAssemblyHole##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAssemblyHole(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAssemblyHole, classe) \
 \
 \
CATImplementTIEMethods(CATIAAssemblyHole, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAssemblyHole, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAssemblyHole, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAssemblyHole, classe) \
 \
HRESULT __stdcall  TIECATIAAssemblyHole##classe::get_Type(CatHoleType & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Type(oType); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblyHole##classe::put_Type(CatHoleType iType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Type(iType); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblyHole##classe::get_Diameter(CATIALength *& oDiameter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oDiameter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Diameter(oDiameter); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oDiameter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblyHole##classe::get_HeadDiameter(CATIALength *& oHeadDiameter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oHeadDiameter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_HeadDiameter(oHeadDiameter); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oHeadDiameter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblyHole##classe::get_HeadDepth(CATIALength *& oHeadDepth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oHeadDepth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_HeadDepth(oHeadDepth); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oHeadDepth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblyHole##classe::get_HeadAngle(CATIAAngle *& oHeadAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oHeadAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_HeadAngle(oHeadAngle); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oHeadAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblyHole##classe::get_AnchorMode(CatHoleAnchorMode & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnchorMode(oMode); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblyHole##classe::put_AnchorMode(CatHoleAnchorMode iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AnchorMode(iMode); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblyHole##classe::get_BottomType(CatHoleBottomType & oBottomType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oBottomType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BottomType(oBottomType); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oBottomType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblyHole##classe::put_BottomType(CatHoleBottomType iBottomType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iBottomType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_BottomType(iBottomType); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iBottomType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblyHole##classe::get_BottomAngle(CATIAAngle *& oBottomAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oBottomAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BottomAngle(oBottomAngle); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oBottomAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblyHole##classe::get_BottomLimit(CATIALimit *& oLimit) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oLimit); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BottomLimit(oLimit); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oLimit); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblyHole##classe::get_Sketch(CATIASketch *& oSketch) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oSketch); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Sketch(oSketch); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oSketch); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblyHole##classe::get_SketchComponent(CATIAProduct *& oSketchComp) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oSketchComp); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SketchComponent(oSketchComp); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oSketchComp); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblyHole##classe::GetOrigin(CATSafeArrayVariant & ioOrigin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&ioOrigin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOrigin(ioOrigin); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&ioOrigin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblyHole##classe::GetDirection(CATSafeArrayVariant & ioDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&ioDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDirection(ioDirection); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&ioDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblyHole##classe::SetDirection(CATIAReference * iLine, CATIAProduct * iLineComp) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iLine,&iLineComp); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDirection(iLine,iLineComp); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iLine,&iLineComp); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblyHole##classe::AddAffectedComponent(CATIAProduct * iComponent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iComponent); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddAffectedComponent(iComponent); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iComponent); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblyHole##classe::RemoveAffectedComponent(CATIAProduct * iComponent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iComponent); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAffectedComponent(iComponent); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iComponent); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblyHole##classe::ListAffectedComponents(CATSafeArrayVariant & oListOfComponents) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oListOfComponents); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListAffectedComponents(oListOfComponents); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oListOfComponents); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblyHole##classe::AffectedComponentsCount(CATLONG & oComponentCount) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oComponentCount); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AffectedComponentsCount(oComponentCount); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oComponentCount); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAssemblyHole##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAssemblyHole##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAssemblyHole##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAssemblyHole##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAssemblyHole##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAssemblyHole(classe) \
 \
 \
declare_TIE_CATIAAssemblyHole(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAssemblyHole##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAssemblyHole,"CATIAAssemblyHole",CATIAAssemblyHole::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAssemblyHole(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAssemblyHole, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAssemblyHole##classe(classe::MetaObject(),CATIAAssemblyHole::MetaObject(),(void *)CreateTIECATIAAssemblyHole##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAssemblyHole(classe) \
 \
 \
declare_TIE_CATIAAssemblyHole(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAssemblyHole##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAssemblyHole,"CATIAAssemblyHole",CATIAAssemblyHole::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAssemblyHole(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAssemblyHole, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAssemblyHole##classe(classe::MetaObject(),CATIAAssemblyHole::MetaObject(),(void *)CreateTIECATIAAssemblyHole##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAssemblyHole(classe) TIE_CATIAAssemblyHole(classe)
#else
#define BOA_CATIAAssemblyHole(classe) CATImplementBOA(CATIAAssemblyHole, classe)
#endif

#endif
